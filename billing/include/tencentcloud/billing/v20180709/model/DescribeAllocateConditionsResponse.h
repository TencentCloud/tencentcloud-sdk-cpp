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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATECONDITIONSRESPONSE_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATECONDITIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/BillBusinessLink.h>
#include <tencentcloud/billing/v20180709/model/BillProduct.h>
#include <tencentcloud/billing/v20180709/model/BillItem.h>
#include <tencentcloud/billing/v20180709/model/BillRegion.h>
#include <tencentcloud/billing/v20180709/model/BillInstanceType.h>
#include <tencentcloud/billing/v20180709/model/BillPayMode.h>
#include <tencentcloud/billing/v20180709/model/BillProject.h>
#include <tencentcloud/billing/v20180709/model/BillTag.h>
#include <tencentcloud/billing/v20180709/model/BillOwnerUin.h>
#include <tencentcloud/billing/v20180709/model/BillOperateUin.h>
#include <tencentcloud/billing/v20180709/model/BillActionType.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeAllocateConditions返回参数结构体
                */
                class DescribeAllocateConditionsResponse : public AbstractModel
                {
                public:
                    DescribeAllocateConditionsResponse();
                    ~DescribeAllocateConditionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取产品筛选列表
                     * @return Business 产品筛选列表
                     * 
                     */
                    std::vector<BillBusinessLink> GetBusiness() const;

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

                private:

                    /**
                     * 产品筛选列表
                     */
                    std::vector<BillBusinessLink> m_business;
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
                     * 交易类型筛选列表
                     */
                    std::vector<BillActionType> m_actionType;
                    bool m_actionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATECONDITIONSRESPONSE_H_
