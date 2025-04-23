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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_PAIR_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_PAIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * 键值对
                */
                class Pair : public AbstractModel
                {
                public:
                    Pair();
                    ~Pair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取键
                     * @return Key 键
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置键
                     * @param _key 键
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

                    /**
                     * 获取类型，default 为自定义，reserved 为系统变量，referenced 为引用配置项
                     * @return Type 类型，default 为自定义，reserved 为系统变量，referenced 为引用配置项
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型，default 为自定义，reserved 为系统变量，referenced 为引用配置项
                     * @param _type 类型，default 为自定义，reserved 为系统变量，referenced 为引用配置项
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
                     * 获取配置名称
                     * @return Config 配置名称
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置配置名称
                     * @param _config 配置名称
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取加密配置名称
                     * @return Secret 加密配置名称
                     * 
                     */
                    std::string GetSecret() const;

                    /**
                     * 设置加密配置名称
                     * @param _secret 加密配置名称
                     * 
                     */
                    void SetSecret(const std::string& _secret);

                    /**
                     * 判断参数 Secret 是否已赋值
                     * @return Secret 是否已赋值
                     * 
                     */
                    bool SecretHasBeenSet() const;

                private:

                    /**
                     * 键
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 类型，default 为自定义，reserved 为系统变量，referenced 为引用配置项
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 配置名称
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 加密配置名称
                     */
                    std::string m_secret;
                    bool m_secretHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_PAIR_H_
