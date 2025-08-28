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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MCPSERVER_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MCPSERVER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * MCP Server信息
                */
                class McpServer : public AbstractModel
                {
                public:
                    McpServer();
                    ~McpServer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MCP Server ID。
                     * @return McpServerId MCP Server ID。
                     * 
                     */
                    std::string GetMcpServerId() const;

                    /**
                     * 设置MCP Server ID。
                     * @param _mcpServerId MCP Server ID。
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
                     * 获取MCP Server类型。枚举值：PUBLIC_PACKAGE，公共包安装；AGENT_GENERATED，AI生成。
                     * @return McpServerType MCP Server类型。枚举值：PUBLIC_PACKAGE，公共包安装；AGENT_GENERATED，AI生成。
                     * 
                     */
                    std::string GetMcpServerType() const;

                    /**
                     * 设置MCP Server类型。枚举值：PUBLIC_PACKAGE，公共包安装；AGENT_GENERATED，AI生成。
                     * @param _mcpServerType MCP Server类型。枚举值：PUBLIC_PACKAGE，公共包安装；AGENT_GENERATED，AI生成。
                     * 
                     */
                    void SetMcpServerType(const std::string& _mcpServerType);

                    /**
                     * 判断参数 McpServerType 是否已赋值
                     * @return McpServerType 是否已赋值
                     * 
                     */
                    bool McpServerTypeHasBeenSet() const;

                    /**
                     * 获取MCP Server图标地址
                     * @return IconUrl MCP Server图标地址
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置MCP Server图标地址
                     * @param _iconUrl MCP Server图标地址
                     * 
                     */
                    void SetIconUrl(const std::string& _iconUrl);

                    /**
                     * 判断参数 IconUrl 是否已赋值
                     * @return IconUrl 是否已赋值
                     * 
                     */
                    bool IconUrlHasBeenSet() const;

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
                     * 获取MCP Server状态。枚举值如下：

PENDING：表示创建中
LAUNCH_FAILED：表示创建失败
RUNNING：表示运行中
STOPPED：表示关闭
STARTING：表示开启中
STOPPING：表示关闭中
RESTARTING：表示重启中
REMOVING：表示删除中
UNKNOWN：表示未知
ENV_ERROR：表示环境错误
                     * @return State MCP Server状态。枚举值如下：

PENDING：表示创建中
LAUNCH_FAILED：表示创建失败
RUNNING：表示运行中
STOPPED：表示关闭
STARTING：表示开启中
STOPPING：表示关闭中
RESTARTING：表示重启中
REMOVING：表示删除中
UNKNOWN：表示未知
ENV_ERROR：表示环境错误
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置MCP Server状态。枚举值如下：

PENDING：表示创建中
LAUNCH_FAILED：表示创建失败
RUNNING：表示运行中
STOPPED：表示关闭
STARTING：表示开启中
STOPPING：表示关闭中
RESTARTING：表示重启中
REMOVING：表示删除中
UNKNOWN：表示未知
ENV_ERROR：表示环境错误
                     * @param _state MCP Server状态。枚举值如下：

PENDING：表示创建中
LAUNCH_FAILED：表示创建失败
RUNNING：表示运行中
STOPPED：表示关闭
STARTING：表示开启中
STOPPING：表示关闭中
RESTARTING：表示重启中
REMOVING：表示删除中
UNKNOWN：表示未知
ENV_ERROR：表示环境错误
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取MCP Server访问地址。
                     * @return ServerUrl MCP Server访问地址。
                     * 
                     */
                    std::string GetServerUrl() const;

                    /**
                     * 设置MCP Server访问地址。
                     * @param _serverUrl MCP Server访问地址。
                     * 
                     */
                    void SetServerUrl(const std::string& _serverUrl);

                    /**
                     * 判断参数 ServerUrl 是否已赋值
                     * @return ServerUrl 是否已赋值
                     * 
                     */
                    bool ServerUrlHasBeenSet() const;

                    /**
                     * 获取MCP Server配置
                     * @return Config MCP Server配置
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置MCP Server配置
                     * @param _config MCP Server配置
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取MCP Server备注
                     * @return Description MCP Server备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置MCP Server备注
                     * @param _description MCP Server备注
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
                     * 获取MCP Server创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     * @return CreatedTime MCP Server创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置MCP Server创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     * @param _createdTime MCP Server创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取MCP Server修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     * @return UpdatedTime MCP Server修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置MCP Server修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     * @param _updatedTime MCP Server修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取MCP Server环境变量
                     * @return EnvSet MCP Server环境变量
                     * 
                     */
                    std::vector<McpServerEnv> GetEnvSet() const;

                    /**
                     * 设置MCP Server环境变量
                     * @param _envSet MCP Server环境变量
                     * 
                     */
                    void SetEnvSet(const std::vector<McpServerEnv>& _envSet);

                    /**
                     * 判断参数 EnvSet 是否已赋值
                     * @return EnvSet 是否已赋值
                     * 
                     */
                    bool EnvSetHasBeenSet() const;

                private:

                    /**
                     * MCP Server ID。
                     */
                    std::string m_mcpServerId;
                    bool m_mcpServerIdHasBeenSet;

                    /**
                     * MCP Server名称。最大长度：64
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * MCP Server类型。枚举值：PUBLIC_PACKAGE，公共包安装；AGENT_GENERATED，AI生成。
                     */
                    std::string m_mcpServerType;
                    bool m_mcpServerTypeHasBeenSet;

                    /**
                     * MCP Server图标地址
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * Base64编码后的MCP Server启动命令。最大长度：2048
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * MCP Server状态。枚举值如下：

PENDING：表示创建中
LAUNCH_FAILED：表示创建失败
RUNNING：表示运行中
STOPPED：表示关闭
STARTING：表示开启中
STOPPING：表示关闭中
RESTARTING：表示重启中
REMOVING：表示删除中
UNKNOWN：表示未知
ENV_ERROR：表示环境错误
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * MCP Server访问地址。
                     */
                    std::string m_serverUrl;
                    bool m_serverUrlHasBeenSet;

                    /**
                     * MCP Server配置
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * MCP Server备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * MCP Server创建时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * MCP Server修改时间。按照 ISO8601 标准表示，并且使用 UTC 时间。 
格式为： YYYY-MM-DDThh:mm:ssZ。
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * MCP Server环境变量
                     */
                    std::vector<McpServerEnv> m_envSet;
                    bool m_envSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MCPSERVER_H_
