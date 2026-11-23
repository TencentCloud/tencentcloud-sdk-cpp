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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_CREATEMCPTOKENRESPONSE_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_CREATEMCPTOKENRESPONSE_H_

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
                * CreateMCPToken返回参数结构体
                */
                class CreateMCPTokenResponse : public AbstractModel
                {
                public:
                    CreateMCPTokenResponse();
                    ~CreateMCPTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>TokenId</p>
                     * @return TokenId <p>TokenId</p>
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
                     * 获取<p>MCP Token </p><p>当前值请妥善保存，后续需要使用该 Token 和 MCP Server 进行通信操作，丢失后无法再查看</p>
                     * @return Token <p>MCP Token </p><p>当前值请妥善保存，后续需要使用该 Token 和 MCP Server 进行通信操作，丢失后无法再查看</p>
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
                     * <p>TokenId</p>
                     */
                    std::string m_tokenId;
                    bool m_tokenIdHasBeenSet;

                    /**
                     * <p>MCP Token </p><p>当前值请妥善保存，后续需要使用该 Token 和 MCP Server 进行通信操作，丢失后无法再查看</p>
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_CREATEMCPTOKENRESPONSE_H_
