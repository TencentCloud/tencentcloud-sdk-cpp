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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DELETESECURITYPOLICYREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DELETESECURITYPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DeleteSecurityPolicy请求参数结构体
                */
                class DeleteSecurityPolicyRequest : public AbstractModel
                {
                public:
                    DeleteSecurityPolicyRequest();
                    ~DeleteSecurityPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安全策略 ID 列表，ID 格式为 tls- 后接 8 位字母数字。
                     * @return SecurityPolicyIds 安全策略 ID 列表，ID 格式为 tls- 后接 8 位字母数字。
                     * 
                     */
                    std::vector<std::string> GetSecurityPolicyIds() const;

                    /**
                     * 设置安全策略 ID 列表，ID 格式为 tls- 后接 8 位字母数字。
                     * @param _securityPolicyIds 安全策略 ID 列表，ID 格式为 tls- 后接 8 位字母数字。
                     * 
                     */
                    void SetSecurityPolicyIds(const std::vector<std::string>& _securityPolicyIds);

                    /**
                     * 判断参数 SecurityPolicyIds 是否已赋值
                     * @return SecurityPolicyIds 是否已赋值
                     * 
                     */
                    bool SecurityPolicyIdsHasBeenSet() const;

                    /**
                     * 获取是否仅执行预检请求。取值：
- **true**：仅执行预检请求，不实际删除资源。预检请求将验证参数格式、权限及安全策略是否被引用等，帮助您在正式操作前发现潜在问题。
- **false**（默认）：执行正常请求，通过预检后将直接删除安全策略。

                     * @return DryRun 是否仅执行预检请求。取值：
- **true**：仅执行预检请求，不实际删除资源。预检请求将验证参数格式、权限及安全策略是否被引用等，帮助您在正式操作前发现潜在问题。
- **false**（默认）：执行正常请求，通过预检后将直接删除安全策略。

                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置是否仅执行预检请求。取值：
- **true**：仅执行预检请求，不实际删除资源。预检请求将验证参数格式、权限及安全策略是否被引用等，帮助您在正式操作前发现潜在问题。
- **false**（默认）：执行正常请求，通过预检后将直接删除安全策略。

                     * @param _dryRun 是否仅执行预检请求。取值：
- **true**：仅执行预检请求，不实际删除资源。预检请求将验证参数格式、权限及安全策略是否被引用等，帮助您在正式操作前发现潜在问题。
- **false**（默认）：执行正常请求，通过预检后将直接删除安全策略。

                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                private:

                    /**
                     * 安全策略 ID 列表，ID 格式为 tls- 后接 8 位字母数字。
                     */
                    std::vector<std::string> m_securityPolicyIds;
                    bool m_securityPolicyIdsHasBeenSet;

                    /**
                     * 是否仅执行预检请求。取值：
- **true**：仅执行预检请求，不实际删除资源。预检请求将验证参数格式、权限及安全策略是否被引用等，帮助您在正式操作前发现潜在问题。
- **false**（默认）：执行正常请求，通过预检后将直接删除安全策略。

                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DELETESECURITYPOLICYREQUEST_H_
