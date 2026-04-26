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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_ACQUIRESANDBOXINSTANCETOKENRESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_ACQUIRESANDBOXINSTANCETOKENRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * AcquireSandboxInstanceToken返回参数结构体
                */
                class AcquireSandboxInstanceTokenResponse : public AbstractModel
                {
                public:
                    AcquireSandboxInstanceTokenResponse();
                    ~AcquireSandboxInstanceTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>访问Token</p>
                     * @return Token <p>访问Token</p>
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取<p>过期时间</p>
                     * @return ExpiresAt <p>过期时间</p>
                     * 
                     */
                    std::string GetExpiresAt() const;

                    /**
                     * 判断参数 ExpiresAt 是否已赋值
                     * @return ExpiresAt 是否已赋值
                     * 
                     */
                    bool ExpiresAtHasBeenSet() const;

                    /**
                     * 获取<p>非管控面（envd）的访问Token</p>
                     * @return TrafficToken <p>非管控面（envd）的访问Token</p>
                     * 
                     */
                    std::string GetTrafficToken() const;

                    /**
                     * 判断参数 TrafficToken 是否已赋值
                     * @return TrafficToken 是否已赋值
                     * 
                     */
                    bool TrafficTokenHasBeenSet() const;

                private:

                    /**
                     * <p>访问Token</p>
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * <p>过期时间</p>
                     */
                    std::string m_expiresAt;
                    bool m_expiresAtHasBeenSet;

                    /**
                     * <p>非管控面（envd）的访问Token</p>
                     */
                    std::string m_trafficToken;
                    bool m_trafficTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_ACQUIRESANDBOXINSTANCETOKENRESPONSE_H_
