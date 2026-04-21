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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONSUMMARYBYITEMREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONSUMMARYBYITEMREQUEST_H_

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
                * DescribeAllocationSummaryByItem请求参数结构体
                */
                class DescribeAllocationSummaryByItemRequest : public AbstractModel
                {
                public:
                    DescribeAllocationSummaryByItemRequest();
                    ~DescribeAllocationSummaryByItemRequest() = default;
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
                     * 获取<p>排序字段，枚举值如下：<br>RiTimeSpan - 预留实例抵扣时长<br>ExtendPayAmount1 - 预留实例抵扣组件原价<br>RealCost - 折后总价<br>CashPayAmount - 现金金额<br>VoucherPayAmount - 代金券金额<br>IncentivePayAmount - 赠送金金额<br>TransferPayAmount -分成金金额<br>Cost - 组件原价</p>
                     * @return Sort <p>排序字段，枚举值如下：<br>RiTimeSpan - 预留实例抵扣时长<br>ExtendPayAmount1 - 预留实例抵扣组件原价<br>RealCost - 折后总价<br>CashPayAmount - 现金金额<br>VoucherPayAmount - 代金券金额<br>IncentivePayAmount - 赠送金金额<br>TransferPayAmount -分成金金额<br>Cost - 组件原价</p>
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置<p>排序字段，枚举值如下：<br>RiTimeSpan - 预留实例抵扣时长<br>ExtendPayAmount1 - 预留实例抵扣组件原价<br>RealCost - 折后总价<br>CashPayAmount - 现金金额<br>VoucherPayAmount - 代金券金额<br>IncentivePayAmount - 赠送金金额<br>TransferPayAmount -分成金金额<br>Cost - 组件原价</p>
                     * @param _sort <p>排序字段，枚举值如下：<br>RiTimeSpan - 预留实例抵扣时长<br>ExtendPayAmount1 - 预留实例抵扣组件原价<br>RealCost - 折后总价<br>CashPayAmount - 现金金额<br>VoucherPayAmount - 代金券金额<br>IncentivePayAmount - 赠送金金额<br>TransferPayAmount -分成金金额<br>Cost - 组件原价</p>
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
                     * 获取<p>日期，用作筛选</p>
                     * @return BillDates <p>日期，用作筛选</p>
                     * 
                     */
                    std::vector<std::string> GetBillDates() const;

                    /**
                     * 设置<p>日期，用作筛选</p>
                     * @param _billDates <p>日期，用作筛选</p>
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
                     * 获取<p>使用者UIN，用作筛选</p>
                     * @return OwnerUins <p>使用者UIN，用作筛选</p>
                     * 
                     */
                    std::vector<std::string> GetOwnerUins() const;

                    /**
                     * 设置<p>使用者UIN，用作筛选</p>
                     * @param _ownerUins <p>使用者UIN，用作筛选</p>
                     * 
                     */
                    void SetOwnerUins(const std::vector<std::string>& _ownerUins);

                    /**
                     * 判断参数 OwnerUins 是否已赋值
                     * @return OwnerUins 是否已赋值
                     * 
                     */
                    bool OwnerUinsHasBeenSet() const;

                    /**
                     * 获取<p>操作者UIN，用作筛选</p>
                     * @return OperateUins <p>操作者UIN，用作筛选</p>
                     * 
                     */
                    std::vector<std::string> GetOperateUins() const;

                    /**
                     * 设置<p>操作者UIN，用作筛选</p>
                     * @param _operateUins <p>操作者UIN，用作筛选</p>
                     * 
                     */
                    void SetOperateUins(const std::vector<std::string>& _operateUins);

                    /**
                     * 判断参数 OperateUins 是否已赋值
                     * @return OperateUins 是否已赋值
                     * 
                     */
                    bool OperateUinsHasBeenSet() const;

                    /**
                     * 获取<p>计费模式编码，用作筛选</p>
                     * @return PayModes <p>计费模式编码，用作筛选</p>
                     * 
                     */
                    std::vector<std::string> GetPayModes() const;

                    /**
                     * 设置<p>计费模式编码，用作筛选</p>
                     * @param _payModes <p>计费模式编码，用作筛选</p>
                     * 
                     */
                    void SetPayModes(const std::vector<std::string>& _payModes);

                    /**
                     * 判断参数 PayModes 是否已赋值
                     * @return PayModes 是否已赋值
                     * 
                     */
                    bool PayModesHasBeenSet() const;

                    /**
                     * 获取<p>交易类型编码，用作筛选</p>
                     * @return ActionTypes <p>交易类型编码，用作筛选</p>
                     * 
                     */
                    std::vector<std::string> GetActionTypes() const;

                    /**
                     * 设置<p>交易类型编码，用作筛选</p>
                     * @param _actionTypes <p>交易类型编码，用作筛选</p>
                     * 
                     */
                    void SetActionTypes(const std::vector<std::string>& _actionTypes);

                    /**
                     * 判断参数 ActionTypes 是否已赋值
                     * @return ActionTypes 是否已赋值
                     * 
                     */
                    bool ActionTypesHasBeenSet() const;

                    /**
                     * 获取<p>子产品编码，用作筛选</p>
                     * @return ProductCodes <p>子产品编码，用作筛选</p>
                     * 
                     */
                    std::vector<std::string> GetProductCodes() const;

                    /**
                     * 设置<p>子产品编码，用作筛选</p>
                     * @param _productCodes <p>子产品编码，用作筛选</p>
                     * 
                     */
                    void SetProductCodes(const std::vector<std::string>& _productCodes);

                    /**
                     * 判断参数 ProductCodes 是否已赋值
                     * @return ProductCodes 是否已赋值
                     * 
                     */
                    bool ProductCodesHasBeenSet() const;

                    /**
                     * 获取<p>地域ID，用作筛选</p>
                     * @return RegionIds <p>地域ID，用作筛选</p>
                     * 
                     */
                    std::vector<std::string> GetRegionIds() const;

                    /**
                     * 设置<p>地域ID，用作筛选</p>
                     * @param _regionIds <p>地域ID，用作筛选</p>
                     * 
                     */
                    void SetRegionIds(const std::vector<std::string>& _regionIds);

                    /**
                     * 判断参数 RegionIds 是否已赋值
                     * @return RegionIds 是否已赋值
                     * 
                     */
                    bool RegionIdsHasBeenSet() const;

                    /**
                     * 获取<p>可用区ID，用作筛选</p>
                     * @return ZoneIds <p>可用区ID，用作筛选</p>
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置<p>可用区ID，用作筛选</p>
                     * @param _zoneIds <p>可用区ID，用作筛选</p>
                     * 
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取<p>实例类型编码，用作筛选</p>
                     * @return InstanceTypes <p>实例类型编码，用作筛选</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置<p>实例类型编码，用作筛选</p>
                     * @param _instanceTypes <p>实例类型编码，用作筛选</p>
                     * 
                     */
                    void SetInstanceTypes(const std::vector<std::string>& _instanceTypes);

                    /**
                     * 判断参数 InstanceTypes 是否已赋值
                     * @return InstanceTypes 是否已赋值
                     * 
                     */
                    bool InstanceTypesHasBeenSet() const;

                    /**
                     * 获取<p>标签，用作筛选</p>
                     * @return Tag <p>标签，用作筛选</p>
                     * 
                     */
                    std::vector<std::string> GetTag() const;

                    /**
                     * 设置<p>标签，用作筛选</p>
                     * @param _tag <p>标签，用作筛选</p>
                     * 
                     */
                    void SetTag(const std::vector<std::string>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取<p>组件类型编码，用作筛选</p>
                     * @return ComponentCodes <p>组件类型编码，用作筛选</p>
                     * 
                     */
                    std::vector<std::string> GetComponentCodes() const;

                    /**
                     * 设置<p>组件类型编码，用作筛选</p>
                     * @param _componentCodes <p>组件类型编码，用作筛选</p>
                     * 
                     */
                    void SetComponentCodes(const std::vector<std::string>& _componentCodes);

                    /**
                     * 判断参数 ComponentCodes 是否已赋值
                     * @return ComponentCodes 是否已赋值
                     * 
                     */
                    bool ComponentCodesHasBeenSet() const;

                    /**
                     * 获取<p>组件名称编码，用作筛选</p>
                     * @return ItemCodes <p>组件名称编码，用作筛选</p>
                     * 
                     */
                    std::vector<std::string> GetItemCodes() const;

                    /**
                     * 设置<p>组件名称编码，用作筛选</p>
                     * @param _itemCodes <p>组件名称编码，用作筛选</p>
                     * 
                     */
                    void SetItemCodes(const std::vector<std::string>& _itemCodes);

                    /**
                     * 判断参数 ItemCodes 是否已赋值
                     * @return ItemCodes 是否已赋值
                     * 
                     */
                    bool ItemCodesHasBeenSet() const;

                    /**
                     * 获取<p>模糊搜索：支持标签、资源id、资源别名</p>
                     * @return SearchKey <p>模糊搜索：支持标签、资源id、资源别名</p>
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置<p>模糊搜索：支持标签、资源id、资源别名</p>
                     * @param _searchKey <p>模糊搜索：支持标签、资源id、资源别名</p>
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取<p>项目ID，用作筛选</p>
                     * @return ProjectIds <p>项目ID，用作筛选</p>
                     * 
                     */
                    std::vector<uint64_t> GetProjectIds() const;

                    /**
                     * 设置<p>项目ID，用作筛选</p>
                     * @param _projectIds <p>项目ID，用作筛选</p>
                     * 
                     */
                    void SetProjectIds(const std::vector<uint64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取<p>费用归集类型，枚举值如下：<br>0 - 分摊<br>1 - 归集<br>-1 - 未分配</p>
                     * @return AllocationType <p>费用归集类型，枚举值如下：<br>0 - 分摊<br>1 - 归集<br>-1 - 未分配</p>
                     * 
                     */
                    std::vector<int64_t> GetAllocationType() const;

                    /**
                     * 设置<p>费用归集类型，枚举值如下：<br>0 - 分摊<br>1 - 归集<br>-1 - 未分配</p>
                     * @param _allocationType <p>费用归集类型，枚举值如下：<br>0 - 分摊<br>1 - 归集<br>-1 - 未分配</p>
                     * 
                     */
                    void SetAllocationType(const std::vector<int64_t>& _allocationType);

                    /**
                     * 判断参数 AllocationType 是否已赋值
                     * @return AllocationType 是否已赋值
                     * 
                     */
                    bool AllocationTypeHasBeenSet() const;

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
                     * <p>排序字段，枚举值如下：<br>RiTimeSpan - 预留实例抵扣时长<br>ExtendPayAmount1 - 预留实例抵扣组件原价<br>RealCost - 折后总价<br>CashPayAmount - 现金金额<br>VoucherPayAmount - 代金券金额<br>IncentivePayAmount - 赠送金金额<br>TransferPayAmount -分成金金额<br>Cost - 组件原价</p>
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <p>排序类型，枚举值如下：<br>asc - 升序<br>desc - 降序</p>
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * <p>日期，用作筛选</p>
                     */
                    std::vector<std::string> m_billDates;
                    bool m_billDatesHasBeenSet;

                    /**
                     * <p>产品编码，用作筛选</p>
                     */
                    std::vector<std::string> m_businessCodes;
                    bool m_businessCodesHasBeenSet;

                    /**
                     * <p>使用者UIN，用作筛选</p>
                     */
                    std::vector<std::string> m_ownerUins;
                    bool m_ownerUinsHasBeenSet;

                    /**
                     * <p>操作者UIN，用作筛选</p>
                     */
                    std::vector<std::string> m_operateUins;
                    bool m_operateUinsHasBeenSet;

                    /**
                     * <p>计费模式编码，用作筛选</p>
                     */
                    std::vector<std::string> m_payModes;
                    bool m_payModesHasBeenSet;

                    /**
                     * <p>交易类型编码，用作筛选</p>
                     */
                    std::vector<std::string> m_actionTypes;
                    bool m_actionTypesHasBeenSet;

                    /**
                     * <p>子产品编码，用作筛选</p>
                     */
                    std::vector<std::string> m_productCodes;
                    bool m_productCodesHasBeenSet;

                    /**
                     * <p>地域ID，用作筛选</p>
                     */
                    std::vector<std::string> m_regionIds;
                    bool m_regionIdsHasBeenSet;

                    /**
                     * <p>可用区ID，用作筛选</p>
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <p>实例类型编码，用作筛选</p>
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * <p>标签，用作筛选</p>
                     */
                    std::vector<std::string> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>组件类型编码，用作筛选</p>
                     */
                    std::vector<std::string> m_componentCodes;
                    bool m_componentCodesHasBeenSet;

                    /**
                     * <p>组件名称编码，用作筛选</p>
                     */
                    std::vector<std::string> m_itemCodes;
                    bool m_itemCodesHasBeenSet;

                    /**
                     * <p>模糊搜索：支持标签、资源id、资源别名</p>
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * <p>项目ID，用作筛选</p>
                     */
                    std::vector<uint64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * <p>费用归集类型，枚举值如下：<br>0 - 分摊<br>1 - 归集<br>-1 - 未分配</p>
                     */
                    std::vector<int64_t> m_allocationType;
                    bool m_allocationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONSUMMARYBYITEMREQUEST_H_
