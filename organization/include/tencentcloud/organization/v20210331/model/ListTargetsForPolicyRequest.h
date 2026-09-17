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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTTARGETSFORPOLICYREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTTARGETSFORPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * ListTargetsForPolicy请求参数结构体
                */
                class ListTargetsForPolicyRequest : public AbstractModel
                {
                public:
                    ListTargetsForPolicyRequest();
                    ~ListTargetsForPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>策略Id。</p>
                     * @return PolicyId <p>策略Id。</p>
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置<p>策略Id。</p>
                     * @param _policyId <p>策略Id。</p>
                     * 
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>每页数量。默认值是 20，必须大于 0 且小于或等于 200</p>
                     * @return Rp <p>每页数量。默认值是 20，必须大于 0 且小于或等于 200</p>
                     * 
                     */
                    uint64_t GetRp() const;

                    /**
                     * 设置<p>每页数量。默认值是 20，必须大于 0 且小于或等于 200</p>
                     * @param _rp <p>每页数量。默认值是 20，必须大于 0 且小于或等于 200</p>
                     * 
                     */
                    void SetRp(const uint64_t& _rp);

                    /**
                     * 判断参数 Rp 是否已赋值
                     * @return Rp 是否已赋值
                     * 
                     */
                    bool RpHasBeenSet() const;

                    /**
                     * 获取<p>页码。默认值是 1，从 1开始，不能大于 200</p>
                     * @return Page <p>页码。默认值是 1，从 1开始，不能大于 200</p>
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置<p>页码。默认值是 1，从 1开始，不能大于 200</p>
                     * @param _page <p>页码。默认值是 1，从 1开始，不能大于 200</p>
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取<p>策略类型。取值范围：All-全部、User-用户、Node-节点</p>
                     * @return TargetType <p>策略类型。取值范围：All-全部、User-用户、Node-节点</p>
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置<p>策略类型。取值范围：All-全部、User-用户、Node-节点</p>
                     * @param _targetType <p>策略类型。取值范围：All-全部、User-用户、Node-节点</p>
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取<p>策略类型。默认值SERVICE_CONTROL_POLICY，取值范围：SERVICE_CONTROL_POLICY-服务控制策略、TAG_POLICY-标签策略</p>
                     * @return PolicyType <p>策略类型。默认值SERVICE_CONTROL_POLICY，取值范围：SERVICE_CONTROL_POLICY-服务控制策略、TAG_POLICY-标签策略</p>
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置<p>策略类型。默认值SERVICE_CONTROL_POLICY，取值范围：SERVICE_CONTROL_POLICY-服务控制策略、TAG_POLICY-标签策略</p>
                     * @param _policyType <p>策略类型。默认值SERVICE_CONTROL_POLICY，取值范围：SERVICE_CONTROL_POLICY-服务控制策略、TAG_POLICY-标签策略</p>
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
                     * 获取<p>按照多个策略id搜索，空格隔开。</p>
                     * @return Keyword <p>按照多个策略id搜索，空格隔开。</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>按照多个策略id搜索，空格隔开。</p>
                     * @param _keyword <p>按照多个策略id搜索，空格隔开。</p>
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * <p>策略Id。</p>
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * <p>每页数量。默认值是 20，必须大于 0 且小于或等于 200</p>
                     */
                    uint64_t m_rp;
                    bool m_rpHasBeenSet;

                    /**
                     * <p>页码。默认值是 1，从 1开始，不能大于 200</p>
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>策略类型。取值范围：All-全部、User-用户、Node-节点</p>
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * <p>策略类型。默认值SERVICE_CONTROL_POLICY，取值范围：SERVICE_CONTROL_POLICY-服务控制策略、TAG_POLICY-标签策略</p>
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * <p>按照多个策略id搜索，空格隔开。</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTTARGETSFORPOLICYREQUEST_H_
