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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALEVENTLISTITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALEVENTLISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/K8sApiAbnormalRuleScopeInfo.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * k8sapi异常事件列表Item
                */
                class K8sApiAbnormalEventListItem : public AbstractModel
                {
                public:
                    K8sApiAbnormalEventListItem();
                    ~K8sApiAbnormalEventListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件ID
                     * @return ID 事件ID
                     * 
                     */
                    uint64_t GetID() const;

                    /**
                     * 设置事件ID
                     * @param _iD 事件ID
                     * 
                     */
                    void SetID(const uint64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取命中规则类型
                     * @return MatchRuleType 命中规则类型
                     * 
                     */
                    std::string GetMatchRuleType() const;

                    /**
                     * 设置命中规则类型
                     * @param _matchRuleType 命中规则类型
                     * 
                     */
                    void SetMatchRuleType(const std::string& _matchRuleType);

                    /**
                     * 判断参数 MatchRuleType 是否已赋值
                     * @return MatchRuleType 是否已赋值
                     * 
                     */
                    bool MatchRuleTypeHasBeenSet() const;

                    /**
                     * 获取威胁等级
                     * @return RiskLevel 威胁等级
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置威胁等级
                     * @param _riskLevel 威胁等级
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取集群ID
                     * @return ClusterID 集群ID
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置集群ID
                     * @param _clusterID 集群ID
                     * 
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     * 
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param _clusterName 集群名称
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取集群运行状态
                     * @return ClusterRunningStatus 集群运行状态
                     * 
                     */
                    std::string GetClusterRunningStatus() const;

                    /**
                     * 设置集群运行状态
                     * @param _clusterRunningStatus 集群运行状态
                     * 
                     */
                    void SetClusterRunningStatus(const std::string& _clusterRunningStatus);

                    /**
                     * 判断参数 ClusterRunningStatus 是否已赋值
                     * @return ClusterRunningStatus 是否已赋值
                     * 
                     */
                    bool ClusterRunningStatusHasBeenSet() const;

                    /**
                     * 获取初次生成时间
                     * @return FirstCreateTime 初次生成时间
                     * 
                     */
                    std::string GetFirstCreateTime() const;

                    /**
                     * 设置初次生成时间
                     * @param _firstCreateTime 初次生成时间
                     * 
                     */
                    void SetFirstCreateTime(const std::string& _firstCreateTime);

                    /**
                     * 判断参数 FirstCreateTime 是否已赋值
                     * @return FirstCreateTime 是否已赋值
                     * 
                     */
                    bool FirstCreateTimeHasBeenSet() const;

                    /**
                     * 获取最近一次生成时间
                     * @return LastCreateTime 最近一次生成时间
                     * 
                     */
                    std::string GetLastCreateTime() const;

                    /**
                     * 设置最近一次生成时间
                     * @param _lastCreateTime 最近一次生成时间
                     * 
                     */
                    void SetLastCreateTime(const std::string& _lastCreateTime);

                    /**
                     * 判断参数 LastCreateTime 是否已赋值
                     * @return LastCreateTime 是否已赋值
                     * 
                     */
                    bool LastCreateTimeHasBeenSet() const;

                    /**
                     * 获取告警数量
                     * @return AlarmCount 告警数量
                     * 
                     */
                    uint64_t GetAlarmCount() const;

                    /**
                     * 设置告警数量
                     * @param _alarmCount 告警数量
                     * 
                     */
                    void SetAlarmCount(const uint64_t& _alarmCount);

                    /**
                     * 判断参数 AlarmCount 是否已赋值
                     * @return AlarmCount 是否已赋值
                     * 
                     */
                    bool AlarmCountHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取规则类型
                     * @return RuleType 规则类型
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置规则类型
                     * @param _ruleType 规则类型
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取描述信息
                     * @return Desc 描述信息
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置描述信息
                     * @param _desc 描述信息
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取解决方案
                     * @return Suggestion 解决方案
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置解决方案
                     * @param _suggestion 解决方案
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return RuleName 规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param _ruleName 规则名称
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取命中规则
                     * @return MatchRule 命中规则
                     * 
                     */
                    K8sApiAbnormalRuleScopeInfo GetMatchRule() const;

                    /**
                     * 设置命中规则
                     * @param _matchRule 命中规则
                     * 
                     */
                    void SetMatchRule(const K8sApiAbnormalRuleScopeInfo& _matchRule);

                    /**
                     * 判断参数 MatchRule 是否已赋值
                     * @return MatchRule 是否已赋值
                     * 
                     */
                    bool MatchRuleHasBeenSet() const;

                private:

                    /**
                     * 事件ID
                     */
                    uint64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 命中规则类型
                     */
                    std::string m_matchRuleType;
                    bool m_matchRuleTypeHasBeenSet;

                    /**
                     * 威胁等级
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群运行状态
                     */
                    std::string m_clusterRunningStatus;
                    bool m_clusterRunningStatusHasBeenSet;

                    /**
                     * 初次生成时间
                     */
                    std::string m_firstCreateTime;
                    bool m_firstCreateTimeHasBeenSet;

                    /**
                     * 最近一次生成时间
                     */
                    std::string m_lastCreateTime;
                    bool m_lastCreateTimeHasBeenSet;

                    /**
                     * 告警数量
                     */
                    uint64_t m_alarmCount;
                    bool m_alarmCountHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 规则类型
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 描述信息
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 解决方案
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 命中规则
                     */
                    K8sApiAbnormalRuleScopeInfo m_matchRule;
                    bool m_matchRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALEVENTLISTITEM_H_
