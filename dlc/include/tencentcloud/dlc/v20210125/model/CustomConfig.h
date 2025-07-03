/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CUSTOMCONFIG_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CUSTOMCONFIG_H_

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
                * 自定义参数
                */
                class CustomConfig : public AbstractModel
                {
                public:
                    CustomConfig();
                    ~CustomConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义参数名
                     * @return ConfigKey 自定义参数名
                     * 
                     */
                    std::string GetConfigKey() const;

                    /**
                     * 设置自定义参数名
                     * @param _configKey 自定义参数名
                     * 
                     */
                    void SetConfigKey(const std::string& _configKey);

                    /**
                     * 判断参数 ConfigKey 是否已赋值
                     * @return ConfigKey 是否已赋值
                     * 
                     */
                    bool ConfigKeyHasBeenSet() const;

                    /**
                     * 获取自定义参数值
                     * @return ConfigValue 自定义参数值
                     * 
                     */
                    std::string GetConfigValue() const;

                    /**
                     * 设置自定义参数值
                     * @param _configValue 自定义参数值
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
                     * 自定义参数名
                     */
                    std::string m_configKey;
                    bool m_configKeyHasBeenSet;

                    /**
                     * 自定义参数值
                     */
                    std::string m_configValue;
                    bool m_configValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CUSTOMCONFIG_H_
