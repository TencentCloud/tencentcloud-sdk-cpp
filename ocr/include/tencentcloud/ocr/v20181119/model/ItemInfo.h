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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ITEMINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ITEMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Key.h>
#include <tencentcloud/ocr/v20181119/model/Value.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 智能结构化元素组
                */
                class ItemInfo : public AbstractModel
                {
                public:
                    ItemInfo();
                    ~ItemInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取key信息组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key key信息组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Key GetKey() const;

                    /**
                     * 设置key信息组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _key key信息组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKey(const Key& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Value信息组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value Value信息组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Value GetValue() const;

                    /**
                     * 设置Value信息组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value Value信息组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValue(const Value& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * key信息组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Key m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Value信息组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Value m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ITEMINFO_H_
