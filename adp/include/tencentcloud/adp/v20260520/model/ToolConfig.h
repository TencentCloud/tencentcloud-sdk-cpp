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
                     * 获取<p>API工具配置信息</p>
                     * @return ApiToolConfig <p>API工具配置信息</p>
                     * 
                     */
                    ApiToolConfig GetApiToolConfig() const;

                    /**
                     * 设置<p>API工具配置信息</p>
                     * @param _apiToolConfig <p>API工具配置信息</p>
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
                     * 获取<p>应用配置信息</p>
                     * @return AppToolConfig <p>应用配置信息</p>
                     * 
                     */
                    AppToolConfig GetAppToolConfig() const;

                    /**
                     * 设置<p>应用配置信息</p>
                     * @param _appToolConfig <p>应用配置信息</p>
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
                     * 获取<p>代码工具配置信息</p>
                     * @return CodeToolConfig <p>代码工具配置信息</p>
                     * 
                     */
                    CodeToolConfig GetCodeToolConfig() const;

                    /**
                     * 设置<p>代码工具配置信息</p>
                     * @param _codeToolConfig <p>代码工具配置信息</p>
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
                     * 获取<p>MCP工具配置信息</p>
                     * @return MCPToolConfig <p>MCP工具配置信息</p>
                     * 
                     */
                    MCPToolConfig GetMCPToolConfig() const;

                    /**
                     * 设置<p>MCP工具配置信息</p>
                     * @param _mCPToolConfig <p>MCP工具配置信息</p>
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
                     * <p>API工具配置信息</p>
                     */
                    ApiToolConfig m_apiToolConfig;
                    bool m_apiToolConfigHasBeenSet;

                    /**
                     * <p>应用配置信息</p>
                     */
                    AppToolConfig m_appToolConfig;
                    bool m_appToolConfigHasBeenSet;

                    /**
                     * <p>代码工具配置信息</p>
                     */
                    CodeToolConfig m_codeToolConfig;
                    bool m_codeToolConfigHasBeenSet;

                    /**
                     * <p>MCP工具配置信息</p>
                     */
                    MCPToolConfig m_mCPToolConfig;
                    bool m_mCPToolConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_TOOLCONFIG_H_
