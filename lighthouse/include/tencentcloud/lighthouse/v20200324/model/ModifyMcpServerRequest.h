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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYMCPSERVERREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYMCPSERVERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/McpServerEnv.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * ModifyMcpServer请求参数结构体
                */
                class ModifyMcpServerRequest : public AbstractModel
                {
                public:
                    ModifyMcpServerRequest();
                    ~ModifyMcpServerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。可以通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
                     * @return InstanceId 实例ID。可以通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。可以通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
                     * @param _instanceId 实例ID。可以通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取MCP Server ID。可以通过DescribeMcpServers接口返回值中的McpServerId获取。
                     * @return McpServerId MCP Server ID。可以通过DescribeMcpServers接口返回值中的McpServerId获取。
                     * 
                     */
                    std::string GetMcpServerId() const;

                    /**
                     * 设置MCP Server ID。可以通过DescribeMcpServers接口返回值中的McpServerId获取。
                     * @param _mcpServerId MCP Server ID。可以通过DescribeMcpServers接口返回值中的McpServerId获取。
                     * 
                     */
                    void SetMcpServerId(const std::string& _mcpServerId);

                    /**
                     * 判断参数 McpServerId 是否已赋值
                     * @return McpServerId 是否已赋值
                     * 
                     */
                    bool McpServerIdHasBeenSet() const;

                    /**
                     * 获取MCP Server名称。最大长度：64
                     * @return Name MCP Server名称。最大长度：64
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置MCP Server名称。最大长度：64
                     * @param _name MCP Server名称。最大长度：64
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Base64编码后的MCP Server启动命令。最大长度：2048
                     * @return Command Base64编码后的MCP Server启动命令。最大长度：2048
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置Base64编码后的MCP Server启动命令。最大长度：2048
                     * @param _command Base64编码后的MCP Server启动命令。最大长度：2048
                     * 
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     * 
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取MCP Server备注。最大长度：2048
                     * @return Description MCP Server备注。最大长度：2048
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置MCP Server备注。最大长度：2048
                     * @param _description MCP Server备注。最大长度：2048
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取MCP Server环境变量。最大长度：10。用于完整替换MCP Server的环境变量。当该字段为空时，系统将清除当前所有环境变量。若无需修改环境变量，请勿传递该字段。
                     * @return Envs MCP Server环境变量。最大长度：10。用于完整替换MCP Server的环境变量。当该字段为空时，系统将清除当前所有环境变量。若无需修改环境变量，请勿传递该字段。
                     * 
                     */
                    std::vector<McpServerEnv> GetEnvs() const;

                    /**
                     * 设置MCP Server环境变量。最大长度：10。用于完整替换MCP Server的环境变量。当该字段为空时，系统将清除当前所有环境变量。若无需修改环境变量，请勿传递该字段。
                     * @param _envs MCP Server环境变量。最大长度：10。用于完整替换MCP Server的环境变量。当该字段为空时，系统将清除当前所有环境变量。若无需修改环境变量，请勿传递该字段。
                     * 
                     */
                    void SetEnvs(const std::vector<McpServerEnv>& _envs);

                    /**
                     * 判断参数 Envs 是否已赋值
                     * @return Envs 是否已赋值
                     * 
                     */
                    bool EnvsHasBeenSet() const;

                private:

                    /**
                     * 实例ID。可以通过[DescribeInstances](https://cloud.tencent.com/document/api/1207/47573)接口返回值中的InstanceId获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * MCP Server ID。可以通过DescribeMcpServers接口返回值中的McpServerId获取。
                     */
                    std::string m_mcpServerId;
                    bool m_mcpServerIdHasBeenSet;

                    /**
                     * MCP Server名称。最大长度：64
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Base64编码后的MCP Server启动命令。最大长度：2048
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * MCP Server备注。最大长度：2048
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * MCP Server环境变量。最大长度：10。用于完整替换MCP Server的环境变量。当该字段为空时，系统将清除当前所有环境变量。若无需修改环境变量，请勿传递该字段。
                     */
                    std::vector<McpServerEnv> m_envs;
                    bool m_envsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MODIFYMCPSERVERREQUEST_H_
