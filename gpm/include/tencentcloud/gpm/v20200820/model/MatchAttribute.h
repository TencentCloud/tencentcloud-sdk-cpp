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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_MATCHATTRIBUTE_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_MATCHATTRIBUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gpm/v20200820/model/AttributeMap.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * 玩家匹配属性
                */
                class MatchAttribute : public AbstractModel
                {
                public:
                    MatchAttribute();
                    ~MatchAttribute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取属性名 长度 128 [a-zA-Z0-9-\.]*
                     * @return Name 属性名 长度 128 [a-zA-Z0-9-\.]*
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置属性名 长度 128 [a-zA-Z0-9-\.]*
                     * @param _name 属性名 长度 128 [a-zA-Z0-9-\.]*
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
                     * 获取属性类型: 0 数值; 1 string; 默认 0
                     * @return Type 属性类型: 0 数值; 1 string; 默认 0
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置属性类型: 0 数值; 1 string; 默认 0
                     * @param _type 属性类型: 0 数值; 1 string; 默认 0
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取数字属性值 默认 0.0
                     * @return NumberValue 数字属性值 默认 0.0
                     * 
                     */
                    double GetNumberValue() const;

                    /**
                     * 设置数字属性值 默认 0.0
                     * @param _numberValue 数字属性值 默认 0.0
                     * 
                     */
                    void SetNumberValue(const double& _numberValue);

                    /**
                     * 判断参数 NumberValue 是否已赋值
                     * @return NumberValue 是否已赋值
                     * 
                     */
                    bool NumberValueHasBeenSet() const;

                    /**
                     * 获取字符串属性值 长度 128 默认 ""
                     * @return StringValue 字符串属性值 长度 128 默认 ""
                     * 
                     */
                    std::string GetStringValue() const;

                    /**
                     * 设置字符串属性值 长度 128 默认 ""
                     * @param _stringValue 字符串属性值 长度 128 默认 ""
                     * 
                     */
                    void SetStringValue(const std::string& _stringValue);

                    /**
                     * 判断参数 StringValue 是否已赋值
                     * @return StringValue 是否已赋值
                     * 
                     */
                    bool StringValueHasBeenSet() const;

                    /**
                     * 获取list 属性值
                     * @return ListValue list 属性值
                     * 
                     */
                    std::vector<std::string> GetListValue() const;

                    /**
                     * 设置list 属性值
                     * @param _listValue list 属性值
                     * 
                     */
                    void SetListValue(const std::vector<std::string>& _listValue);

                    /**
                     * 判断参数 ListValue 是否已赋值
                     * @return ListValue 是否已赋值
                     * 
                     */
                    bool ListValueHasBeenSet() const;

                    /**
                     * 获取字典属性值
                     * @return MapValue 字典属性值
                     * 
                     */
                    std::vector<AttributeMap> GetMapValue() const;

                    /**
                     * 设置字典属性值
                     * @param _mapValue 字典属性值
                     * 
                     */
                    void SetMapValue(const std::vector<AttributeMap>& _mapValue);

                    /**
                     * 判断参数 MapValue 是否已赋值
                     * @return MapValue 是否已赋值
                     * 
                     */
                    bool MapValueHasBeenSet() const;

                private:

                    /**
                     * 属性名 长度 128 [a-zA-Z0-9-\.]*
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 属性类型: 0 数值; 1 string; 默认 0
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数字属性值 默认 0.0
                     */
                    double m_numberValue;
                    bool m_numberValueHasBeenSet;

                    /**
                     * 字符串属性值 长度 128 默认 ""
                     */
                    std::string m_stringValue;
                    bool m_stringValueHasBeenSet;

                    /**
                     * list 属性值
                     */
                    std::vector<std::string> m_listValue;
                    bool m_listValueHasBeenSet;

                    /**
                     * 字典属性值
                     */
                    std::vector<AttributeMap> m_mapValue;
                    bool m_mapValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_MATCHATTRIBUTE_H_
