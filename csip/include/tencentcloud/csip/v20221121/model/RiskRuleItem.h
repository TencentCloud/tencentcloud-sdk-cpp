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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_RISKRULEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_RISKRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 风险规则
                */
                class RiskRuleItem : public AbstractModel
                {
                public:
                    RiskRuleItem();
                    ~RiskRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取风险检查项ID
                     * @return ItemId 风险检查项ID
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置风险检查项ID
                     * @param _itemId 风险检查项ID
                     * 
                     */
                    void SetItemId(const std::string& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取云厂商名称
                     * @return Provider 云厂商名称
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置云厂商名称
                     * @param _provider 云厂商名称
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取实例类型
                     * @return InstanceType 实例类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型
                     * @param _instanceType 实例类型
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取实例类型名称
                     * @return InstanceName 实例类型名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例类型名称
                     * @param _instanceName 实例类型名称
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取风险名称
                     * @return RiskTitle 风险名称
                     * 
                     */
                    std::string GetRiskTitle() const;

                    /**
                     * 设置风险名称
                     * @param _riskTitle 风险名称
                     * 
                     */
                    void SetRiskTitle(const std::string& _riskTitle);

                    /**
                     * 判断参数 RiskTitle 是否已赋值
                     * @return RiskTitle 是否已赋值
                     * 
                     */
                    bool RiskTitleHasBeenSet() const;

                    /**
                     * 获取检查类型
                     * @return CheckType 检查类型
                     * 
                     */
                    std::string GetCheckType() const;

                    /**
                     * 设置检查类型
                     * @param _checkType 检查类型
                     * 
                     */
                    void SetCheckType(const std::string& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取风险等级
                     * @return Severity 风险等级
                     * 
                     */
                    std::string GetSeverity() const;

                    /**
                     * 设置风险等级
                     * @param _severity 风险等级
                     * 
                     */
                    void SetSeverity(const std::string& _severity);

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                    /**
                     * 获取风险危害
                     * @return RiskInfluence 风险危害
                     * 
                     */
                    std::string GetRiskInfluence() const;

                    /**
                     * 设置风险危害
                     * @param _riskInfluence 风险危害
                     * 
                     */
                    void SetRiskInfluence(const std::string& _riskInfluence);

                    /**
                     * 判断参数 RiskInfluence 是否已赋值
                     * @return RiskInfluence 是否已赋值
                     * 
                     */
                    bool RiskInfluenceHasBeenSet() const;

                private:

                    /**
                     * 风险检查项ID
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 云厂商名称
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * 实例类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例类型名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 风险名称
                     */
                    std::string m_riskTitle;
                    bool m_riskTitleHasBeenSet;

                    /**
                     * 检查类型
                     */
                    std::string m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * 风险等级
                     */
                    std::string m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * 风险危害
                     */
                    std::string m_riskInfluence;
                    bool m_riskInfluenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_RISKRULEITEM_H_
