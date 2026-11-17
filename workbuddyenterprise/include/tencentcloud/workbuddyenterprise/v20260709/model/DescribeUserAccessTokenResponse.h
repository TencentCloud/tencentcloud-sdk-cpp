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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEUSERACCESSTOKENRESPONSE_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEUSERACCESSTOKENRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * DescribeUserAccessToken返回参数结构体
                */
                class DescribeUserAccessTokenResponse : public AbstractModel
                {
                public:
                    DescribeUserAccessTokenResponse();
                    ~DescribeUserAccessTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>OneID 颁发的用户级访问凭证</p>
                     * @return AccessToken <p>OneID 颁发的用户级访问凭证</p>
                     * 
                     */
                    std::string GetAccessToken() const;

                    /**
                     * 判断参数 AccessToken 是否已赋值
                     * @return AccessToken 是否已赋值
                     * 
                     */
                    bool AccessTokenHasBeenSet() const;

                    /**
                     * 获取<p>凭证类型，目前固定 Bearer</p>
                     * @return TokenType <p>凭证类型，目前固定 Bearer</p>
                     * 
                     */
                    std::string GetTokenType() const;

                    /**
                     * 判断参数 TokenType 是否已赋值
                     * @return TokenType 是否已赋值
                     * 
                     */
                    bool TokenTypeHasBeenSet() const;

                    /**
                     * 获取<p>凭证有效期，单位：秒</p>
                     * @return ExpiresIn <p>凭证有效期，单位：秒</p>
                     * 
                     */
                    int64_t GetExpiresIn() const;

                    /**
                     * 判断参数 ExpiresIn 是否已赋值
                     * @return ExpiresIn 是否已赋值
                     * 
                     */
                    bool ExpiresInHasBeenSet() const;

                private:

                    /**
                     * <p>OneID 颁发的用户级访问凭证</p>
                     */
                    std::string m_accessToken;
                    bool m_accessTokenHasBeenSet;

                    /**
                     * <p>凭证类型，目前固定 Bearer</p>
                     */
                    std::string m_tokenType;
                    bool m_tokenTypeHasBeenSet;

                    /**
                     * <p>凭证有效期，单位：秒</p>
                     */
                    int64_t m_expiresIn;
                    bool m_expiresInHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBEUSERACCESSTOKENRESPONSE_H_
