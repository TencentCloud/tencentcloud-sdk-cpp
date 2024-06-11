/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONSUMMARYBYBUSINESSREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONSUMMARYBYBUSINESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeAllocationSummaryByBusiness请求参数结构体
                */
                class DescribeAllocationSummaryByBusinessRequest : public AbstractModel
                {
                public:
                    DescribeAllocationSummaryByBusinessRequest();
                    ~DescribeAllocationSummaryByBusinessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数量，最大值为1000
                     * @return Limit 数量，最大值为1000
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置数量，最大值为1000
                     * @param _limit 数量，最大值为1000
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，以此类推
                     * @return Offset 分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，以此类推
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，以此类推
                     * @param _offset 分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，以此类推
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取账单月份，格式为2024-02，不传默认当前月

                     * @return Month 账单月份，格式为2024-02，不传默认当前月

                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置账单月份，格式为2024-02，不传默认当前月

                     * @param _month 账单月份，格式为2024-02，不传默认当前月

                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                    /**
                     * 获取统计周期，枚举值如下
month - 月
day - 日
                     * @return PeriodType 统计周期，枚举值如下
month - 月
day - 日
                     * 
                     */
                    std::string GetPeriodType() const;

                    /**
                     * 设置统计周期，枚举值如下
month - 月
day - 日
                     * @param _periodType 统计周期，枚举值如下
month - 月
day - 日
                     * 
                     */
                    void SetPeriodType(const std::string& _periodType);

                    /**
                     * 判断参数 PeriodType 是否已赋值
                     * @return PeriodType 是否已赋值
                     * 
                     */
                    bool PeriodTypeHasBeenSet() const;

                    /**
                     * 获取分账单元唯一标识，用作筛选

                     * @return TreeNodeUniqKeys 分账单元唯一标识，用作筛选

                     * 
                     */
                    std::vector<std::string> GetTreeNodeUniqKeys() const;

                    /**
                     * 设置分账单元唯一标识，用作筛选

                     * @param _treeNodeUniqKeys 分账单元唯一标识，用作筛选

                     * 
                     */
                    void SetTreeNodeUniqKeys(const std::vector<std::string>& _treeNodeUniqKeys);

                    /**
                     * 判断参数 TreeNodeUniqKeys 是否已赋值
                     * @return TreeNodeUniqKeys 是否已赋值
                     * 
                     */
                    bool TreeNodeUniqKeysHasBeenSet() const;

                    /**
                     * 获取排序类型，枚举值如下：
asc - 升序
desc - 降序
                     * @return SortType 排序类型，枚举值如下：
asc - 升序
desc - 降序
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置排序类型，枚举值如下：
asc - 升序
desc - 降序
                     * @param _sortType 排序类型，枚举值如下：
asc - 升序
desc - 降序
                     * 
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取排序字段，枚举值如下：
GatherCashPayAmount - 归集费用(现金)
GatherVoucherPayAmount- 归集费用(优惠券)
GatherIncentivePayAmount - 归集费用(赠送金)
GatherTransferPayAmount - 归集费用(分成金)
AllocateCashPayAmount - 分摊费用(现金)
AllocateVoucherPayAmount - 分摊费用(优惠券)
AllocateIncentivePayAmount - 分摊费用(赠送金)
AllocateTransferPayAmount - 分摊费用(分成金)
TotalCashPayAmount - 合计费用(现金)
TotalVoucherPayAmount - 合计费用(优惠券)
TotalIncentivePayAmount - 合计费用(赠送金)
TotalTransferPayAmount - 合计费用(分成金)
GatherRealCost - 归集费用(折后总额)
AllocateRealCost - 分摊费用(折后总额)
RealTotalCost - 合计费用(折后总额)
BusinessCode - 产品代码
Ratio - 占比(折后总额)
Trend - 环比(折后总额)
                     * @return Sort 排序字段，枚举值如下：
GatherCashPayAmount - 归集费用(现金)
GatherVoucherPayAmount- 归集费用(优惠券)
GatherIncentivePayAmount - 归集费用(赠送金)
GatherTransferPayAmount - 归集费用(分成金)
AllocateCashPayAmount - 分摊费用(现金)
AllocateVoucherPayAmount - 分摊费用(优惠券)
AllocateIncentivePayAmount - 分摊费用(赠送金)
AllocateTransferPayAmount - 分摊费用(分成金)
TotalCashPayAmount - 合计费用(现金)
TotalVoucherPayAmount - 合计费用(优惠券)
TotalIncentivePayAmount - 合计费用(赠送金)
TotalTransferPayAmount - 合计费用(分成金)
GatherRealCost - 归集费用(折后总额)
AllocateRealCost - 分摊费用(折后总额)
RealTotalCost - 合计费用(折后总额)
BusinessCode - 产品代码
Ratio - 占比(折后总额)
Trend - 环比(折后总额)
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置排序字段，枚举值如下：
GatherCashPayAmount - 归集费用(现金)
GatherVoucherPayAmount- 归集费用(优惠券)
GatherIncentivePayAmount - 归集费用(赠送金)
GatherTransferPayAmount - 归集费用(分成金)
AllocateCashPayAmount - 分摊费用(现金)
AllocateVoucherPayAmount - 分摊费用(优惠券)
AllocateIncentivePayAmount - 分摊费用(赠送金)
AllocateTransferPayAmount - 分摊费用(分成金)
TotalCashPayAmount - 合计费用(现金)
TotalVoucherPayAmount - 合计费用(优惠券)
TotalIncentivePayAmount - 合计费用(赠送金)
TotalTransferPayAmount - 合计费用(分成金)
GatherRealCost - 归集费用(折后总额)
AllocateRealCost - 分摊费用(折后总额)
RealTotalCost - 合计费用(折后总额)
BusinessCode - 产品代码
Ratio - 占比(折后总额)
Trend - 环比(折后总额)
                     * @param _sort 排序字段，枚举值如下：
GatherCashPayAmount - 归集费用(现金)
GatherVoucherPayAmount- 归集费用(优惠券)
GatherIncentivePayAmount - 归集费用(赠送金)
GatherTransferPayAmount - 归集费用(分成金)
AllocateCashPayAmount - 分摊费用(现金)
AllocateVoucherPayAmount - 分摊费用(优惠券)
AllocateIncentivePayAmount - 分摊费用(赠送金)
AllocateTransferPayAmount - 分摊费用(分成金)
TotalCashPayAmount - 合计费用(现金)
TotalVoucherPayAmount - 合计费用(优惠券)
TotalIncentivePayAmount - 合计费用(赠送金)
TotalTransferPayAmount - 合计费用(分成金)
GatherRealCost - 归集费用(折后总额)
AllocateRealCost - 分摊费用(折后总额)
RealTotalCost - 合计费用(折后总额)
BusinessCode - 产品代码
Ratio - 占比(折后总额)
Trend - 环比(折后总额)
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取日期，用作筛选，PeriodType=day时可传

                     * @return BillDates 日期，用作筛选，PeriodType=day时可传

                     * 
                     */
                    std::vector<std::string> GetBillDates() const;

                    /**
                     * 设置日期，用作筛选，PeriodType=day时可传

                     * @param _billDates 日期，用作筛选，PeriodType=day时可传

                     * 
                     */
                    void SetBillDates(const std::vector<std::string>& _billDates);

                    /**
                     * 判断参数 BillDates 是否已赋值
                     * @return BillDates 是否已赋值
                     * 
                     */
                    bool BillDatesHasBeenSet() const;

                    /**
                     * 获取产品编码，用作筛选
                     * @return BusinessCodes 产品编码，用作筛选
                     * 
                     */
                    std::vector<std::string> GetBusinessCodes() const;

                    /**
                     * 设置产品编码，用作筛选
                     * @param _businessCodes 产品编码，用作筛选
                     * 
                     */
                    void SetBusinessCodes(const std::vector<std::string>& _businessCodes);

                    /**
                     * 判断参数 BusinessCodes 是否已赋值
                     * @return BusinessCodes 是否已赋值
                     * 
                     */
                    bool BusinessCodesHasBeenSet() const;

                    /**
                     * 获取模糊搜索条件
                     * @return SearchKey 模糊搜索条件
                     * @deprecated
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置模糊搜索条件
                     * @param _searchKey 模糊搜索条件
                     * @deprecated
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * @deprecated
                     */
                    bool SearchKeyHasBeenSet() const;

                private:

                    /**
                     * 数量，最大值为1000
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，以此类推
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 账单月份，格式为2024-02，不传默认当前月

                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * 统计周期，枚举值如下
month - 月
day - 日
                     */
                    std::string m_periodType;
                    bool m_periodTypeHasBeenSet;

                    /**
                     * 分账单元唯一标识，用作筛选

                     */
                    std::vector<std::string> m_treeNodeUniqKeys;
                    bool m_treeNodeUniqKeysHasBeenSet;

                    /**
                     * 排序类型，枚举值如下：
asc - 升序
desc - 降序
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * 排序字段，枚举值如下：
GatherCashPayAmount - 归集费用(现金)
GatherVoucherPayAmount- 归集费用(优惠券)
GatherIncentivePayAmount - 归集费用(赠送金)
GatherTransferPayAmount - 归集费用(分成金)
AllocateCashPayAmount - 分摊费用(现金)
AllocateVoucherPayAmount - 分摊费用(优惠券)
AllocateIncentivePayAmount - 分摊费用(赠送金)
AllocateTransferPayAmount - 分摊费用(分成金)
TotalCashPayAmount - 合计费用(现金)
TotalVoucherPayAmount - 合计费用(优惠券)
TotalIncentivePayAmount - 合计费用(赠送金)
TotalTransferPayAmount - 合计费用(分成金)
GatherRealCost - 归集费用(折后总额)
AllocateRealCost - 分摊费用(折后总额)
RealTotalCost - 合计费用(折后总额)
BusinessCode - 产品代码
Ratio - 占比(折后总额)
Trend - 环比(折后总额)
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 日期，用作筛选，PeriodType=day时可传

                     */
                    std::vector<std::string> m_billDates;
                    bool m_billDatesHasBeenSet;

                    /**
                     * 产品编码，用作筛选
                     */
                    std::vector<std::string> m_businessCodes;
                    bool m_businessCodesHasBeenSet;

                    /**
                     * 模糊搜索条件
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONSUMMARYBYBUSINESSREQUEST_H_
