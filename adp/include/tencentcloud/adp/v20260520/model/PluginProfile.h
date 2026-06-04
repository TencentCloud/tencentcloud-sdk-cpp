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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINPROFILE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINPROFILE_H_

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
                * PluginProfile
                */
                class PluginProfile : public AbstractModel
                {
                public:
                    PluginProfile();
                    ~PluginProfile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取插件作者
                     * @return Author 插件作者
                     * 
                     */
                    std::string GetAuthor() const;

                    /**
                     * 设置插件作者
                     * @param _author 插件作者
                     * 
                     */
                    void SetAuthor(const std::string& _author);

                    /**
                     * 判断参数 Author 是否已赋值
                     * @return Author 是否已赋值
                     * 
                     */
                    bool AuthorHasBeenSet() const;

                    /**
                     * 获取插件描述
                     * @return Description 插件描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置插件描述
                     * @param _description 插件描述
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
                     * 获取插件名称
                     * @return Name 插件名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置插件名称
                     * @param _name 插件名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取插件产品分类
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 普通插件 |
| 1 | 连接器类插件 |
                     * @return PluginClass 插件产品分类
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 普通插件 |
| 1 | 连接器类插件 |
                     * 
                     */
                    int64_t GetPluginClass() const;

                    /**
                     * 设置插件产品分类
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 普通插件 |
| 1 | 连接器类插件 |
                     * @param _pluginClass 插件产品分类
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 普通插件 |
| 1 | 连接器类插件 |
                     * 
                     */
                    void SetPluginClass(const int64_t& _pluginClass);

                    /**
                     * 判断参数 PluginClass 是否已赋值
                     * @return PluginClass 是否已赋值
                     * 
                     */
                    bool PluginClassHasBeenSet() const;

                    /**
                     * 获取插件类型
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | API接口 |
| 1 | 代码 |
| 2 | MCP |
| 3 | 应用 |
                     * @return PluginKind 插件类型
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | API接口 |
| 1 | 代码 |
| 2 | MCP |
| 3 | 应用 |
                     * 
                     */
                    int64_t GetPluginKind() const;

                    /**
                     * 设置插件类型
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | API接口 |
| 1 | 代码 |
| 2 | MCP |
| 3 | 应用 |
                     * @param _pluginKind 插件类型
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | API接口 |
| 1 | 代码 |
| 2 | MCP |
| 3 | 应用 |
                     * 
                     */
                    void SetPluginKind(const int64_t& _pluginKind);

                    /**
                     * 判断参数 PluginKind 是否已赋值
                     * @return PluginKind 是否已赋值
                     * 
                     */
                    bool PluginKindHasBeenSet() const;

                    /**
                     * 获取插件来源
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 自定义插件 |
| 1 | 官方插件 |
| 2 | 第三方插件 |
                     * @return PluginSource 插件来源
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 自定义插件 |
| 1 | 官方插件 |
| 2 | 第三方插件 |
                     * 
                     */
                    int64_t GetPluginSource() const;

                    /**
                     * 设置插件来源
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 自定义插件 |
| 1 | 官方插件 |
| 2 | 第三方插件 |
                     * @param _pluginSource 插件来源
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 自定义插件 |
| 1 | 官方插件 |
| 2 | 第三方插件 |
                     * 
                     */
                    void SetPluginSource(const int64_t& _pluginSource);

                    /**
                     * 判断参数 PluginSource 是否已赋值
                     * @return PluginSource 是否已赋值
                     * 
                     */
                    bool PluginSourceHasBeenSet() const;

                private:

                    /**
                     * 插件作者
                     */
                    std::string m_author;
                    bool m_authorHasBeenSet;

                    /**
                     * 插件描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 插件图标url
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * 插件名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 插件产品分类
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 普通插件 |
| 1 | 连接器类插件 |
                     */
                    int64_t m_pluginClass;
                    bool m_pluginClassHasBeenSet;

                    /**
                     * 插件类型
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | API接口 |
| 1 | 代码 |
| 2 | MCP |
| 3 | 应用 |
                     */
                    int64_t m_pluginKind;
                    bool m_pluginKindHasBeenSet;

                    /**
                     * 插件来源
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 自定义插件 |
| 1 | 官方插件 |
| 2 | 第三方插件 |
                     */
                    int64_t m_pluginSource;
                    bool m_pluginSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINPROFILE_H_
