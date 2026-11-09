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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDINSTANCEMCPTOKENSRESPONSE_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDINSTANCEMCPTOKENSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gs/v20191118/model/AndroidInstanceMCPToken.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * DescribeAndroidInstanceMCPTokens返回参数结构体
                */
                class DescribeAndroidInstanceMCPTokensResponse : public AbstractModel
                {
                public:
                    DescribeAndroidInstanceMCPTokensResponse();
                    ~DescribeAndroidInstanceMCPTokensResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Token列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tokens <p>Token列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AndroidInstanceMCPToken> GetTokens() const;

                    /**
                     * 判断参数 Tokens 是否已赋值
                     * @return Tokens 是否已赋值
                     * 
                     */
                    bool TokensHasBeenSet() const;

                    /**
                     * 获取<p>Token总数</p><p>单位：个</p>
                     * @return TotalCount <p>Token总数</p><p>单位：个</p>
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
                     * <p>Token列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AndroidInstanceMCPToken> m_tokens;
                    bool m_tokensHasBeenSet;

                    /**
                     * <p>Token总数</p><p>单位：个</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDINSTANCEMCPTOKENSRESPONSE_H_
