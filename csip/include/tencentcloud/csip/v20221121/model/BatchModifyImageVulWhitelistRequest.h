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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BATCHMODIFYIMAGEVULWHITELISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BATCHMODIFYIMAGEVULWHITELISTREQUEST_H_

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
                * BatchModifyImageVulWhitelist请求参数结构体
                */
                class BatchModifyImageVulWhitelistRequest : public AbstractModel
                {
                public:
                    BatchModifyImageVulWhitelistRequest();
                    ~BatchModifyImageVulWhitelistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>漏洞白名单id</p>
                     * @return RuleId <p>漏洞白名单id</p>
                     * 
                     */
                    std::vector<uint64_t> GetRuleId() const;

                    /**
                     * 设置<p>漏洞白名单id</p>
                     * @param _ruleId <p>漏洞白名单id</p>
                     * 
                     */
                    void SetRuleId(const std::vector<uint64_t>& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

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
                     * 获取<p>白名单状态</p>
                     * @return Status <p>白名单状态</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>白名单状态</p>
                     * @param _status <p>白名单状态</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>漏洞白名单id</p>
                     */
                    std::vector<uint64_t> m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>白名单状态</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BATCHMODIFYIMAGEVULWHITELISTREQUEST_H_
