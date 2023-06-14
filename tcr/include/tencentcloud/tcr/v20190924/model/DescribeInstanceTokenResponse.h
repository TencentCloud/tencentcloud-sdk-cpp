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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEINSTANCETOKENRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEINSTANCETOKENRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/TcrInstanceToken.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeInstanceToken返回参数结构体
                */
                class DescribeInstanceTokenResponse : public AbstractModel
                {
                public:
                    DescribeInstanceTokenResponse();
                    ~DescribeInstanceTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取长期访问凭证总数
                     * @return TotalCount 长期访问凭证总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取长期访问凭证列表
                     * @return Tokens 长期访问凭证列表
                     * 
                     */
                    std::vector<TcrInstanceToken> GetTokens() const;

                    /**
                     * 判断参数 Tokens 是否已赋值
                     * @return Tokens 是否已赋值
                     * 
                     */
                    bool TokensHasBeenSet() const;

                private:

                    /**
                     * 长期访问凭证总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 长期访问凭证列表
                     */
                    std::vector<TcrInstanceToken> m_tokens;
                    bool m_tokensHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEINSTANCETOKENRESPONSE_H_
