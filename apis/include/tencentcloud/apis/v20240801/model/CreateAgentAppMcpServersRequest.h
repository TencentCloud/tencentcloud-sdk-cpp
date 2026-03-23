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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_CREATEAGENTAPPMCPSERVERSREQUEST_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_CREATEAGENTAPPMCPSERVERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/AgentAppMcpServerDTO.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * CreateAgentAppMcpServers请求参数结构体
                */
                class CreateAgentAppMcpServersRequest : public AbstractModel
                {
                public:
                    CreateAgentAppMcpServersRequest();
                    ~CreateAgentAppMcpServersRequest() = default;
                    std::string ToJsonString() const;


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
                     * @return ID 应用ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置应用ID
                     * @param _iD 应用ID
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取关联的mcp server
                     * @return McpServers 关联的mcp server
                     * 
                     */
                    std::vector<AgentAppMcpServerDTO> GetMcpServers() const;

                    /**
                     * 设置关联的mcp server
                     * @param _mcpServers 关联的mcp server
                     * 
                     */
                    void SetMcpServers(const std::vector<AgentAppMcpServerDTO>& _mcpServers);

                    /**
                     * 判断参数 McpServers 是否已赋值
                     * @return McpServers 是否已赋值
                     * 
                     */
                    bool McpServersHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 关联的mcp server
                     */
                    std::vector<AgentAppMcpServerDTO> m_mcpServers;
                    bool m_mcpServersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_CREATEAGENTAPPMCPSERVERSREQUEST_H_
