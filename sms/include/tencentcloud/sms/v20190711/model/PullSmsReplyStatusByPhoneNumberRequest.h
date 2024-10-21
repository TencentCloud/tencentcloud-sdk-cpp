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

#ifndef TENCENTCLOUD_SMS_V20190711_MODEL_PULLSMSREPLYSTATUSBYPHONENUMBERREQUEST_H_
#define TENCENTCLOUD_SMS_V20190711_MODEL_PULLSMSREPLYSTATUSBYPHONENUMBERREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * PullSmsReplyStatusByPhoneNumber请求参数结构体
                */
                class PullSmsReplyStatusByPhoneNumberRequest : public AbstractModel
                {
                public:
                    PullSmsReplyStatusByPhoneNumberRequest();
                    ~PullSmsReplyStatusByPhoneNumberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取拉取起始时间，UNIX 时间戳（时间：秒）。
注：最大可拉取当前时期7天前的数据。
                     * @return SendDateTime 拉取起始时间，UNIX 时间戳（时间：秒）。
注：最大可拉取当前时期7天前的数据。
                     * 
                     */
                    uint64_t GetSendDateTime() const;

                    /**
                     * 设置拉取起始时间，UNIX 时间戳（时间：秒）。
注：最大可拉取当前时期7天前的数据。
                     * @param _sendDateTime 拉取起始时间，UNIX 时间戳（时间：秒）。
注：最大可拉取当前时期7天前的数据。
                     * 
                     */
                    void SetSendDateTime(const uint64_t& _sendDateTime);

                    /**
                     * 判断参数 SendDateTime 是否已赋值
                     * @return SendDateTime 是否已赋值
                     * 
                     */
                    bool SendDateTimeHasBeenSet() const;

                    /**
                     * 获取偏移量。
注：目前固定设置为0。
                     * @return Offset 偏移量。
注：目前固定设置为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量。
注：目前固定设置为0。
                     * @param _offset 偏移量。
注：目前固定设置为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取拉取最大条数，最多 100。
                     * @return Limit 拉取最大条数，最多 100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置拉取最大条数，最多 100。
                     * @param _limit 拉取最大条数，最多 100。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取下发目的手机号码，依据 E.164 标准为：+[国家（或地区）码][手机号] ，示例如：+8618501234444， 其中前面有一个+号 ，86为国家码，18501234444为手机号。
                     * @return PhoneNumber 下发目的手机号码，依据 E.164 标准为：+[国家（或地区）码][手机号] ，示例如：+8618501234444， 其中前面有一个+号 ，86为国家码，18501234444为手机号。
                     * 
                     */
                    std::string GetPhoneNumber() const;

                    /**
                     * 设置下发目的手机号码，依据 E.164 标准为：+[国家（或地区）码][手机号] ，示例如：+8618501234444， 其中前面有一个+号 ，86为国家码，18501234444为手机号。
                     * @param _phoneNumber 下发目的手机号码，依据 E.164 标准为：+[国家（或地区）码][手机号] ，示例如：+8618501234444， 其中前面有一个+号 ，86为国家码，18501234444为手机号。
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
                     * 获取短信SdkAppid在 [短信控制台](https://console.cloud.tencent.com/smsv2) 添加应用后生成的实际SdkAppid，例如1400006666。
                     * @return SmsSdkAppid 短信SdkAppid在 [短信控制台](https://console.cloud.tencent.com/smsv2) 添加应用后生成的实际SdkAppid，例如1400006666。
                     * 
                     */
                    std::string GetSmsSdkAppid() const;

                    /**
                     * 设置短信SdkAppid在 [短信控制台](https://console.cloud.tencent.com/smsv2) 添加应用后生成的实际SdkAppid，例如1400006666。
                     * @param _smsSdkAppid 短信SdkAppid在 [短信控制台](https://console.cloud.tencent.com/smsv2) 添加应用后生成的实际SdkAppid，例如1400006666。
                     * 
                     */
                    void SetSmsSdkAppid(const std::string& _smsSdkAppid);

                    /**
                     * 判断参数 SmsSdkAppid 是否已赋值
                     * @return SmsSdkAppid 是否已赋值
                     * 
                     */
                    bool SmsSdkAppidHasBeenSet() const;

                    /**
                     * 获取拉取截止时间，UNIX 时间戳（时间：秒）。
                     * @return EndDateTime 拉取截止时间，UNIX 时间戳（时间：秒）。
                     * 
                     */
                    uint64_t GetEndDateTime() const;

                    /**
                     * 设置拉取截止时间，UNIX 时间戳（时间：秒）。
                     * @param _endDateTime 拉取截止时间，UNIX 时间戳（时间：秒）。
                     * 
                     */
                    void SetEndDateTime(const uint64_t& _endDateTime);

                    /**
                     * 判断参数 EndDateTime 是否已赋值
                     * @return EndDateTime 是否已赋值
                     * 
                     */
                    bool EndDateTimeHasBeenSet() const;

                private:

                    /**
                     * 拉取起始时间，UNIX 时间戳（时间：秒）。
注：最大可拉取当前时期7天前的数据。
                     */
                    uint64_t m_sendDateTime;
                    bool m_sendDateTimeHasBeenSet;

                    /**
                     * 偏移量。
注：目前固定设置为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 拉取最大条数，最多 100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 下发目的手机号码，依据 E.164 标准为：+[国家（或地区）码][手机号] ，示例如：+8618501234444， 其中前面有一个+号 ，86为国家码，18501234444为手机号。
                     */
                    std::string m_phoneNumber;
                    bool m_phoneNumberHasBeenSet;

                    /**
                     * 短信SdkAppid在 [短信控制台](https://console.cloud.tencent.com/smsv2) 添加应用后生成的实际SdkAppid，例如1400006666。
                     */
                    std::string m_smsSdkAppid;
                    bool m_smsSdkAppidHasBeenSet;

                    /**
                     * 拉取截止时间，UNIX 时间戳（时间：秒）。
                     */
                    uint64_t m_endDateTime;
                    bool m_endDateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20190711_MODEL_PULLSMSREPLYSTATUSBYPHONENUMBERREQUEST_H_
