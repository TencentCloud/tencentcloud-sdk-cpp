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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_SENDMULTIGLOBALSMSREQUEST_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_SENDMULTIGLOBALSMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sms/v20210111/model/MultiSmsInfo.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * SendMultiGlobalSms请求参数结构体
                */
                class SendMultiGlobalSmsRequest : public AbstractModel
                {
                public:
                    SendMultiGlobalSmsRequest();
                    ~SendMultiGlobalSmsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>短信 SdkAppId，在 <a href="https://console.cloud.tencent.com/smsv2/app-manage">短信控制台</a>  添加应用后生成的实际 SdkAppId。</p>
                     * @return SmsSdkAppId <p>短信 SdkAppId，在 <a href="https://console.cloud.tencent.com/smsv2/app-manage">短信控制台</a>  添加应用后生成的实际 SdkAppId。</p>
                     * 
                     */
                    std::string GetSmsSdkAppId() const;

                    /**
                     * 设置<p>短信 SdkAppId，在 <a href="https://console.cloud.tencent.com/smsv2/app-manage">短信控制台</a>  添加应用后生成的实际 SdkAppId。</p>
                     * @param _smsSdkAppId <p>短信 SdkAppId，在 <a href="https://console.cloud.tencent.com/smsv2/app-manage">短信控制台</a>  添加应用后生成的实际 SdkAppId。</p>
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
                     * 获取<p>批量发送信息列表，单次请求最多支持200个号码且要求全为国际/港澳台号码。每个元素包含一个手机号码及其对应的模板、模板参数等信息。</p>
                     * @return MultiSmsInfoSet <p>批量发送信息列表，单次请求最多支持200个号码且要求全为国际/港澳台号码。每个元素包含一个手机号码及其对应的模板、模板参数等信息。</p>
                     * 
                     */
                    std::vector<MultiSmsInfo> GetMultiSmsInfoSet() const;

                    /**
                     * 设置<p>批量发送信息列表，单次请求最多支持200个号码且要求全为国际/港澳台号码。每个元素包含一个手机号码及其对应的模板、模板参数等信息。</p>
                     * @param _multiSmsInfoSet <p>批量发送信息列表，单次请求最多支持200个号码且要求全为国际/港澳台号码。每个元素包含一个手机号码及其对应的模板、模板参数等信息。</p>
                     * 
                     */
                    void SetMultiSmsInfoSet(const std::vector<MultiSmsInfo>& _multiSmsInfoSet);

                    /**
                     * 判断参数 MultiSmsInfoSet 是否已赋值
                     * @return MultiSmsInfoSet 是否已赋值
                     * 
                     */
                    bool MultiSmsInfoSetHasBeenSet() const;

                private:

                    /**
                     * <p>短信 SdkAppId，在 <a href="https://console.cloud.tencent.com/smsv2/app-manage">短信控制台</a>  添加应用后生成的实际 SdkAppId。</p>
                     */
                    std::string m_smsSdkAppId;
                    bool m_smsSdkAppIdHasBeenSet;

                    /**
                     * <p>批量发送信息列表，单次请求最多支持200个号码且要求全为国际/港澳台号码。每个元素包含一个手机号码及其对应的模板、模板参数等信息。</p>
                     */
                    std::vector<MultiSmsInfo> m_multiSmsInfoSet;
                    bool m_multiSmsInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_SENDMULTIGLOBALSMSREQUEST_H_
