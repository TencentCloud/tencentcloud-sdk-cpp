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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCPRECISIONPLYRECORD_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCPRECISIONPLYRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * CC精准防护配置项
                */
                class CCPrecisionPlyRecord : public AbstractModel
                {
                public:
                    CCPrecisionPlyRecord();
                    ~CCPrecisionPlyRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置项类型，当前仅支持value
                     * @return FieldType 配置项类型，当前仅支持value
                     * 
                     */
                    std::string GetFieldType() const;

                    /**
                     * 设置配置项类型，当前仅支持value
                     * @param _fieldType 配置项类型，当前仅支持value
                     * 
                     */
                    void SetFieldType(const std::string& _fieldType);

                    /**
                     * 判断参数 FieldType 是否已赋值
                     * @return FieldType 是否已赋值
                     * 
                     */
                    bool FieldTypeHasBeenSet() const;

                    /**
                     * 获取配置字段，可取值cgi， ua， cookie， referer， accept,  srcip
                     * @return FieldName 配置字段，可取值cgi， ua， cookie， referer， accept,  srcip
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置配置字段，可取值cgi， ua， cookie， referer， accept,  srcip
                     * @param _fieldName 配置字段，可取值cgi， ua， cookie， referer， accept,  srcip
                     * 
                     */
                    void SetFieldName(const std::string& _fieldName);

                    /**
                     * 判断参数 FieldName 是否已赋值
                     * @return FieldName 是否已赋值
                     * 
                     */
                    bool FieldNameHasBeenSet() const;

                    /**
                     * 获取配置取值
                     * @return Value 配置取值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置配置取值
                     * @param _value 配置取值
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
                     * 获取配置项值比对方式，可取值equal：相等，not_equal：不相等， include：包含
                     * @return ValueOperator 配置项值比对方式，可取值equal：相等，not_equal：不相等， include：包含
                     * 
                     */
                    std::string GetValueOperator() const;

                    /**
                     * 设置配置项值比对方式，可取值equal：相等，not_equal：不相等， include：包含
                     * @param _valueOperator 配置项值比对方式，可取值equal：相等，not_equal：不相等， include：包含
                     * 
                     */
                    void SetValueOperator(const std::string& _valueOperator);

                    /**
                     * 判断参数 ValueOperator 是否已赋值
                     * @return ValueOperator 是否已赋值
                     * 
                     */
                    bool ValueOperatorHasBeenSet() const;

                private:

                    /**
                     * 配置项类型，当前仅支持value
                     */
                    std::string m_fieldType;
                    bool m_fieldTypeHasBeenSet;

                    /**
                     * 配置字段，可取值cgi， ua， cookie， referer， accept,  srcip
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * 配置取值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 配置项值比对方式，可取值equal：相等，not_equal：不相等， include：包含
                     */
                    std::string m_valueOperator;
                    bool m_valueOperatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCPRECISIONPLYRECORD_H_
