#include <iostream>
#include <vector>

int getTotalSales(const std::vector<int>& sales) {
  int total = 0;
  for (int sale : sales) {
    total += sale;
  }
  return total;
}

int getMaxSalesMonth(const std::vector<int>& sales) {
  int max_month = 0;
  int max_sales = 0;
  for (int i = 0; i < sales.size(); ++i) {
    if (sales[i] > max_sales) {
      max_sales = sales[i];
      max_month = i + 1;
    }
  }
  return max_month;
}

double getAverageMonthlySales(const std::vector<int>& sales) {
  int total = getTotalSales(sales);
  return static_cast<double>(total) / sales.size();
}

bool isMonthSalesAboveAverage(const std::vector<int>& sales, int month) {
  double average = getAverageMonthlySales(sales);
  return sales[month - 1] > average;
}

int getMonthsBelowAverage(const std::vector<int>& sales) {
  int count = 0;
  double average = getAverageMonthlySales(sales);
  for (int sale : sales) {
    if (sale < average) {
      ++count;
    }
  }
  return count;
}

int main() {
  std::vector<int> sales = {12000, 15000, 13000, 19000, 17000, 16000,
                            18000, 21000, 20000, 17000, 22000, 19000};

  int total = getTotalSales(sales);
  int max_month = getMaxSalesMonth(sales);
  double average = getAverageMonthlySales(sales);
  int months_below_average = getMonthsBelowAverage(sales);

  std::cout << "total sales for year: " << total << std::endl;
  std::cout << "month volume: " << max_month << std::endl;
  std::cout << "average monthly sales: " << average << std::endl;
  for (int i = 0; i < sales.size(); ++i) {
    std::cout << "sales above average: ";
    std::cout << isMonthSalesAboveAverage(sales, i + 1) << " ";
  }
  std::cout << std::endl;
  std::cout << "number of months having sales below average: "
            << months_below_average << std::endl;

  return 0;
}
