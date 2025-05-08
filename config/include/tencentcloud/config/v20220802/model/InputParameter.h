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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_INPUTPARAMETER_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_INPUTPARAMETER_H_

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
                * 参数值
                */
                class InputParameter : public AbstractModel
                {
                public:
                    InputParameter();
                    ~InputParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数名
                     * @return ParameterKey 参数名
                     * 
                     */
                    std::string GetParameterKey() const;

                    /**
                     * 设置参数名
                     * @param _parameterKey 参数名
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
                     * 参数名
                     */
                    std::string m_parameterKey;
                    bool m_parameterKeyHasBeenSet;

                    /**
                     * 参数类型。必填类型：Require，可选类型：Optional。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

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

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_INPUTPARAMETER_H_
