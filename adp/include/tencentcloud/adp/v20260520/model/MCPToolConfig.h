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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MCPTOOLCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MCPTOOLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/RequestParam.h>
#include <tencentcloud/adp/v20260520/model/ResponseParam.h>
#include <tencentcloud/adp/v20260520/model/MCPToolMeta.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * MCPToolConfig
                */
                class MCPToolConfig : public AbstractModel
                {
                public:
                    MCPToolConfig();
                    ~MCPToolConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>输入参数</p>
                     * @return Inputs <p>输入参数</p>
                     * 
                     */
                    std::vector<RequestParam> GetInputs() const;

                    /**
                     * 设置<p>输入参数</p>
                     * @param _inputs <p>输入参数</p>
                     * 
                     */
                    void SetInputs(const std::vector<RequestParam>& _inputs);

                    /**
                     * 判断参数 Inputs 是否已赋值
                     * @return Inputs 是否已赋值
                     * 
                     */
                    bool InputsHasBeenSet() const;

                    /**
                     * 获取<p>输出参数</p>
                     * @return Outputs <p>输出参数</p>
                     * 
                     */
                    std::vector<ResponseParam> GetOutputs() const;

                    /**
                     * 设置<p>输出参数</p>
                     * @param _outputs <p>输出参数</p>
                     * 
                     */
                    void SetOutputs(const std::vector<ResponseParam>& _outputs);

                    /**
                     * 判断参数 Outputs 是否已赋值
                     * @return Outputs 是否已赋值
                     * 
                     */
                    bool OutputsHasBeenSet() const;

                    /**
                     * 获取<p>工具meta信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Meta <p>工具meta信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MCPToolMeta GetMeta() const;

                    /**
                     * 设置<p>工具meta信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _meta <p>工具meta信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMeta(const MCPToolMeta& _meta);

                    /**
                     * 判断参数 Meta 是否已赋值
                     * @return Meta 是否已赋值
                     * 
                     */
                    bool MetaHasBeenSet() const;

                    /**
                     * 获取<p>是否支持交互界面（MCP Apps），插件级标签  默认值：false</p>
                     * @return SupportsApps <p>是否支持交互界面（MCP Apps），插件级标签  默认值：false</p>
                     * 
                     */
                    bool GetSupportsApps() const;

                    /**
                     * 设置<p>是否支持交互界面（MCP Apps），插件级标签  默认值：false</p>
                     * @param _supportsApps <p>是否支持交互界面（MCP Apps），插件级标签  默认值：false</p>
                     * 
                     */
                    void SetSupportsApps(const bool& _supportsApps);

                    /**
                     * 判断参数 SupportsApps 是否已赋值
                     * @return SupportsApps 是否已赋值
                     * 
                     */
                    bool SupportsAppsHasBeenSet() const;

                private:

                    /**
                     * <p>输入参数</p>
                     */
                    std::vector<RequestParam> m_inputs;
                    bool m_inputsHasBeenSet;

                    /**
                     * <p>输出参数</p>
                     */
                    std::vector<ResponseParam> m_outputs;
                    bool m_outputsHasBeenSet;

                    /**
                     * <p>工具meta信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MCPToolMeta m_meta;
                    bool m_metaHasBeenSet;

                    /**
                     * <p>是否支持交互界面（MCP Apps），插件级标签  默认值：false</p>
                     */
                    bool m_supportsApps;
                    bool m_supportsAppsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MCPTOOLCONFIG_H_
