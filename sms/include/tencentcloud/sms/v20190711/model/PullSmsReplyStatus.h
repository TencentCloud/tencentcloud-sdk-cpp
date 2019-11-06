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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_PULLSMSREPLYSTATUS_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_PULLSMSREPLYSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20190711
        {
            namespace Model
            {
                /**
                * 短信回复状态
                */
                class PullSmsReplyStatus : public AbstractModel
                {
                public:
                    PullSmsReplyStatus();
                    ~PullSmsReplyStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通道扩展码，默认没有开通（需要填空）
                     * @return ExtendCode 通道扩展码，默认没有开通（需要填空）
                     */
                    std::string GetExtendCode() const;

                    /**
                     * 设置通道扩展码，默认没有开通（需要填空）
                     * @param ExtendCode 通道扩展码，默认没有开通（需要填空）
                     */
                    void SetExtendCode(const std::string& _extendCode);

                    /**
                     * 判断参数 ExtendCode 是否已赋值
                     * @return ExtendCode 是否已赋值
                     */
                    bool ExtendCodeHasBeenSet() const;

                    /**
                     * 获取国家（或地区）码
                     * @return NationCode 国家（或地区）码
                     */
                    std::string GetNationCode() const;

                    /**
                     * 设置国家（或地区）码
                     * @param NationCode 国家（或地区）码
                     */
                    void SetNationCode(const std::string& _nationCode);

                    /**
                     * 判断参数 NationCode 是否已赋值
                     * @return NationCode 是否已赋值
                     */
                    bool NationCodeHasBeenSet() const;

                    /**
                     * 获取手机号码（ e.164 标准）
                     * @return PhoneNumber 手机号码（ e.164 标准）
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置手机号码（ e.164 标准）
                     * @param PhoneNumber 手机号码（ e.164 标准）
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取短信签名
                     * @return Sign 短信签名
                     */
                    std::string GetSign() const;

                    /**
                     * 设置短信签名
                     * @param Sign 短信签名
                     */
                    void SetSign(const std::string& _sign);

                    /**
                     * 判断参数 Sign 是否已赋值
                     * @return Sign 是否已赋值
                     */
                    bool SignHasBeenSet() const;

                    /**
                     * 获取用户回复的内容
                     * @return ReplyContent 用户回复的内容
                     */
                    std::string GetReplyContent() const;

                    /**
                     * 设置用户回复的内容
                     * @param ReplyContent 用户回复的内容
                     */
                    void SetReplyContent(const std::string& _replyContent);

                    /**
                     * 判断参数 ReplyContent 是否已赋值
                     * @return ReplyContent 是否已赋值
                     */
                    bool ReplyContentHasBeenSet() const;

                    /**
                     * 获取回复时间，UNIX 时间戳（单位：秒）
                     * @return ReplyTime 回复时间，UNIX 时间戳（单位：秒）
                     */
                    uint64_t GetReplyTime() const;

                    /**
                     * 设置回复时间，UNIX 时间戳（单位：秒）
                     * @param ReplyTime 回复时间，UNIX 时间戳（单位：秒）
                     */
                    void SetReplyTime(const uint64_t& _replyTime);

                    /**
                     * 判断参数 ReplyTime 是否已赋值
                     * @return ReplyTime 是否已赋值
                     */
                    bool ReplyTimeHasBeenSet() const;

                private:

                    /**
                     * 通道扩展码，默认没有开通（需要填空）
                     */
                    std::string m_extendCode;
                    bool m_extendCodeHasBeenSet;

                    /**
                     * 国家（或地区）码
                     */
                    std::string m_nationCode;
                    bool m_nationCodeHasBeenSet;

                    /**
                     * 手机号码（ e.164 标准）
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 短信签名
                     */
                    std::string m_sign;
                    bool m_signHasBeenSet;

                    /**
                     * 用户回复的内容
                     */
                    std::string m_replyContent;
                    bool m_replyContentHasBeenSet;

                    /**
                     * 回复时间，UNIX 时间戳（单位：秒）
                     */
                    uint64_t m_replyTime;
                    bool m_replyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_PULLSMSREPLYSTATUS_H_
