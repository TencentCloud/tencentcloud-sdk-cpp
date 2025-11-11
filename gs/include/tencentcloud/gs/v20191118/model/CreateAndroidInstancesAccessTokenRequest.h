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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCESACCESSTOKENREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCESACCESSTOKENREQUEST_H_

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
                * CreateAndroidInstancesAccessToken请求参数结构体
                */
                class CreateAndroidInstancesAccessTokenRequest : public AbstractModel
                {
                public:
                    CreateAndroidInstancesAccessTokenRequest();
                    ~CreateAndroidInstancesAccessTokenRequest() = default;
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
                     * 获取有效期，默认为 12 小时，最大为 24 小时。支持 s（秒）、m（分）、h（小时）等单位，比如 12h 表示 12 小时，1h2m3s 表示一小时两分三秒
                     * @return ExpirationDuration 有效期，默认为 12 小时，最大为 24 小时。支持 s（秒）、m（分）、h（小时）等单位，比如 12h 表示 12 小时，1h2m3s 表示一小时两分三秒
                     * 
                     */
                    std::string GetExpirationDuration() const;

                    /**
                     * 设置有效期，默认为 12 小时，最大为 24 小时。支持 s（秒）、m（分）、h（小时）等单位，比如 12h 表示 12 小时，1h2m3s 表示一小时两分三秒
                     * @param _expirationDuration 有效期，默认为 12 小时，最大为 24 小时。支持 s（秒）、m（分）、h（小时）等单位，比如 12h 表示 12 小时，1h2m3s 表示一小时两分三秒
                     * 
                     */
                    void SetExpirationDuration(const std::string& _expirationDuration);

                    /**
                     * 判断参数 ExpirationDuration 是否已赋值
                     * @return ExpirationDuration 是否已赋值
                     * 
                     */
                    bool ExpirationDurationHasBeenSet() const;

                    /**
                     * 获取模式。
STANDARD：默认值，标准模式
ACCELERATED：加速模式，该模式需要开通加速服务才能生效
                     * @return Mode 模式。
STANDARD：默认值，标准模式
ACCELERATED：加速模式，该模式需要开通加速服务才能生效
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置模式。
STANDARD：默认值，标准模式
ACCELERATED：加速模式，该模式需要开通加速服务才能生效
                     * @param _mode 模式。
STANDARD：默认值，标准模式
ACCELERATED：加速模式，该模式需要开通加速服务才能生效
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取用户 IP。在加速模式下，该字段必填。
                     * @return UserIP 用户 IP。在加速模式下，该字段必填。
                     * 
                     */
                    std::string GetUserIP() const;

                    /**
                     * 设置用户 IP。在加速模式下，该字段必填。
                     * @param _userIP 用户 IP。在加速模式下，该字段必填。
                     * 
                     */
                    void SetUserIP(const std::string& _userIP);

                    /**
                     * 判断参数 UserIP 是否已赋值
                     * @return UserIP 是否已赋值
                     * 
                     */
                    bool UserIPHasBeenSet() const;

                private:

                    /**
                     * 实例 ID 列表。每次请求的实例的上限为 500。
                     */
                    std::vector<std::string> m_androidInstanceIds;
                    bool m_androidInstanceIdsHasBeenSet;

                    /**
                     * 有效期，默认为 12 小时，最大为 24 小时。支持 s（秒）、m（分）、h（小时）等单位，比如 12h 表示 12 小时，1h2m3s 表示一小时两分三秒
                     */
                    std::string m_expirationDuration;
                    bool m_expirationDurationHasBeenSet;

                    /**
                     * 模式。
STANDARD：默认值，标准模式
ACCELERATED：加速模式，该模式需要开通加速服务才能生效
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 用户 IP。在加速模式下，该字段必填。
                     */
                    std::string m_userIP;
                    bool m_userIPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCESACCESSTOKENREQUEST_H_
