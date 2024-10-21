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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_PULLSMSREPLYSTATUS_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_PULLSMSREPLYSTATUS_H_

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
        namespace V20210111
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
                     * 获取短信码号扩展号，默认未开通，如需开通请联系 [sms helper](https://cloud.tencent.com/document/product/382/3773#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81)。
                     * @return ExtendCode 短信码号扩展号，默认未开通，如需开通请联系 [sms helper](https://cloud.tencent.com/document/product/382/3773#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81)。
                     * 
                     */
                    std::string GetExtendCode() const;

                    /**
                     * 设置短信码号扩展号，默认未开通，如需开通请联系 [sms helper](https://cloud.tencent.com/document/product/382/3773#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81)。
                     * @param _extendCode 短信码号扩展号，默认未开通，如需开通请联系 [sms helper](https://cloud.tencent.com/document/product/382/3773#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81)。
                     * 
                     */
                    void SetExtendCode(const std::string& _extendCode);

                    /**
                     * 判断参数 ExtendCode 是否已赋值
                     * @return ExtendCode 是否已赋值
                     * 
                     */
                    bool ExtendCodeHasBeenSet() const;

                    /**
                     * 获取国家（或地区）码。
                     * @return CountryCode 国家（或地区）码。
                     * 
                     */
                    std::string GetCountryCode() const;

                    /**
                     * 设置国家（或地区）码。
                     * @param _countryCode 国家（或地区）码。
                     * 
                     */
                    void SetCountryCode(const std::string& _countryCode);

                    /**
                     * 判断参数 CountryCode 是否已赋值
                     * @return CountryCode 是否已赋值
                     * 
                     */
                    bool CountryCodeHasBeenSet() const;

                    /**
                     * 获取手机号码，E.164标准，+[国家或地区码][手机号] ，示例如：+8618501234444， 其中前面有一个+号 ，86为国家码，18501234444为手机号。
                     * @return PhoneNumber 手机号码，E.164标准，+[国家或地区码][手机号] ，示例如：+8618501234444， 其中前面有一个+号 ，86为国家码，18501234444为手机号。
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置手机号码，E.164标准，+[国家或地区码][手机号] ，示例如：+8618501234444， 其中前面有一个+号 ，86为国家码，18501234444为手机号。
                     * @param _phoneNumber 手机号码，E.164标准，+[国家或地区码][手机号] ，示例如：+8618501234444， 其中前面有一个+号 ，86为国家码，18501234444为手机号。
                     * 
                     */
                    void SetPhoneNumber(const std::string& _phoneNumber);

                    /**
                     * 判断参数 PhoneNumber 是否已赋值
                     * @return PhoneNumber 是否已赋值
                     * 
                     */
                    bool PhoneNumberHasBeenSet() const;

                    /**
                     * 获取短信签名名称。
                     * @return SignName 短信签名名称。
                     * 
                     */
                    std::string GetSignName() const;

                    /**
                     * 设置短信签名名称。
                     * @param _signName 短信签名名称。
                     * 
                     */
                    void SetSignName(const std::string& _signName);

                    /**
                     * 判断参数 SignName 是否已赋值
                     * @return SignName 是否已赋值
                     * 
                     */
                    bool SignNameHasBeenSet() const;

                    /**
                     * 获取用户回复的内容。
                     * @return ReplyContent 用户回复的内容。
                     * 
                     */
                    std::string GetReplyContent() const;

                    /**
                     * 设置用户回复的内容。
                     * @param _replyContent 用户回复的内容。
                     * 
                     */
                    void SetReplyContent(const std::string& _replyContent);

                    /**
                     * 判断参数 ReplyContent 是否已赋值
                     * @return ReplyContent 是否已赋值
                     * 
                     */
                    bool ReplyContentHasBeenSet() const;

                    /**
                     * 获取回复时间，UNIX 时间戳（单位：秒）。
                     * @return ReplyTime 回复时间，UNIX 时间戳（单位：秒）。
                     * 
                     */
                    uint64_t GetReplyTime() const;

                    /**
                     * 设置回复时间，UNIX 时间戳（单位：秒）。
                     * @param _replyTime 回复时间，UNIX 时间戳（单位：秒）。
                     * 
                     */
                    void SetReplyTime(const uint64_t& _replyTime);

                    /**
                     * 判断参数 ReplyTime 是否已赋值
                     * @return ReplyTime 是否已赋值
                     * 
                     */
                    bool ReplyTimeHasBeenSet() const;

                    /**
                     * 获取用户号码，普通格式，示例如：18501234444。
                     * @return SubscriberNumber 用户号码，普通格式，示例如：18501234444。
                     * 
                     */
                    std::string GetSubscriberNumber() const;

                    /**
                     * 设置用户号码，普通格式，示例如：18501234444。
                     * @param _subscriberNumber 用户号码，普通格式，示例如：18501234444。
                     * 
                     */
                    void SetSubscriberNumber(const std::string& _subscriberNumber);

                    /**
                     * 判断参数 SubscriberNumber 是否已赋值
                     * @return SubscriberNumber 是否已赋值
                     * 
                     */
                    bool SubscriberNumberHasBeenSet() const;

                private:

                    /**
                     * 短信码号扩展号，默认未开通，如需开通请联系 [sms helper](https://cloud.tencent.com/document/product/382/3773#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81)。
                     */
                    std::string m_extendCode;
                    bool m_extendCodeHasBeenSet;

                    /**
                     * 国家（或地区）码。
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * 手机号码，E.164标准，+[国家或地区码][手机号] ，示例如：+8618501234444， 其中前面有一个+号 ，86为国家码，18501234444为手机号。
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 短信签名名称。
                     */
                    std::string m_signName;
                    bool m_signNameHasBeenSet;

                    /**
                     * 用户回复的内容。
                     */
                    std::string m_replyContent;
                    bool m_replyContentHasBeenSet;

                    /**
                     * 回复时间，UNIX 时间戳（单位：秒）。
                     */
                    uint64_t m_replyTime;
                    bool m_replyTimeHasBeenSet;

                    /**
                     * 用户号码，普通格式，示例如：18501234444。
                     */
                    std::string m_subscriberNumber;
                    bool m_subscriberNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_PULLSMSREPLYSTATUS_H_
