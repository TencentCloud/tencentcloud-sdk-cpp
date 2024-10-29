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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASERVICEREQUESTPARAM_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASERVICEREQUESTPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 数据服务入参
                */
                class DataServiceRequestParam : public AbstractModel
                {
                public:
                    DataServiceRequestParam();
                    ~DataServiceRequestParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamName 参数名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置参数名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramName 参数名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     * 
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取绑定字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BindField 绑定字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBindField() const;

                    /**
                     * 设置绑定字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bindField 绑定字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBindField(const std::string& _bindField);

                    /**
                     * 判断参数 BindField 是否已赋值
                     * @return BindField 是否已赋值
                     * 
                     */
                    bool BindFieldHasBeenSet() const;

                    /**
                     * 获取参数类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamType 参数类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamType() const;

                    /**
                     * 设置参数类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramType 参数类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamType(const std::string& _paramType);

                    /**
                     * 判断参数 ParamType 是否已赋值
                     * @return ParamType 是否已赋值
                     * 
                     */
                    bool ParamTypeHasBeenSet() const;

                    /**
                     * 获取参数位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamPosition 参数位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamPosition() const;

                    /**
                     * 设置参数位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramPosition 参数位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamPosition(const std::string& _paramPosition);

                    /**
                     * 判断参数 ParamPosition 是否已赋值
                     * @return ParamPosition 是否已赋值
                     * 
                     */
                    bool ParamPositionHasBeenSet() const;

                    /**
                     * 获取操作符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operator 操作符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operator 操作符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取是否为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NonEmpty 是否为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNonEmpty() const;

                    /**
                     * 设置是否为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nonEmpty 是否为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNonEmpty(const uint64_t& _nonEmpty);

                    /**
                     * 判断参数 NonEmpty 是否已赋值
                     * @return NonEmpty 是否已赋值
                     * 
                     */
                    bool NonEmptyHasBeenSet() const;

                    /**
                     * 获取默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultValue 默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultValue 默认值
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

                    /**
                     * 获取示例值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExampleValue 示例值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExampleValue() const;

                    /**
                     * 设置示例值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exampleValue 示例值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExampleValue(const std::string& _exampleValue);

                    /**
                     * 判断参数 ExampleValue 是否已赋值
                     * @return ExampleValue 是否已赋值
                     * 
                     */
                    bool ExampleValueHasBeenSet() const;

                    /**
                     * 获取参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 参数名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * 绑定字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bindField;
                    bool m_bindFieldHasBeenSet;

                    /**
                     * 参数类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramType;
                    bool m_paramTypeHasBeenSet;

                    /**
                     * 参数位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramPosition;
                    bool m_paramPositionHasBeenSet;

                    /**
                     * 操作符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 是否为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_nonEmpty;
                    bool m_nonEmptyHasBeenSet;

                    /**
                     * 默认值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * 示例值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_exampleValue;
                    bool m_exampleValueHasBeenSet;

                    /**
                     * 参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DATASERVICEREQUESTPARAM_H_
