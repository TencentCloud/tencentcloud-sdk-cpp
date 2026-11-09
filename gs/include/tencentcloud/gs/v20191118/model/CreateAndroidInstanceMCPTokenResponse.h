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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCEMCPTOKENRESPONSE_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCEMCPTOKENRESPONSE_H_

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
                * CreateAndroidInstanceMCPToken返回参数结构体
                */
                class CreateAndroidInstanceMCPTokenResponse : public AbstractModel
                {
                public:
                    CreateAndroidInstanceMCPTokenResponse();
                    ~CreateAndroidInstanceMCPTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>内部 ID，格式 k_ + 16 位 hex</p>
                     * @return TokenId <p>内部 ID，格式 k_ + 16 位 hex</p>
                     * 
                     */
                    std::string GetTokenId() const;

                    /**
                     * 判断参数 TokenId 是否已赋值
                     * @return TokenId 是否已赋值
                     * 
                     */
                    bool TokenIdHasBeenSet() const;

                    /**
                     * 获取<p>明文 token，格式 mcpk_ + 48 位 hex。服务端只存 sha256，只返回这一次</p>
                     * @return Token <p>明文 token，格式 mcpk_ + 48 位 hex。服务端只存 sha256，只返回这一次</p>
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                private:

                    /**
                     * <p>内部 ID，格式 k_ + 16 位 hex</p>
                     */
                    std::string m_tokenId;
                    bool m_tokenIdHasBeenSet;

                    /**
                     * <p>明文 token，格式 mcpk_ + 48 位 hex。服务端只存 sha256，只返回这一次</p>
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_CREATEANDROIDINSTANCEMCPTOKENRESPONSE_H_
