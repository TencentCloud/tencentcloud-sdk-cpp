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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_TRACEITEM_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_TRACEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * 溯源数据
                */
                class TraceItem : public AbstractModel
                {
                public:
                    TraceItem();
                    ~TraceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取单个值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 单个值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetValue() const;

                    /**
                     * 设置单个值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Value 单个值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Type 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取只读
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReadOnly 只读
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetReadOnly() const;

                    /**
                     * 设置只读
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ReadOnly 只读
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReadOnly(const bool& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     */
                    bool ReadOnlyHasBeenSet() const;

                    /**
                     * 获取扫码展示
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Hidden 扫码展示
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetHidden() const;

                    /**
                     * 设置扫码展示
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Hidden 扫码展示
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHidden(const bool& _hidden);

                    /**
                     * 判断参数 Hidden 是否已赋值
                     * @return Hidden 是否已赋值
                     */
                    bool HiddenHasBeenSet() const;

                    /**
                     * 获取多个值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Values 多个值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置多个值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Values 多个值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取类型标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key 类型标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetKey() const;

                    /**
                     * 设置类型标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Key 类型标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     */
                    bool KeyHasBeenSet() const;

                private:

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 单个值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 只读
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * 扫码展示
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_hidden;
                    bool m_hiddenHasBeenSet;

                    /**
                     * 多个值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 类型标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_TRACEITEM_H_
