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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINAUTHENTICATIONREQUESTPROPERTIES_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINAUTHENTICATIONREQUESTPROPERTIES_H_

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
                * 回源鉴权请求属性。
                */
                class OriginAuthenticationRequestProperties : public AbstractModel
                {
                public:
                    OriginAuthenticationRequestProperties();
                    ~OriginAuthenticationRequestProperties() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设置回源鉴权参数类型，取值有：<li>QueryString：表示设置回源鉴权参数类型为查询字符串；</li><li>Header：表示设置回源鉴权参数类型为请求头。</li>
                     * @return Type 设置回源鉴权参数类型，取值有：<li>QueryString：表示设置回源鉴权参数类型为查询字符串；</li><li>Header：表示设置回源鉴权参数类型为请求头。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置设置回源鉴权参数类型，取值有：<li>QueryString：表示设置回源鉴权参数类型为查询字符串；</li><li>Header：表示设置回源鉴权参数类型为请求头。</li>
                     * @param _type 设置回源鉴权参数类型，取值有：<li>QueryString：表示设置回源鉴权参数类型为查询字符串；</li><li>Header：表示设置回源鉴权参数类型为请求头。</li>
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
                     * 获取设置回源鉴权类型对应的参数名称。
                     * @return Name 设置回源鉴权类型对应的参数名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置设置回源鉴权类型对应的参数名称。
                     * @param _name 设置回源鉴权类型对应的参数名称。
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
                     * 获取设置回源鉴权类型对应的参数值。
                     * @return Value 设置回源鉴权类型对应的参数值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置设置回源鉴权类型对应的参数值。
                     * @param _value 设置回源鉴权类型对应的参数值。
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
                     * 设置回源鉴权参数类型，取值有：<li>QueryString：表示设置回源鉴权参数类型为查询字符串；</li><li>Header：表示设置回源鉴权参数类型为请求头。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 设置回源鉴权类型对应的参数名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 设置回源鉴权类型对应的参数值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINAUTHENTICATIONREQUESTPROPERTIES_H_
