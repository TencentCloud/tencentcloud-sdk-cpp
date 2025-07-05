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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTTOOLINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTTOOLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AgentToolReqParam.h>
#include <tencentcloud/lke/v20231130/model/AgentToolRspParam.h>
#include <tencentcloud/lke/v20231130/model/AgentMCPServerInfo.h>
#include <tencentcloud/lke/v20231130/model/AgentPluginHeader.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Agent的工具信息
                */
                class AgentToolInfo : public AbstractModel
                {
                public:
                    AgentToolInfo();
                    ~AgentToolInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取插件id
                     * @return PluginId 插件id
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置插件id
                     * @param _pluginId 插件id
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
                     * 获取插件名称
                     * @return PluginName 插件名称
                     * 
                     */
                    std::string GetPluginName() const;

                    /**
                     * 设置插件名称
                     * @param _pluginName 插件名称
                     * 
                     */
                    void SetPluginName(const std::string& _pluginName);

                    /**
                     * 判断参数 PluginName 是否已赋值
                     * @return PluginName 是否已赋值
                     * 
                     */
                    bool PluginNameHasBeenSet() const;

                    /**
                     * 获取插件图标url
                     * @return IconUrl 插件图标url
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置插件图标url
                     * @param _iconUrl 插件图标url
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
                     * 获取0 自定义插件
1 官方插件
2 第三方插件 目前用于第三方实现的mcp server
                     * @return PluginType 0 自定义插件
1 官方插件
2 第三方插件 目前用于第三方实现的mcp server
                     * 
                     */
                    uint64_t GetPluginType() const;

                    /**
                     * 设置0 自定义插件
1 官方插件
2 第三方插件 目前用于第三方实现的mcp server
                     * @param _pluginType 0 自定义插件
1 官方插件
2 第三方插件 目前用于第三方实现的mcp server
                     * 
                     */
                    void SetPluginType(const uint64_t& _pluginType);

                    /**
                     * 判断参数 PluginType 是否已赋值
                     * @return PluginType 是否已赋值
                     * 
                     */
                    bool PluginTypeHasBeenSet() const;

                    /**
                     * 获取工具id
                     * @return ToolId 工具id
                     * 
                     */
                    std::string GetToolId() const;

                    /**
                     * 设置工具id
                     * @param _toolId 工具id
                     * 
                     */
                    void SetToolId(const std::string& _toolId);

                    /**
                     * 判断参数 ToolId 是否已赋值
                     * @return ToolId 是否已赋值
                     * 
                     */
                    bool ToolIdHasBeenSet() const;

                    /**
                     * 获取工具名称
                     * @return ToolName 工具名称
                     * 
                     */
                    std::string GetToolName() const;

                    /**
                     * 设置工具名称
                     * @param _toolName 工具名称
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
                     * 获取工具描述
                     * @return ToolDesc 工具描述
                     * 
                     */
                    std::string GetToolDesc() const;

                    /**
                     * 设置工具描述
                     * @param _toolDesc 工具描述
                     * 
                     */
                    void SetToolDesc(const std::string& _toolDesc);

                    /**
                     * 判断参数 ToolDesc 是否已赋值
                     * @return ToolDesc 是否已赋值
                     * 
                     */
                    bool ToolDescHasBeenSet() const;

                    /**
                     * 获取输入参数
                     * @return Inputs 输入参数
                     * 
                     */
                    std::vector<AgentToolReqParam> GetInputs() const;

                    /**
                     * 设置输入参数
                     * @param _inputs 输入参数
                     * 
                     */
                    void SetInputs(const std::vector<AgentToolReqParam>& _inputs);

                    /**
                     * 判断参数 Inputs 是否已赋值
                     * @return Inputs 是否已赋值
                     * 
                     */
                    bool InputsHasBeenSet() const;

                    /**
                     * 获取输出参数
                     * @return Outputs 输出参数
                     * 
                     */
                    std::vector<AgentToolRspParam> GetOutputs() const;

                    /**
                     * 设置输出参数
                     * @param _outputs 输出参数
                     * 
                     */
                    void SetOutputs(const std::vector<AgentToolRspParam>& _outputs);

                    /**
                     * 判断参数 Outputs 是否已赋值
                     * @return Outputs 是否已赋值
                     * 
                     */
                    bool OutputsHasBeenSet() const;

                    /**
                     * 获取创建方式，0:服务创建，1:代码创建，2:MCP创建	
                     * @return CreateType 创建方式，0:服务创建，1:代码创建，2:MCP创建	
                     * 
                     */
                    int64_t GetCreateType() const;

                    /**
                     * 设置创建方式，0:服务创建，1:代码创建，2:MCP创建	
                     * @param _createType 创建方式，0:服务创建，1:代码创建，2:MCP创建	
                     * 
                     */
                    void SetCreateType(const int64_t& _createType);

                    /**
                     * 判断参数 CreateType 是否已赋值
                     * @return CreateType 是否已赋值
                     * 
                     */
                    bool CreateTypeHasBeenSet() const;

                    /**
                     * 获取MCP插件的配置信息
                     * @return McpServer MCP插件的配置信息
                     * 
                     */
                    AgentMCPServerInfo GetMcpServer() const;

                    /**
                     * 设置MCP插件的配置信息
                     * @param _mcpServer MCP插件的配置信息
                     * 
                     */
                    void SetMcpServer(const AgentMCPServerInfo& _mcpServer);

                    /**
                     * 判断参数 McpServer 是否已赋值
                     * @return McpServer 是否已赋值
                     * 
                     */
                    bool McpServerHasBeenSet() const;

                    /**
                     * 获取该工具是否和知识库绑定
                     * @return IsBindingKnowledge 该工具是否和知识库绑定
                     * 
                     */
                    bool GetIsBindingKnowledge() const;

                    /**
                     * 设置该工具是否和知识库绑定
                     * @param _isBindingKnowledge 该工具是否和知识库绑定
                     * 
                     */
                    void SetIsBindingKnowledge(const bool& _isBindingKnowledge);

                    /**
                     * 判断参数 IsBindingKnowledge 是否已赋值
                     * @return IsBindingKnowledge 是否已赋值
                     * 
                     */
                    bool IsBindingKnowledgeHasBeenSet() const;

                    /**
                     * 获取插件状态，1:可用，2:不可用	
                     * @return Status 插件状态，1:可用，2:不可用	
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置插件状态，1:可用，2:不可用	
                     * @param _status 插件状态，1:可用，2:不可用	
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取header信息
                     * @return Headers header信息
                     * 
                     */
                    std::vector<AgentPluginHeader> GetHeaders() const;

                    /**
                     * 设置header信息
                     * @param _headers header信息
                     * 
                     */
                    void SetHeaders(const std::vector<AgentPluginHeader>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                    /**
                     * 获取NON_STREAMING: 非流式  STREAMIN: 流式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CallingMethod NON_STREAMING: 非流式  STREAMIN: 流式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCallingMethod() const;

                    /**
                     * 设置NON_STREAMING: 非流式  STREAMIN: 流式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _callingMethod NON_STREAMING: 非流式  STREAMIN: 流式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCallingMethod(const std::string& _callingMethod);

                    /**
                     * 判断参数 CallingMethod 是否已赋值
                     * @return CallingMethod 是否已赋值
                     * 
                     */
                    bool CallingMethodHasBeenSet() const;

                private:

                    /**
                     * 插件id
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * 插件名称
                     */
                    std::string m_pluginName;
                    bool m_pluginNameHasBeenSet;

                    /**
                     * 插件图标url
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * 0 自定义插件
1 官方插件
2 第三方插件 目前用于第三方实现的mcp server
                     */
                    uint64_t m_pluginType;
                    bool m_pluginTypeHasBeenSet;

                    /**
                     * 工具id
                     */
                    std::string m_toolId;
                    bool m_toolIdHasBeenSet;

                    /**
                     * 工具名称
                     */
                    std::string m_toolName;
                    bool m_toolNameHasBeenSet;

                    /**
                     * 工具描述
                     */
                    std::string m_toolDesc;
                    bool m_toolDescHasBeenSet;

                    /**
                     * 输入参数
                     */
                    std::vector<AgentToolReqParam> m_inputs;
                    bool m_inputsHasBeenSet;

                    /**
                     * 输出参数
                     */
                    std::vector<AgentToolRspParam> m_outputs;
                    bool m_outputsHasBeenSet;

                    /**
                     * 创建方式，0:服务创建，1:代码创建，2:MCP创建	
                     */
                    int64_t m_createType;
                    bool m_createTypeHasBeenSet;

                    /**
                     * MCP插件的配置信息
                     */
                    AgentMCPServerInfo m_mcpServer;
                    bool m_mcpServerHasBeenSet;

                    /**
                     * 该工具是否和知识库绑定
                     */
                    bool m_isBindingKnowledge;
                    bool m_isBindingKnowledgeHasBeenSet;

                    /**
                     * 插件状态，1:可用，2:不可用	
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * header信息
                     */
                    std::vector<AgentPluginHeader> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * NON_STREAMING: 非流式  STREAMIN: 流式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_callingMethod;
                    bool m_callingMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTTOOLINFO_H_
