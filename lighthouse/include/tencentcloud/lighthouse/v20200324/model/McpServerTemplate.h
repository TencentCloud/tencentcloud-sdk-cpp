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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MCPSERVERTEMPLATE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MCPSERVERTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/McpServerTemplateEnv.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * MCP Server模板
                */
                class McpServerTemplate : public AbstractModel
                {
                public:
                    McpServerTemplate();
                    ~McpServerTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取MCP Server名称
                     * @return Name MCP Server名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置MCP Server名称
                     * @param _name MCP Server名称
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
                     * 获取Base64编码之后的MCP Server启动命令。
                     * @return Command Base64编码之后的MCP Server启动命令。
                     * 
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置Base64编码之后的MCP Server启动命令。
                     * @param _command Base64编码之后的MCP Server启动命令。
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
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
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
                     * 获取MCP Server社区地址
                     * @return CommunityUrl MCP Server社区地址
                     * 
                     */
                    std::string GetCommunityUrl() const;

                    /**
                     * 设置MCP Server社区地址
                     * @param _communityUrl MCP Server社区地址
                     * 
                     */
                    void SetCommunityUrl(const std::string& _communityUrl);

                    /**
                     * 判断参数 CommunityUrl 是否已赋值
                     * @return CommunityUrl 是否已赋值
                     * 
                     */
                    bool CommunityUrlHasBeenSet() const;

                    /**
                     * 获取MCP Server关联的开发平台地址或开放平台地址
                     * @return PlatformUrl MCP Server关联的开发平台地址或开放平台地址
                     * 
                     */
                    std::string GetPlatformUrl() const;

                    /**
                     * 设置MCP Server关联的开发平台地址或开放平台地址
                     * @param _platformUrl MCP Server关联的开发平台地址或开放平台地址
                     * 
                     */
                    void SetPlatformUrl(const std::string& _platformUrl);

                    /**
                     * 判断参数 PlatformUrl 是否已赋值
                     * @return PlatformUrl 是否已赋值
                     * 
                     */
                    bool PlatformUrlHasBeenSet() const;

                    /**
                     * 获取MCP Server环境变量
                     * @return EnvSet MCP Server环境变量
                     * 
                     */
                    std::vector<McpServerTemplateEnv> GetEnvSet() const;

                    /**
                     * 设置MCP Server环境变量
                     * @param _envSet MCP Server环境变量
                     * 
                     */
                    void SetEnvSet(const std::vector<McpServerTemplateEnv>& _envSet);

                    /**
                     * 判断参数 EnvSet 是否已赋值
                     * @return EnvSet 是否已赋值
                     * 
                     */
                    bool EnvSetHasBeenSet() const;

                private:

                    /**
                     * MCP Server名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Base64编码之后的MCP Server启动命令。
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * MCP Server图标地址
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * MCP Server社区地址
                     */
                    std::string m_communityUrl;
                    bool m_communityUrlHasBeenSet;

                    /**
                     * MCP Server关联的开发平台地址或开放平台地址
                     */
                    std::string m_platformUrl;
                    bool m_platformUrlHasBeenSet;

                    /**
                     * MCP Server环境变量
                     */
                    std::vector<McpServerTemplateEnv> m_envSet;
                    bool m_envSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_MCPSERVERTEMPLATE_H_
