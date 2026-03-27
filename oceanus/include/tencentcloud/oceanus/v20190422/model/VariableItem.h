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
                     * 获取变量id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SerialId 变量id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSerialId() const;

                    /**
                     * 设置变量id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serialId 变量id
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
                     * 获取变量名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 变量名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置变量名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 变量名
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
                     * 获取变量值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 变量值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置变量值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 变量值
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
                     * 获取变量值是否隐藏
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 变量值是否隐藏
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置变量值是否隐藏
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 变量值是否隐藏
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
                     * 获取变量描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 变量描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置变量描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 变量描述
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
                     * 获取变量创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 变量创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置变量创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 变量创建时间
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
                     * 获取变量创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorUin 变量创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置变量创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorUin 变量创建人
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
                     * 变量id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serialId;
                    bool m_serialIdHasBeenSet;

                    /**
                     * 变量名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 变量值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 变量值是否隐藏
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 变量描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 变量创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 变量创建人
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
