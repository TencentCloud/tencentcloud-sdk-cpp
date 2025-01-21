/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQAPLUGIN_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQAPLUGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/PluginToolReqParam.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 应用关联插件信息
                */
                class KnowledgeQaPlugin : public AbstractModel
                {
                public:
                    KnowledgeQaPlugin();
                    ~KnowledgeQaPlugin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取插件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PluginId 插件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置插件ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pluginId 插件ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取插件图标
                     * @return PluginIcon 插件图标
                     * 
                     */
                    std::string GetPluginIcon() const;

                    /**
                     * 设置插件图标
                     * @param _pluginIcon 插件图标
                     * 
                     */
                    void SetPluginIcon(const std::string& _pluginIcon);

                    /**
                     * 判断参数 PluginIcon 是否已赋值
                     * @return PluginIcon 是否已赋值
                     * 
                     */
                    bool PluginIconHasBeenSet() const;

                    /**
                     * 获取工具ID
                     * @return ToolId 工具ID
                     * 
                     */
                    std::string GetToolId() const;

                    /**
                     * 设置工具ID
                     * @param _toolId 工具ID
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
                     * 获取工具输入参数
                     * @return Inputs 工具输入参数
                     * 
                     */
                    std::vector<PluginToolReqParam> GetInputs() const;

                    /**
                     * 设置工具输入参数
                     * @param _inputs 工具输入参数
                     * 
                     */
                    void SetInputs(const std::vector<PluginToolReqParam>& _inputs);

                    /**
                     * 判断参数 Inputs 是否已赋值
                     * @return Inputs 是否已赋值
                     * 
                     */
                    bool InputsHasBeenSet() const;

                    /**
                     * 获取插件是否和知识库绑定
                     * @return IsBindingKnowledge 插件是否和知识库绑定
                     * 
                     */
                    bool GetIsBindingKnowledge() const;

                    /**
                     * 设置插件是否和知识库绑定
                     * @param _isBindingKnowledge 插件是否和知识库绑定
                     * 
                     */
                    void SetIsBindingKnowledge(const bool& _isBindingKnowledge);

                    /**
                     * 判断参数 IsBindingKnowledge 是否已赋值
                     * @return IsBindingKnowledge 是否已赋值
                     * 
                     */
                    bool IsBindingKnowledgeHasBeenSet() const;

                private:

                    /**
                     * 插件ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * 插件名称
                     */
                    std::string m_pluginName;
                    bool m_pluginNameHasBeenSet;

                    /**
                     * 插件图标
                     */
                    std::string m_pluginIcon;
                    bool m_pluginIconHasBeenSet;

                    /**
                     * 工具ID
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
                     * 工具输入参数
                     */
                    std::vector<PluginToolReqParam> m_inputs;
                    bool m_inputsHasBeenSet;

                    /**
                     * 插件是否和知识库绑定
                     */
                    bool m_isBindingKnowledge;
                    bool m_isBindingKnowledgeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_KNOWLEDGEQAPLUGIN_H_
