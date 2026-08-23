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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAIAGENTCREDENTIALLOCATIONLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAIAGENTCREDENTIALLOCATIONLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAIAgentCredentialLocationList请求参数结构体
                */
                class DescribeAIAgentCredentialLocationListRequest : public AbstractModel
                {
                public:
                    DescribeAIAgentCredentialLocationListRequest();
                    ~DescribeAIAgentCredentialLocationListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>凭据组行 ID（来自 DescribeAIAgentCredentialList 响应 AIAgentCredentialItem.ID）</p>
                     * @return ID <p>凭据组行 ID（来自 DescribeAIAgentCredentialList 响应 AIAgentCredentialItem.ID）</p>
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置<p>凭据组行 ID（来自 DescribeAIAgentCredentialList 响应 AIAgentCredentialItem.ID）</p>
                     * @param _iD <p>凭据组行 ID（来自 DescribeAIAgentCredentialList 响应 AIAgentCredentialItem.ID）</p>
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>偏移量，默认 0</p>
                     * @return Offset <p>偏移量，默认 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认 0</p>
                     * @param _offset <p>偏移量，默认 0</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>每页数量，默认 10，上限 200</p>
                     * @return Limit <p>每页数量，默认 10，上限 200</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页数量，默认 10，上限 200</p>
                     * @param _limit <p>每页数量，默认 10，上限 200</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>凭据组行 ID（来自 DescribeAIAgentCredentialList 响应 AIAgentCredentialItem.ID）</p>
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>偏移量，默认 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页数量，默认 10，上限 200</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAIAGENTCREDENTIALLOCATIONLISTREQUEST_H_
