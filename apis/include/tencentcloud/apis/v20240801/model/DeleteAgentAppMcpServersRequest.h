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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_DELETEAGENTAPPMCPSERVERSREQUEST_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_DELETEAGENTAPPMCPSERVERSREQUEST_H_

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
                * DeleteAgentAppMcpServers请求参数结构体
                */
                class DeleteAgentAppMcpServersRequest : public AbstractModel
                {
                public:
                    DeleteAgentAppMcpServersRequest();
                    ~DeleteAgentAppMcpServersRequest() = default;
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
                     * 获取mcp server id数组
                     * @return McpServerIDs mcp server id数组
                     * 
                     */
                    std::vector<std::string> GetMcpServerIDs() const;

                    /**
                     * 设置mcp server id数组
                     * @param _mcpServerIDs mcp server id数组
                     * 
                     */
                    void SetMcpServerIDs(const std::vector<std::string>& _mcpServerIDs);

                    /**
                     * 判断参数 McpServerIDs 是否已赋值
                     * @return McpServerIDs 是否已赋值
                     * 
                     */
                    bool McpServerIDsHasBeenSet() const;

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
                     * mcp server id数组
                     */
                    std::vector<std::string> m_mcpServerIDs;
                    bool m_mcpServerIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_DELETEAGENTAPPMCPSERVERSREQUEST_H_
