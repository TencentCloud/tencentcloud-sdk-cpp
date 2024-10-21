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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_PULLSMSSENDSTATUS_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_PULLSMSSENDSTATUS_H_

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
                * 短信的下发状态详细信息
                */
                class PullSmsSendStatus : public AbstractModel
                {
                public:
                    PullSmsSendStatus();
                    ~PullSmsSendStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户实际接收到短信的时间，UNIX 时间戳（单位：秒）。
                     * @return UserReceiveTime 用户实际接收到短信的时间，UNIX 时间戳（单位：秒）。
                     * 
                     */
                    uint64_t GetUserReceiveTime() const;

                    /**
                     * 设置用户实际接收到短信的时间，UNIX 时间戳（单位：秒）。
                     * @param _userReceiveTime 用户实际接收到短信的时间，UNIX 时间戳（单位：秒）。
                     * 
                     */
                    void SetUserReceiveTime(const uint64_t& _userReceiveTime);

                    /**
                     * 判断参数 UserReceiveTime 是否已赋值
                     * @return UserReceiveTime 是否已赋值
                     * 
                     */
                    bool UserReceiveTimeHasBeenSet() const;

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
                     * 获取本次发送标识 ID。
                     * @return SerialNo 本次发送标识 ID。
                     * 
                     */
                    std::string GetSerialNo() const;

                    /**
                     * 设置本次发送标识 ID。
                     * @param _serialNo 本次发送标识 ID。
                     * 
                     */
                    void SetSerialNo(const std::string& _serialNo);

                    /**
                     * 判断参数 SerialNo 是否已赋值
                     * @return SerialNo 是否已赋值
                     * 
                     */
                    bool SerialNoHasBeenSet() const;

                    /**
                     * 获取实际是否收到短信接收状态，SUCCESS（成功）、FAIL（失败）。
                     * @return ReportStatus 实际是否收到短信接收状态，SUCCESS（成功）、FAIL（失败）。
                     * 
                     */
                    std::string GetReportStatus() const;

                    /**
                     * 设置实际是否收到短信接收状态，SUCCESS（成功）、FAIL（失败）。
                     * @param _reportStatus 实际是否收到短信接收状态，SUCCESS（成功）、FAIL（失败）。
                     * 
                     */
                    void SetReportStatus(const std::string& _reportStatus);

                    /**
                     * 判断参数 ReportStatus 是否已赋值
                     * @return ReportStatus 是否已赋值
                     * 
                     */
                    bool ReportStatusHasBeenSet() const;

                    /**
                     * 获取用户接收短信状态描述。
                     * @return Description 用户接收短信状态描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置用户接收短信状态描述。
                     * @param _description 用户接收短信状态描述。
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
                     * 获取用户的 session 内容。与请求中的 SessionContext 一致，默认为空，如需开通请联系 [腾讯云短信小助手](https://cloud.tencent.com/document/product/382/3773#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81) 评估。
                     * @return SessionContext 用户的 session 内容。与请求中的 SessionContext 一致，默认为空，如需开通请联系 [腾讯云短信小助手](https://cloud.tencent.com/document/product/382/3773#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81) 评估。
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置用户的 session 内容。与请求中的 SessionContext 一致，默认为空，如需开通请联系 [腾讯云短信小助手](https://cloud.tencent.com/document/product/382/3773#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81) 评估。
                     * @param _sessionContext 用户的 session 内容。与请求中的 SessionContext 一致，默认为空，如需开通请联系 [腾讯云短信小助手](https://cloud.tencent.com/document/product/382/3773#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81) 评估。
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                private:

                    /**
                     * 用户实际接收到短信的时间，UNIX 时间戳（单位：秒）。
                     */
                    uint64_t m_userReceiveTime;
                    bool m_userReceiveTimeHasBeenSet;

                    /**
                     * 国家（或地区）码。
                     */
                    std::string m_countryCode;
                    bool m_countryCodeHasBeenSet;

                    /**
                     * 用户号码，普通格式，示例如：18501234444。
                     */
                    std::string m_subscriberNumber;
                    bool m_subscriberNumberHasBeenSet;

                    /**
                     * 手机号码，E.164标准，+[国家或地区码][手机号] ，示例如：+8618501234444， 其中前面有一个+号 ，86为国家码，18501234444为手机号。
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 本次发送标识 ID。
                     */
                    std::string m_serialNo;
                    bool m_serialNoHasBeenSet;

                    /**
                     * 实际是否收到短信接收状态，SUCCESS（成功）、FAIL（失败）。
                     */
                    std::string m_reportStatus;
                    bool m_reportStatusHasBeenSet;

                    /**
                     * 用户接收短信状态描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 用户的 session 内容。与请求中的 SessionContext 一致，默认为空，如需开通请联系 [腾讯云短信小助手](https://cloud.tencent.com/document/product/382/3773#.E6.8A.80.E6.9C.AF.E4.BA.A4.E6.B5.81) 评估。
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_PULLSMSSENDSTATUS_H_
