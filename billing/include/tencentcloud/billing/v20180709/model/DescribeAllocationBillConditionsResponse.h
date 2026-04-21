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
                     * 获取<p>产品筛选列表</p>
                     * @return Business <p>产品筛选列表</p>
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
                     * 获取<p>子产品筛选列表</p>
                     * @return Product <p>子产品筛选列表</p>
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
                     * 获取<p>组件名称筛选列表</p>
                     * @return Item <p>组件名称筛选列表</p>
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
                     * 获取<p>地域筛选列表</p>
                     * @return Region <p>地域筛选列表</p>
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
                     * 获取<p>实例类型筛选列表</p>
                     * @return InstanceType <p>实例类型筛选列表</p>
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
                     * 获取<p>计费模式筛选列表</p>
                     * @return PayMode <p>计费模式筛选列表</p>
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
                     * 获取<p>项目筛选列表</p>
                     * @return Project <p>项目筛选列表</p>
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
                     * 获取<p>标签筛选列表</p>
                     * @return Tag <p>标签筛选列表</p>
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
                     * 获取<p>使用者 UIN 筛选列表</p>
                     * @return OwnerUin <p>使用者 UIN 筛选列表</p>
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
                     * 获取<p>操作者 UIN 筛选列表</p>
                     * @return OperateUin <p>操作者 UIN 筛选列表</p>
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
                     * 获取<p>日期筛选列表</p>
                     * @return BillDay <p>日期筛选列表</p>
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
                     * 获取<p>交易类型筛选列表</p>
                     * @return ActionType <p>交易类型筛选列表</p>
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
                     * 获取<p>组件类型筛选列表</p>
                     * @return Component <p>组件类型筛选列表</p>
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
                     * 获取<p>可用区筛选列表</p>
                     * @return Zone <p>可用区筛选列表</p>
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
                     * 获取<p>分账单元筛选列表</p>
                     * @return AllocationTreeNode <p>分账单元筛选列表</p>
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
                     * 获取<p>分账标签键</p>
                     * @return TagKey <p>分账标签键</p>
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
                     * <p>产品筛选列表</p>
                     */
                    std::vector<BillBusiness> m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * <p>子产品筛选列表</p>
                     */
                    std::vector<BillProduct> m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>组件名称筛选列表</p>
                     */
                    std::vector<BillItem> m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * <p>地域筛选列表</p>
                     */
                    std::vector<BillRegion> m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>实例类型筛选列表</p>
                     */
                    std::vector<BillInstanceType> m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>计费模式筛选列表</p>
                     */
                    std::vector<BillPayMode> m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>项目筛选列表</p>
                     */
                    std::vector<BillProject> m_project;
                    bool m_projectHasBeenSet;

                    /**
                     * <p>标签筛选列表</p>
                     */
                    std::vector<BillTag> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>使用者 UIN 筛选列表</p>
                     */
                    std::vector<BillOwnerUin> m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>操作者 UIN 筛选列表</p>
                     */
                    std::vector<BillOperateUin> m_operateUin;
                    bool m_operateUinHasBeenSet;

                    /**
                     * <p>日期筛选列表</p>
                     */
                    std::vector<BillDays> m_billDay;
                    bool m_billDayHasBeenSet;

                    /**
                     * <p>交易类型筛选列表</p>
                     */
                    std::vector<BillActionType> m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * <p>组件类型筛选列表</p>
                     */
                    std::vector<BillComponent> m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * <p>可用区筛选列表</p>
                     */
                    std::vector<BillZoneId> m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>分账单元筛选列表</p>
                     */
                    std::vector<AllocationTreeNode> m_allocationTreeNode;
                    bool m_allocationTreeNodeHasBeenSet;

                    /**
                     * <p>分账标签键</p>
                     */
                    std::vector<std::string> m_tagKey;
                    bool m_tagKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONBILLCONDITIONSRESPONSE_H_
