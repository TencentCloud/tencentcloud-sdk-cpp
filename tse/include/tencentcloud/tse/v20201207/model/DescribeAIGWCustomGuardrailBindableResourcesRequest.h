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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEAIGWCUSTOMGUARDRAILBINDABLERESOURCESREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEAIGWCUSTOMGUARDRAILBINDABLERESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeAIGWCustomGuardrailBindableResources请求参数结构体
                */
                class DescribeAIGWCustomGuardrailBindableResourcesRequest : public AbstractModel
                {
                public:
                    DescribeAIGWCustomGuardrailBindableResourcesRequest();
                    ~DescribeAIGWCustomGuardrailBindableResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网关实例 ID</p>
                     * @return GatewayId <p>网关实例 ID</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>网关实例 ID</p>
                     * @param _gatewayId <p>网关实例 ID</p>
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>资源类型：model_api、mcp_server 或 agent_api</p>
                     * @return ResourceType <p>资源类型：model_api、mcp_server 或 agent_api</p>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>资源类型：model_api、mcp_server 或 agent_api</p>
                     * @param _resourceType <p>资源类型：model_api、mcp_server 或 agent_api</p>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>当前策略 ID；用于排除自身占用</p>
                     * @return PolicyId <p>当前策略 ID；用于排除自身占用</p>
                     * 
                     */
                    std::string GetPolicyId() const;

                    /**
                     * 设置<p>当前策略 ID；用于排除自身占用</p>
                     * @param _policyId <p>当前策略 ID；用于排除自身占用</p>
                     * 
                     */
                    void SetPolicyId(const std::string& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>按资源名称或路径模糊搜索</p>
                     * @return Keyword <p>按资源名称或路径模糊搜索</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>按资源名称或路径模糊搜索</p>
                     * @param _keyword <p>按资源名称或路径模糊搜索</p>
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取<p>分页偏移量，最小 0</p>
                     * @return Offset <p>分页偏移量，最小 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，最小 0</p>
                     * @param _offset <p>分页偏移量，最小 0</p>
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
                     * 获取<p>单页数量，范围 1～100，默认 20</p>
                     * @return Limit <p>单页数量，范围 1～100，默认 20</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>单页数量，范围 1～100，默认 20</p>
                     * @param _limit <p>单页数量，范围 1～100，默认 20</p>
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
                     * <p>网关实例 ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>资源类型：model_api、mcp_server 或 agent_api</p>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>当前策略 ID；用于排除自身占用</p>
                     */
                    std::string m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * <p>按资源名称或路径模糊搜索</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>分页偏移量，最小 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>单页数量，范围 1～100，默认 20</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEAIGWCUSTOMGUARDRAILBINDABLERESOURCESREQUEST_H_
