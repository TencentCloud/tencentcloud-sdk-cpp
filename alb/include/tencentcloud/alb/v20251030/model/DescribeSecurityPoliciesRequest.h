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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBESECURITYPOLICIESREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBESECURITYPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/Filter.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeSecurityPolicies请求参数结构体
                */
                class DescribeSecurityPoliciesRequest : public AbstractModel
                {
                public:
                    DescribeSecurityPoliciesRequest();
                    ~DescribeSecurityPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件列表，用于筛选符合指定条件的安全策略。多个过滤条件之间为"与"关系。

**支持的过滤条件：**
- **SecurityPolicyNames**：按安全策略名称筛选，支持模糊匹配。
- **tag:tag-key**：按标签键值对筛选，tag-key 请替换为实际的标签键。例如 `tag:env` 表示按标签键 `env` 筛选。

**说明：** 每个过滤条件最多支持 10 个取值。

                     * @return Filters 过滤条件列表，用于筛选符合指定条件的安全策略。多个过滤条件之间为"与"关系。

**支持的过滤条件：**
- **SecurityPolicyNames**：按安全策略名称筛选，支持模糊匹配。
- **tag:tag-key**：按标签键值对筛选，tag-key 请替换为实际的标签键。例如 `tag:env` 表示按标签键 `env` 筛选。

**说明：** 每个过滤条件最多支持 10 个取值。

                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件列表，用于筛选符合指定条件的安全策略。多个过滤条件之间为"与"关系。

**支持的过滤条件：**
- **SecurityPolicyNames**：按安全策略名称筛选，支持模糊匹配。
- **tag:tag-key**：按标签键值对筛选，tag-key 请替换为实际的标签键。例如 `tag:env` 表示按标签键 `env` 筛选。

**说明：** 每个过滤条件最多支持 10 个取值。

                     * @param _filters 过滤条件列表，用于筛选符合指定条件的安全策略。多个过滤条件之间为"与"关系。

**支持的过滤条件：**
- **SecurityPolicyNames**：按安全策略名称筛选，支持模糊匹配。
- **tag:tag-key**：按标签键值对筛选，tag-key 请替换为实际的标签键。例如 `tag:env` 表示按标签键 `env` 筛选。

**说明：** 每个过滤条件最多支持 10 个取值。

                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取单次请求返回的最大结果数。用于分页查询，与 NextToken 配合使用。

**取值范围：** 1~100。

**默认值：** 20。

                     * @return MaxResults 单次请求返回的最大结果数。用于分页查询，与 NextToken 配合使用。

**取值范围：** 1~100。

**默认值：** 20。

                     * 
                     */
                    int64_t GetMaxResults() const;

                    /**
                     * 设置单次请求返回的最大结果数。用于分页查询，与 NextToken 配合使用。

**取值范围：** 1~100。

**默认值：** 20。

                     * @param _maxResults 单次请求返回的最大结果数。用于分页查询，与 NextToken 配合使用。

**取值范围：** 1~100。

**默认值：** 20。

                     * 
                     */
                    void SetMaxResults(const int64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取分页查询的起始令牌。用于获取下一页结果数据。

**使用说明：**
- 首次查询时无需设置此参数。
- 如果上一次查询返回了 NextToken，表示还有更多数据，请将该值传入此参数以获取下一页。
- 若上一次查询未返回 NextToken 或返回为空，表示已是最后一页。

                     * @return NextToken 分页查询的起始令牌。用于获取下一页结果数据。

**使用说明：**
- 首次查询时无需设置此参数。
- 如果上一次查询返回了 NextToken，表示还有更多数据，请将该值传入此参数以获取下一页。
- 若上一次查询未返回 NextToken 或返回为空，表示已是最后一页。

                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置分页查询的起始令牌。用于获取下一页结果数据。

**使用说明：**
- 首次查询时无需设置此参数。
- 如果上一次查询返回了 NextToken，表示还有更多数据，请将该值传入此参数以获取下一页。
- 若上一次查询未返回 NextToken 或返回为空，表示已是最后一页。

                     * @param _nextToken 分页查询的起始令牌。用于获取下一页结果数据。

**使用说明：**
- 首次查询时无需设置此参数。
- 如果上一次查询返回了 NextToken，表示还有更多数据，请将该值传入此参数以获取下一页。
- 若上一次查询未返回 NextToken 或返回为空，表示已是最后一页。

                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

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

                private:

                    /**
                     * 过滤条件列表，用于筛选符合指定条件的安全策略。多个过滤条件之间为"与"关系。

**支持的过滤条件：**
- **SecurityPolicyNames**：按安全策略名称筛选，支持模糊匹配。
- **tag:tag-key**：按标签键值对筛选，tag-key 请替换为实际的标签键。例如 `tag:env` 表示按标签键 `env` 筛选。

**说明：** 每个过滤条件最多支持 10 个取值。

                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 单次请求返回的最大结果数。用于分页查询，与 NextToken 配合使用。

**取值范围：** 1~100。

**默认值：** 20。

                     */
                    int64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * 分页查询的起始令牌。用于获取下一页结果数据。

**使用说明：**
- 首次查询时无需设置此参数。
- 如果上一次查询返回了 NextToken，表示还有更多数据，请将该值传入此参数以获取下一页。
- 若上一次查询未返回 NextToken 或返回为空，表示已是最后一页。

                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * 安全策略 ID 列表，ID 格式为 tls- 后接 8 位字母数字。
                     */
                    std::vector<std::string> m_securityPolicyIds;
                    bool m_securityPolicyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBESECURITYPOLICIESREQUEST_H_
