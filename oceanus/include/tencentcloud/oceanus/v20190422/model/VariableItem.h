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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_VARIABLEITEM_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_VARIABLEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 变量信息列表
                */
                class VariableItem : public AbstractModel
                {
                public:
                    VariableItem();
                    ~VariableItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>变量id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SerialId <p>变量id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSerialId() const;

                    /**
                     * 设置<p>变量id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serialId <p>变量id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSerialId(const std::string& _serialId);

                    /**
                     * 判断参数 SerialId 是否已赋值
                     * @return SerialId 是否已赋值
                     * 
                     */
                    bool SerialIdHasBeenSet() const;

                    /**
                     * 获取<p>变量名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>变量名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>变量名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>变量名</p>
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
                     * 获取<p>变量值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value <p>变量值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>变量值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value <p>变量值</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>变量值类型</p><p>枚举值：</p><ul><li>0： 自定义变量</li><li>1： 凭据值</li></ul>
                     * @return ValueType <p>变量值类型</p><p>枚举值：</p><ul><li>0： 自定义变量</li><li>1： 凭据值</li></ul>
                     * 
                     */
                    int64_t GetValueType() const;

                    /**
                     * 设置<p>变量值类型</p><p>枚举值：</p><ul><li>0： 自定义变量</li><li>1： 凭据值</li></ul>
                     * @param _valueType <p>变量值类型</p><p>枚举值：</p><ul><li>0： 自定义变量</li><li>1： 凭据值</li></ul>
                     * 
                     */
                    void SetValueType(const int64_t& _valueType);

                    /**
                     * 判断参数 ValueType 是否已赋值
                     * @return ValueType 是否已赋值
                     * 
                     */
                    bool ValueTypeHasBeenSet() const;

                    /**
                     * 获取<p>凭据所在地域</p>
                     * @return SecretRegion <p>凭据所在地域</p>
                     * 
                     */
                    std::string GetSecretRegion() const;

                    /**
                     * 设置<p>凭据所在地域</p>
                     * @param _secretRegion <p>凭据所在地域</p>
                     * 
                     */
                    void SetSecretRegion(const std::string& _secretRegion);

                    /**
                     * 判断参数 SecretRegion 是否已赋值
                     * @return SecretRegion 是否已赋值
                     * 
                     */
                    bool SecretRegionHasBeenSet() const;

                    /**
                     * 获取<p>凭据名称</p>
                     * @return SecretName <p>凭据名称</p>
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 设置<p>凭据名称</p>
                     * @param _secretName <p>凭据名称</p>
                     * 
                     */
                    void SetSecretName(const std::string& _secretName);

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取<p>凭据版本</p>
                     * @return SecretVersionId <p>凭据版本</p>
                     * 
                     */
                    std::string GetSecretVersionId() const;

                    /**
                     * 设置<p>凭据版本</p>
                     * @param _secretVersionId <p>凭据版本</p>
                     * 
                     */
                    void SetSecretVersionId(const std::string& _secretVersionId);

                    /**
                     * 判断参数 SecretVersionId 是否已赋值
                     * @return SecretVersionId 是否已赋值
                     * 
                     */
                    bool SecretVersionIdHasBeenSet() const;

                    /**
                     * 获取<p>变量值是否隐藏</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>变量值是否隐藏</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>变量值是否隐藏</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>变量值是否隐藏</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>变量描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark <p>变量描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>变量描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark <p>变量描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>变量创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>变量创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>变量创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>变量创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>变量创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorUin <p>变量创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置<p>变量创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorUin <p>变量创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatorUin(const std::string& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                private:

                    /**
                     * <p>变量id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serialId;
                    bool m_serialIdHasBeenSet;

                    /**
                     * <p>变量名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>变量值</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>变量值类型</p><p>枚举值：</p><ul><li>0： 自定义变量</li><li>1： 凭据值</li></ul>
                     */
                    int64_t m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * <p>凭据所在地域</p>
                     */
                    std::string m_secretRegion;
                    bool m_secretRegionHasBeenSet;

                    /**
                     * <p>凭据名称</p>
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * <p>凭据版本</p>
                     */
                    std::string m_secretVersionId;
                    bool m_secretVersionIdHasBeenSet;

                    /**
                     * <p>变量值是否隐藏</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>变量描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>变量创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>变量创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_VARIABLEITEM_H_
