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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CONSTANTPARAMETER_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CONSTANTPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 常量参数
                */
                class ConstantParameter : public AbstractModel
                {
                public:
                    ConstantParameter();
                    ~ConstantParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取常量参数名称。只有 ServiceType 是 HTTP 才会用到此参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 常量参数名称。只有 ServiceType 是 HTTP 才会用到此参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置常量参数名称。只有 ServiceType 是 HTTP 才会用到此参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 常量参数名称。只有 ServiceType 是 HTTP 才会用到此参数。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取常量参数描述。只有 ServiceType 是 HTTP 才会用到此参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Desc 常量参数描述。只有 ServiceType 是 HTTP 才会用到此参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置常量参数描述。只有 ServiceType 是 HTTP 才会用到此参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _desc 常量参数描述。只有 ServiceType 是 HTTP 才会用到此参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取常量参数位置。只有 ServiceType 是 HTTP 才会用到此参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Position 常量参数位置。只有 ServiceType 是 HTTP 才会用到此参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPosition() const;

                    /**
                     * 设置常量参数位置。只有 ServiceType 是 HTTP 才会用到此参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _position 常量参数位置。只有 ServiceType 是 HTTP 才会用到此参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPosition(const std::string& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取常量参数默认值。只有 ServiceType 是 HTTP 才会用到此参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultValue 常量参数默认值。只有 ServiceType 是 HTTP 才会用到此参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置常量参数默认值。只有 ServiceType 是 HTTP 才会用到此参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultValue 常量参数默认值。只有 ServiceType 是 HTTP 才会用到此参数。
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
                     * 常量参数名称。只有 ServiceType 是 HTTP 才会用到此参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 常量参数描述。只有 ServiceType 是 HTTP 才会用到此参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 常量参数位置。只有 ServiceType 是 HTTP 才会用到此参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 常量参数默认值。只有 ServiceType 是 HTTP 才会用到此参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CONSTANTPARAMETER_H_
