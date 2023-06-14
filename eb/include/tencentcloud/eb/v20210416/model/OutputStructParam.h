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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_OUTPUTSTRUCTPARAM_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_OUTPUTSTRUCTPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * Transform输出参数
                */
                class OutputStructParam : public AbstractModel
                {
                public:
                    OutputStructParam();
                    ~OutputStructParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对应输出json中的key
                     * @return Key 对应输出json中的key
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置对应输出json中的key
                     * @param _key 对应输出json中的key
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取可以填json-path也可以支持常量或者内置关键字date类型
                     * @return Value 可以填json-path也可以支持常量或者内置关键字date类型
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置可以填json-path也可以支持常量或者内置关键字date类型
                     * @param _value 可以填json-path也可以支持常量或者内置关键字date类型
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取value的数据类型, 可选值: STRING, NUMBER,BOOLEAN,NULL,SYS_VARIABLE,JSONPATH
                     * @return ValueType value的数据类型, 可选值: STRING, NUMBER,BOOLEAN,NULL,SYS_VARIABLE,JSONPATH
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置value的数据类型, 可选值: STRING, NUMBER,BOOLEAN,NULL,SYS_VARIABLE,JSONPATH
                     * @param _valueType value的数据类型, 可选值: STRING, NUMBER,BOOLEAN,NULL,SYS_VARIABLE,JSONPATH
                     * 
                     */
                    void SetValueType(const std::string& _valueType);

                    /**
                     * 判断参数 ValueType 是否已赋值
                     * @return ValueType 是否已赋值
                     * 
                     */
                    bool ValueTypeHasBeenSet() const;

                private:

                    /**
                     * 对应输出json中的key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 可以填json-path也可以支持常量或者内置关键字date类型
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * value的数据类型, 可选值: STRING, NUMBER,BOOLEAN,NULL,SYS_VARIABLE,JSONPATH
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_OUTPUTSTRUCTPARAM_H_
