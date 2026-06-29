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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINPARAM_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINPARAM_H_

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
                * MCP插件参数信息
                */
                class PluginParam : public AbstractModel
                {
                public:
                    PluginParam();
                    ~PluginParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数配置是否隐藏不可见
                     * @return IsGlobalHidden 参数配置是否隐藏不可见
                     * 
                     */
                    bool GetIsGlobalHidden() const;

                    /**
                     * 设置参数配置是否隐藏不可见
                     * @param _isGlobalHidden 参数配置是否隐藏不可见
                     * 
                     */
                    void SetIsGlobalHidden(const bool& _isGlobalHidden);

                    /**
                     * 判断参数 IsGlobalHidden 是否已赋值
                     * @return IsGlobalHidden 是否已赋值
                     * 
                     */
                    bool IsGlobalHiddenHasBeenSet() const;

                    /**
                     * 获取参数是否必填
                     * @return IsRequired 参数是否必填
                     * 
                     */
                    bool GetIsRequired() const;

                    /**
                     * 设置参数是否必填
                     * @param _isRequired 参数是否必填
                     * 
                     */
                    void SetIsRequired(const bool& _isRequired);

                    /**
                     * 判断参数 IsRequired 是否已赋值
                     * @return IsRequired 是否已赋值
                     * 
                     */
                    bool IsRequiredHasBeenSet() const;

                    /**
                     * 获取参数名称
                     * @return Name 参数名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置参数名称
                     * @param _name 参数名称
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
                     * 获取参数值
                     * @return Value 参数值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置参数值
                     * @param _value 参数值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 参数配置是否隐藏不可见
                     */
                    bool m_isGlobalHidden;
                    bool m_isGlobalHiddenHasBeenSet;

                    /**
                     * 参数是否必填
                     */
                    bool m_isRequired;
                    bool m_isRequiredHasBeenSet;

                    /**
                     * 参数名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 参数值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINPARAM_H_
