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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ALERTINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ALERTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RoleInfo.h>
#include <tencentcloud/csip/v20221121/model/AlertExtraInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 告警中心全量告警列表数据
                */
                class AlertInfo : public AbstractModel
                {
                public:
                    AlertInfo();
                    ~AlertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警ID
                     * @return ID 告警ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置告警ID
                     * @param _iD 告警ID
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取告警名称
                     * @return Name 告警名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置告警名称
                     * @param _name 告警名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取告警来源
CFW:云防火墙
WAF:Web应用防火墙
CWP:主机安全
CSIP:云安全中心
                     * @return Source 告警来源
CFW:云防火墙
WAF:Web应用防火墙
CWP:主机安全
CSIP:云安全中心
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置告警来源
CFW:云防火墙
WAF:Web应用防火墙
CWP:主机安全
CSIP:云安全中心
                     * @param _source 告警来源
CFW:云防火墙
WAF:Web应用防火墙
CWP:主机安全
CSIP:云安全中心
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取告警等级
1:提示
2:低危
3:中危
4:高危
5:严重
                     * @return Level 告警等级
1:提示
2:低危
3:中危
4:高危
5:严重
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置告警等级
1:提示
2:低危
3:中危
4:高危
5:严重
                     * @param _level 告警等级
1:提示
2:低危
3:中危
4:高危
5:严重
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取攻击者
                     * @return Attacker 攻击者
                     * 
                     */
                    RoleInfo GetAttacker() const;

                    /**
                     * 设置攻击者
                     * @param _attacker 攻击者
                     * 
                     */
                    void SetAttacker(const RoleInfo& _attacker);

                    /**
                     * 判断参数 Attacker 是否已赋值
                     * @return Attacker 是否已赋值
                     * 
                     */
                    bool AttackerHasBeenSet() const;

                    /**
                     * 获取受害者
                     * @return Victim 受害者
                     * 
                     */
                    RoleInfo GetVictim() const;

                    /**
                     * 设置受害者
                     * @param _victim 受害者
                     * 
                     */
                    void SetVictim(const RoleInfo& _victim);

                    /**
                     * 判断参数 Victim 是否已赋值
                     * @return Victim 是否已赋值
                     * 
                     */
                    bool VictimHasBeenSet() const;

                    /**
                     * 获取证据数据(例如攻击内容等，base64编码)
                     * @return EvidenceData 证据数据(例如攻击内容等，base64编码)
                     * 
                     */
                    std::string GetEvidenceData() const;

                    /**
                     * 设置证据数据(例如攻击内容等，base64编码)
                     * @param _evidenceData 证据数据(例如攻击内容等，base64编码)
                     * 
                     */
                    void SetEvidenceData(const std::string& _evidenceData);

                    /**
                     * 判断参数 EvidenceData 是否已赋值
                     * @return EvidenceData 是否已赋值
                     * 
                     */
                    bool EvidenceDataHasBeenSet() const;

                    /**
                     * 获取证据位置(例如协议端口)
                     * @return EvidenceLocation 证据位置(例如协议端口)
                     * 
                     */
                    std::string GetEvidenceLocation() const;

                    /**
                     * 设置证据位置(例如协议端口)
                     * @param _evidenceLocation 证据位置(例如协议端口)
                     * 
                     */
                    void SetEvidenceLocation(const std::string& _evidenceLocation);

                    /**
                     * 判断参数 EvidenceLocation 是否已赋值
                     * @return EvidenceLocation 是否已赋值
                     * 
                     */
                    bool EvidenceLocationHasBeenSet() const;

                    /**
                     * 获取证据路径
                     * @return EvidencePath 证据路径
                     * 
                     */
                    std::string GetEvidencePath() const;

                    /**
                     * 设置证据路径
                     * @param _evidencePath 证据路径
                     * 
                     */
                    void SetEvidencePath(const std::string& _evidencePath);

                    /**
                     * 判断参数 EvidencePath 是否已赋值
                     * @return EvidencePath 是否已赋值
                     * 
                     */
                    bool EvidencePathHasBeenSet() const;

                    /**
                     * 获取首次告警时间
                     * @return CreateTime 首次告警时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置首次告警时间
                     * @param _createTime 首次告警时间
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
                     * 获取最近告警时间
                     * @return UpdateTime 最近告警时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最近告警时间
                     * @param _updateTime 最近告警时间
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
                     * 获取告警次数
                     * @return Count 告警次数
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置告警次数
                     * @param _count 告警次数
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取紧急缓解建议
                     * @return UrgentSuggestion 紧急缓解建议
                     * 
                     */
                    std::string GetUrgentSuggestion() const;

                    /**
                     * 设置紧急缓解建议
                     * @param _urgentSuggestion 紧急缓解建议
                     * 
                     */
                    void SetUrgentSuggestion(const std::string& _urgentSuggestion);

                    /**
                     * 判断参数 UrgentSuggestion 是否已赋值
                     * @return UrgentSuggestion 是否已赋值
                     * 
                     */
                    bool UrgentSuggestionHasBeenSet() const;

                    /**
                     * 获取根治建议
                     * @return RemediationSuggestion 根治建议
                     * 
                     */
                    std::string GetRemediationSuggestion() const;

                    /**
                     * 设置根治建议
                     * @param _remediationSuggestion 根治建议
                     * 
                     */
                    void SetRemediationSuggestion(const std::string& _remediationSuggestion);

                    /**
                     * 判断参数 RemediationSuggestion 是否已赋值
                     * @return RemediationSuggestion 是否已赋值
                     * 
                     */
                    bool RemediationSuggestionHasBeenSet() const;

                    /**
                     * 获取处理状态
0：未处置，1：已忽略，2：已处置
                     * @return Status 处理状态
0：未处置，1：已忽略，2：已处置
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置处理状态
0：未处置，1：已忽略，2：已处置
                     * @param _status 处理状态
0：未处置，1：已忽略，2：已处置
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取告警处理类型
                     * @return ProcessType 告警处理类型
                     * 
                     */
                    std::string GetProcessType() const;

                    /**
                     * 设置告警处理类型
                     * @param _processType 告警处理类型
                     * 
                     */
                    void SetProcessType(const std::string& _processType);

                    /**
                     * 判断参数 ProcessType 是否已赋值
                     * @return ProcessType 是否已赋值
                     * 
                     */
                    bool ProcessTypeHasBeenSet() const;

                    /**
                     * 获取告警大类
                     * @return Type 告警大类
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置告警大类
                     * @param _type 告警大类
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取告警小类
                     * @return SubType 告警小类
                     * 
                     */
                    std::string GetSubType() const;

                    /**
                     * 设置告警小类
                     * @param _subType 告警小类
                     * 
                     */
                    void SetSubType(const std::string& _subType);

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     * 
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取下拉字段
                     * @return ExtraInfo 下拉字段
                     * 
                     */
                    AlertExtraInfo GetExtraInfo() const;

                    /**
                     * 设置下拉字段
                     * @param _extraInfo 下拉字段
                     * 
                     */
                    void SetExtraInfo(const AlertExtraInfo& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                    /**
                     * 获取聚合字段
                     * @return Key 聚合字段
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置聚合字段
                     * @param _key 聚合字段
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取告警日期
                     * @return Date 告警日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置告警日期
                     * @param _date 告警日期
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取appid
                     * @return AppID appid
                     * 
                     */
                    std::string GetAppID() const;

                    /**
                     * 设置appid
                     * @param _appID appid
                     * 
                     */
                    void SetAppID(const std::string& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取账户名称
                     * @return NickName 账户名称
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置账户名称
                     * @param _nickName 账户名称
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取账户ID
                     * @return Uin 账户ID
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置账户ID
                     * @param _uin 账户ID
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取行为
                     * @return Action 行为
                     * 
                     */
                    uint64_t GetAction() const;

                    /**
                     * 设置行为
                     * @param _action 行为
                     * 
                     */
                    void SetAction(const uint64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取风险排查
                     * @return RiskInvestigation 风险排查
                     * 
                     */
                    std::string GetRiskInvestigation() const;

                    /**
                     * 设置风险排查
                     * @param _riskInvestigation 风险排查
                     * 
                     */
                    void SetRiskInvestigation(const std::string& _riskInvestigation);

                    /**
                     * 判断参数 RiskInvestigation 是否已赋值
                     * @return RiskInvestigation 是否已赋值
                     * 
                     */
                    bool RiskInvestigationHasBeenSet() const;

                    /**
                     * 获取风险处置
                     * @return RiskTreatment 风险处置
                     * 
                     */
                    std::string GetRiskTreatment() const;

                    /**
                     * 设置风险处置
                     * @param _riskTreatment 风险处置
                     * 
                     */
                    void SetRiskTreatment(const std::string& _riskTreatment);

                    /**
                     * 判断参数 RiskTreatment 是否已赋值
                     * @return RiskTreatment 是否已赋值
                     * 
                     */
                    bool RiskTreatmentHasBeenSet() const;

                    /**
                     * 获取日志类型
                     * @return LogType 日志类型
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置日志类型
                     * @param _logType 日志类型
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取语句检索
                     * @return LogSearch 语句检索
                     * 
                     */
                    std::string GetLogSearch() const;

                    /**
                     * 设置语句检索
                     * @param _logSearch 语句检索
                     * 
                     */
                    void SetLogSearch(const std::string& _logSearch);

                    /**
                     * 判断参数 LogSearch 是否已赋值
                     * @return LogSearch 是否已赋值
                     * 
                     */
                    bool LogSearchHasBeenSet() const;

                private:

                    /**
                     * 告警ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 告警名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 告警来源
CFW:云防火墙
WAF:Web应用防火墙
CWP:主机安全
CSIP:云安全中心
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 告警等级
1:提示
2:低危
3:中危
4:高危
5:严重
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 攻击者
                     */
                    RoleInfo m_attacker;
                    bool m_attackerHasBeenSet;

                    /**
                     * 受害者
                     */
                    RoleInfo m_victim;
                    bool m_victimHasBeenSet;

                    /**
                     * 证据数据(例如攻击内容等，base64编码)
                     */
                    std::string m_evidenceData;
                    bool m_evidenceDataHasBeenSet;

                    /**
                     * 证据位置(例如协议端口)
                     */
                    std::string m_evidenceLocation;
                    bool m_evidenceLocationHasBeenSet;

                    /**
                     * 证据路径
                     */
                    std::string m_evidencePath;
                    bool m_evidencePathHasBeenSet;

                    /**
                     * 首次告警时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最近告警时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 告警次数
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 紧急缓解建议
                     */
                    std::string m_urgentSuggestion;
                    bool m_urgentSuggestionHasBeenSet;

                    /**
                     * 根治建议
                     */
                    std::string m_remediationSuggestion;
                    bool m_remediationSuggestionHasBeenSet;

                    /**
                     * 处理状态
0：未处置，1：已忽略，2：已处置
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 告警处理类型
                     */
                    std::string m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * 告警大类
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 告警小类
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * 下拉字段
                     */
                    AlertExtraInfo m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * 聚合字段
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 告警日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * appid
                     */
                    std::string m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * 账户名称
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * 账户ID
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 行为
                     */
                    uint64_t m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 风险排查
                     */
                    std::string m_riskInvestigation;
                    bool m_riskInvestigationHasBeenSet;

                    /**
                     * 风险处置
                     */
                    std::string m_riskTreatment;
                    bool m_riskTreatmentHasBeenSet;

                    /**
                     * 日志类型
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 语句检索
                     */
                    std::string m_logSearch;
                    bool m_logSearchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ALERTINFO_H_
