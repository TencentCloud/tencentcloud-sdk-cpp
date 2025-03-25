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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATEINSTANCETOKENRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATEINSTANCETOKENRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateInstanceToken返回参数结构体
                */
                class CreateInstanceTokenResponse : public AbstractModel
                {
                public:
                    CreateInstanceTokenResponse();
                    ~CreateInstanceTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户名
                     * @return Username 用户名
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取访问凭证
                     * @return Token 访问凭证
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
                     * 获取访问凭证过期时间戳，是一个时间戳数字，无单位
                     * @return ExpTime 访问凭证过期时间戳，是一个时间戳数字，无单位
                     * 
                     */
                    int64_t GetExpTime() const;

                    /**
                     * 判断参数 ExpTime 是否已赋值
                     * @return ExpTime 是否已赋值
                     * 
                     */
                    bool ExpTimeHasBeenSet() const;

                    /**
                     * 获取长期凭证的TokenId，短期凭证没有TokenId
                     * @return TokenId 长期凭证的TokenId，短期凭证没有TokenId
                     * 
                     */
                    std::string GetTokenId() const;

                    /**
                     * 判断参数 TokenId 是否已赋值
                     * @return TokenId 是否已赋值
                     * 
                     */
                    bool TokenIdHasBeenSet() const;

                private:

                    /**
                     * 用户名
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 访问凭证
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * 访问凭证过期时间戳，是一个时间戳数字，无单位
                     */
                    int64_t m_expTime;
                    bool m_expTimeHasBeenSet;

                    /**
                     * 长期凭证的TokenId，短期凭证没有TokenId
                     */
                    std::string m_tokenId;
                    bool m_tokenIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATEINSTANCETOKENRESPONSE_H_
