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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_SERVICEDATABASEREQPARAM_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_SERVICEDATABASEREQPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * 向导模式请求参数
                */
                class ServiceDatabaseReqParam : public AbstractModel
                {
                public:
                    ServiceDatabaseReqParam();
                    ~ServiceDatabaseReqParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>表字段名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FieldName <p>表字段名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFieldName() const;

                    /**
                     * 设置<p>表字段名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fieldName <p>表字段名</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>操作符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operator <p>操作符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>操作符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operator <p>操作符</p>
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
                     * 获取<p>参数名/常量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Val <p>参数名/常量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVal() const;

                    /**
                     * 设置<p>参数名/常量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _val <p>参数名/常量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVal(const std::string& _val);

                    /**
                     * 判断参数 Val 是否已赋值
                     * @return Val 是否已赋值
                     * 
                     */
                    bool ValHasBeenSet() const;

                    /**
                     * 获取<p>参数类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValType <p>参数类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValType() const;

                    /**
                     * 设置<p>参数类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valType <p>参数类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValType(const std::string& _valType);

                    /**
                     * 判断参数 ValType 是否已赋值
                     * @return ValType 是否已赋值
                     * 
                     */
                    bool ValTypeHasBeenSet() const;

                    /**
                     * 获取<p>内部字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InternalField <p>内部字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetInternalField() const;

                    /**
                     * 设置<p>内部字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _internalField <p>内部字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInternalField(const bool& _internalField);

                    /**
                     * 判断参数 InternalField 是否已赋值
                     * @return InternalField 是否已赋值
                     * 
                     */
                    bool InternalFieldHasBeenSet() const;

                private:

                    /**
                     * <p>表字段名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fieldName;
                    bool m_fieldNameHasBeenSet;

                    /**
                     * <p>操作符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>参数名/常量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_val;
                    bool m_valHasBeenSet;

                    /**
                     * <p>参数类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_valType;
                    bool m_valTypeHasBeenSet;

                    /**
                     * <p>内部字段</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_internalField;
                    bool m_internalFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_SERVICEDATABASEREQPARAM_H_
