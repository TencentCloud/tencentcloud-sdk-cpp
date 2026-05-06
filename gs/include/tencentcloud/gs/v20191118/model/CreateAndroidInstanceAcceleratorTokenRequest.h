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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCEACCELERATORTOKENREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCEACCELERATORTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * CreateAndroidInstanceAcceleratorToken请求参数结构体
                */
                class CreateAndroidInstanceAcceleratorTokenRequest : public AbstractModel
                {
                public:
                    CreateAndroidInstanceAcceleratorTokenRequest();
                    ~CreateAndroidInstanceAcceleratorTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID 列表。每次请求的实例的上限为 500。
                     * @return AndroidInstanceIds 实例 ID 列表。每次请求的实例的上限为 500。
                     * 
                     */
                    std::vector<std::string> GetAndroidInstanceIds() const;

                    /**
                     * 设置实例 ID 列表。每次请求的实例的上限为 500。
                     * @param _androidInstanceIds 实例 ID 列表。每次请求的实例的上限为 500。
                     * 
                     */
                    void SetAndroidInstanceIds(const std::vector<std::string>& _androidInstanceIds);

                    /**
                     * 判断参数 AndroidInstanceIds 是否已赋值
                     * @return AndroidInstanceIds 是否已赋值
                     * 
                     */
                    bool AndroidInstanceIdsHasBeenSet() const;

                    /**
                     * 获取用户IP，可以根据该 IP 选择就近加速点。如果不填，将自动选择就近加速点。
                     * @return UserIP 用户IP，可以根据该 IP 选择就近加速点。如果不填，将自动选择就近加速点。
                     * 
                     */
                    std::string GetUserIP() const;

                    /**
                     * 设置用户IP，可以根据该 IP 选择就近加速点。如果不填，将自动选择就近加速点。
                     * @param _userIP 用户IP，可以根据该 IP 选择就近加速点。如果不填，将自动选择就近加速点。
                     * 
                     */
                    void SetUserIP(const std::string& _userIP);

                    /**
                     * 判断参数 UserIP 是否已赋值
                     * @return UserIP 是否已赋值
                     * 
                     */
                    bool UserIPHasBeenSet() const;

                    /**
                     * 获取有效期，默认为 12 小时，最长为 7 天，建议设置不要过长，否则泄漏风险越大。支持 s（秒）、m（分）、h（小时）、d（天）等单位，比如 1d、24h、86400s 都表示一天，1h2m3s 表示一小时两分三秒
                     * @return ExpirationDuration 有效期，默认为 12 小时，最长为 7 天，建议设置不要过长，否则泄漏风险越大。支持 s（秒）、m（分）、h（小时）、d（天）等单位，比如 1d、24h、86400s 都表示一天，1h2m3s 表示一小时两分三秒
                     * 
                     */
                    std::string GetExpirationDuration() const;

                    /**
                     * 设置有效期，默认为 12 小时，最长为 7 天，建议设置不要过长，否则泄漏风险越大。支持 s（秒）、m（分）、h（小时）、d（天）等单位，比如 1d、24h、86400s 都表示一天，1h2m3s 表示一小时两分三秒
                     * @param _expirationDuration 有效期，默认为 12 小时，最长为 7 天，建议设置不要过长，否则泄漏风险越大。支持 s（秒）、m（分）、h（小时）、d（天）等单位，比如 1d、24h、86400s 都表示一天，1h2m3s 表示一小时两分三秒
                     * 
                     */
                    void SetExpirationDuration(const std::string& _expirationDuration);

                    /**
                     * 判断参数 ExpirationDuration 是否已赋值
                     * @return ExpirationDuration 是否已赋值
                     * 
                     */
                    bool ExpirationDurationHasBeenSet() const;

                private:

                    /**
                     * 实例 ID 列表。每次请求的实例的上限为 500。
                     */
                    std::vector<std::string> m_androidInstanceIds;
                    bool m_androidInstanceIdsHasBeenSet;

                    /**
                     * 用户IP，可以根据该 IP 选择就近加速点。如果不填，将自动选择就近加速点。
                     */
                    std::string m_userIP;
                    bool m_userIPHasBeenSet;

                    /**
                     * 有效期，默认为 12 小时，最长为 7 天，建议设置不要过长，否则泄漏风险越大。支持 s（秒）、m（分）、h（小时）、d（天）等单位，比如 1d、24h、86400s 都表示一天，1h2m3s 表示一小时两分三秒
                     */
                    std::string m_expirationDuration;
                    bool m_expirationDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCEACCELERATORTOKENREQUEST_H_
