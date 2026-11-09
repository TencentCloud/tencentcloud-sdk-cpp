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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_RENEWANDROIDINSTANCEMCPTOKENREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_RENEWANDROIDINSTANCEMCPTOKENREQUEST_H_

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
                * RenewAndroidInstanceMCPToken请求参数结构体
                */
                class RenewAndroidInstanceMCPTokenRequest : public AbstractModel
                {
                public:
                    RenewAndroidInstanceMCPTokenRequest();
                    ~RenewAndroidInstanceMCPTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>内部 ID，格式 k_ + 16 位 hex</p>
                     * @return TokenId <p>内部 ID，格式 k_ + 16 位 hex</p>
                     * 
                     */
                    std::string GetTokenId() const;

                    /**
                     * 设置<p>内部 ID，格式 k_ + 16 位 hex</p>
                     * @param _tokenId <p>内部 ID，格式 k_ + 16 位 hex</p>
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
                     * 获取<p>有效期（秒），必须大于 0</p><p>单位：秒</p>
                     * @return ExpireSeconds <p>有效期（秒），必须大于 0</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetExpireSeconds() const;

                    /**
                     * 设置<p>有效期（秒），必须大于 0</p><p>单位：秒</p>
                     * @param _expireSeconds <p>有效期（秒），必须大于 0</p><p>单位：秒</p>
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
                     * <p>内部 ID，格式 k_ + 16 位 hex</p>
                     */
                    std::string m_tokenId;
                    bool m_tokenIdHasBeenSet;

                    /**
                     * <p>有效期（秒），必须大于 0</p><p>单位：秒</p>
                     */
                    int64_t m_expireSeconds;
                    bool m_expireSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_RENEWANDROIDINSTANCEMCPTOKENREQUEST_H_
