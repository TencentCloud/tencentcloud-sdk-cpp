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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CALLMCPTOOLREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CALLMCPTOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CallMCPTool请求参数结构体
                */
                class CallMCPToolRequest : public AbstractModel
                {
                public:
                    CallMCPToolRequest();
                    ~CallMCPToolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>能力边界：一次请求只能调该 plugin 上的工具</p>
                     * @return PluginId <p>能力边界：一次请求只能调该 plugin 上的工具</p>
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置<p>能力边界：一次请求只能调该 plugin 上的工具</p>
                     * @param _pluginId <p>能力边界：一次请求只能调该 plugin 上的工具</p>
                     * 
                     */
                    void SetPluginId(const std::string& _pluginId);

                    /**
                     * 判断参数 PluginId 是否已赋值
                     * @return PluginId 是否已赋值
                     * 
                     */
                    bool PluginIdHasBeenSet() const;

                    /**
                     * 获取<p>agent-exec 侧 thread</p>
                     * @return ThreadId <p>agent-exec 侧 thread</p>
                     * 
                     */
                    std::string GetThreadId() const;

                    /**
                     * 设置<p>agent-exec 侧 thread</p>
                     * @param _threadId <p>agent-exec 侧 thread</p>
                     * 
                     */
                    void SetThreadId(const std::string& _threadId);

                    /**
                     * 判断参数 ThreadId 是否已赋值
                     * @return ThreadId 是否已赋值
                     * 
                     */
                    bool ThreadIdHasBeenSet() const;

                    /**
                     * 获取<p>工具名，用于在 plugin 配置的 tool_list 中定位 tool_id</p>
                     * @return ToolName <p>工具名，用于在 plugin 配置的 tool_list 中定位 tool_id</p>
                     * 
                     */
                    std::string GetToolName() const;

                    /**
                     * 设置<p>工具名，用于在 plugin 配置的 tool_list 中定位 tool_id</p>
                     * @param _toolName <p>工具名，用于在 plugin 配置的 tool_list 中定位 tool_id</p>
                     * 
                     */
                    void SetToolName(const std::string& _toolName);

                    /**
                     * 判断参数 ToolName 是否已赋值
                     * @return ToolName 是否已赋值
                     * 
                     */
                    bool ToolNameHasBeenSet() const;

                    /**
                     * 获取<p>JSON：工具入参原文，原样透传给 MCP Server</p>
                     * @return Arguments <p>JSON：工具入参原文，原样透传给 MCP Server</p>
                     * 
                     */
                    std::string GetArguments() const;

                    /**
                     * 设置<p>JSON：工具入参原文，原样透传给 MCP Server</p>
                     * @param _arguments <p>JSON：工具入参原文，原样透传给 MCP Server</p>
                     * 
                     */
                    void SetArguments(const std::string& _arguments);

                    /**
                     * 判断参数 Arguments 是否已赋值
                     * @return Arguments 是否已赋值
                     * 
                     */
                    bool ArgumentsHasBeenSet() const;

                private:

                    /**
                     * <p>能力边界：一次请求只能调该 plugin 上的工具</p>
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * <p>agent-exec 侧 thread</p>
                     */
                    std::string m_threadId;
                    bool m_threadIdHasBeenSet;

                    /**
                     * <p>工具名，用于在 plugin 配置的 tool_list 中定位 tool_id</p>
                     */
                    std::string m_toolName;
                    bool m_toolNameHasBeenSet;

                    /**
                     * <p>JSON：工具入参原文，原样透传给 MCP Server</p>
                     */
                    std::string m_arguments;
                    bool m_argumentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CALLMCPTOOLREQUEST_H_
