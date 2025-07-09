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
                     * 获取告警等级
0-无效 1-提示 2-低危 3-中危 4-高危 5-严重
                     * @return Level 告警等级
0-无效 1-提示 2-低危 3-中危 4-高危 5-严重
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置告警等级
0-无效 1-提示 2-低危 3-中危 4-高危 5-严重
                     * @param _level 告警等级
0-无效 1-提示 2-低危 3-中危 4-高危 5-严重
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
                     * 获取告警记录ID
                     * @return ID 告警记录ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置告警记录ID
                     * @param _iD 告警记录ID
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
                     * 获取告警规则ID
                     * @return AlarmRuleID 告警规则ID
                     * 
                     */
                    int64_t GetAlarmRuleID() const;

                    /**
                     * 设置告警规则ID
                     * @param _alarmRuleID 告警规则ID
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
                     * 获取告警类型
0 异常调用
1 泄漏监测
                     * @return AlarmType 告警类型
0 异常调用
1 泄漏监测
                     * 
                     */
                    int64_t GetAlarmType() const;

                    /**
                     * 设置告警类型
0 异常调用
1 泄漏监测
                     * @param _alarmType 告警类型
0 异常调用
1 泄漏监测
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
                     * 获取访问密钥
                     * @return AccessKey 访问密钥
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置访问密钥
                     * @param _accessKey 访问密钥
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
                     * 获取访问密钥ID
                     * @return AccessKeyID 访问密钥ID
                     * 
                     */
                    uint64_t GetAccessKeyID() const;

                    /**
                     * 设置访问密钥ID
                     * @param _accessKeyID 访问密钥ID
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
                     * 获取访问密钥备注
                     * @return AccessKeyRemark 访问密钥备注
                     * 
                     */
                    std::string GetAccessKeyRemark() const;

                    /**
                     * 设置访问密钥备注
                     * @param _accessKeyRemark 访问密钥备注
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
                     * 获取最后告警时间
                     * @return LastAlarmTime 最后告警时间
                     * 
                     */
                    std::string GetLastAlarmTime() const;

                    /**
                     * 设置最后告警时间
                     * @param _lastAlarmTime 最后告警时间
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
                     * 获取告警状态
0-未处理 1-已处理 2-已忽略
                     * @return Status 告警状态
0-未处理 1-已处理 2-已忽略
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置告警状态
0-未处理 1-已处理 2-已忽略
                     * @param _status 告警状态
0-未处理 1-已处理 2-已忽略
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
                     * 获取聚合日期
                     * @return Date 聚合日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置聚合日期
                     * @param _date 聚合日期
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
                     * 获取告警标签
                     * @return Tag 告警标签
                     * 
                     */
                    std::vector<std::string> GetTag() const;

                    /**
                     * 设置告警标签
                     * @param _tag 告警标签
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
                     * 获取所属主账号Uin
                     * @return Uin 所属主账号Uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置所属主账号Uin
                     * @param _uin 所属主账号Uin
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
                     * 获取所属主账号昵称
                     * @return Nickname 所属主账号昵称
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置所属主账号昵称
                     * @param _nickname 所属主账号昵称
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
                     * 获取所属子账号Uin
                     * @return SubUin 所属子账号Uin
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置所属子账号Uin
                     * @param _subUin 所属子账号Uin
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
                     * 获取所属子账号昵称
                     * @return SubNickname 所属子账号昵称
                     * 
                     */
                    std::string GetSubNickname() const;

                    /**
                     * 设置所属子账号昵称
                     * @param _subNickname 所属子账号昵称
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
                     * 获取账号类型
0 主账号AK 1 子账号AK 2 临时密钥
                     * @return Type 账号类型
0 主账号AK 1 子账号AK 2 临时密钥
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置账号类型
0 主账号AK 1 子账号AK 2 临时密钥
                     * @param _type 账号类型
0 主账号AK 1 子账号AK 2 临时密钥
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
                     * 获取所属appid
                     * @return AppID 所属appid
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置所属appid
                     * @param _appID 所属appid
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
                     * 获取泄漏证据
                     * @return LeakEvidence 泄漏证据
                     * 
                     */
                    std::vector<std::string> GetLeakEvidence() const;

                    /**
                     * 设置泄漏证据
                     * @param _leakEvidence 泄漏证据
                     * 
                     */
                    void SetLeakEvidence(const std::vector<std::string>& _leakEvidence);

                    /**
                     * 判断参数 LeakEvidence 是否已赋值
                     * @return LeakEvidence 是否已赋值
                     * 
                     */
                    bool LeakEvidenceHasBeenSet() const;

                private:

                    /**
                     * 告警名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 告警等级
0-无效 1-提示 2-低危 3-中危 4-高危 5-严重
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 告警记录ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 告警规则ID
                     */
                    int64_t m_alarmRuleID;
                    bool m_alarmRuleIDHasBeenSet;

                    /**
                     * 告警类型
0 异常调用
1 泄漏监测
                     */
                    int64_t m_alarmType;
                    bool m_alarmTypeHasBeenSet;

                    /**
                     * 访问密钥
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * 访问密钥ID
                     */
                    uint64_t m_accessKeyID;
                    bool m_accessKeyIDHasBeenSet;

                    /**
                     * 访问密钥备注
                     */
                    std::string m_accessKeyRemark;
                    bool m_accessKeyRemarkHasBeenSet;

                    /**
                     * 最后告警时间
                     */
                    std::string m_lastAlarmTime;
                    bool m_lastAlarmTimeHasBeenSet;

                    /**
                     * 告警状态
0-未处理 1-已处理 2-已忽略
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 聚合日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 告警标签
                     */
                    std::vector<std::string> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 所属主账号Uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 所属主账号昵称
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 所属子账号Uin
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * 所属子账号昵称
                     */
                    std::string m_subNickname;
                    bool m_subNicknameHasBeenSet;

                    /**
                     * 账号类型
0 主账号AK 1 子账号AK 2 临时密钥
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 所属appid
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * 泄漏证据
                     */
                    std::vector<std::string> m_leakEvidence;
                    bool m_leakEvidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ACCESSKEYALARM_H_
