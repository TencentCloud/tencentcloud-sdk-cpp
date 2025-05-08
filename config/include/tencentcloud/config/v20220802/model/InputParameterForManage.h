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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_INPUTPARAMETERFORMANAGE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_INPUTPARAMETERFORMANAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * 规则入参
                */
                class InputParameterForManage : public AbstractModel
                {
                public:
                    InputParameterForManage();
                    ~InputParameterForManage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取值类型。数值：Integer， 字符串：String
                     * @return ValueType 值类型。数值：Integer， 字符串：String
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置值类型。数值：Integer， 字符串：String
                     * @param _valueType 值类型。数值：Integer， 字符串：String
                     * 
                     */
                    void SetValueType(const std::string& _valueType);

                    /**
                     * 判断参数 ValueType 是否已赋值
                     * @return ValueType 是否已赋值
                     * 
                     */
                    bool ValueTypeHasBeenSet() const;

                    /**
                     * 获取参数Key
                     * @return ParameterKey 参数Key
                     * 
                     */
                    std::string GetParameterKey() const;

                    /**
                     * 设置参数Key
                     * @param _parameterKey 参数Key
                     * 
                     */
                    void SetParameterKey(const std::string& _parameterKey);

                    /**
                     * 判断参数 ParameterKey 是否已赋值
                     * @return ParameterKey 是否已赋值
                     * 
                     */
                    bool ParameterKeyHasBeenSet() const;

                    /**
                     * 获取参数类型。必填类型：Require，可选类型：Optional。
                     * @return Type 参数类型。必填类型：Require，可选类型：Optional。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置参数类型。必填类型：Require，可选类型：Optional。
                     * @param _type 参数类型。必填类型：Require，可选类型：Optional。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取默认值
                     * @return DefaultValue 默认值
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置默认值
                     * @param _defaultValue 默认值
                     * 
                     */
                    void SetDefaultValue(const std::string& _defaultValue);

                    /**
                     * 判断参数 DefaultValue 是否已赋值
                     * @return DefaultValue 是否已赋值
                     * 
                     */
                    bool DefaultValueHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 值类型。数值：Integer， 字符串：String
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * 参数Key
                     */
                    std::string m_parameterKey;
                    bool m_parameterKeyHasBeenSet;

                    /**
                     * 参数类型。必填类型：Require，可选类型：Optional。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 默认值
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_INPUTPARAMETERFORMANAGE_H_
