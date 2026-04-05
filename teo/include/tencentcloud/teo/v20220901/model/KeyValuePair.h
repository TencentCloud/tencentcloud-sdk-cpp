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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_KEYVALUEPAIR_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_KEYVALUEPAIR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * KV 键值对数据，包含键名、键值和过期时间信息。
                */
                class KeyValuePair : public AbstractModel
                {
                public:
                    KeyValuePair();
                    ~KeyValuePair() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取键名。每个键名不能为空，长度为 1-512 个字符，允许的字符为字母、数字、中划线和下划线。
                     * @return Key 键名。每个键名不能为空，长度为 1-512 个字符，允许的字符为字母、数字、中划线和下划线。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置键名。每个键名不能为空，长度为 1-512 个字符，允许的字符为字母、数字、中划线和下划线。
                     * @param _key 键名。每个键名不能为空，长度为 1-512 个字符，允许的字符为字母、数字、中划线和下划线。
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
                     * 获取键值。入参时不能为空，最大支持 1 MB。出参时若键不存在，则返回空字符串。
                     * @return Value 键值。入参时不能为空，最大支持 1 MB。出参时若键不存在，则返回空字符串。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置键值。入参时不能为空，最大支持 1 MB。出参时若键不存在，则返回空字符串。
                     * @param _value 键值。入参时不能为空，最大支持 1 MB。出参时若键不存在，则返回空字符串。
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
                     * 获取过期时间，遵循 ISO 8601 标准，格式为 YYYY-MM-DDThh:mm:ssZ（UTC 时间）。出参时若为空字符串，表示该键值对永不过期。
                     * @return Expiration 过期时间，遵循 ISO 8601 标准，格式为 YYYY-MM-DDThh:mm:ssZ（UTC 时间）。出参时若为空字符串，表示该键值对永不过期。
                     * 
                     */
                    std::string GetExpiration() const;

                    /**
                     * 设置过期时间，遵循 ISO 8601 标准，格式为 YYYY-MM-DDThh:mm:ssZ（UTC 时间）。出参时若为空字符串，表示该键值对永不过期。
                     * @param _expiration 过期时间，遵循 ISO 8601 标准，格式为 YYYY-MM-DDThh:mm:ssZ（UTC 时间）。出参时若为空字符串，表示该键值对永不过期。
                     * 
                     */
                    void SetExpiration(const std::string& _expiration);

                    /**
                     * 判断参数 Expiration 是否已赋值
                     * @return Expiration 是否已赋值
                     * 
                     */
                    bool ExpirationHasBeenSet() const;

                private:

                    /**
                     * 键名。每个键名不能为空，长度为 1-512 个字符，允许的字符为字母、数字、中划线和下划线。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 键值。入参时不能为空，最大支持 1 MB。出参时若键不存在，则返回空字符串。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 过期时间，遵循 ISO 8601 标准，格式为 YYYY-MM-DDThh:mm:ssZ（UTC 时间）。出参时若为空字符串，表示该键值对永不过期。
                     */
                    std::string m_expiration;
                    bool m_expirationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_KEYVALUEPAIR_H_
