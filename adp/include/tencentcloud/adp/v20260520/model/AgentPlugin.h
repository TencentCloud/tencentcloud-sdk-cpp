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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPLUGIN_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPLUGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AgentPluginConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Agent 的插件信息
                */
                class AgentPlugin : public AbstractModel
                {
                public:
                    AgentPlugin();
                    ~AgentPlugin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取插件基本配置
                     * @return Config 插件基本配置
                     * 
                     */
                    AgentPluginConfig GetConfig() const;

                    /**
                     * 设置插件基本配置
                     * @param _config 插件基本配置
                     * 
                     */
                    void SetConfig(const AgentPluginConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

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
                     * 获取<p>插件产品分类</p><p>枚举值：</p><ul><li>0： 普通插件</li><li>1： 连接器类插件</li></ul>
                     * @return PluginClass <p>插件产品分类</p><p>枚举值：</p><ul><li>0： 普通插件</li><li>1： 连接器类插件</li></ul>
                     * 
                     */
                    int64_t GetPluginClass() const;

                    /**
                     * 设置<p>插件产品分类</p><p>枚举值：</p><ul><li>0： 普通插件</li><li>1： 连接器类插件</li></ul>
                     * @param _pluginClass <p>插件产品分类</p><p>枚举值：</p><ul><li>0： 普通插件</li><li>1： 连接器类插件</li></ul>
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
                     * 获取<p>插件状态</p><p>枚举值：</p><ul><li>0： 未知</li><li>1： 可用</li><li>2： 不可用</li></ul>
                     * @return Status <p>插件状态</p><p>枚举值：</p><ul><li>0： 未知</li><li>1： 可用</li><li>2： 不可用</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>插件状态</p><p>枚举值：</p><ul><li>0： 未知</li><li>1： 可用</li><li>2： 不可用</li></ul>
                     * @param _status <p>插件状态</p><p>枚举值：</p><ul><li>0： 未知</li><li>1： 可用</li><li>2： 不可用</li></ul>
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
                     * 获取<p>插件鉴权配置状态</p><p>枚举值：</p><ul><li>0： 不需要授权</li><li>1： 未配置</li><li>2： 已配置</li></ul>
                     * @return AuthConfigStatus <p>插件鉴权配置状态</p><p>枚举值：</p><ul><li>0： 不需要授权</li><li>1： 未配置</li><li>2： 已配置</li></ul>
                     * 
                     */
                    int64_t GetAuthConfigStatus() const;

                    /**
                     * 设置<p>插件鉴权配置状态</p><p>枚举值：</p><ul><li>0： 不需要授权</li><li>1： 未配置</li><li>2： 已配置</li></ul>
                     * @param _authConfigStatus <p>插件鉴权配置状态</p><p>枚举值：</p><ul><li>0： 不需要授权</li><li>1： 未配置</li><li>2： 已配置</li></ul>
                     * 
                     */
                    void SetAuthConfigStatus(const int64_t& _authConfigStatus);

                    /**
                     * 判断参数 AuthConfigStatus 是否已赋值
                     * @return AuthConfigStatus 是否已赋值
                     * 
                     */
                    bool AuthConfigStatusHasBeenSet() const;

                private:

                    /**
                     * 插件基本配置
                     */
                    AgentPluginConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 插件名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 插件图标url
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * 插件描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>插件产品分类</p><p>枚举值：</p><ul><li>0： 普通插件</li><li>1： 连接器类插件</li></ul>
                     */
                    int64_t m_pluginClass;
                    bool m_pluginClassHasBeenSet;

                    /**
                     * <p>插件状态</p><p>枚举值：</p><ul><li>0： 未知</li><li>1： 可用</li><li>2： 不可用</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>插件鉴权配置状态</p><p>枚举值：</p><ul><li>0： 不需要授权</li><li>1： 未配置</li><li>2： 已配置</li></ul>
                     */
                    int64_t m_authConfigStatus;
                    bool m_authConfigStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_AGENTPLUGIN_H_
