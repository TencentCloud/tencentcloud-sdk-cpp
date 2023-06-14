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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_APIREQUESTDESCR_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_APIREQUESTDESCR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * ApiRequestDescr
                */
                class ApiRequestDescr : public AbstractModel
                {
                public:
                    ApiRequestDescr();
                    ~ApiRequestDescr() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取参数位置
                     * @return In 参数位置
                     * 
                     */
                    std::string GetIn() const;

                    /**
                     * 设置参数位置
                     * @param _in 参数位置
                     * 
                     */
                    void SetIn(const std::string& _in);

                    /**
                     * 判断参数 In 是否已赋值
                     * @return In 是否已赋值
                     * 
                     */
                    bool InHasBeenSet() const;

                    /**
                     * 获取参数描述
                     * @return Description 参数描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置参数描述
                     * @param _description 参数描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取参数是否必须
                     * @return Required 参数是否必须
                     * 
                     */
                    bool GetRequired() const;

                    /**
                     * 设置参数是否必须
                     * @param _required 参数是否必须
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
                     * 获取参数的默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultValue 参数的默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置参数的默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultValue 参数的默认值
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 参数位置
                     */
                    std::string m_in;
                    bool m_inHasBeenSet;

                    /**
                     * 参数描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 参数是否必须
                     */
                    bool m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * 参数的默认值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_APIREQUESTDESCR_H_
