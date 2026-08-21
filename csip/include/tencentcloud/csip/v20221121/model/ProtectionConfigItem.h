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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_PROTECTIONCONFIGITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_PROTECTIONCONFIGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 推荐防护配置项
                */
                class ProtectionConfigItem : public AbstractModel
                {
                public:
                    ProtectionConfigItem();
                    ~ProtectionConfigItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置项ID
                     * @return ConfigId 配置项ID
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置配置项ID
                     * @param _configId 配置项ID
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取配置项名称
                     * @return ConfigName 配置项名称
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置配置项名称
                     * @param _configName 配置项名称
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取配置项描述
                     * @return ConfigDescription 配置项描述
                     * 
                     */
                    std::string GetConfigDescription() const;

                    /**
                     * 设置配置项描述
                     * @param _configDescription 配置项描述
                     * 
                     */
                    void SetConfigDescription(const std::string& _configDescription);

                    /**
                     * 判断参数 ConfigDescription 是否已赋值
                     * @return ConfigDescription 是否已赋值
                     * 
                     */
                    bool ConfigDescriptionHasBeenSet() const;

                    /**
                     * 获取配置分组
枚举值：
auto_risk_discovery：自动风险发现
auto_defense：自动防御
client_hardening：客户端强化
                     * @return ConfigGroup 配置分组
枚举值：
auto_risk_discovery：自动风险发现
auto_defense：自动防御
client_hardening：客户端强化
                     * 
                     */
                    std::string GetConfigGroup() const;

                    /**
                     * 设置配置分组
枚举值：
auto_risk_discovery：自动风险发现
auto_defense：自动防御
client_hardening：客户端强化
                     * @param _configGroup 配置分组
枚举值：
auto_risk_discovery：自动风险发现
auto_defense：自动防御
client_hardening：客户端强化
                     * 
                     */
                    void SetConfigGroup(const std::string& _configGroup);

                    /**
                     * 判断参数 ConfigGroup 是否已赋值
                     * @return ConfigGroup 是否已赋值
                     * 
                     */
                    bool ConfigGroupHasBeenSet() const;

                    /**
                     * 获取是否已开启
                     * @return Enabled 是否已开启
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否已开启
                     * @param _enabled 是否已开启
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * 配置项ID
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 配置项名称
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * 配置项描述
                     */
                    std::string m_configDescription;
                    bool m_configDescriptionHasBeenSet;

                    /**
                     * 配置分组
枚举值：
auto_risk_discovery：自动风险发现
auto_defense：自动防御
client_hardening：客户端强化
                     */
                    std::string m_configGroup;
                    bool m_configGroupHasBeenSet;

                    /**
                     * 是否已开启
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_PROTECTIONCONFIGITEM_H_
