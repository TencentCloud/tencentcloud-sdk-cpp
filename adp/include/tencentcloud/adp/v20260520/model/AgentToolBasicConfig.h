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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTTOOLBASICCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTTOOLBASICCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentToolInputParameter.h>
#include <tencentcloud/adp/v20260520/model/AgentToolOutputParameter.h>
#include <tencentcloud/adp/v20260520/model/AgentPluginParameter.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Agent的工具基础配置
                */
                class AgentToolBasicConfig : public AbstractModel
                {
                public:
                    AgentToolBasicConfig();
                    ~AgentToolBasicConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>插件id</p>
                     * @return PluginId <p>插件id</p>
                     * 
                     */
                    std::string GetPluginId() const;

                    /**
                     * 设置<p>插件id</p>
                     * @param _pluginId <p>插件id</p>
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
                     * 获取<p>工具id</p>
                     * @return ToolId <p>工具id</p>
                     * 
                     */
                    std::string GetToolId() const;

                    /**
                     * 设置<p>工具id</p>
                     * @param _toolId <p>工具id</p>
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
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
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
                     * 获取<p>工具输入参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputList <p>工具输入参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AgentToolInputParameter> GetInputList() const;

                    /**
                     * 设置<p>工具输入参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputList <p>工具输入参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputList(const std::vector<AgentToolInputParameter>& _inputList);

                    /**
                     * 判断参数 InputList 是否已赋值
                     * @return InputList 是否已赋值
                     * 
                     */
                    bool InputListHasBeenSet() const;

                    /**
                     * 获取<p>工具输出参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputList <p>工具输出参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AgentToolOutputParameter> GetOutputList() const;

                    /**
                     * 设置<p>工具输出参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputList <p>工具输出参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputList(const std::vector<AgentToolOutputParameter>& _outputList);

                    /**
                     * 判断参数 OutputList 是否已赋值
                     * @return OutputList 是否已赋值
                     * 
                     */
                    bool OutputListHasBeenSet() const;

                    /**
                     * 获取<p>工具Header参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeaderParameterList <p>工具Header参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AgentPluginParameter> GetHeaderParameterList() const;

                    /**
                     * 设置<p>工具Header参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headerParameterList <p>工具Header参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeaderParameterList(const std::vector<AgentPluginParameter>& _headerParameterList);

                    /**
                     * 判断参数 HeaderParameterList 是否已赋值
                     * @return HeaderParameterList 是否已赋值
                     * 
                     */
                    bool HeaderParameterListHasBeenSet() const;

                    /**
                     * 获取<p>工具Query参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueryParameterList <p>工具Query参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AgentPluginParameter> GetQueryParameterList() const;

                    /**
                     * 设置<p>工具Query参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queryParameterList <p>工具Query参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueryParameterList(const std::vector<AgentPluginParameter>& _queryParameterList);

                    /**
                     * 判断参数 QueryParameterList 是否已赋值
                     * @return QueryParameterList 是否已赋值
                     * 
                     */
                    bool QueryParameterListHasBeenSet() const;

                    /**
                     * 获取<p>工具来源: 0-来自插件，1-来自工作流</p>
                     * @return ToolSource <p>工具来源: 0-来自插件，1-来自工作流</p>
                     * 
                     */
                    uint64_t GetToolSource() const;

                    /**
                     * 设置<p>工具来源: 0-来自插件，1-来自工作流</p>
                     * @param _toolSource <p>工具来源: 0-来自插件，1-来自工作流</p>
                     * 
                     */
                    void SetToolSource(const uint64_t& _toolSource);

                    /**
                     * 判断参数 ToolSource 是否已赋值
                     * @return ToolSource 是否已赋值
                     * 
                     */
                    bool ToolSourceHasBeenSet() const;

                    /**
                     * 获取<p>是否禁用</p>
                     * @return IsDisabled <p>是否禁用</p>
                     * 
                     */
                    bool GetIsDisabled() const;

                    /**
                     * 设置<p>是否禁用</p>
                     * @param _isDisabled <p>是否禁用</p>
                     * 
                     */
                    void SetIsDisabled(const bool& _isDisabled);

                    /**
                     * 判断参数 IsDisabled 是否已赋值
                     * @return IsDisabled 是否已赋值
                     * 
                     */
                    bool IsDisabledHasBeenSet() const;

                private:

                    /**
                     * <p>插件id</p>
                     */
                    std::string m_pluginId;
                    bool m_pluginIdHasBeenSet;

                    /**
                     * <p>工具id</p>
                     */
                    std::string m_toolId;
                    bool m_toolIdHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>工具输入参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AgentToolInputParameter> m_inputList;
                    bool m_inputListHasBeenSet;

                    /**
                     * <p>工具输出参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AgentToolOutputParameter> m_outputList;
                    bool m_outputListHasBeenSet;

                    /**
                     * <p>工具Header参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AgentPluginParameter> m_headerParameterList;
                    bool m_headerParameterListHasBeenSet;

                    /**
                     * <p>工具Query参数列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AgentPluginParameter> m_queryParameterList;
                    bool m_queryParameterListHasBeenSet;

                    /**
                     * <p>工具来源: 0-来自插件，1-来自工作流</p>
                     */
                    uint64_t m_toolSource;
                    bool m_toolSourceHasBeenSet;

                    /**
                     * <p>是否禁用</p>
                     */
                    bool m_isDisabled;
                    bool m_isDisabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTTOOLBASICCONFIG_H_
