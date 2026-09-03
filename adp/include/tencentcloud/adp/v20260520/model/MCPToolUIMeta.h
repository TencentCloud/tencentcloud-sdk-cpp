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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MCPTOOLUIMETA_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MCPTOOLUIMETA_H_

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
                * 对应 MCP 协议 _meta.ui，定义 MCP Apps 工具的交互界面元信息（本期仅消费 resourceUri，visibility）
                */
                class MCPToolUIMeta : public AbstractModel
                {
                public:
                    MCPToolUIMeta();
                    ~MCPToolUIMeta() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>关联的 UI 资源 URI，ui:// scheme，格式为 ui://&lt;插件标识&gt;/&lt;资源名&gt;-&lt;版本&gt;。该字段是 MCP Apps 交互式界面的入口，非空时表示工具支持 Apps（&quot;文本 + 交互式界面&quot;展示），为空则为纯文本工具。由工具同步结果自动识别填充，不支持手工编辑。</p>
                     * @return ResourceUri <p>关联的 UI 资源 URI，ui:// scheme，格式为 ui://&lt;插件标识&gt;/&lt;资源名&gt;-&lt;版本&gt;。该字段是 MCP Apps 交互式界面的入口，非空时表示工具支持 Apps（&quot;文本 + 交互式界面&quot;展示），为空则为纯文本工具。由工具同步结果自动识别填充，不支持手工编辑。</p>
                     * 
                     */
                    std::string GetResourceUri() const;

                    /**
                     * 设置<p>关联的 UI 资源 URI，ui:// scheme，格式为 ui://&lt;插件标识&gt;/&lt;资源名&gt;-&lt;版本&gt;。该字段是 MCP Apps 交互式界面的入口，非空时表示工具支持 Apps（&quot;文本 + 交互式界面&quot;展示），为空则为纯文本工具。由工具同步结果自动识别填充，不支持手工编辑。</p>
                     * @param _resourceUri <p>关联的 UI 资源 URI，ui:// scheme，格式为 ui://&lt;插件标识&gt;/&lt;资源名&gt;-&lt;版本&gt;。该字段是 MCP Apps 交互式界面的入口，非空时表示工具支持 Apps（&quot;文本 + 交互式界面&quot;展示），为空则为纯文本工具。由工具同步结果自动识别填充，不支持手工编辑。</p>
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
                     * 获取<p>工具的调用方可见性声明，取值范围：model（模型可调用）、app（应用界面可调用），可多选，如 [&quot;model&quot;,&quot;app&quot;]。与 ResourceUri 相互独立（SEP-1865），可单独存在，例如纯后端 app-only 工具为 [&quot;app&quot;]。当 ResourceUri 非空且本字段缺省时，按规范归一化为 [&quot;model&quot;,&quot;app&quot;]；存量非 Apps 工具保持为空。</p><p>枚举值：</p><ul><li>model： 支持model</li><li>app： 支持app</li></ul>
                     * @return Visibility <p>工具的调用方可见性声明，取值范围：model（模型可调用）、app（应用界面可调用），可多选，如 [&quot;model&quot;,&quot;app&quot;]。与 ResourceUri 相互独立（SEP-1865），可单独存在，例如纯后端 app-only 工具为 [&quot;app&quot;]。当 ResourceUri 非空且本字段缺省时，按规范归一化为 [&quot;model&quot;,&quot;app&quot;]；存量非 Apps 工具保持为空。</p><p>枚举值：</p><ul><li>model： 支持model</li><li>app： 支持app</li></ul>
                     * 
                     */
                    std::vector<std::string> GetVisibility() const;

                    /**
                     * 设置<p>工具的调用方可见性声明，取值范围：model（模型可调用）、app（应用界面可调用），可多选，如 [&quot;model&quot;,&quot;app&quot;]。与 ResourceUri 相互独立（SEP-1865），可单独存在，例如纯后端 app-only 工具为 [&quot;app&quot;]。当 ResourceUri 非空且本字段缺省时，按规范归一化为 [&quot;model&quot;,&quot;app&quot;]；存量非 Apps 工具保持为空。</p><p>枚举值：</p><ul><li>model： 支持model</li><li>app： 支持app</li></ul>
                     * @param _visibility <p>工具的调用方可见性声明，取值范围：model（模型可调用）、app（应用界面可调用），可多选，如 [&quot;model&quot;,&quot;app&quot;]。与 ResourceUri 相互独立（SEP-1865），可单独存在，例如纯后端 app-only 工具为 [&quot;app&quot;]。当 ResourceUri 非空且本字段缺省时，按规范归一化为 [&quot;model&quot;,&quot;app&quot;]；存量非 Apps 工具保持为空。</p><p>枚举值：</p><ul><li>model： 支持model</li><li>app： 支持app</li></ul>
                     * 
                     */
                    void SetVisibility(const std::vector<std::string>& _visibility);

                    /**
                     * 判断参数 Visibility 是否已赋值
                     * @return Visibility 是否已赋值
                     * 
                     */
                    bool VisibilityHasBeenSet() const;

                private:

                    /**
                     * <p>关联的 UI 资源 URI，ui:// scheme，格式为 ui://&lt;插件标识&gt;/&lt;资源名&gt;-&lt;版本&gt;。该字段是 MCP Apps 交互式界面的入口，非空时表示工具支持 Apps（&quot;文本 + 交互式界面&quot;展示），为空则为纯文本工具。由工具同步结果自动识别填充，不支持手工编辑。</p>
                     */
                    std::string m_resourceUri;
                    bool m_resourceUriHasBeenSet;

                    /**
                     * <p>工具的调用方可见性声明，取值范围：model（模型可调用）、app（应用界面可调用），可多选，如 [&quot;model&quot;,&quot;app&quot;]。与 ResourceUri 相互独立（SEP-1865），可单独存在，例如纯后端 app-only 工具为 [&quot;app&quot;]。当 ResourceUri 非空且本字段缺省时，按规范归一化为 [&quot;model&quot;,&quot;app&quot;]；存量非 Apps 工具保持为空。</p><p>枚举值：</p><ul><li>model： 支持model</li><li>app： 支持app</li></ul>
                     */
                    std::vector<std::string> m_visibility;
                    bool m_visibilityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MCPTOOLUIMETA_H_
