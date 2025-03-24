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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMRECEIVERINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMRECEIVERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 告警接收人详情
                */
                class AlarmReceiverInfo : public AbstractModel
                {
                public:
                    AlarmReceiverInfo();
                    ~AlarmReceiverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警ID
                     * @return AlarmId 告警ID
                     * 
                     */
                    std::string GetAlarmId() const;

                    /**
                     * 设置告警ID
                     * @param _alarmId 告警ID
                     * 
                     */
                    void SetAlarmId(const std::string& _alarmId);

                    /**
                     * 判断参数 AlarmId 是否已赋值
                     * @return AlarmId 是否已赋值
                     * 
                     */
                    bool AlarmIdHasBeenSet() const;

                    /**
                     * 获取告警接收人ID
                     * @return AlarmReceiver 告警接收人ID
                     * 
                     */
                    std::string GetAlarmReceiver() const;

                    /**
                     * 设置告警接收人ID
                     * @param _alarmReceiver 告警接收人ID
                     * 
                     */
                    void SetAlarmReceiver(const std::string& _alarmReceiver);

                    /**
                     * 判断参数 AlarmReceiver 是否已赋值
                     * @return AlarmReceiver 是否已赋值
                     * 
                     */
                    bool AlarmReceiverHasBeenSet() const;

                    /**
                     * 获取邮件，0：未设置，1：成功，2：失败
                     * @return Email 邮件，0：未设置，1：成功，2：失败
                     * 
                     */
                    uint64_t GetEmail() const;

                    /**
                     * 设置邮件，0：未设置，1：成功，2：失败
                     * @param _email 邮件，0：未设置，1：成功，2：失败
                     * 
                     */
                    void SetEmail(const uint64_t& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取短信，0：未设置，1：成功，2：失败
                     * @return Sms 短信，0：未设置，1：成功，2：失败
                     * 
                     */
                    uint64_t GetSms() const;

                    /**
                     * 设置短信，0：未设置，1：成功，2：失败
                     * @param _sms 短信，0：未设置，1：成功，2：失败
                     * 
                     */
                    void SetSms(const uint64_t& _sms);

                    /**
                     * 判断参数 Sms 是否已赋值
                     * @return Sms 是否已赋值
                     * 
                     */
                    bool SmsHasBeenSet() const;

                    /**
                     * 获取微信，0：未设置，1：成功，2：失败
                     * @return Wechat 微信，0：未设置，1：成功，2：失败
                     * 
                     */
                    uint64_t GetWechat() const;

                    /**
                     * 设置微信，0：未设置，1：成功，2：失败
                     * @param _wechat 微信，0：未设置，1：成功，2：失败
                     * 
                     */
                    void SetWechat(const uint64_t& _wechat);

                    /**
                     * 判断参数 Wechat 是否已赋值
                     * @return Wechat 是否已赋值
                     * 
                     */
                    bool WechatHasBeenSet() const;

                    /**
                     * 获取电话，0：未设置，1：成功，2：失败
                     * @return Voice 电话，0：未设置，1：成功，2：失败
                     * 
                     */
                    uint64_t GetVoice() const;

                    /**
                     * 设置电话，0：未设置，1：成功，2：失败
                     * @param _voice 电话，0：未设置，1：成功，2：失败
                     * 
                     */
                    void SetVoice(const uint64_t& _voice);

                    /**
                     * 判断参数 Voice 是否已赋值
                     * @return Voice 是否已赋值
                     * 
                     */
                    bool VoiceHasBeenSet() const;

                    /**
                     * 获取企业微信，0：未设置，1：成功，2：失败
                     * @return Wecom 企业微信，0：未设置，1：成功，2：失败
                     * 
                     */
                    uint64_t GetWecom() const;

                    /**
                     * 设置企业微信，0：未设置，1：成功，2：失败
                     * @param _wecom 企业微信，0：未设置，1：成功，2：失败
                     * 
                     */
                    void SetWecom(const uint64_t& _wecom);

                    /**
                     * 判断参数 Wecom 是否已赋值
                     * @return Wecom 是否已赋值
                     * 
                     */
                    bool WecomHasBeenSet() const;

                    /**
                     * 获取http，0：未设置，1：成功，2：失败
                     * @return Http http，0：未设置，1：成功，2：失败
                     * 
                     */
                    uint64_t GetHttp() const;

                    /**
                     * 设置http，0：未设置，1：成功，2：失败
                     * @param _http http，0：未设置，1：成功，2：失败
                     * 
                     */
                    void SetHttp(const uint64_t& _http);

                    /**
                     * 判断参数 Http 是否已赋值
                     * @return Http 是否已赋值
                     * 
                     */
                    bool HttpHasBeenSet() const;

                    /**
                     * 获取企业微信群，0：未设置，1：成功，2：失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WecomGroup 企业微信群，0：未设置，1：成功，2：失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWecomGroup() const;

                    /**
                     * 设置企业微信群，0：未设置，1：成功，2：失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wecomGroup 企业微信群，0：未设置，1：成功，2：失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWecomGroup(const uint64_t& _wecomGroup);

                    /**
                     * 判断参数 WecomGroup 是否已赋值
                     * @return WecomGroup 是否已赋值
                     * 
                     */
                    bool WecomGroupHasBeenSet() const;

                    /**
                     * 获取飞书群，0：未设置，1：成功，2：失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LarkGroup 飞书群，0：未设置，1：成功，2：失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLarkGroup() const;

                    /**
                     * 设置飞书群，0：未设置，1：成功，2：失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _larkGroup 飞书群，0：未设置，1：成功，2：失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLarkGroup(const uint64_t& _larkGroup);

                    /**
                     * 判断参数 LarkGroup 是否已赋值
                     * @return LarkGroup 是否已赋值
                     * 
                     */
                    bool LarkGroupHasBeenSet() const;

                    /**
                     * 获取发送结果 大json格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmMessageSendResult 发送结果 大json格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmMessageSendResult() const;

                    /**
                     * 设置发送结果 大json格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmMessageSendResult 发送结果 大json格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmMessageSendResult(const std::string& _alarmMessageSendResult);

                    /**
                     * 判断参数 AlarmMessageSendResult 是否已赋值
                     * @return AlarmMessageSendResult 是否已赋值
                     * 
                     */
                    bool AlarmMessageSendResultHasBeenSet() const;

                private:

                    /**
                     * 告警ID
                     */
                    std::string m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * 告警接收人ID
                     */
                    std::string m_alarmReceiver;
                    bool m_alarmReceiverHasBeenSet;

                    /**
                     * 邮件，0：未设置，1：成功，2：失败
                     */
                    uint64_t m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 短信，0：未设置，1：成功，2：失败
                     */
                    uint64_t m_sms;
                    bool m_smsHasBeenSet;

                    /**
                     * 微信，0：未设置，1：成功，2：失败
                     */
                    uint64_t m_wechat;
                    bool m_wechatHasBeenSet;

                    /**
                     * 电话，0：未设置，1：成功，2：失败
                     */
                    uint64_t m_voice;
                    bool m_voiceHasBeenSet;

                    /**
                     * 企业微信，0：未设置，1：成功，2：失败
                     */
                    uint64_t m_wecom;
                    bool m_wecomHasBeenSet;

                    /**
                     * http，0：未设置，1：成功，2：失败
                     */
                    uint64_t m_http;
                    bool m_httpHasBeenSet;

                    /**
                     * 企业微信群，0：未设置，1：成功，2：失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_wecomGroup;
                    bool m_wecomGroupHasBeenSet;

                    /**
                     * 飞书群，0：未设置，1：成功，2：失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_larkGroup;
                    bool m_larkGroupHasBeenSet;

                    /**
                     * 发送结果 大json格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmMessageSendResult;
                    bool m_alarmMessageSendResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMRECEIVERINFO_H_
