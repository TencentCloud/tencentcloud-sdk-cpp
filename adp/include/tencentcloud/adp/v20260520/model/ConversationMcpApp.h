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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONMCPAPP_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONMCPAPP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * MCP App 内容，供历史会话重建可交互 App
                */
                class ConversationMcpApp : public AbstractModel
                {
                public:
                    ConversationMcpApp();
                    ~ConversationMcpApp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>能力边界：一次请求只能读该 plugin 的资源</p>
                     * @return PluginId <p>能力边界：一次请求只能读该 plugin 的资源</p>
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置<p>能力边界：一次请求只能读该 plugin 的资源</p>
                     * @param _pluginId <p>能力边界：一次请求只能读该 plugin 的资源</p>
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
                     * 获取<p>ui:// 资源，前端据此调 ReadMCPResource 拉 HTML</p>
                     * @return ResourceUri <p>ui:// 资源，前端据此调 ReadMCPResource 拉 HTML</p>
                     * 
                     */
                    std::string GetResourceUri() const;

                    /**
                     * 设置<p>ui:// 资源，前端据此调 ReadMCPResource 拉 HTML</p>
                     * @param _resourceUri <p>ui:// 资源，前端据此调 ReadMCPResource 拉 HTML</p>
                     * 
                     */
                    void SetResourceUri(const std::string& _resourceUri);

                    /**
                     * 判断参数 ResourceUri 是否已赋值
                     * @return ResourceUri 是否已赋值
                     * 
                     */
                    bool ResourceUriHasBeenSet() const;

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
                     * 获取<p>JSON：完整 CallToolResult 原文，供历史会话重建时重放</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ToolResult <p>JSON：完整 CallToolResult 原文，供历史会话重建时重放</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetToolResult() const;

                    /**
                     * 设置<p>JSON：完整 CallToolResult 原文，供历史会话重建时重放</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _toolResult <p>JSON：完整 CallToolResult 原文，供历史会话重建时重放</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetToolResult(const std::string& _toolResult);

                    /**
                     * 判断参数 ToolResult 是否已赋值
                     * @return ToolResult 是否已赋值
                     * 
                     */
                    bool ToolResultHasBeenSet() const;

                private:

                    /**
                     * <p>能力边界：一次请求只能读该 plugin 的资源</p>
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * <p>ui:// 资源，前端据此调 ReadMCPResource 拉 HTML</p>
                     */
                    std::string m_resourceUri;
                    bool m_resourceUriHasBeenSet;

                    /**
                     * <p>agent-exec 侧 thread</p>
                     */
                    std::string m_threadId;
                    bool m_threadIdHasBeenSet;

                    /**
                     * <p>JSON：完整 CallToolResult 原文，供历史会话重建时重放</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_toolResult;
                    bool m_toolResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONMCPAPP_H_
