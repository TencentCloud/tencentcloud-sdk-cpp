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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYALARM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYALARM_H_

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
                * 访问密钥告警记录
                */
                class AccessKeyAlarm : public AbstractModel
                {
                public:
                    AccessKeyAlarm();
                    ~AccessKeyAlarm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>告警名称</p>
                     * @return Name <p>告警名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>告警名称</p>
                     * @param _name <p>告警名称</p>
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
                     * 获取<p>告警等级<br>0-无效 1-提示 2-低危 3-中危 4-高危 5-严重</p>
                     * @return Level <p>告警等级<br>0-无效 1-提示 2-低危 3-中危 4-高危 5-严重</p>
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置<p>告警等级<br>0-无效 1-提示 2-低危 3-中危 4-高危 5-严重</p>
                     * @param _level <p>告警等级<br>0-无效 1-提示 2-低危 3-中危 4-高危 5-严重</p>
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>告警记录ID</p>
                     * @return ID <p>告警记录ID</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>告警记录ID</p>
                     * @param _iD <p>告警记录ID</p>
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>告警规则ID</p>
                     * @return AlarmRuleID <p>告警规则ID</p>
                     * 
                     */
                    int64_t GetAlarmRuleID() const;

                    /**
                     * 设置<p>告警规则ID</p>
                     * @param _alarmRuleID <p>告警规则ID</p>
                     * 
                     */
                    void SetAlarmRuleID(const int64_t& _alarmRuleID);

                    /**
                     * 判断参数 AlarmRuleID 是否已赋值
                     * @return AlarmRuleID 是否已赋值
                     * 
                     */
                    bool AlarmRuleIDHasBeenSet() const;

                    /**
                     * 获取<p>告警类型<br>0 异常调用<br>1 泄漏监测</p>
                     * @return AlarmType <p>告警类型<br>0 异常调用<br>1 泄漏监测</p>
                     * 
                     */
                    int64_t GetAlarmType() const;

                    /**
                     * 设置<p>告警类型<br>0 异常调用<br>1 泄漏监测</p>
                     * @param _alarmType <p>告警类型<br>0 异常调用<br>1 泄漏监测</p>
                     * 
                     */
                    void SetAlarmType(const int64_t& _alarmType);

                    /**
                     * 判断参数 AlarmType 是否已赋值
                     * @return AlarmType 是否已赋值
                     * 
                     */
                    bool AlarmTypeHasBeenSet() const;

                    /**
                     * 获取<p>访问密钥</p>
                     * @return AccessKey <p>访问密钥</p>
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置<p>访问密钥</p>
                     * @param _accessKey <p>访问密钥</p>
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取<p>访问密钥ID</p>
                     * @return AccessKeyID <p>访问密钥ID</p>
                     * 
                     */
                    uint64_t GetAccessKeyID() const;

                    /**
                     * 设置<p>访问密钥ID</p>
                     * @param _accessKeyID <p>访问密钥ID</p>
                     * 
                     */
                    void SetAccessKeyID(const uint64_t& _accessKeyID);

                    /**
                     * 判断参数 AccessKeyID 是否已赋值
                     * @return AccessKeyID 是否已赋值
                     * 
                     */
                    bool AccessKeyIDHasBeenSet() const;

                    /**
                     * 获取<p>访问密钥备注</p>
                     * @return AccessKeyRemark <p>访问密钥备注</p>
                     * 
                     */
                    std::string GetAccessKeyRemark() const;

                    /**
                     * 设置<p>访问密钥备注</p>
                     * @param _accessKeyRemark <p>访问密钥备注</p>
                     * 
                     */
                    void SetAccessKeyRemark(const std::string& _accessKeyRemark);

                    /**
                     * 判断参数 AccessKeyRemark 是否已赋值
                     * @return AccessKeyRemark 是否已赋值
                     * 
                     */
                    bool AccessKeyRemarkHasBeenSet() const;

                    /**
                     * 获取<p>最后告警时间</p>
                     * @return LastAlarmTime <p>最后告警时间</p>
                     * 
                     */
                    std::string GetLastAlarmTime() const;

                    /**
                     * 设置<p>最后告警时间</p>
                     * @param _lastAlarmTime <p>最后告警时间</p>
                     * 
                     */
                    void SetLastAlarmTime(const std::string& _lastAlarmTime);

                    /**
                     * 判断参数 LastAlarmTime 是否已赋值
                     * @return LastAlarmTime 是否已赋值
                     * 
                     */
                    bool LastAlarmTimeHasBeenSet() const;

                    /**
                     * 获取<p>告警状态<br>0-未处理 1-已处理 2-已忽略</p>
                     * @return Status <p>告警状态<br>0-未处理 1-已处理 2-已忽略</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>告警状态<br>0-未处理 1-已处理 2-已忽略</p>
                     * @param _status <p>告警状态<br>0-未处理 1-已处理 2-已忽略</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>聚合日期</p>
                     * @return Date <p>聚合日期</p>
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置<p>聚合日期</p>
                     * @param _date <p>聚合日期</p>
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
                     * 获取<p>告警标签</p>
                     * @return Tag <p>告警标签</p>
                     * 
                     */
                    std::vector<std::string> GetTag() const;

                    /**
                     * 设置<p>告警标签</p>
                     * @param _tag <p>告警标签</p>
                     * 
                     */
                    void SetTag(const std::vector<std::string>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取<p>所属主账号Uin</p>
                     * @return Uin <p>所属主账号Uin</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>所属主账号Uin</p>
                     * @param _uin <p>所属主账号Uin</p>
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
                     * 获取<p>所属主账号昵称</p>
                     * @return Nickname <p>所属主账号昵称</p>
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置<p>所属主账号昵称</p>
                     * @param _nickname <p>所属主账号昵称</p>
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取<p>所属子账号Uin</p>
                     * @return SubUin <p>所属子账号Uin</p>
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置<p>所属子账号Uin</p>
                     * @param _subUin <p>所属子账号Uin</p>
                     * 
                     */
                    void SetSubUin(const std::string& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取<p>所属子账号昵称</p>
                     * @return SubNickname <p>所属子账号昵称</p>
                     * 
                     */
                    std::string GetSubNickname() const;

                    /**
                     * 设置<p>所属子账号昵称</p>
                     * @param _subNickname <p>所属子账号昵称</p>
                     * 
                     */
                    void SetSubNickname(const std::string& _subNickname);

                    /**
                     * 判断参数 SubNickname 是否已赋值
                     * @return SubNickname 是否已赋值
                     * 
                     */
                    bool SubNicknameHasBeenSet() const;

                    /**
                     * 获取<p>账号类型<br>0 主账号AK 1 子账号AK 2 临时密钥</p>
                     * @return Type <p>账号类型<br>0 主账号AK 1 子账号AK 2 临时密钥</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>账号类型<br>0 主账号AK 1 子账号AK 2 临时密钥</p>
                     * @param _type <p>账号类型<br>0 主账号AK 1 子账号AK 2 临时密钥</p>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>所属appid</p>
                     * @return AppID <p>所属appid</p>
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置<p>所属appid</p>
                     * @param _appID <p>所属appid</p>
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>泄漏证据</p>
                     * @return LeakEvidence <p>泄漏证据</p>
                     * 
                     */
                    std::vector<std::string> GetLeakEvidence() const;

                    /**
                     * 设置<p>泄漏证据</p>
                     * @param _leakEvidence <p>泄漏证据</p>
                     * 
                     */
                    void SetLeakEvidence(const std::vector<std::string>& _leakEvidence);

                    /**
                     * 判断参数 LeakEvidence 是否已赋值
                     * @return LeakEvidence 是否已赋值
                     * 
                     */
                    bool LeakEvidenceHasBeenSet() const;

                    /**
                     * 获取<p>是否支持编辑信任账号</p>
                     * @return IsSupportEditWhiteAccount <p>是否支持编辑信任账号</p>
                     * 
                     */
                    bool GetIsSupportEditWhiteAccount() const;

                    /**
                     * 设置<p>是否支持编辑信任账号</p>
                     * @param _isSupportEditWhiteAccount <p>是否支持编辑信任账号</p>
                     * 
                     */
                    void SetIsSupportEditWhiteAccount(const bool& _isSupportEditWhiteAccount);

                    /**
                     * 判断参数 IsSupportEditWhiteAccount 是否已赋值
                     * @return IsSupportEditWhiteAccount 是否已赋值
                     * 
                     */
                    bool IsSupportEditWhiteAccountHasBeenSet() const;

                    /**
                     * 获取<p>告警证据</p>
                     * @return Evidence <p>告警证据</p>
                     * 
                     */
                    std::string GetEvidence() const;

                    /**
                     * 设置<p>告警证据</p>
                     * @param _evidence <p>告警证据</p>
                     * 
                     */
                    void SetEvidence(const std::string& _evidence);

                    /**
                     * 判断参数 Evidence 是否已赋值
                     * @return Evidence 是否已赋值
                     * 
                     */
                    bool EvidenceHasBeenSet() const;

                    /**
                     * 获取<p>告警规则标识</p>
                     * @return RuleKey <p>告警规则标识</p>
                     * 
                     */
                    std::string GetRuleKey() const;

                    /**
                     * 设置<p>告警规则标识</p>
                     * @param _ruleKey <p>告警规则标识</p>
                     * 
                     */
                    void SetRuleKey(const std::string& _ruleKey);

                    /**
                     * 判断参数 RuleKey 是否已赋值
                     * @return RuleKey 是否已赋值
                     * 
                     */
                    bool RuleKeyHasBeenSet() const;

                    /**
                     * 获取<p>云厂商类型 0:腾讯云 1:亚马逊云 2:微软云 3:谷歌云 4:阿里云 5:华为云</p>
                     * @return CloudType <p>云厂商类型 0:腾讯云 1:亚马逊云 2:微软云 3:谷歌云 4:阿里云 5:华为云</p>
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置<p>云厂商类型 0:腾讯云 1:亚马逊云 2:微软云 3:谷歌云 4:阿里云 5:华为云</p>
                     * @param _cloudType <p>云厂商类型 0:腾讯云 1:亚马逊云 2:微软云 3:谷歌云 4:阿里云 5:华为云</p>
                     * 
                     */
                    void SetCloudType(const int64_t& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取<p>告警AI分析状态<br>-1 分析失败<br>0 未分析<br>1 分析中<br>2 分析成功，真实告警<br>3 分析成功，可疑告警</p>
                     * @return AIStatus <p>告警AI分析状态<br>-1 分析失败<br>0 未分析<br>1 分析中<br>2 分析成功，真实告警<br>3 分析成功，可疑告警</p>
                     * 
                     */
                    int64_t GetAIStatus() const;

                    /**
                     * 设置<p>告警AI分析状态<br>-1 分析失败<br>0 未分析<br>1 分析中<br>2 分析成功，真实告警<br>3 分析成功，可疑告警</p>
                     * @param _aIStatus <p>告警AI分析状态<br>-1 分析失败<br>0 未分析<br>1 分析中<br>2 分析成功，真实告警<br>3 分析成功，可疑告警</p>
                     * 
                     */
                    void SetAIStatus(const int64_t& _aIStatus);

                    /**
                     * 判断参数 AIStatus 是否已赋值
                     * @return AIStatus 是否已赋值
                     * 
                     */
                    bool AIStatusHasBeenSet() const;

                    /**
                     * 获取<p>首次告警时间戳（秒级）</p>
                     * @return FirstAlarmTimestamp <p>首次告警时间戳（秒级）</p>
                     * 
                     */
                    int64_t GetFirstAlarmTimestamp() const;

                    /**
                     * 设置<p>首次告警时间戳（秒级）</p>
                     * @param _firstAlarmTimestamp <p>首次告警时间戳（秒级）</p>
                     * 
                     */
                    void SetFirstAlarmTimestamp(const int64_t& _firstAlarmTimestamp);

                    /**
                     * 判断参数 FirstAlarmTimestamp 是否已赋值
                     * @return FirstAlarmTimestamp 是否已赋值
                     * 
                     */
                    bool FirstAlarmTimestampHasBeenSet() const;

                    /**
                     * 获取<p>最后告警时间戳（秒级）</p>
                     * @return LastAlarmTimestamp <p>最后告警时间戳（秒级）</p>
                     * 
                     */
                    int64_t GetLastAlarmTimestamp() const;

                    /**
                     * 设置<p>最后告警时间戳（秒级）</p>
                     * @param _lastAlarmTimestamp <p>最后告警时间戳（秒级）</p>
                     * 
                     */
                    void SetLastAlarmTimestamp(const int64_t& _lastAlarmTimestamp);

                    /**
                     * 判断参数 LastAlarmTimestamp 是否已赋值
                     * @return LastAlarmTimestamp 是否已赋值
                     * 
                     */
                    bool LastAlarmTimestampHasBeenSet() const;

                    /**
                     * 获取<p>ai分析失败描述，未失败为空字符串</p>
                     * @return AIFailedReason <p>ai分析失败描述，未失败为空字符串</p>
                     * 
                     */
                    std::string GetAIFailedReason() const;

                    /**
                     * 设置<p>ai分析失败描述，未失败为空字符串</p>
                     * @param _aIFailedReason <p>ai分析失败描述，未失败为空字符串</p>
                     * 
                     */
                    void SetAIFailedReason(const std::string& _aIFailedReason);

                    /**
                     * 判断参数 AIFailedReason 是否已赋值
                     * @return AIFailedReason 是否已赋值
                     * 
                     */
                    bool AIFailedReasonHasBeenSet() const;

                private:

                    /**
                     * <p>告警名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>告警等级<br>0-无效 1-提示 2-低危 3-中危 4-高危 5-严重</p>
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>告警记录ID</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>告警规则ID</p>
                     */
                    int64_t m_alarmRuleID;
                    bool m_alarmRuleIDHasBeenSet;

                    /**
                     * <p>告警类型<br>0 异常调用<br>1 泄漏监测</p>
                     */
                    int64_t m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * <p>访问密钥</p>
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * <p>访问密钥ID</p>
                     */
                    uint64_t m_accessKeyID;
                    bool m_accessKeyIDHasBeenSet;

                    /**
                     * <p>访问密钥备注</p>
                     */
                    std::string m_accessKeyRemark;
                    bool m_accessKeyRemarkHasBeenSet;

                    /**
                     * <p>最后告警时间</p>
                     */
                    std::string m_lastAlarmTime;
                    bool m_lastAlarmTimeHasBeenSet;

                    /**
                     * <p>告警状态<br>0-未处理 1-已处理 2-已忽略</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>聚合日期</p>
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * <p>告警标签</p>
                     */
                    std::vector<std::string> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * <p>所属主账号Uin</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>所属主账号昵称</p>
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * <p>所属子账号Uin</p>
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * <p>所属子账号昵称</p>
                     */
                    std::string m_subNickname;
                    bool m_subNicknameHasBeenSet;

                    /**
                     * <p>账号类型<br>0 主账号AK 1 子账号AK 2 临时密钥</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>所属appid</p>
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>泄漏证据</p>
                     */
                    std::vector<std::string> m_leakEvidence;
                    bool m_leakEvidenceHasBeenSet;

                    /**
                     * <p>是否支持编辑信任账号</p>
                     */
                    bool m_isSupportEditWhiteAccount;
                    bool m_isSupportEditWhiteAccountHasBeenSet;

                    /**
                     * <p>告警证据</p>
                     */
                    std::string m_evidence;
                    bool m_evidenceHasBeenSet;

                    /**
                     * <p>告警规则标识</p>
                     */
                    std::string m_ruleKey;
                    bool m_ruleKeyHasBeenSet;

                    /**
                     * <p>云厂商类型 0:腾讯云 1:亚马逊云 2:微软云 3:谷歌云 4:阿里云 5:华为云</p>
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * <p>告警AI分析状态<br>-1 分析失败<br>0 未分析<br>1 分析中<br>2 分析成功，真实告警<br>3 分析成功，可疑告警</p>
                     */
                    int64_t m_aIStatus;
                    bool m_aIStatusHasBeenSet;

                    /**
                     * <p>首次告警时间戳（秒级）</p>
                     */
                    int64_t m_firstAlarmTimestamp;
                    bool m_firstAlarmTimestampHasBeenSet;

                    /**
                     * <p>最后告警时间戳（秒级）</p>
                     */
                    int64_t m_lastAlarmTimestamp;
                    bool m_lastAlarmTimestampHasBeenSet;

                    /**
                     * <p>ai分析失败描述，未失败为空字符串</p>
                     */
                    std::string m_aIFailedReason;
                    bool m_aIFailedReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYALARM_H_
