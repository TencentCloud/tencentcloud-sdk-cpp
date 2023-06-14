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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_PULLSMSSENDSTATUSREQUEST_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_PULLSMSSENDSTATUSREQUEST_H_

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
                * PullSmsSendStatus请求参数结构体
                */
                class PullSmsSendStatusRequest : public AbstractModel
                {
                public:
                    PullSmsSendStatusRequest();
                    ~PullSmsSendStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取拉取最大条数，最多100条。
                     * @return Limit 拉取最大条数，最多100条。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置拉取最大条数，最多100条。
                     * @param _limit 拉取最大条数，最多100条。
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
                     * 获取短信 SdkAppId 在 [短信控制台](https://console.cloud.tencent.com/smsv2/app-manage) 添加应用后生成的实际 SdkAppId，例如1400006666。
                     * @return SmsSdkAppId 短信 SdkAppId 在 [短信控制台](https://console.cloud.tencent.com/smsv2/app-manage) 添加应用后生成的实际 SdkAppId，例如1400006666。
                     * 
                     */
                    std::string GetSmsSdkAppId() const;

                    /**
                     * 设置短信 SdkAppId 在 [短信控制台](https://console.cloud.tencent.com/smsv2/app-manage) 添加应用后生成的实际 SdkAppId，例如1400006666。
                     * @param _smsSdkAppId 短信 SdkAppId 在 [短信控制台](https://console.cloud.tencent.com/smsv2/app-manage) 添加应用后生成的实际 SdkAppId，例如1400006666。
                     * 
                     */
                    void SetSmsSdkAppId(const std::string& _smsSdkAppId);

                    /**
                     * 判断参数 SmsSdkAppId 是否已赋值
                     * @return SmsSdkAppId 是否已赋值
                     * 
                     */
                    bool SmsSdkAppIdHasBeenSet() const;

                private:

                    /**
                     * 拉取最大条数，最多100条。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 短信 SdkAppId 在 [短信控制台](https://console.cloud.tencent.com/smsv2/app-manage) 添加应用后生成的实际 SdkAppId，例如1400006666。
                     */
                    std::string m_smsSdkAppId;
                    bool m_smsSdkAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_PULLSMSSENDSTATUSREQUEST_H_
