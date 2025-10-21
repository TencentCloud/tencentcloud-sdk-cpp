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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_PARAM_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_PARAM_H_

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
                * 对指定参数的更新、增加、删除
                */
                class Param : public AbstractModel
                {
                public:
                    Param();
                    ~Param() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数key，例如：
                     * @return ConfigItem 参数key，例如：
                     * 
                     */
                    std::string GetConfigItem() const;

                    /**
                     * 设置参数key，例如：
                     * @param _configItem 参数key，例如：
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
                     * 获取参数值
                     * @return ConfigValue 参数值
                     * 
                     */
                    std::string GetConfigValue() const;

                    /**
                     * 设置参数值
                     * @param _configValue 参数值
                     * 
                     */
                    void SetConfigValue(const std::string& _configValue);

                    /**
                     * 判断参数 ConfigValue 是否已赋值
                     * @return ConfigValue 是否已赋值
                     * 
                     */
                    bool ConfigValueHasBeenSet() const;

                    /**
                     * 获取下发操作，支持：ADD、DELETE、MODIFY
                     * @return Operate 下发操作，支持：ADD、DELETE、MODIFY
                     * 
                     */
                    std::string GetOperate() const;

                    /**
                     * 设置下发操作，支持：ADD、DELETE、MODIFY
                     * @param _operate 下发操作，支持：ADD、DELETE、MODIFY
                     * 
                     */
                    void SetOperate(const std::string& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     * 
                     */
                    bool OperateHasBeenSet() const;

                private:

                    /**
                     * 参数key，例如：
                     */
                    std::string m_configItem;
                    bool m_configItemHasBeenSet;

                    /**
                     * 参数值
                     */
                    std::string m_configValue;
                    bool m_configValueHasBeenSet;

                    /**
                     * 下发操作，支持：ADD、DELETE、MODIFY
                     */
                    std::string m_operate;
                    bool m_operateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_PARAM_H_
