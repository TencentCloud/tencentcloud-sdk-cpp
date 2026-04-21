/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取<p>数量，最大值为1000</p>
                     * @return Limit <p>数量，最大值为1000</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>数量，最大值为1000</p>
                     * @param _limit <p>数量，最大值为1000</p>
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
                     * 获取<p>分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，以此类推</p>
                     * @return Offset <p>分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，以此类推</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，以此类推</p>
                     * @param _offset <p>分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，以此类推</p>
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
                     * 获取<p>账单月份，格式为2024-02，不传默认当前月</p>
                     * @return Month <p>账单月份，格式为2024-02，不传默认当前月</p>
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置<p>账单月份，格式为2024-02，不传默认当前月</p>
                     * @param _month <p>账单月份，格式为2024-02，不传默认当前月</p>
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
                     * 获取<p>统计周期，枚举值如下<br>month - 月<br>day - 日</p>
                     * @return PeriodType <p>统计周期，枚举值如下<br>month - 月<br>day - 日</p>
                     * 
                     */
                    std::string GetPeriodType() const;

                    /**
                     * 设置<p>统计周期，枚举值如下<br>month - 月<br>day - 日</p>
                     * @param _periodType <p>统计周期，枚举值如下<br>month - 月<br>day - 日</p>
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
                     * 获取<p>分账单元唯一标识，用作筛选</p>
                     * @return TreeNodeUniqKeys <p>分账单元唯一标识，用作筛选</p>
                     * 
                     */
                    std::vector<std::string> GetTreeNodeUniqKeys() const;

                    /**
                     * 设置<p>分账单元唯一标识，用作筛选</p>
                     * @param _treeNodeUniqKeys <p>分账单元唯一标识，用作筛选</p>
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
                     * 获取<p>排序类型，枚举值如下：<br>asc - 升序<br>desc - 降序</p>
                     * @return SortType <p>排序类型，枚举值如下：<br>asc - 升序<br>desc - 降序</p>
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置<p>排序类型，枚举值如下：<br>asc - 升序<br>desc - 降序</p>
                     * @param _sortType <p>排序类型，枚举值如下：<br>asc - 升序<br>desc - 降序</p>
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
                     * 获取<p>排序字段，枚举值如下：<br>GatherCashPayAmount - 归集费用(现金)<br>GatherVoucherPayAmount- 归集费用(优惠券)<br>GatherIncentivePayAmount - 归集费用(赠送金)<br>GatherTransferPayAmount - 归集费用(分成金)<br>AllocateCashPayAmount - 分摊费用(现金)<br>AllocateVoucherPayAmount - 分摊费用(优惠券)<br>AllocateIncentivePayAmount - 分摊费用(赠送金)<br>AllocateTransferPayAmount - 分摊费用(分成金)<br>TotalCashPayAmount - 合计费用(现金)<br>TotalVoucherPayAmount - 合计费用(优惠券)<br>TotalIncentivePayAmount - 合计费用(赠送金)<br>TotalTransferPayAmount - 合计费用(分成金)<br>GatherRealCost - 归集费用(折后总额)<br>AllocateRealCost - 分摊费用(折后总额)<br>RealTotalCost - 合计费用(折后总额)<br>BusinessCode - 产品代码<br>Ratio - 占比(折后总额)<br>Trend - 环比(折后总额)</p>
                     * @return Sort <p>排序字段，枚举值如下：<br>GatherCashPayAmount - 归集费用(现金)<br>GatherVoucherPayAmount- 归集费用(优惠券)<br>GatherIncentivePayAmount - 归集费用(赠送金)<br>GatherTransferPayAmount - 归集费用(分成金)<br>AllocateCashPayAmount - 分摊费用(现金)<br>AllocateVoucherPayAmount - 分摊费用(优惠券)<br>AllocateIncentivePayAmount - 分摊费用(赠送金)<br>AllocateTransferPayAmount - 分摊费用(分成金)<br>TotalCashPayAmount - 合计费用(现金)<br>TotalVoucherPayAmount - 合计费用(优惠券)<br>TotalIncentivePayAmount - 合计费用(赠送金)<br>TotalTransferPayAmount - 合计费用(分成金)<br>GatherRealCost - 归集费用(折后总额)<br>AllocateRealCost - 分摊费用(折后总额)<br>RealTotalCost - 合计费用(折后总额)<br>BusinessCode - 产品代码<br>Ratio - 占比(折后总额)<br>Trend - 环比(折后总额)</p>
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置<p>排序字段，枚举值如下：<br>GatherCashPayAmount - 归集费用(现金)<br>GatherVoucherPayAmount- 归集费用(优惠券)<br>GatherIncentivePayAmount - 归集费用(赠送金)<br>GatherTransferPayAmount - 归集费用(分成金)<br>AllocateCashPayAmount - 分摊费用(现金)<br>AllocateVoucherPayAmount - 分摊费用(优惠券)<br>AllocateIncentivePayAmount - 分摊费用(赠送金)<br>AllocateTransferPayAmount - 分摊费用(分成金)<br>TotalCashPayAmount - 合计费用(现金)<br>TotalVoucherPayAmount - 合计费用(优惠券)<br>TotalIncentivePayAmount - 合计费用(赠送金)<br>TotalTransferPayAmount - 合计费用(分成金)<br>GatherRealCost - 归集费用(折后总额)<br>AllocateRealCost - 分摊费用(折后总额)<br>RealTotalCost - 合计费用(折后总额)<br>BusinessCode - 产品代码<br>Ratio - 占比(折后总额)<br>Trend - 环比(折后总额)</p>
                     * @param _sort <p>排序字段，枚举值如下：<br>GatherCashPayAmount - 归集费用(现金)<br>GatherVoucherPayAmount- 归集费用(优惠券)<br>GatherIncentivePayAmount - 归集费用(赠送金)<br>GatherTransferPayAmount - 归集费用(分成金)<br>AllocateCashPayAmount - 分摊费用(现金)<br>AllocateVoucherPayAmount - 分摊费用(优惠券)<br>AllocateIncentivePayAmount - 分摊费用(赠送金)<br>AllocateTransferPayAmount - 分摊费用(分成金)<br>TotalCashPayAmount - 合计费用(现金)<br>TotalVoucherPayAmount - 合计费用(优惠券)<br>TotalIncentivePayAmount - 合计费用(赠送金)<br>TotalTransferPayAmount - 合计费用(分成金)<br>GatherRealCost - 归集费用(折后总额)<br>AllocateRealCost - 分摊费用(折后总额)<br>RealTotalCost - 合计费用(折后总额)<br>BusinessCode - 产品代码<br>Ratio - 占比(折后总额)<br>Trend - 环比(折后总额)</p>
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
                     * 获取<p>日期，用作筛选，PeriodType=day时可传</p>
                     * @return BillDates <p>日期，用作筛选，PeriodType=day时可传</p>
                     * 
                     */
                    std::vector<std::string> GetBillDates() const;

                    /**
                     * 设置<p>日期，用作筛选，PeriodType=day时可传</p>
                     * @param _billDates <p>日期，用作筛选，PeriodType=day时可传</p>
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
                     * 获取<p>产品编码，用作筛选</p>
                     * @return BusinessCodes <p>产品编码，用作筛选</p>
                     * 
                     */
                    std::vector<std::string> GetBusinessCodes() const;

                    /**
                     * 设置<p>产品编码，用作筛选</p>
                     * @param _businessCodes <p>产品编码，用作筛选</p>
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
                     * 获取<p>模糊搜索条件</p>
                     * @return SearchKey <p>模糊搜索条件</p>
                     * @deprecated
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置<p>模糊搜索条件</p>
                     * @param _searchKey <p>模糊搜索条件</p>
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
                     * <p>数量，最大值为1000</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页偏移量，Offset=0表示第一页，如果Limit=100，则Offset=100表示第二页，Offset=200表示第三页，以此类推</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>账单月份，格式为2024-02，不传默认当前月</p>
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * <p>统计周期，枚举值如下<br>month - 月<br>day - 日</p>
                     */
                    std::string m_periodType;
                    bool m_periodTypeHasBeenSet;

                    /**
                     * <p>分账单元唯一标识，用作筛选</p>
                     */
                    std::vector<std::string> m_treeNodeUniqKeys;
                    bool m_treeNodeUniqKeysHasBeenSet;

                    /**
                     * <p>排序类型，枚举值如下：<br>asc - 升序<br>desc - 降序</p>
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * <p>排序字段，枚举值如下：<br>GatherCashPayAmount - 归集费用(现金)<br>GatherVoucherPayAmount- 归集费用(优惠券)<br>GatherIncentivePayAmount - 归集费用(赠送金)<br>GatherTransferPayAmount - 归集费用(分成金)<br>AllocateCashPayAmount - 分摊费用(现金)<br>AllocateVoucherPayAmount - 分摊费用(优惠券)<br>AllocateIncentivePayAmount - 分摊费用(赠送金)<br>AllocateTransferPayAmount - 分摊费用(分成金)<br>TotalCashPayAmount - 合计费用(现金)<br>TotalVoucherPayAmount - 合计费用(优惠券)<br>TotalIncentivePayAmount - 合计费用(赠送金)<br>TotalTransferPayAmount - 合计费用(分成金)<br>GatherRealCost - 归集费用(折后总额)<br>AllocateRealCost - 分摊费用(折后总额)<br>RealTotalCost - 合计费用(折后总额)<br>BusinessCode - 产品代码<br>Ratio - 占比(折后总额)<br>Trend - 环比(折后总额)</p>
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <p>日期，用作筛选，PeriodType=day时可传</p>
                     */
                    std::vector<std::string> m_billDates;
                    bool m_billDatesHasBeenSet;

                    /**
                     * <p>产品编码，用作筛选</p>
                     */
                    std::vector<std::string> m_businessCodes;
                    bool m_businessCodesHasBeenSet;

                    /**
                     * <p>模糊搜索条件</p>
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONSUMMARYBYBUSINESSREQUEST_H_
