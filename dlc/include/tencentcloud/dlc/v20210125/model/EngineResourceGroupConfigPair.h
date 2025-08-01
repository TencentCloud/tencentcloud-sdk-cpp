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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ENGINERESOURCEGROUPCONFIGPAIR_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ENGINERESOURCEGROUPCONFIGPAIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 引擎资源组参数 配置项
                */
                class EngineResourceGroupConfigPair : public AbstractModel
                {
                public:
                    EngineResourceGroupConfigPair();
                    ~EngineResourceGroupConfigPair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigItem 配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigItem() const;

                    /**
                     * 设置配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configItem 配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigItem(const std::string& _configItem);

                    /**
                     * 判断参数 ConfigItem 是否已赋值
                     * @return ConfigItem 是否已赋值
                     * 
                     */
                    bool ConfigItemHasBeenSet() const;

                    /**
                     * 获取配置项的值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigValue 配置项的值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigValue() const;

                    /**
                     * 设置配置项的值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configValue 配置项的值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigValue(const std::string& _configValue);

                    /**
                     * 判断参数 ConfigValue 是否已赋值
                     * @return ConfigValue 是否已赋值
                     * 
                     */
                    bool ConfigValueHasBeenSet() const;

                private:

                    /**
                     * 配置项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configItem;
                    bool m_configItemHasBeenSet;

                    /**
                     * 配置项的值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configValue;
                    bool m_configValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ENGINERESOURCEGROUPCONFIGPAIR_H_
