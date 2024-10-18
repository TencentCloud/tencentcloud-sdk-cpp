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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_REPORTCONVERSIONREQUEST_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_REPORTCONVERSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ReportConversion请求参数结构体
                */
                class ReportConversionRequest : public AbstractModel
                {
                public:
                    ReportConversionRequest();
                    ~ReportConversionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取短信应用ID。在 [短信控制台](https://console.cloud.tencent.com/smsv2/app-manage)  添加应用后生成的实际 SdkAppId，示例如1400006666。
                     * @return SmsSdkAppId 短信应用ID。在 [短信控制台](https://console.cloud.tencent.com/smsv2/app-manage)  添加应用后生成的实际 SdkAppId，示例如1400006666。
                     * 
                     */
                    std::string GetSmsSdkAppId() const;

                    /**
                     * 设置短信应用ID。在 [短信控制台](https://console.cloud.tencent.com/smsv2/app-manage)  添加应用后生成的实际 SdkAppId，示例如1400006666。
                     * @param _smsSdkAppId 短信应用ID。在 [短信控制台](https://console.cloud.tencent.com/smsv2/app-manage)  添加应用后生成的实际 SdkAppId，示例如1400006666。
                     * 
                     */
                    void SetSmsSdkAppId(const std::string& _smsSdkAppId);

                    /**
                     * 判断参数 SmsSdkAppId 是否已赋值
                     * @return SmsSdkAppId 是否已赋值
                     * 
                     */
                    bool SmsSdkAppIdHasBeenSet() const;

                    /**
                     * 获取发送短信返回的流水号。对应SendSms接口返回的SendStatusSet参数中的SerialNo字段。 
                     * @return SerialNo 发送短信返回的流水号。对应SendSms接口返回的SendStatusSet参数中的SerialNo字段。 
                     * 
                     */
                    std::string GetSerialNo() const;

                    /**
                     * 设置发送短信返回的流水号。对应SendSms接口返回的SendStatusSet参数中的SerialNo字段。 
                     * @param _serialNo 发送短信返回的流水号。对应SendSms接口返回的SendStatusSet参数中的SerialNo字段。 
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
                     * 获取用户回填时间，UNIX 时间戳（单位：秒）。
                     * @return ConversionTime 用户回填时间，UNIX 时间戳（单位：秒）。
                     * 
                     */
                    uint64_t GetConversionTime() const;

                    /**
                     * 设置用户回填时间，UNIX 时间戳（单位：秒）。
                     * @param _conversionTime 用户回填时间，UNIX 时间戳（单位：秒）。
                     * 
                     */
                    void SetConversionTime(const uint64_t& _conversionTime);

                    /**
                     * 判断参数 ConversionTime 是否已赋值
                     * @return ConversionTime 是否已赋值
                     * 
                     */
                    bool ConversionTimeHasBeenSet() const;

                private:

                    /**
                     * 短信应用ID。在 [短信控制台](https://console.cloud.tencent.com/smsv2/app-manage)  添加应用后生成的实际 SdkAppId，示例如1400006666。
                     */
                    std::string m_smsSdkAppId;
                    bool m_smsSdkAppIdHasBeenSet;

                    /**
                     * 发送短信返回的流水号。对应SendSms接口返回的SendStatusSet参数中的SerialNo字段。 
                     */
                    std::string m_serialNo;
                    bool m_serialNoHasBeenSet;

                    /**
                     * 用户回填时间，UNIX 时间戳（单位：秒）。
                     */
                    uint64_t m_conversionTime;
                    bool m_conversionTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_REPORTCONVERSIONREQUEST_H_
