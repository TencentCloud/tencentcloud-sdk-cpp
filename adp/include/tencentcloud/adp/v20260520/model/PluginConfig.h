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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ApiPluginConfig.h>
#include <tencentcloud/adp/v20260520/model/AppPluginConfig.h>
#include <tencentcloud/adp/v20260520/model/MCPPluginConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 插件配置
                */
                class PluginConfig : public AbstractModel
                {
                public:
                    PluginConfig();
                    ~PluginConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API插件配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiPluginConfig API插件配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ApiPluginConfig GetApiPluginConfig() const;

                    /**
                     * 设置API插件配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiPluginConfig API插件配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiPluginConfig(const ApiPluginConfig& _apiPluginConfig);

                    /**
                     * 判断参数 ApiPluginConfig 是否已赋值
                     * @return ApiPluginConfig 是否已赋值
                     * 
                     */
                    bool ApiPluginConfigHasBeenSet() const;

                    /**
                     * 获取应用插件配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppPluginConfig 应用插件配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppPluginConfig GetAppPluginConfig() const;

                    /**
                     * 设置应用插件配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appPluginConfig 应用插件配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppPluginConfig(const AppPluginConfig& _appPluginConfig);

                    /**
                     * 判断参数 AppPluginConfig 是否已赋值
                     * @return AppPluginConfig 是否已赋值
                     * 
                     */
                    bool AppPluginConfigHasBeenSet() const;

                    /**
                     * 获取mcp插件配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MCPPluginConfig mcp插件配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MCPPluginConfig GetMCPPluginConfig() const;

                    /**
                     * 设置mcp插件配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mCPPluginConfig mcp插件配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMCPPluginConfig(const MCPPluginConfig& _mCPPluginConfig);

                    /**
                     * 判断参数 MCPPluginConfig 是否已赋值
                     * @return MCPPluginConfig 是否已赋值
                     * 
                     */
                    bool MCPPluginConfigHasBeenSet() const;

                private:

                    /**
                     * API插件配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ApiPluginConfig m_apiPluginConfig;
                    bool m_apiPluginConfigHasBeenSet;

                    /**
                     * 应用插件配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppPluginConfig m_appPluginConfig;
                    bool m_appPluginConfigHasBeenSet;

                    /**
                     * mcp插件配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MCPPluginConfig m_mCPPluginConfig;
                    bool m_mCPPluginConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINCONFIG_H_
