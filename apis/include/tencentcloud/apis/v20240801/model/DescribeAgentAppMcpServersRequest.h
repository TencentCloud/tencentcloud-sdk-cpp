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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEAGENTAPPMCPSERVERSREQUEST_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEAGENTAPPMCPSERVERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * DescribeAgentAppMcpServers请求参数结构体
                */
                class DescribeAgentAppMcpServersRequest : public AbstractModel
                {
                public:
                    DescribeAgentAppMcpServersRequest();
                    ~DescribeAgentAppMcpServersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页大小
                     * @return Limit 分页大小
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页大小
                     * @param _limit 分页大小
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页偏移量
                     * @return Offset 分页偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量
                     * @param _offset 分页偏移量
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
                     * 获取实例ID
                     * @return InstanceID 实例ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例ID
                     * @param _instanceID 实例ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return AgentAppIDs 应用ID
                     * 
                     */
                    std::vector<std::string> GetAgentAppIDs() const;

                    /**
                     * 设置应用ID
                     * @param _agentAppIDs 应用ID
                     * 
                     */
                    void SetAgentAppIDs(const std::vector<std::string>& _agentAppIDs);

                    /**
                     * 判断参数 AgentAppIDs 是否已赋值
                     * @return AgentAppIDs 是否已赋值
                     * 
                     */
                    bool AgentAppIDsHasBeenSet() const;

                    /**
                     * 获取关联的mcp
                     * @return McpServerIDs 关联的mcp
                     * 
                     */
                    std::vector<std::string> GetMcpServerIDs() const;

                    /**
                     * 设置关联的mcp
                     * @param _mcpServerIDs 关联的mcp
                     * 
                     */
                    void SetMcpServerIDs(const std::vector<std::string>& _mcpServerIDs);

                    /**
                     * 判断参数 McpServerIDs 是否已赋值
                     * @return McpServerIDs 是否已赋值
                     * 
                     */
                    bool McpServerIDsHasBeenSet() const;

                    /**
                     * 获取凭据ID
                     * @return AgentCredentialIDs 凭据ID
                     * 
                     */
                    std::vector<std::string> GetAgentCredentialIDs() const;

                    /**
                     * 设置凭据ID
                     * @param _agentCredentialIDs 凭据ID
                     * 
                     */
                    void SetAgentCredentialIDs(const std::vector<std::string>& _agentCredentialIDs);

                    /**
                     * 判断参数 AgentCredentialIDs 是否已赋值
                     * @return AgentCredentialIDs 是否已赋值
                     * 
                     */
                    bool AgentCredentialIDsHasBeenSet() const;

                    /**
                     * 获取关键词
                     * @return Keyword 关键词
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置关键词
                     * @param _keyword 关键词
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
                     * 分页大小
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::vector<std::string> m_agentAppIDs;
                    bool m_agentAppIDsHasBeenSet;

                    /**
                     * 关联的mcp
                     */
                    std::vector<std::string> m_mcpServerIDs;
                    bool m_mcpServerIDsHasBeenSet;

                    /**
                     * 凭据ID
                     */
                    std::vector<std::string> m_agentCredentialIDs;
                    bool m_agentCredentialIDsHasBeenSet;

                    /**
                     * 关键词
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_DESCRIBEAGENTAPPMCPSERVERSREQUEST_H_
