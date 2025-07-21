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

#ifndef TENCENTCLOUD_SECURITYLAKE_V20240117_MODEL_SECURITYALARMTABLE_H_
#define TENCENTCLOUD_SECURITYLAKE_V20240117_MODEL_SECURITYALARMTABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/securitylake/v20240117/model/SecurityGroupAlertInfo.h>


namespace TencentCloud
{
    namespace Securitylake
    {
        namespace V20240117
        {
            namespace Model
            {
                /**
                * 告警列表
                */
                class SecurityAlarmTable : public AbstractModel
                {
                public:
                    SecurityAlarmTable();
                    ~SecurityAlarmTable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间
                     * @return Timestamp 时间
                     * 
                     */
                    std::string GetTimestamp() const;

                    /**
                     * 设置时间
                     * @param _timestamp 时间
                     * 
                     */
                    void SetTimestamp(const std::string& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取告警名称
                     * @return AlarmName 告警名称
                     * 
                     */
                    std::string GetAlarmName() const;

                    /**
                     * 设置告警名称
                     * @param _alarmName 告警名称
                     * 
                     */
                    void SetAlarmName(const std::string& _alarmName);

                    /**
                     * 判断参数 AlarmName 是否已赋值
                     * @return AlarmName 是否已赋值
                     * 
                     */
                    bool AlarmNameHasBeenSet() const;

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
                     * 获取告警id
                     * @return AlarmId 告警id
                     * 
                     */
                    int64_t GetAlarmId() const;

                    /**
                     * 设置告警id
                     * @param _alarmId 告警id
                     * 
                     */
                    void SetAlarmId(const int64_t& _alarmId);

                    /**
                     * 判断参数 AlarmId 是否已赋值
                     * @return AlarmId 是否已赋值
                     * 
                     */
                    bool AlarmIdHasBeenSet() const;

                    /**
                     * 获取安全性
                     * @return Severity 安全性
                     * 
                     */
                    int64_t GetSeverity() const;

                    /**
                     * 设置安全性
                     * @param _severity 安全性
                     * 
                     */
                    void SetSeverity(const int64_t& _severity);

                    /**
                     * 判断参数 Severity 是否已赋值
                     * @return Severity 是否已赋值
                     * 
                     */
                    bool SeverityHasBeenSet() const;

                    /**
                     * 获取评分
                     * @return Score 评分
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置评分
                     * @param _score 评分
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取分类
                     * @return Category 分类
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置分类
                     * @param _category 分类
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取子分类
                     * @return SubCategory 子分类
                     * 
                     */
                    std::string GetSubCategory() const;

                    /**
                     * 设置子分类
                     * @param _subCategory 子分类
                     * 
                     */
                    void SetSubCategory(const std::string& _subCategory);

                    /**
                     * 判断参数 SubCategory 是否已赋值
                     * @return SubCategory 是否已赋值
                     * 
                     */
                    bool SubCategoryHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置标签
                     * @param _tags 标签
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取有效载荷
                     * @return Payload 有效载荷
                     * 
                     */
                    std::string GetPayload() const;

                    /**
                     * 设置有效载荷
                     * @param _payload 有效载荷
                     * 
                     */
                    void SetPayload(const std::string& _payload);

                    /**
                     * 判断参数 Payload 是否已赋值
                     * @return Payload 是否已赋值
                     * 
                     */
                    bool PayloadHasBeenSet() const;

                    /**
                     * 获取结果
                     * @return Result 结果
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置结果
                     * @param _result 结果
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取可信度
                     * @return Confidence 可信度
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置可信度
                     * @param _confidence 可信度
                     * 
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

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
                     * 获取规则主题
                     * @return RuleTopic 规则主题
                     * 
                     */
                    std::string GetRuleTopic() const;

                    /**
                     * 设置规则主题
                     * @param _ruleTopic 规则主题
                     * 
                     */
                    void SetRuleTopic(const std::string& _ruleTopic);

                    /**
                     * 判断参数 RuleTopic 是否已赋值
                     * @return RuleTopic 是否已赋值
                     * 
                     */
                    bool RuleTopicHasBeenSet() const;

                    /**
                     * 获取处理时间
                     * @return HandleTime 处理时间
                     * 
                     */
                    std::string GetHandleTime() const;

                    /**
                     * 设置处理时间
                     * @param _handleTime 处理时间
                     * 
                     */
                    void SetHandleTime(const std::string& _handleTime);

                    /**
                     * 判断参数 HandleTime 是否已赋值
                     * @return HandleTime 是否已赋值
                     * 
                     */
                    bool HandleTimeHasBeenSet() const;

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
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取来源名称
                     * @return SourceName 来源名称
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置来源名称
                     * @param _sourceName 来源名称
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取APPID
                     * @return AppId APPID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置APPID
                     * @param _appId APPID
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取事件时间
                     * @return EventTime 事件时间
                     * 
                     */
                    std::string GetEventTime() const;

                    /**
                     * 设置事件时间
                     * @param _eventTime 事件时间
                     * 
                     */
                    void SetEventTime(const std::string& _eventTime);

                    /**
                     * 判断参数 EventTime 是否已赋值
                     * @return EventTime 是否已赋值
                     * 
                     */
                    bool EventTimeHasBeenSet() const;

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
                     * 获取攻击次数
                     * @return AttackNum 攻击次数
                     * 
                     */
                    int64_t GetAttackNum() const;

                    /**
                     * 设置攻击次数
                     * @param _attackNum 攻击次数
                     * 
                     */
                    void SetAttackNum(const int64_t& _attackNum);

                    /**
                     * 判断参数 AttackNum 是否已赋值
                     * @return AttackNum 是否已赋值
                     * 
                     */
                    bool AttackNumHasBeenSet() const;

                    /**
                     * 获取告警数量
                     * @return AlarmCount 告警数量
                     * 
                     */
                    int64_t GetAlarmCount() const;

                    /**
                     * 设置告警数量
                     * @param _alarmCount 告警数量
                     * 
                     */
                    void SetAlarmCount(const int64_t& _alarmCount);

                    /**
                     * 判断参数 AlarmCount 是否已赋值
                     * @return AlarmCount 是否已赋值
                     * 
                     */
                    bool AlarmCountHasBeenSet() const;

                    /**
                     * 获取ATT&CK子技术
                     * @return AttackSubTechnique ATT&CK子技术
                     * 
                     */
                    std::string GetAttackSubTechnique() const;

                    /**
                     * 设置ATT&CK子技术
                     * @param _attackSubTechnique ATT&CK子技术
                     * 
                     */
                    void SetAttackSubTechnique(const std::string& _attackSubTechnique);

                    /**
                     * 判断参数 AttackSubTechnique 是否已赋值
                     * @return AttackSubTechnique 是否已赋值
                     * 
                     */
                    bool AttackSubTechniqueHasBeenSet() const;

                    /**
                     * 获取ATT&CK技术
                     * @return AttackTechnique ATT&CK技术
                     * 
                     */
                    std::string GetAttackTechnique() const;

                    /**
                     * 设置ATT&CK技术
                     * @param _attackTechnique ATT&CK技术
                     * 
                     */
                    void SetAttackTechnique(const std::string& _attackTechnique);

                    /**
                     * 判断参数 AttackTechnique 是否已赋值
                     * @return AttackTechnique 是否已赋值
                     * 
                     */
                    bool AttackTechniqueHasBeenSet() const;

                    /**
                     * 获取ATT&CK战术
                     * @return AttackTactic ATT&CK战术
                     * 
                     */
                    std::string GetAttackTactic() const;

                    /**
                     * 设置ATT&CK战术
                     * @param _attackTactic ATT&CK战术
                     * 
                     */
                    void SetAttackTactic(const std::string& _attackTactic);

                    /**
                     * 判断参数 AttackTactic 是否已赋值
                     * @return AttackTactic 是否已赋值
                     * 
                     */
                    bool AttackTacticHasBeenSet() const;

                    /**
                     * 获取ATT&CK子技术名称
                     * @return AttackSubTechniqueName ATT&CK子技术名称
                     * 
                     */
                    std::string GetAttackSubTechniqueName() const;

                    /**
                     * 设置ATT&CK子技术名称
                     * @param _attackSubTechniqueName ATT&CK子技术名称
                     * 
                     */
                    void SetAttackSubTechniqueName(const std::string& _attackSubTechniqueName);

                    /**
                     * 判断参数 AttackSubTechniqueName 是否已赋值
                     * @return AttackSubTechniqueName 是否已赋值
                     * 
                     */
                    bool AttackSubTechniqueNameHasBeenSet() const;

                    /**
                     * 获取ATT&CK技术名称
                     * @return AttackTechniqueName ATT&CK技术名称
                     * 
                     */
                    std::string GetAttackTechniqueName() const;

                    /**
                     * 设置ATT&CK技术名称
                     * @param _attackTechniqueName ATT&CK技术名称
                     * 
                     */
                    void SetAttackTechniqueName(const std::string& _attackTechniqueName);

                    /**
                     * 判断参数 AttackTechniqueName 是否已赋值
                     * @return AttackTechniqueName 是否已赋值
                     * 
                     */
                    bool AttackTechniqueNameHasBeenSet() const;

                    /**
                     * 获取凭证访问
                     * @return AttackTacticName 凭证访问
                     * 
                     */
                    std::string GetAttackTacticName() const;

                    /**
                     * 设置凭证访问
                     * @param _attackTacticName 凭证访问
                     * 
                     */
                    void SetAttackTacticName(const std::string& _attackTacticName);

                    /**
                     * 判断参数 AttackTacticName 是否已赋值
                     * @return AttackTacticName 是否已赋值
                     * 
                     */
                    bool AttackTacticNameHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取规则表达式
                     * @return RuleExpression 规则表达式
                     * 
                     */
                    std::string GetRuleExpression() const;

                    /**
                     * 设置规则表达式
                     * @param _ruleExpression 规则表达式
                     * 
                     */
                    void SetRuleExpression(const std::string& _ruleExpression);

                    /**
                     * 判断参数 RuleExpression 是否已赋值
                     * @return RuleExpression 是否已赋值
                     * 
                     */
                    bool RuleExpressionHasBeenSet() const;

                    /**
                     * 获取表达式类型
                     * @return ExpressionType 表达式类型
                     * 
                     */
                    std::string GetExpressionType() const;

                    /**
                     * 设置表达式类型
                     * @param _expressionType 表达式类型
                     * 
                     */
                    void SetExpressionType(const std::string& _expressionType);

                    /**
                     * 判断参数 ExpressionType 是否已赋值
                     * @return ExpressionType 是否已赋值
                     * 
                     */
                    bool ExpressionTypeHasBeenSet() const;

                    /**
                     * 获取下钻表达式
                     * @return DrillDownExpression 下钻表达式
                     * 
                     */
                    std::string GetDrillDownExpression() const;

                    /**
                     * 设置下钻表达式
                     * @param _drillDownExpression 下钻表达式
                     * 
                     */
                    void SetDrillDownExpression(const std::string& _drillDownExpression);

                    /**
                     * 判断参数 DrillDownExpression 是否已赋值
                     * @return DrillDownExpression 是否已赋值
                     * 
                     */
                    bool DrillDownExpressionHasBeenSet() const;

                    /**
                     * 获取源IP
                     * @return SrcIp 源IP
                     * 
                     */
                    std::string GetSrcIp() const;

                    /**
                     * 设置源IP
                     * @param _srcIp 源IP
                     * 
                     */
                    void SetSrcIp(const std::string& _srcIp);

                    /**
                     * 判断参数 SrcIp 是否已赋值
                     * @return SrcIp 是否已赋值
                     * 
                     */
                    bool SrcIpHasBeenSet() const;

                    /**
                     * 获取源端口
                     * @return SrcPort 源端口
                     * 
                     */
                    int64_t GetSrcPort() const;

                    /**
                     * 设置源端口
                     * @param _srcPort 源端口
                     * 
                     */
                    void SetSrcPort(const int64_t& _srcPort);

                    /**
                     * 判断参数 SrcPort 是否已赋值
                     * @return SrcPort 是否已赋值
                     * 
                     */
                    bool SrcPortHasBeenSet() const;

                    /**
                     * 获取目的IP
                     * @return DstIp 目的IP
                     * 
                     */
                    std::string GetDstIp() const;

                    /**
                     * 设置目的IP
                     * @param _dstIp 目的IP
                     * 
                     */
                    void SetDstIp(const std::string& _dstIp);

                    /**
                     * 判断参数 DstIp 是否已赋值
                     * @return DstIp 是否已赋值
                     * 
                     */
                    bool DstIpHasBeenSet() const;

                    /**
                     * 获取目的端口
                     * @return DstPort 目的端口
                     * 
                     */
                    int64_t GetDstPort() const;

                    /**
                     * 设置目的端口
                     * @param _dstPort 目的端口
                     * 
                     */
                    void SetDstPort(const int64_t& _dstPort);

                    /**
                     * 判断参数 DstPort 是否已赋值
                     * @return DstPort 是否已赋值
                     * 
                     */
                    bool DstPortHasBeenSet() const;

                    /**
                     * 获取主机IP
                     * @return HostIp 主机IP
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置主机IP
                     * @param _hostIp 主机IP
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取主机资产
                     * @return HostAsset 主机资产
                     * 
                     */
                    std::string GetHostAsset() const;

                    /**
                     * 设置主机资产
                     * @param _hostAsset 主机资产
                     * 
                     */
                    void SetHostAsset(const std::string& _hostAsset);

                    /**
                     * 判断参数 HostAsset 是否已赋值
                     * @return HostAsset 是否已赋值
                     * 
                     */
                    bool HostAssetHasBeenSet() const;

                    /**
                     * 获取实例id
                     * @return SdlId 实例id
                     * 
                     */
                    std::string GetSdlId() const;

                    /**
                     * 设置实例id
                     * @param _sdlId 实例id
                     * 
                     */
                    void SetSdlId(const std::string& _sdlId);

                    /**
                     * 判断参数 SdlId 是否已赋值
                     * @return SdlId 是否已赋值
                     * 
                     */
                    bool SdlIdHasBeenSet() const;

                    /**
                     * 获取自定义富化字段信息
                     * @return RichCustomInfos 自定义富化字段信息
                     * 
                     */
                    std::vector<std::string> GetRichCustomInfos() const;

                    /**
                     * 设置自定义富化字段信息
                     * @param _richCustomInfos 自定义富化字段信息
                     * 
                     */
                    void SetRichCustomInfos(const std::vector<std::string>& _richCustomInfos);

                    /**
                     * 判断参数 RichCustomInfos 是否已赋值
                     * @return RichCustomInfos 是否已赋值
                     * 
                     */
                    bool RichCustomInfosHasBeenSet() const;

                    /**
                     * 获取攻击者ip
                     * @return AttackerIp 攻击者ip
                     * 
                     */
                    std::string GetAttackerIp() const;

                    /**
                     * 设置攻击者ip
                     * @param _attackerIp 攻击者ip
                     * 
                     */
                    void SetAttackerIp(const std::string& _attackerIp);

                    /**
                     * 判断参数 AttackerIp 是否已赋值
                     * @return AttackerIp 是否已赋值
                     * 
                     */
                    bool AttackerIpHasBeenSet() const;

                    /**
                     * 获取攻击者资产ID
                     * @return AttackerAsset 攻击者资产ID
                     * 
                     */
                    std::string GetAttackerAsset() const;

                    /**
                     * 设置攻击者资产ID
                     * @param _attackerAsset 攻击者资产ID
                     * 
                     */
                    void SetAttackerAsset(const std::string& _attackerAsset);

                    /**
                     * 判断参数 AttackerAsset 是否已赋值
                     * @return AttackerAsset 是否已赋值
                     * 
                     */
                    bool AttackerAssetHasBeenSet() const;

                    /**
                     * 获取受害者ip
                     * @return VictimIp 受害者ip
                     * 
                     */
                    std::string GetVictimIp() const;

                    /**
                     * 设置受害者ip
                     * @param _victimIp 受害者ip
                     * 
                     */
                    void SetVictimIp(const std::string& _victimIp);

                    /**
                     * 判断参数 VictimIp 是否已赋值
                     * @return VictimIp 是否已赋值
                     * 
                     */
                    bool VictimIpHasBeenSet() const;

                    /**
                     * 获取受害者资产ID
                     * @return VictimAsset 受害者资产ID
                     * 
                     */
                    std::string GetVictimAsset() const;

                    /**
                     * 设置受害者资产ID
                     * @param _victimAsset 受害者资产ID
                     * 
                     */
                    void SetVictimAsset(const std::string& _victimAsset);

                    /**
                     * 判断参数 VictimAsset 是否已赋值
                     * @return VictimAsset 是否已赋值
                     * 
                     */
                    bool VictimAssetHasBeenSet() const;

                    /**
                     * 获取攻击方向
                     * @return AttackDirection 攻击方向
                     * 
                     */
                    std::string GetAttackDirection() const;

                    /**
                     * 设置攻击方向
                     * @param _attackDirection 攻击方向
                     * 
                     */
                    void SetAttackDirection(const std::string& _attackDirection);

                    /**
                     * 判断参数 AttackDirection 是否已赋值
                     * @return AttackDirection 是否已赋值
                     * 
                     */
                    bool AttackDirectionHasBeenSet() const;

                    /**
                     * 获取流量方向
                     * @return TrafficDirection 流量方向
                     * 
                     */
                    std::string GetTrafficDirection() const;

                    /**
                     * 设置流量方向
                     * @param _trafficDirection 流量方向
                     * 
                     */
                    void SetTrafficDirection(const std::string& _trafficDirection);

                    /**
                     * 判断参数 TrafficDirection 是否已赋值
                     * @return TrafficDirection 是否已赋值
                     * 
                     */
                    bool TrafficDirectionHasBeenSet() const;

                    /**
                     * 获取测试
                     * @return SecurityGroupAlertInfos 测试
                     * 
                     */
                    std::vector<SecurityGroupAlertInfo> GetSecurityGroupAlertInfos() const;

                    /**
                     * 设置测试
                     * @param _securityGroupAlertInfos 测试
                     * 
                     */
                    void SetSecurityGroupAlertInfos(const std::vector<SecurityGroupAlertInfo>& _securityGroupAlertInfos);

                    /**
                     * 判断参数 SecurityGroupAlertInfos 是否已赋值
                     * @return SecurityGroupAlertInfos 是否已赋值
                     * 
                     */
                    bool SecurityGroupAlertInfosHasBeenSet() const;

                private:

                    /**
                     * 时间
                     */
                    std::string m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 告警名称
                     */
                    std::string m_alarmName;
                    bool m_alarmNameHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 告警id
                     */
                    int64_t m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * 安全性
                     */
                    int64_t m_severity;
                    bool m_severityHasBeenSet;

                    /**
                     * 评分
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 分类
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 子分类
                     */
                    std::string m_subCategory;
                    bool m_subCategoryHasBeenSet;

                    /**
                     * 标签
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 有效载荷
                     */
                    std::string m_payload;
                    bool m_payloadHasBeenSet;

                    /**
                     * 结果
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 可信度
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 规则主题
                     */
                    std::string m_ruleTopic;
                    bool m_ruleTopicHasBeenSet;

                    /**
                     * 处理时间
                     */
                    std::string m_handleTime;
                    bool m_handleTimeHasBeenSet;

                    /**
                     * 建议
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 来源名称
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * APPID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 规则ID
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 事件时间
                     */
                    std::string m_eventTime;
                    bool m_eventTimeHasBeenSet;

                    /**
                     * 规则类型
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * 攻击次数
                     */
                    int64_t m_attackNum;
                    bool m_attackNumHasBeenSet;

                    /**
                     * 告警数量
                     */
                    int64_t m_alarmCount;
                    bool m_alarmCountHasBeenSet;

                    /**
                     * ATT&CK子技术
                     */
                    std::string m_attackSubTechnique;
                    bool m_attackSubTechniqueHasBeenSet;

                    /**
                     * ATT&CK技术
                     */
                    std::string m_attackTechnique;
                    bool m_attackTechniqueHasBeenSet;

                    /**
                     * ATT&CK战术
                     */
                    std::string m_attackTactic;
                    bool m_attackTacticHasBeenSet;

                    /**
                     * ATT&CK子技术名称
                     */
                    std::string m_attackSubTechniqueName;
                    bool m_attackSubTechniqueNameHasBeenSet;

                    /**
                     * ATT&CK技术名称
                     */
                    std::string m_attackTechniqueName;
                    bool m_attackTechniqueNameHasBeenSet;

                    /**
                     * 凭证访问
                     */
                    std::string m_attackTacticName;
                    bool m_attackTacticNameHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 规则表达式
                     */
                    std::string m_ruleExpression;
                    bool m_ruleExpressionHasBeenSet;

                    /**
                     * 表达式类型
                     */
                    std::string m_expressionType;
                    bool m_expressionTypeHasBeenSet;

                    /**
                     * 下钻表达式
                     */
                    std::string m_drillDownExpression;
                    bool m_drillDownExpressionHasBeenSet;

                    /**
                     * 源IP
                     */
                    std::string m_srcIp;
                    bool m_srcIpHasBeenSet;

                    /**
                     * 源端口
                     */
                    int64_t m_srcPort;
                    bool m_srcPortHasBeenSet;

                    /**
                     * 目的IP
                     */
                    std::string m_dstIp;
                    bool m_dstIpHasBeenSet;

                    /**
                     * 目的端口
                     */
                    int64_t m_dstPort;
                    bool m_dstPortHasBeenSet;

                    /**
                     * 主机IP
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 主机资产
                     */
                    std::string m_hostAsset;
                    bool m_hostAssetHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_sdlId;
                    bool m_sdlIdHasBeenSet;

                    /**
                     * 自定义富化字段信息
                     */
                    std::vector<std::string> m_richCustomInfos;
                    bool m_richCustomInfosHasBeenSet;

                    /**
                     * 攻击者ip
                     */
                    std::string m_attackerIp;
                    bool m_attackerIpHasBeenSet;

                    /**
                     * 攻击者资产ID
                     */
                    std::string m_attackerAsset;
                    bool m_attackerAssetHasBeenSet;

                    /**
                     * 受害者ip
                     */
                    std::string m_victimIp;
                    bool m_victimIpHasBeenSet;

                    /**
                     * 受害者资产ID
                     */
                    std::string m_victimAsset;
                    bool m_victimAssetHasBeenSet;

                    /**
                     * 攻击方向
                     */
                    std::string m_attackDirection;
                    bool m_attackDirectionHasBeenSet;

                    /**
                     * 流量方向
                     */
                    std::string m_trafficDirection;
                    bool m_trafficDirectionHasBeenSet;

                    /**
                     * 测试
                     */
                    std::vector<SecurityGroupAlertInfo> m_securityGroupAlertInfos;
                    bool m_securityGroupAlertInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SECURITYLAKE_V20240117_MODEL_SECURITYALARMTABLE_H_
