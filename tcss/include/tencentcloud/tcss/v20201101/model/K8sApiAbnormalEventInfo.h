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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALEVENTINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALEVENTINFO_H_

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
                * k8sApi异常事件详情
                */
                class K8sApiAbnormalEventInfo : public AbstractModel
                {
                public:
                    K8sApiAbnormalEventInfo();
                    ~K8sApiAbnormalEventInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命中规则名称
                     * @return MatchRuleName 命中规则名称
                     * 
                     */
                    std::string GetMatchRuleName() const;

                    /**
                     * 设置命中规则名称
                     * @param _matchRuleName 命中规则名称
                     * 
                     */
                    void SetMatchRuleName(const std::string& _matchRuleName);

                    /**
                     * 判断参数 MatchRuleName 是否已赋值
                     * @return MatchRuleName 是否已赋值
                     * 
                     */
                    bool MatchRuleNameHasBeenSet() const;

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
                     * 获取告警等级
                     * @return RiskLevel 告警等级
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置告警等级
                     * @param _riskLevel 告警等级
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
                     * 获取集群运行状态，CSR_RUNNING-运行中，CSR_EXCEPTION-异常，CSR_CREATING-创建中
                     * @return ClusterRunningStatus 集群运行状态，CSR_RUNNING-运行中，CSR_EXCEPTION-异常，CSR_CREATING-创建中
                     * 
                     */
                    std::string GetClusterRunningStatus() const;

                    /**
                     * 设置集群运行状态，CSR_RUNNING-运行中，CSR_EXCEPTION-异常，CSR_CREATING-创建中
                     * @param _clusterRunningStatus 集群运行状态，CSR_RUNNING-运行中，CSR_EXCEPTION-异常，CSR_CREATING-创建中
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
"EVENT_UNDEAL":未处理
"EVENT_DEALED": 已处理
"EVENT_IGNORE": 忽略
"EVENT_DEL": 删除
"EVENT_ADD_WHITE": 加白
                     * @return Status 状态
"EVENT_UNDEAL":未处理
"EVENT_DEALED": 已处理
"EVENT_IGNORE": 忽略
"EVENT_DEL": 删除
"EVENT_ADD_WHITE": 加白
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
"EVENT_UNDEAL":未处理
"EVENT_DEALED": 已处理
"EVENT_IGNORE": 忽略
"EVENT_DEL": 删除
"EVENT_ADD_WHITE": 加白
                     * @param _status 状态
"EVENT_UNDEAL":未处理
"EVENT_DEALED": 已处理
"EVENT_IGNORE": 忽略
"EVENT_DEL": 删除
"EVENT_ADD_WHITE": 加白
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
                     * 获取集群masterIP
                     * @return ClusterMasterIP 集群masterIP
                     * 
                     */
                    std::string GetClusterMasterIP() const;

                    /**
                     * 设置集群masterIP
                     * @param _clusterMasterIP 集群masterIP
                     * 
                     */
                    void SetClusterMasterIP(const std::string& _clusterMasterIP);

                    /**
                     * 判断参数 ClusterMasterIP 是否已赋值
                     * @return ClusterMasterIP 是否已赋值
                     * 
                     */
                    bool ClusterMasterIPHasBeenSet() const;

                    /**
                     * 获取k8s版本
                     * @return K8sVersion k8s版本
                     * 
                     */
                    std::string GetK8sVersion() const;

                    /**
                     * 设置k8s版本
                     * @param _k8sVersion k8s版本
                     * 
                     */
                    void SetK8sVersion(const std::string& _k8sVersion);

                    /**
                     * 判断参数 K8sVersion 是否已赋值
                     * @return K8sVersion 是否已赋值
                     * 
                     */
                    bool K8sVersionHasBeenSet() const;

                    /**
                     * 获取运行时组件
                     * @return RunningComponent 运行时组件
                     * 
                     */
                    std::vector<std::string> GetRunningComponent() const;

                    /**
                     * 设置运行时组件
                     * @param _runningComponent 运行时组件
                     * 
                     */
                    void SetRunningComponent(const std::vector<std::string>& _runningComponent);

                    /**
                     * 判断参数 RunningComponent 是否已赋值
                     * @return RunningComponent 是否已赋值
                     * 
                     */
                    bool RunningComponentHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Desc 描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置描述
                     * @param _desc 描述
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
                     * 获取建议
                     * @return Suggestion 建议
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置建议
                     * @param _suggestion 建议
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
                     * 获取请求信息
                     * @return Info 请求信息
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置请求信息
                     * @param _info 请求信息
                     * 
                     */
                    void SetInfo(const std::string& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return MatchRuleID 规则ID
                     * 
                     */
                    std::string GetMatchRuleID() const;

                    /**
                     * 设置规则ID
                     * @param _matchRuleID 规则ID
                     * 
                     */
                    void SetMatchRuleID(const std::string& _matchRuleID);

                    /**
                     * 判断参数 MatchRuleID 是否已赋值
                     * @return MatchRuleID 是否已赋值
                     * 
                     */
                    bool MatchRuleIDHasBeenSet() const;

                    /**
                     * 获取高亮字段数组
                     * @return HighLightFields 高亮字段数组
                     * 
                     */
                    std::vector<std::string> GetHighLightFields() const;

                    /**
                     * 设置高亮字段数组
                     * @param _highLightFields 高亮字段数组
                     * 
                     */
                    void SetHighLightFields(const std::vector<std::string>& _highLightFields);

                    /**
                     * 判断参数 HighLightFields 是否已赋值
                     * @return HighLightFields 是否已赋值
                     * 
                     */
                    bool HighLightFieldsHasBeenSet() const;

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
                     * 命中规则名称
                     */
                    std::string m_matchRuleName;
                    bool m_matchRuleNameHasBeenSet;

                    /**
                     * 命中规则类型
                     */
                    std::string m_matchRuleType;
                    bool m_matchRuleTypeHasBeenSet;

                    /**
                     * 告警等级
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
                     * 集群运行状态，CSR_RUNNING-运行中，CSR_EXCEPTION-异常，CSR_CREATING-创建中
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
"EVENT_UNDEAL":未处理
"EVENT_DEALED": 已处理
"EVENT_IGNORE": 忽略
"EVENT_DEL": 删除
"EVENT_ADD_WHITE": 加白
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 集群masterIP
                     */
                    std::string m_clusterMasterIP;
                    bool m_clusterMasterIPHasBeenSet;

                    /**
                     * k8s版本
                     */
                    std::string m_k8sVersion;
                    bool m_k8sVersionHasBeenSet;

                    /**
                     * 运行时组件
                     */
                    std::vector<std::string> m_runningComponent;
                    bool m_runningComponentHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 建议
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 请求信息
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * 规则ID
                     */
                    std::string m_matchRuleID;
                    bool m_matchRuleIDHasBeenSet;

                    /**
                     * 高亮字段数组
                     */
                    std::vector<std::string> m_highLightFields;
                    bool m_highLightFieldsHasBeenSet;

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

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALEVENTINFO_H_
