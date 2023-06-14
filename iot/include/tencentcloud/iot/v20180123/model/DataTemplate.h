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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_DATATEMPLATE_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_DATATEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iot/v20180123/model/NumberData.h>
#include <tencentcloud/iot/v20180123/model/StringData.h>
#include <tencentcloud/iot/v20180123/model/EnumData.h>
#include <tencentcloud/iot/v20180123/model/BoolData.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * 数据模版
                */
                class DataTemplate : public AbstractModel
                {
                public:
                    DataTemplate();
                    ~DataTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数字类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Number 数字类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NumberData GetNumber() const;

                    /**
                     * 设置数字类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _number 数字类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNumber(const NumberData& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取字符串类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return String 字符串类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    StringData GetString() const;

                    /**
                     * 设置字符串类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _string 字符串类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetString(const StringData& _string);

                    /**
                     * 判断参数 String 是否已赋值
                     * @return String 是否已赋值
                     * 
                     */
                    bool StringHasBeenSet() const;

                    /**
                     * 获取枚举类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enum 枚举类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EnumData GetEnum() const;

                    /**
                     * 设置枚举类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enum 枚举类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnum(const EnumData& _enum);

                    /**
                     * 判断参数 Enum 是否已赋值
                     * @return Enum 是否已赋值
                     * 
                     */
                    bool EnumHasBeenSet() const;

                    /**
                     * 获取布尔类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bool 布尔类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BoolData GetBool() const;

                    /**
                     * 设置布尔类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bool 布尔类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBool(const BoolData& _bool);

                    /**
                     * 判断参数 Bool 是否已赋值
                     * @return Bool 是否已赋值
                     * 
                     */
                    bool BoolHasBeenSet() const;

                private:

                    /**
                     * 数字类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NumberData m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 字符串类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StringData m_string;
                    bool m_stringHasBeenSet;

                    /**
                     * 枚举类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EnumData m_enum;
                    bool m_enumHasBeenSet;

                    /**
                     * 布尔类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BoolData m_bool;
                    bool m_boolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_DATATEMPLATE_H_
