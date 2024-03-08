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
                     * 获取日期
                     * @return BillDates 日期
                     * 
                     */
                    std::vector<std::string> GetBillDates() const;

                    /**
                     * 设置日期
                     * @param _billDates 日期
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
                     * 获取产品编码
                     * @return BusinessCodes 产品编码
                     * 
                     */
                    std::vector<std::string> GetBusinessCodes() const;

                    /**
                     * 设置产品编码
                     * @param _businessCodes 产品编码
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
                     * 获取使用者UIN
                     * @return OwnerUins 使用者UIN
                     * 
                     */
                    std::vector<std::string> GetOwnerUins() const;

                    /**
                     * 设置使用者UIN
                     * @param _ownerUins 使用者UIN
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
                     * 获取操作者UIN
                     * @return OperateUins 操作者UIN
                     * 
                     */
                    std::vector<std::string> GetOperateUins() const;

                    /**
                     * 设置操作者UIN
                     * @param _operateUins 操作者UIN
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
                     * 获取计费模式编码
                     * @return PayModes 计费模式编码
                     * 
                     */
                    std::vector<std::string> GetPayModes() const;

                    /**
                     * 设置计费模式编码
                     * @param _payModes 计费模式编码
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
                     * 获取交易类型编码
                     * @return ActionTypes 交易类型编码
                     * 
                     */
                    std::vector<std::string> GetActionTypes() const;

                    /**
                     * 设置交易类型编码
                     * @param _actionTypes 交易类型编码
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
                     * 获取子产品编码
                     * @return ProductCodes 子产品编码
                     * 
                     */
                    std::vector<std::string> GetProductCodes() const;

                    /**
                     * 设置子产品编码
                     * @param _productCodes 子产品编码
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
                     * 获取地域ID
                     * @return RegionIds 地域ID
                     * 
                     */
                    std::vector<std::string> GetRegionIds() const;

                    /**
                     * 设置地域ID
                     * @param _regionIds 地域ID
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
                     * 获取可用区ID
                     * @return ZoneIds 可用区ID
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置可用区ID
                     * @param _zoneIds 可用区ID
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
                     * 获取实例类型编码
                     * @return InstanceTypes 实例类型编码
                     * 
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置实例类型编码
                     * @param _instanceTypes 实例类型编码
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
                     * 获取标签
                     * @return Tag 标签
                     * 
                     */
                    std::vector<std::string> GetTag() const;

                    /**
                     * 设置标签
                     * @param _tag 标签
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
                     * 获取组件类型编码
                     * @return ComponentCodes 组件类型编码
                     * 
                     */
                    std::vector<std::string> GetComponentCodes() const;

                    /**
                     * 设置组件类型编码
                     * @param _componentCodes 组件类型编码
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
                     * 获取组件名称编码
                     * @return ItemCodes 组件名称编码
                     * 
                     */
                    std::vector<std::string> GetItemCodes() const;

                    /**
                     * 设置组件名称编码
                     * @param _itemCodes 组件名称编码
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
                     * 获取模糊搜索条件
                     * @return SearchKey 模糊搜索条件
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置模糊搜索条件
                     * @param _searchKey 模糊搜索条件
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
                     * 获取项目id
                     * @return ProjectIds 项目id
                     * 
                     */
                    std::vector<uint64_t> GetProjectIds() const;

                    /**
                     * 设置项目id
                     * @param _projectIds 项目id
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
                     * 获取费用归集类型
                     * @return AllocationType 费用归集类型
                     * 
                     */
                    std::vector<int64_t> GetAllocationType() const;

                    /**
                     * 设置费用归集类型
                     * @param _allocationType 费用归集类型
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
                     * 账单月份，格式为2024-02，不传默认当前月
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * 分账单元唯一标识，用作筛选
                     */
                    std::vector<std::string> m_treeNodeUniqKeys;
                    bool m_treeNodeUniqKeysHasBeenSet;

                    /**
                     * 日期
                     */
                    std::vector<std::string> m_billDates;
                    bool m_billDatesHasBeenSet;

                    /**
                     * 产品编码
                     */
                    std::vector<std::string> m_businessCodes;
                    bool m_businessCodesHasBeenSet;

                    /**
                     * 使用者UIN
                     */
                    std::vector<std::string> m_ownerUins;
                    bool m_ownerUinsHasBeenSet;

                    /**
                     * 操作者UIN
                     */
                    std::vector<std::string> m_operateUins;
                    bool m_operateUinsHasBeenSet;

                    /**
                     * 计费模式编码
                     */
                    std::vector<std::string> m_payModes;
                    bool m_payModesHasBeenSet;

                    /**
                     * 交易类型编码
                     */
                    std::vector<std::string> m_actionTypes;
                    bool m_actionTypesHasBeenSet;

                    /**
                     * 子产品编码
                     */
                    std::vector<std::string> m_productCodes;
                    bool m_productCodesHasBeenSet;

                    /**
                     * 地域ID
                     */
                    std::vector<std::string> m_regionIds;
                    bool m_regionIdsHasBeenSet;

                    /**
                     * 可用区ID
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * 实例类型编码
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<std::string> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 组件类型编码
                     */
                    std::vector<std::string> m_componentCodes;
                    bool m_componentCodesHasBeenSet;

                    /**
                     * 组件名称编码
                     */
                    std::vector<std::string> m_itemCodes;
                    bool m_itemCodesHasBeenSet;

                    /**
                     * 模糊搜索条件
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::vector<uint64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 费用归集类型
                     */
                    std::vector<int64_t> m_allocationType;
                    bool m_allocationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONBILLCONDITIONSREQUEST_H_
