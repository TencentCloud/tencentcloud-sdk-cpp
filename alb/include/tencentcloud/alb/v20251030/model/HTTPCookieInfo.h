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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_HTTPCOOKIEINFO_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_HTTPCOOKIEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * HTTP Cookie信息
                */
                class HTTPCookieInfo : public AbstractModel
                {
                public:
                    HTTPCookieInfo();
                    ~HTTPCookieInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cookie的键，长度1~64个字符，支持字母、数字、下划线。
                     * @return Key Cookie的键，长度1~64个字符，支持字母、数字、下划线。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Cookie的键，长度1~64个字符，支持字母、数字、下划线。
                     * @param _key Cookie的键，长度1~64个字符，支持字母、数字、下划线。
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
                     * 获取Cookie的值，长度1~128个字符，支持可打印字符。
                     * @return Value Cookie的值，长度1~128个字符，支持可打印字符。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Cookie的值，长度1~128个字符，支持可打印字符。
                     * @param _value Cookie的值，长度1~128个字符，支持可打印字符。
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
                     * Cookie的键，长度1~64个字符，支持字母、数字、下划线。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Cookie的值，长度1~128个字符，支持可打印字符。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_HTTPCOOKIEINFO_H_
