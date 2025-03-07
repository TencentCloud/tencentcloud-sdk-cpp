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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONBILLCONDITIONSRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONBILLCONDITIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BillBusiness.h>
#include <tencentcloud/billing/v20180709/model/BillProduct.h>
#include <tencentcloud/billing/v20180709/model/BillItem.h>
#include <tencentcloud/billing/v20180709/model/BillRegion.h>
#include <tencentcloud/billing/v20180709/model/BillInstanceType.h>
#include <tencentcloud/billing/v20180709/model/BillPayMode.h>
#include <tencentcloud/billing/v20180709/model/BillProject.h>
#include <tencentcloud/billing/v20180709/model/BillTag.h>
#include <tencentcloud/billing/v20180709/model/BillOwnerUin.h>
#include <tencentcloud/billing/v20180709/model/BillOperateUin.h>
#include <tencentcloud/billing/v20180709/model/BillDays.h>
#include <tencentcloud/billing/v20180709/model/BillActionType.h>
#include <tencentcloud/billing/v20180709/model/BillComponent.h>
#include <tencentcloud/billing/v20180709/model/BillZoneId.h>
#include <tencentcloud/billing/v20180709/model/AllocationTreeNode.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeAllocationBillConditions返回参数结构体
                */
                class DescribeAllocationBillConditionsResponse : public AbstractModel
                {
                public:
                    DescribeAllocationBillConditionsResponse();
                    ~DescribeAllocationBillConditionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取产品筛选列表
                     * @return Business 产品筛选列表
                     * 
                     */
                    std::vector<BillBusiness> GetBusiness() const;

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取子产品筛选列表
                     * @return Product 子产品筛选列表
                     * 
                     */
                    std::vector<BillProduct> GetProduct() const;

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取组件名称筛选列表
                     * @return Item 组件名称筛选列表
                     * 
                     */
                    std::vector<BillItem> GetItem() const;

                    /**
                     * 判断参数 Item 是否已赋值
                     * @return Item 是否已赋值
                     * 
                     */
                    bool ItemHasBeenSet() const;

                    /**
                     * 获取地域筛选列表
                     * @return Region 地域筛选列表
                     * 
                     */
                    std::vector<BillRegion> GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取实例类型筛选列表
                     * @return InstanceType 实例类型筛选列表
                     * 
                     */
                    std::vector<BillInstanceType> GetInstanceType() const;

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取计费模式筛选列表
                     * @return PayMode 计费模式筛选列表
                     * 
                     */
                    std::vector<BillPayMode> GetPayMode() const;

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取项目筛选列表
                     * @return Project 项目筛选列表
                     * 
                     */
                    std::vector<BillProject> GetProject() const;

                    /**
                     * 判断参数 Project 是否已赋值
                     * @return Project 是否已赋值
                     * 
                     */
                    bool ProjectHasBeenSet() const;

                    /**
                     * 获取标签筛选列表
                     * @return Tag 标签筛选列表
                     * 
                     */
                    std::vector<BillTag> GetTag() const;

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取使用者 UIN 筛选列表
                     * @return OwnerUin 使用者 UIN 筛选列表
                     * 
                     */
                    std::vector<BillOwnerUin> GetOwnerUin() const;

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取操作者 UIN 筛选列表
                     * @return OperateUin 操作者 UIN 筛选列表
                     * 
                     */
                    std::vector<BillOperateUin> GetOperateUin() const;

                    /**
                     * 判断参数 OperateUin 是否已赋值
                     * @return OperateUin 是否已赋值
                     * 
                     */
                    bool OperateUinHasBeenSet() const;

                    /**
                     * 获取日期筛选列表
                     * @return BillDay 日期筛选列表
                     * 
                     */
                    std::vector<BillDays> GetBillDay() const;

                    /**
                     * 判断参数 BillDay 是否已赋值
                     * @return BillDay 是否已赋值
                     * 
                     */
                    bool BillDayHasBeenSet() const;

                    /**
                     * 获取交易类型筛选列表
                     * @return ActionType 交易类型筛选列表
                     * 
                     */
                    std::vector<BillActionType> GetActionType() const;

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取组件类型筛选列表
                     * @return Component 组件类型筛选列表
                     * 
                     */
                    std::vector<BillComponent> GetComponent() const;

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     * 
                     */
                    bool ComponentHasBeenSet() const;

                    /**
                     * 获取可用区筛选列表
                     * @return Zone 可用区筛选列表
                     * 
                     */
                    std::vector<BillZoneId> GetZone() const;

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取分账单元筛选列表
                     * @return AllocationTreeNode 分账单元筛选列表
                     * 
                     */
                    std::vector<AllocationTreeNode> GetAllocationTreeNode() const;

                    /**
                     * 判断参数 AllocationTreeNode 是否已赋值
                     * @return AllocationTreeNode 是否已赋值
                     * 
                     */
                    bool AllocationTreeNodeHasBeenSet() const;

                    /**
                     * 获取分账标签键
                     * @return TagKey 分账标签键
                     * 
                     */
                    std::vector<std::string> GetTagKey() const;

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                private:

                    /**
                     * 产品筛选列表
                     */
                    std::vector<BillBusiness> m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 子产品筛选列表
                     */
                    std::vector<BillProduct> m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 组件名称筛选列表
                     */
                    std::vector<BillItem> m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * 地域筛选列表
                     */
                    std::vector<BillRegion> m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 实例类型筛选列表
                     */
                    std::vector<BillInstanceType> m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 计费模式筛选列表
                     */
                    std::vector<BillPayMode> m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 项目筛选列表
                     */
                    std::vector<BillProject> m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * 标签筛选列表
                     */
                    std::vector<BillTag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 使用者 UIN 筛选列表
                     */
                    std::vector<BillOwnerUin> m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 操作者 UIN 筛选列表
                     */
                    std::vector<BillOperateUin> m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * 日期筛选列表
                     */
                    std::vector<BillDays> m_billDay;
                    bool m_billDayHasBeenSet;

                    /**
                     * 交易类型筛选列表
                     */
                    std::vector<BillActionType> m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 组件类型筛选列表
                     */
                    std::vector<BillComponent> m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * 可用区筛选列表
                     */
                    std::vector<BillZoneId> m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 分账单元筛选列表
                     */
                    std::vector<AllocationTreeNode> m_allocationTreeNode;
                    bool m_allocationTreeNodeHasBeenSet;

                    /**
                     * 分账标签键
                     */
                    std::vector<std::string> m_tagKey;
                    bool m_tagKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONBILLCONDITIONSRESPONSE_H_
