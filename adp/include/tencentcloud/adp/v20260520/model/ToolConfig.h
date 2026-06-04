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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_TOOLCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_TOOLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ApiToolConfig.h>
#include <tencentcloud/adp/v20260520/model/AppToolConfig.h>
#include <tencentcloud/adp/v20260520/model/CodeToolConfig.h>
#include <tencentcloud/adp/v20260520/model/MCPToolConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ToolConfig
                */
                class ToolConfig : public AbstractModel
                {
                public:
                    ToolConfig();
                    ~ToolConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API插件工具配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiToolConfig API插件工具配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ApiToolConfig GetApiToolConfig() const;

                    /**
                     * 设置API插件工具配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiToolConfig API插件工具配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiToolConfig(const ApiToolConfig& _apiToolConfig);

                    /**
                     * 判断参数 ApiToolConfig 是否已赋值
                     * @return ApiToolConfig 是否已赋值
                     * 
                     */
                    bool ApiToolConfigHasBeenSet() const;

                    /**
                     * 获取应用插件工具配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppToolConfig 应用插件工具配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppToolConfig GetAppToolConfig() const;

                    /**
                     * 设置应用插件工具配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appToolConfig 应用插件工具配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppToolConfig(const AppToolConfig& _appToolConfig);

                    /**
                     * 判断参数 AppToolConfig 是否已赋值
                     * @return AppToolConfig 是否已赋值
                     * 
                     */
                    bool AppToolConfigHasBeenSet() const;

                    /**
                     * 获取代码插件工具配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeToolConfig 代码插件工具配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CodeToolConfig GetCodeToolConfig() const;

                    /**
                     * 设置代码插件工具配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codeToolConfig 代码插件工具配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCodeToolConfig(const CodeToolConfig& _codeToolConfig);

                    /**
                     * 判断参数 CodeToolConfig 是否已赋值
                     * @return CodeToolConfig 是否已赋值
                     * 
                     */
                    bool CodeToolConfigHasBeenSet() const;

                    /**
                     * 获取mcp插件工具配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MCPToolConfig mcp插件工具配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MCPToolConfig GetMCPToolConfig() const;

                    /**
                     * 设置mcp插件工具配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mCPToolConfig mcp插件工具配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMCPToolConfig(const MCPToolConfig& _mCPToolConfig);

                    /**
                     * 判断参数 MCPToolConfig 是否已赋值
                     * @return MCPToolConfig 是否已赋值
                     * 
                     */
                    bool MCPToolConfigHasBeenSet() const;

                private:

                    /**
                     * API插件工具配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ApiToolConfig m_apiToolConfig;
                    bool m_apiToolConfigHasBeenSet;

                    /**
                     * 应用插件工具配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppToolConfig m_appToolConfig;
                    bool m_appToolConfigHasBeenSet;

                    /**
                     * 代码插件工具配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CodeToolConfig m_codeToolConfig;
                    bool m_codeToolConfigHasBeenSet;

                    /**
                     * mcp插件工具配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MCPToolConfig m_mCPToolConfig;
                    bool m_mCPToolConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_TOOLCONFIG_H_
