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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_APICONTENT_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_APICONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * API参数信息
                */
                class ApiContent : public AbstractModel
                {
                public:
                    ApiContent();
                    ~ApiContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取所属API的id
                     * @return Id 所属API的id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置所属API的id
                     * @param _id 所属API的id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取参数名称
                     * @return Name 参数名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置参数名称
                     * @param _name 参数名称
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
                     * 获取参数类型
                     * @return Type 参数类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置参数类型
                     * @param _type 参数类型
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
                     * 获取是否为动态值
                     * @return Dynamic 是否为动态值
                     * 
                     */
                    bool GetDynamic() const;

                    /**
                     * 设置是否为动态值
                     * @param _dynamic 是否为动态值
                     * 
                     */
                    void SetDynamic(const bool& _dynamic);

                    /**
                     * 判断参数 Dynamic 是否已赋值
                     * @return Dynamic 是否已赋值
                     * 
                     */
                    bool DynamicHasBeenSet() const;

                    /**
                     * 获取是否必填
                     * @return Required 是否必填
                     * 
                     */
                    bool GetRequired() const;

                    /**
                     * 设置是否必填
                     * @param _required 是否必填
                     * 
                     */
                    void SetRequired(const bool& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     * 
                     */
                    bool RequiredHasBeenSet() const;

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

                private:

                    /**
                     * 所属API的id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 参数名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 参数类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 是否为动态值
                     */
                    bool m_dynamic;
                    bool m_dynamicHasBeenSet;

                    /**
                     * 是否必填
                     */
                    bool m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * 参数值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 默认值
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_APICONTENT_H_
