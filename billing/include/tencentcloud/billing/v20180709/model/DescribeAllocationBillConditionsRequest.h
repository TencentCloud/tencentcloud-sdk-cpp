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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONBILLCONDITIONSREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONBILLCONDITIONSREQUEST_H_

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
                * DescribeAllocationBillConditions请求参数结构体
                */
                class DescribeAllocationBillConditionsRequest : public AbstractModel
                {
                public:
                    DescribeAllocationBillConditionsRequest();
                    ~DescribeAllocationBillConditionsRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>日期</p>
                     * @return BillDates <p>日期</p>
                     * 
                     */
                    std::vector<std::string> GetBillDates() const;

                    /**
                     * 设置<p>日期</p>
                     * @param _billDates <p>日期</p>
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
                     * 获取<p>产品编码</p>
                     * @return BusinessCodes <p>产品编码</p>
                     * 
                     */
                    std::vector<std::string> GetBusinessCodes() const;

                    /**
                     * 设置<p>产品编码</p>
                     * @param _businessCodes <p>产品编码</p>
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
                     * 获取<p>使用者UIN</p>
                     * @return OwnerUins <p>使用者UIN</p>
                     * 
                     */
                    std::vector<std::string> GetOwnerUins() const;

                    /**
                     * 设置<p>使用者UIN</p>
                     * @param _ownerUins <p>使用者UIN</p>
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
                     * 获取<p>操作者UIN</p>
                     * @return OperateUins <p>操作者UIN</p>
                     * 
                     */
                    std::vector<std::string> GetOperateUins() const;

                    /**
                     * 设置<p>操作者UIN</p>
                     * @param _operateUins <p>操作者UIN</p>
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
                     * 获取<p>计费模式编码</p>
                     * @return PayModes <p>计费模式编码</p>
                     * 
                     */
                    std::vector<std::string> GetPayModes() const;

                    /**
                     * 设置<p>计费模式编码</p>
                     * @param _payModes <p>计费模式编码</p>
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
                     * 获取<p>交易类型编码</p>
                     * @return ActionTypes <p>交易类型编码</p>
                     * 
                     */
                    std::vector<std::string> GetActionTypes() const;

                    /**
                     * 设置<p>交易类型编码</p>
                     * @param _actionTypes <p>交易类型编码</p>
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
                     * 获取<p>子产品编码</p>
                     * @return ProductCodes <p>子产品编码</p>
                     * 
                     */
                    std::vector<std::string> GetProductCodes() const;

                    /**
                     * 设置<p>子产品编码</p>
                     * @param _productCodes <p>子产品编码</p>
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
                     * 获取<p>地域ID</p>
                     * @return RegionIds <p>地域ID</p>
                     * 
                     */
                    std::vector<std::string> GetRegionIds() const;

                    /**
                     * 设置<p>地域ID</p>
                     * @param _regionIds <p>地域ID</p>
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
                     * 获取<p>可用区ID</p>
                     * @return ZoneIds <p>可用区ID</p>
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置<p>可用区ID</p>
                     * @param _zoneIds <p>可用区ID</p>
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
                     * 获取<p>实例类型编码</p>
                     * @return InstanceTypes <p>实例类型编码</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置<p>实例类型编码</p>
                     * @param _instanceTypes <p>实例类型编码</p>
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
                     * 获取<p>标签</p>
                     * @return Tag <p>标签</p>
                     * 
                     */
                    std::vector<std::string> GetTag() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tag <p>标签</p>
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
                     * 获取<p>组件类型编码</p>
                     * @return ComponentCodes <p>组件类型编码</p>
                     * 
                     */
                    std::vector<std::string> GetComponentCodes() const;

                    /**
                     * 设置<p>组件类型编码</p>
                     * @param _componentCodes <p>组件类型编码</p>
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
                     * 获取<p>组件名称编码</p>
                     * @return ItemCodes <p>组件名称编码</p>
                     * 
                     */
                    std::vector<std::string> GetItemCodes() const;

                    /**
                     * 设置<p>组件名称编码</p>
                     * @param _itemCodes <p>组件名称编码</p>
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
                     * 获取<p>模糊搜索条件</p>
                     * @return SearchKey <p>模糊搜索条件</p>
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置<p>模糊搜索条件</p>
                     * @param _searchKey <p>模糊搜索条件</p>
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
                     * 获取<p>项目id</p>
                     * @return ProjectIds <p>项目id</p>
                     * 
                     */
                    std::vector<uint64_t> GetProjectIds() const;

                    /**
                     * 设置<p>项目id</p>
                     * @param _projectIds <p>项目id</p>
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
                     * 获取<p>费用归集类型</p><p>枚举值：</p><ul><li>0： 分摊</li><li>1： 归集</li><li>-1： 未分配</li></ul>
                     * @return AllocationType <p>费用归集类型</p><p>枚举值：</p><ul><li>0： 分摊</li><li>1： 归集</li><li>-1： 未分配</li></ul>
                     * 
                     */
                    std::vector<int64_t> GetAllocationType() const;

                    /**
                     * 设置<p>费用归集类型</p><p>枚举值：</p><ul><li>0： 分摊</li><li>1： 归集</li><li>-1： 未分配</li></ul>
                     * @param _allocationType <p>费用归集类型</p><p>枚举值：</p><ul><li>0： 分摊</li><li>1： 归集</li><li>-1： 未分配</li></ul>
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
                     * <p>账单月份，格式为2024-02，不传默认当前月</p>
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * <p>分账单元唯一标识，用作筛选</p>
                     */
                    std::vector<std::string> m_treeNodeUniqKeys;
                    bool m_treeNodeUniqKeysHasBeenSet;

                    /**
                     * <p>日期</p>
                     */
                    std::vector<std::string> m_billDates;
                    bool m_billDatesHasBeenSet;

                    /**
                     * <p>产品编码</p>
                     */
                    std::vector<std::string> m_businessCodes;
                    bool m_businessCodesHasBeenSet;

                    /**
                     * <p>使用者UIN</p>
                     */
                    std::vector<std::string> m_ownerUins;
                    bool m_ownerUinsHasBeenSet;

                    /**
                     * <p>操作者UIN</p>
                     */
                    std::vector<std::string> m_operateUins;
                    bool m_operateUinsHasBeenSet;

                    /**
                     * <p>计费模式编码</p>
                     */
                    std::vector<std::string> m_payModes;
                    bool m_payModesHasBeenSet;

                    /**
                     * <p>交易类型编码</p>
                     */
                    std::vector<std::string> m_actionTypes;
                    bool m_actionTypesHasBeenSet;

                    /**
                     * <p>子产品编码</p>
                     */
                    std::vector<std::string> m_productCodes;
                    bool m_productCodesHasBeenSet;

                    /**
                     * <p>地域ID</p>
                     */
                    std::vector<std::string> m_regionIds;
                    bool m_regionIdsHasBeenSet;

                    /**
                     * <p>可用区ID</p>
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <p>实例类型编码</p>
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<std::string> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>组件类型编码</p>
                     */
                    std::vector<std::string> m_componentCodes;
                    bool m_componentCodesHasBeenSet;

                    /**
                     * <p>组件名称编码</p>
                     */
                    std::vector<std::string> m_itemCodes;
                    bool m_itemCodesHasBeenSet;

                    /**
                     * <p>模糊搜索条件</p>
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * <p>项目id</p>
                     */
                    std::vector<uint64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * <p>费用归集类型</p><p>枚举值：</p><ul><li>0： 分摊</li><li>1： 归集</li><li>-1： 未分配</li></ul>
                     */
                    std::vector<int64_t> m_allocationType;
                    bool m_allocationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONBILLCONDITIONSREQUEST_H_
