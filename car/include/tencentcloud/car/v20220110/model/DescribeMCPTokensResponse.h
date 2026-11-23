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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEMCPTOKENSRESPONSE_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEMCPTOKENSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/car/v20220110/model/MCPTokenInfo.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * DescribeMCPTokens返回参数结构体
                */
                class DescribeMCPTokensResponse : public AbstractModel
                {
                public:
                    DescribeMCPTokensResponse();
                    ~DescribeMCPTokensResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Token 列表</p>
                     * @return Tokens <p>Token 列表</p>
                     * 
                     */
                    std::vector<MCPTokenInfo> GetTokens() const;

                    /**
                     * 判断参数 Tokens 是否已赋值
                     * @return Tokens 是否已赋值
                     * 
                     */
                    bool TokensHasBeenSet() const;

                    /**
                     * 获取<p>Token 数量</p><p>单位：个</p>
                     * @return TotalCount <p>Token 数量</p><p>单位：个</p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>Token 列表</p>
                     */
                    std::vector<MCPTokenInfo> m_tokens;
                    bool m_tokensHasBeenSet;

                    /**
                     * <p>Token 数量</p><p>单位：个</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_DESCRIBEMCPTOKENSRESPONSE_H_
