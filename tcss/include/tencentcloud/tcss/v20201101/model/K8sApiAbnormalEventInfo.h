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
                     * 获取<p>命中规则名称</p>
                     * @return MatchRuleName <p>命中规则名称</p>
                     * 
                     */
                    std::string GetMatchRuleName() const;

                    /**
                     * 设置<p>命中规则名称</p>
                     * @param _matchRuleName <p>命中规则名称</p>
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
                     * 获取<p>命中规则类型</p>
                     * @return MatchRuleType <p>命中规则类型</p>
                     * 
                     */
                    std::string GetMatchRuleType() const;

                    /**
                     * 设置<p>命中规则类型</p>
                     * @param _matchRuleType <p>命中规则类型</p>
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
                     * 获取<p>告警等级</p>
                     * @return RiskLevel <p>告警等级</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>告警等级</p>
                     * @param _riskLevel <p>告警等级</p>
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
                     * 获取<p>集群ID</p>
                     * @return ClusterID <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterID <p>集群ID</p>
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
                     * 获取<p>集群名称</p>
                     * @return ClusterName <p>集群名称</p>
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置<p>集群名称</p>
                     * @param _clusterName <p>集群名称</p>
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
                     * 获取<p>集群运行状态，CSR_RUNNING-运行中，CSR_EXCEPTION-异常，CSR_CREATING-创建中</p>
                     * @return ClusterRunningStatus <p>集群运行状态，CSR_RUNNING-运行中，CSR_EXCEPTION-异常，CSR_CREATING-创建中</p>
                     * 
                     */
                    std::string GetClusterRunningStatus() const;

                    /**
                     * 设置<p>集群运行状态，CSR_RUNNING-运行中，CSR_EXCEPTION-异常，CSR_CREATING-创建中</p>
                     * @param _clusterRunningStatus <p>集群运行状态，CSR_RUNNING-运行中，CSR_EXCEPTION-异常，CSR_CREATING-创建中</p>
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
                     * 获取<p>初次生成时间</p>
                     * @return FirstCreateTime <p>初次生成时间</p>
                     * 
                     */
                    std::string GetFirstCreateTime() const;

                    /**
                     * 设置<p>初次生成时间</p>
                     * @param _firstCreateTime <p>初次生成时间</p>
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
                     * 获取<p>最近一次生成时间</p>
                     * @return LastCreateTime <p>最近一次生成时间</p>
                     * 
                     */
                    std::string GetLastCreateTime() const;

                    /**
                     * 设置<p>最近一次生成时间</p>
                     * @param _lastCreateTime <p>最近一次生成时间</p>
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
                     * 获取<p>告警数量</p>
                     * @return AlarmCount <p>告警数量</p>
                     * 
                     */
                    uint64_t GetAlarmCount() const;

                    /**
                     * 设置<p>告警数量</p>
                     * @param _alarmCount <p>告警数量</p>
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
                     * 获取<p>状态<br>&quot;EVENT_UNDEAL&quot;:未处理<br>&quot;EVENT_DEALED&quot;: 已处理<br>&quot;EVENT_IGNORE&quot;: 忽略<br>&quot;EVENT_DEL&quot;: 删除<br>&quot;EVENT_ADD_WHITE&quot;: 加白</p>
                     * @return Status <p>状态<br>&quot;EVENT_UNDEAL&quot;:未处理<br>&quot;EVENT_DEALED&quot;: 已处理<br>&quot;EVENT_IGNORE&quot;: 忽略<br>&quot;EVENT_DEL&quot;: 删除<br>&quot;EVENT_ADD_WHITE&quot;: 加白</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>状态<br>&quot;EVENT_UNDEAL&quot;:未处理<br>&quot;EVENT_DEALED&quot;: 已处理<br>&quot;EVENT_IGNORE&quot;: 忽略<br>&quot;EVENT_DEL&quot;: 删除<br>&quot;EVENT_ADD_WHITE&quot;: 加白</p>
                     * @param _status <p>状态<br>&quot;EVENT_UNDEAL&quot;:未处理<br>&quot;EVENT_DEALED&quot;: 已处理<br>&quot;EVENT_IGNORE&quot;: 忽略<br>&quot;EVENT_DEL&quot;: 删除<br>&quot;EVENT_ADD_WHITE&quot;: 加白</p>
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
                     * 获取<p>集群masterIP</p>
                     * @return ClusterMasterIP <p>集群masterIP</p>
                     * 
                     */
                    std::string GetClusterMasterIP() const;

                    /**
                     * 设置<p>集群masterIP</p>
                     * @param _clusterMasterIP <p>集群masterIP</p>
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
                     * 获取<p>k8s版本</p>
                     * @return K8sVersion <p>k8s版本</p>
                     * 
                     */
                    std::string GetK8sVersion() const;

                    /**
                     * 设置<p>k8s版本</p>
                     * @param _k8sVersion <p>k8s版本</p>
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
                     * 获取<p>运行时组件</p>
                     * @return RunningComponent <p>运行时组件</p>
                     * 
                     */
                    std::vector<std::string> GetRunningComponent() const;

                    /**
                     * 设置<p>运行时组件</p>
                     * @param _runningComponent <p>运行时组件</p>
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
                     * 获取<p>描述</p>
                     * @return Desc <p>描述</p>
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _desc <p>描述</p>
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
                     * 获取<p>建议</p>
                     * @return Suggestion <p>建议</p>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置<p>建议</p>
                     * @param _suggestion <p>建议</p>
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
                     * 获取<p>请求信息</p>
                     * @return Info <p>请求信息</p>
                     * 
                     */
                    std::string GetInfo() const;

                    /**
                     * 设置<p>请求信息</p>
                     * @param _info <p>请求信息</p>
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
                     * 获取<p>规则ID</p>
                     * @return MatchRuleID <p>规则ID</p>
                     * 
                     */
                    std::string GetMatchRuleID() const;

                    /**
                     * 设置<p>规则ID</p>
                     * @param _matchRuleID <p>规则ID</p>
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
                     * 获取<p>高亮字段数组</p>
                     * @return HighLightFields <p>高亮字段数组</p>
                     * 
                     */
                    std::vector<std::string> GetHighLightFields() const;

                    /**
                     * 设置<p>高亮字段数组</p>
                     * @param _highLightFields <p>高亮字段数组</p>
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
                     * 获取<p>命中规则</p>
                     * @return MatchRule <p>命中规则</p>
                     * 
                     */
                    K8sApiAbnormalRuleScopeInfo GetMatchRule() const;

                    /**
                     * 设置<p>命中规则</p>
                     * @param _matchRule <p>命中规则</p>
                     * 
                     */
                    void SetMatchRule(const K8sApiAbnormalRuleScopeInfo& _matchRule);

                    /**
                     * 判断参数 MatchRule 是否已赋值
                     * @return MatchRule 是否已赋值
                     * 
                     */
                    bool MatchRuleHasBeenSet() const;

                    /**
                     * 获取<p>高亮字段对应的命中规则内容(JSON字符串, 如: {&quot;field1&quot;:&quot;value1&quot;,&quot;field2&quot;:&quot;value2&quot;})</p><p>参数格式：{&quot;field1&quot;:&quot;value1&quot;,&quot;field2&quot;:&quot;value2&quot;}</p>
                     * @return HighLightFieldsVal <p>高亮字段对应的命中规则内容(JSON字符串, 如: {&quot;field1&quot;:&quot;value1&quot;,&quot;field2&quot;:&quot;value2&quot;})</p><p>参数格式：{&quot;field1&quot;:&quot;value1&quot;,&quot;field2&quot;:&quot;value2&quot;}</p>
                     * 
                     */
                    std::string GetHighLightFieldsVal() const;

                    /**
                     * 设置<p>高亮字段对应的命中规则内容(JSON字符串, 如: {&quot;field1&quot;:&quot;value1&quot;,&quot;field2&quot;:&quot;value2&quot;})</p><p>参数格式：{&quot;field1&quot;:&quot;value1&quot;,&quot;field2&quot;:&quot;value2&quot;}</p>
                     * @param _highLightFieldsVal <p>高亮字段对应的命中规则内容(JSON字符串, 如: {&quot;field1&quot;:&quot;value1&quot;,&quot;field2&quot;:&quot;value2&quot;})</p><p>参数格式：{&quot;field1&quot;:&quot;value1&quot;,&quot;field2&quot;:&quot;value2&quot;}</p>
                     * 
                     */
                    void SetHighLightFieldsVal(const std::string& _highLightFieldsVal);

                    /**
                     * 判断参数 HighLightFieldsVal 是否已赋值
                     * @return HighLightFieldsVal 是否已赋值
                     * 
                     */
                    bool HighLightFieldsValHasBeenSet() const;

                    /**
                     * 获取<p>规则中文</p>
                     * @return RuleTypeZH <p>规则中文</p>
                     * 
                     */
                    std::string GetRuleTypeZH() const;

                    /**
                     * 设置<p>规则中文</p>
                     * @param _ruleTypeZH <p>规则中文</p>
                     * 
                     */
                    void SetRuleTypeZH(const std::string& _ruleTypeZH);

                    /**
                     * 判断参数 RuleTypeZH 是否已赋值
                     * @return RuleTypeZH 是否已赋值
                     * 
                     */
                    bool RuleTypeZHHasBeenSet() const;

                private:

                    /**
                     * <p>命中规则名称</p>
                     */
                    std::string m_matchRuleName;
                    bool m_matchRuleNameHasBeenSet;

                    /**
                     * <p>命中规则类型</p>
                     */
                    std::string m_matchRuleType;
                    bool m_matchRuleTypeHasBeenSet;

                    /**
                     * <p>告警等级</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * <p>集群名称</p>
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * <p>集群运行状态，CSR_RUNNING-运行中，CSR_EXCEPTION-异常，CSR_CREATING-创建中</p>
                     */
                    std::string m_clusterRunningStatus;
                    bool m_clusterRunningStatusHasBeenSet;

                    /**
                     * <p>初次生成时间</p>
                     */
                    std::string m_firstCreateTime;
                    bool m_firstCreateTimeHasBeenSet;

                    /**
                     * <p>最近一次生成时间</p>
                     */
                    std::string m_lastCreateTime;
                    bool m_lastCreateTimeHasBeenSet;

                    /**
                     * <p>告警数量</p>
                     */
                    uint64_t m_alarmCount;
                    bool m_alarmCountHasBeenSet;

                    /**
                     * <p>状态<br>&quot;EVENT_UNDEAL&quot;:未处理<br>&quot;EVENT_DEALED&quot;: 已处理<br>&quot;EVENT_IGNORE&quot;: 忽略<br>&quot;EVENT_DEL&quot;: 删除<br>&quot;EVENT_ADD_WHITE&quot;: 加白</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>集群masterIP</p>
                     */
                    std::string m_clusterMasterIP;
                    bool m_clusterMasterIPHasBeenSet;

                    /**
                     * <p>k8s版本</p>
                     */
                    std::string m_k8sVersion;
                    bool m_k8sVersionHasBeenSet;

                    /**
                     * <p>运行时组件</p>
                     */
                    std::vector<std::string> m_runningComponent;
                    bool m_runningComponentHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * <p>建议</p>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * <p>请求信息</p>
                     */
                    std::string m_info;
                    bool m_infoHasBeenSet;

                    /**
                     * <p>规则ID</p>
                     */
                    std::string m_matchRuleID;
                    bool m_matchRuleIDHasBeenSet;

                    /**
                     * <p>高亮字段数组</p>
                     */
                    std::vector<std::string> m_highLightFields;
                    bool m_highLightFieldsHasBeenSet;

                    /**
                     * <p>命中规则</p>
                     */
                    K8sApiAbnormalRuleScopeInfo m_matchRule;
                    bool m_matchRuleHasBeenSet;

                    /**
                     * <p>高亮字段对应的命中规则内容(JSON字符串, 如: {&quot;field1&quot;:&quot;value1&quot;,&quot;field2&quot;:&quot;value2&quot;})</p><p>参数格式：{&quot;field1&quot;:&quot;value1&quot;,&quot;field2&quot;:&quot;value2&quot;}</p>
                     */
                    std::string m_highLightFieldsVal;
                    bool m_highLightFieldsValHasBeenSet;

                    /**
                     * <p>规则中文</p>
                     */
                    std::string m_ruleTypeZH;
                    bool m_ruleTypeZHHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALEVENTINFO_H_
