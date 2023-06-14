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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_MAPPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_MAPPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Map参数
                */
                class MapParam : public AbstractModel
                {
                public:
                    MapParam();
                    ~MapParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取key值
                     * @return Key key值
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置key值
                     * @param _key key值
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
                     * 获取类型，DEFAULT默认，DATE系统预设-时间戳，CUSTOMIZE自定义，MAPPING映射
                     * @return Type 类型，DEFAULT默认，DATE系统预设-时间戳，CUSTOMIZE自定义，MAPPING映射
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型，DEFAULT默认，DATE系统预设-时间戳，CUSTOMIZE自定义，MAPPING映射
                     * @param _type 类型，DEFAULT默认，DATE系统预设-时间戳，CUSTOMIZE自定义，MAPPING映射
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
                     * 获取值
                     * @return Value 值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置值
                     * @param _value 值
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
                     * key值
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 类型，DEFAULT默认，DATE系统预设-时间戳，CUSTOMIZE自定义，MAPPING映射
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_MAPPARAM_H_
