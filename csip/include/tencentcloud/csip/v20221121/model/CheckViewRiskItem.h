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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CHECKVIEWRISKITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CHECKVIEWRISKITEM_H_

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
                * 检查项视角风险
                */
                class CheckViewRiskItem : public AbstractModel
                {
                public:
                    CheckViewRiskItem();
                    ~CheckViewRiskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检查项规则ID
                     * @return RiskRuleId 检查项规则ID
                     * 
                     */
                    std::string GetRiskRuleId() const;

                    /**
                     * 设置检查项规则ID
                     * @param _riskRuleId 检查项规则ID
                     * 
                     */
                    void SetRiskRuleId(const std::string& _riskRuleId);

                    /**
                     * 判断参数 RiskRuleId 是否已赋值
                     * @return RiskRuleId 是否已赋值
                     * 
                     */
                    bool RiskRuleIdHasBeenSet() const;

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
                     * 获取存在1个风险项
                     * @return RiskDesc 存在1个风险项
                     * 
                     */
                    std::string GetRiskDesc() const;

                    /**
                     * 设置存在1个风险项
                     * @param _riskDesc 存在1个风险项
                     * 
                     */
                    void SetRiskDesc(const std::string& _riskDesc);

                    /**
                     * 判断参数 RiskDesc 是否已赋值
                     * @return RiskDesc 是否已赋值
                     * 
                     */
                    bool RiskDescHasBeenSet() const;

                    /**
                     * 获取首次发现时间
                     * @return CreateTime 首次发现时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置首次发现时间
                     * @param _createTime 首次发现时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取风险更新时间
                     * @return UpdateTime 风险更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置风险更新时间
                     * @param _updateTime 风险更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取云厂商
                     * @return Provider 云厂商
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置云厂商
                     * @param _provider 云厂商
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
                     * 获取风险状态
                     * @return RiskStatus 风险状态
                     * 
                     */
                    uint64_t GetRiskStatus() const;

                    /**
                     * 设置风险状态
                     * @param _riskStatus 风险状态
                     * 
                     */
                    void SetRiskStatus(const uint64_t& _riskStatus);

                    /**
                     * 判断参数 RiskStatus 是否已赋值
                     * @return RiskStatus 是否已赋值
                     * 
                     */
                    bool RiskStatusHasBeenSet() const;

                    /**
                     * 获取受影响资产数量
                     * @return AssetCount 受影响资产数量
                     * 
                     */
                    uint64_t GetAssetCount() const;

                    /**
                     * 设置受影响资产数量
                     * @param _assetCount 受影响资产数量
                     * 
                     */
                    void SetAssetCount(const uint64_t& _assetCount);

                    /**
                     * 判断参数 AssetCount 是否已赋值
                     * @return AssetCount 是否已赋值
                     * 
                     */
                    bool AssetCountHasBeenSet() const;

                    /**
                     * 获取风险数量
                     * @return RiskCount 风险数量
                     * 
                     */
                    uint64_t GetRiskCount() const;

                    /**
                     * 设置风险数量
                     * @param _riskCount 风险数量
                     * 
                     */
                    void SetRiskCount(const uint64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取资产类型
                     * @return AssetType 资产类型
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置资产类型
                     * @param _assetType 资产类型
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取事件类型
                     * @return EventType 事件类型
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置事件类型
                     * @param _eventType 事件类型
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                private:

                    /**
                     * 检查项规则ID
                     */
                    std::string m_riskRuleId;
                    bool m_riskRuleIdHasBeenSet;

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
                     * 存在1个风险项
                     */
                    std::string m_riskDesc;
                    bool m_riskDescHasBeenSet;

                    /**
                     * 首次发现时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 风险更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 云厂商
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * 风险状态
                     */
                    uint64_t m_riskStatus;
                    bool m_riskStatusHasBeenSet;

                    /**
                     * 受影响资产数量
                     */
                    uint64_t m_assetCount;
                    bool m_assetCountHasBeenSet;

                    /**
                     * 风险数量
                     */
                    uint64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * 资产类型
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 事件类型
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CHECKVIEWRISKITEM_H_
