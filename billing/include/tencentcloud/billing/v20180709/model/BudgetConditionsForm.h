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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETCONDITIONSFORM_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETCONDITIONSFORM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/billing/v20180709/model/TagsForm.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 预算管理自定义费用范围参数
                */
                class BudgetConditionsForm : public AbstractModel
                {
                public:
                    BudgetConditionsForm();
                    ~BudgetConditionsForm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>产品</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Business <p>产品</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBusiness() const;

                    /**
                     * 设置<p>产品</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _business <p>产品</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBusiness(const std::vector<std::string>& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取<p>计费模式</p><p>枚举值：</p><ul><li>prePay： 包年包月</li><li>postPay： 按量计费</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayMode <p>计费模式</p><p>枚举值：</p><ul><li>prePay： 包年包月</li><li>postPay： 按量计费</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPayMode() const;

                    /**
                     * 设置<p>计费模式</p><p>枚举值：</p><ul><li>prePay： 包年包月</li><li>postPay： 按量计费</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payMode <p>计费模式</p><p>枚举值：</p><ul><li>prePay： 包年包月</li><li>postPay： 按量计费</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayMode(const std::vector<std::string>& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>子产品</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductCodes <p>子产品</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetProductCodes() const;

                    /**
                     * 设置<p>子产品</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productCodes <p>子产品</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>组件编码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComponentCodes <p>组件编码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetComponentCodes() const;

                    /**
                     * 设置<p>组件编码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _componentCodes <p>组件编码</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneIds <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _zoneIds <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionIds <p>可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRegionIds() const;

                    /**
                     * 设置<p>可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _regionIds <p>可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>项目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectIds <p>项目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置<p>项目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectIds <p>项目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取<p>交易类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ActionTypes <p>交易类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetActionTypes() const;

                    /**
                     * 设置<p>交易类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _actionTypes <p>交易类型</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>消耗类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumptionTypes <p>消耗类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetConsumptionTypes() const;

                    /**
                     * 设置<p>消耗类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consumptionTypes <p>消耗类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsumptionTypes(const std::vector<std::string>& _consumptionTypes);

                    /**
                     * 判断参数 ConsumptionTypes 是否已赋值
                     * @return ConsumptionTypes 是否已赋值
                     * 
                     */
                    bool ConsumptionTypesHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TagsForm> GetTags() const;

                    /**
                     * 设置<p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<TagsForm>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>末级分账单元</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayerUins <p>末级分账单元</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPayerUins() const;

                    /**
                     * 设置<p>末级分账单元</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payerUins <p>末级分账单元</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayerUins(const std::vector<std::string>& _payerUins);

                    /**
                     * 判断参数 PayerUins 是否已赋值
                     * @return PayerUins 是否已赋值
                     * 
                     */
                    bool PayerUinsHasBeenSet() const;

                    /**
                     * 获取<p>主用户Uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUins <p>主用户Uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOwnerUins() const;

                    /**
                     * 设置<p>主用户Uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUins <p>主用户Uin</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>末级分账单元唯一键</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TreeNodeUniqKeys <p>末级分账单元唯一键</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTreeNodeUniqKeys() const;

                    /**
                     * 设置<p>末级分账单元唯一键</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _treeNodeUniqKeys <p>末级分账单元唯一键</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTreeNodeUniqKeys(const std::vector<std::string>& _treeNodeUniqKeys);

                    /**
                     * 判断参数 TreeNodeUniqKeys 是否已赋值
                     * @return TreeNodeUniqKeys 是否已赋值
                     * 
                     */
                    bool TreeNodeUniqKeysHasBeenSet() const;

                private:

                    /**
                     * <p>产品</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * <p>计费模式</p><p>枚举值：</p><ul><li>prePay： 包年包月</li><li>postPay： 按量计费</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>子产品</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_productCodes;
                    bool m_productCodesHasBeenSet;

                    /**
                     * <p>组件编码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_componentCodes;
                    bool m_componentCodesHasBeenSet;

                    /**
                     * <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * <p>可用区</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_regionIds;
                    bool m_regionIdsHasBeenSet;

                    /**
                     * <p>项目</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * <p>交易类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_actionTypes;
                    bool m_actionTypesHasBeenSet;

                    /**
                     * <p>消耗类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_consumptionTypes;
                    bool m_consumptionTypesHasBeenSet;

                    /**
                     * <p>标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagsForm> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>末级分账单元</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_payerUins;
                    bool m_payerUinsHasBeenSet;

                    /**
                     * <p>主用户Uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ownerUins;
                    bool m_ownerUinsHasBeenSet;

                    /**
                     * <p>末级分账单元唯一键</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_treeNodeUniqKeys;
                    bool m_treeNodeUniqKeysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BUDGETCONDITIONSFORM_H_
