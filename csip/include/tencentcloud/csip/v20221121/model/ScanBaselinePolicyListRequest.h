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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_SCANBASELINEPOLICYLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_SCANBASELINEPOLICYLISTREQUEST_H_

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
                * ScanBaselinePolicyList请求参数结构体
                */
                class ScanBaselinePolicyListRequest : public AbstractModel
                {
                public:
                    ScanBaselinePolicyListRequest();
                    ~ScanBaselinePolicyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     * @return PolicyType <p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置<p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     * @param _policyType <p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取<p>待重新扫描的基线策略 ID 列表，不可为空且元素不可为 0。</p>
                     * @return PolicyIDList <p>待重新扫描的基线策略 ID 列表，不可为空且元素不可为 0。</p>
                     * 
                     */
                    std::vector<uint64_t> GetPolicyIDList() const;

                    /**
                     * 设置<p>待重新扫描的基线策略 ID 列表，不可为空且元素不可为 0。</p>
                     * @param _policyIDList <p>待重新扫描的基线策略 ID 列表，不可为空且元素不可为 0。</p>
                     * 
                     */
                    void SetPolicyIDList(const std::vector<uint64_t>& _policyIDList);

                    /**
                     * 判断参数 PolicyIDList 是否已赋值
                     * @return PolicyIDList 是否已赋值
                     * 
                     */
                    bool PolicyIDListHasBeenSet() const;

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

                private:

                    /**
                     * <p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * <p>待重新扫描的基线策略 ID 列表，不可为空且元素不可为 0。</p>
                     */
                    std::vector<uint64_t> m_policyIDList;
                    bool m_policyIDListHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_SCANBASELINEPOLICYLISTREQUEST_H_
