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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_RENEWMCPTOKENREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_RENEWMCPTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * RenewMCPToken请求参数结构体
                */
                class RenewMCPTokenRequest : public AbstractModel
                {
                public:
                    RenewMCPTokenRequest();
                    ~RenewMCPTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>TokenId</p>
                     * @return TokenId <p>TokenId</p>
                     * 
                     */
                    std::string GetTokenId() const;

                    /**
                     * 设置<p>TokenId</p>
                     * @param _tokenId <p>TokenId</p>
                     * 
                     */
                    void SetTokenId(const std::string& _tokenId);

                    /**
                     * 判断参数 TokenId 是否已赋值
                     * @return TokenId 是否已赋值
                     * 
                     */
                    bool TokenIdHasBeenSet() const;

                    /**
                     * 获取<p>Token 过期时间</p><p>取值范围：[0, 2592000]</p><p>默认值：86400</p><p>单位 秒、不填的话，默认为 1 天；新的超时时间为，当前时刻 + ExpireSeconds</p>
                     * @return ExpireSeconds <p>Token 过期时间</p><p>取值范围：[0, 2592000]</p><p>默认值：86400</p><p>单位 秒、不填的话，默认为 1 天；新的超时时间为，当前时刻 + ExpireSeconds</p>
                     * 
                     */
                    int64_t GetExpireSeconds() const;

                    /**
                     * 设置<p>Token 过期时间</p><p>取值范围：[0, 2592000]</p><p>默认值：86400</p><p>单位 秒、不填的话，默认为 1 天；新的超时时间为，当前时刻 + ExpireSeconds</p>
                     * @param _expireSeconds <p>Token 过期时间</p><p>取值范围：[0, 2592000]</p><p>默认值：86400</p><p>单位 秒、不填的话，默认为 1 天；新的超时时间为，当前时刻 + ExpireSeconds</p>
                     * 
                     */
                    void SetExpireSeconds(const int64_t& _expireSeconds);

                    /**
                     * 判断参数 ExpireSeconds 是否已赋值
                     * @return ExpireSeconds 是否已赋值
                     * 
                     */
                    bool ExpireSecondsHasBeenSet() const;

                private:

                    /**
                     * <p>TokenId</p>
                     */
                    std::string m_tokenId;
                    bool m_tokenIdHasBeenSet;

                    /**
                     * <p>Token 过期时间</p><p>取值范围：[0, 2592000]</p><p>默认值：86400</p><p>单位 秒、不填的话，默认为 1 天；新的超时时间为，当前时刻 + ExpireSeconds</p>
                     */
                    int64_t m_expireSeconds;
                    bool m_expireSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_RENEWMCPTOKENREQUEST_H_
