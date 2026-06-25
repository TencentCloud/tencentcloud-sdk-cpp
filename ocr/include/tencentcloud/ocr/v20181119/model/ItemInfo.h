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
                * 文档智能元素组
                */
                class ItemInfo : public AbstractModel
                {
                public:
                    ItemInfo();
                    ~ItemInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>key信息组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Key <p>key信息组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Key GetKey() const;

                    /**
                     * 设置<p>key信息组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _key <p>key信息组</p>
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
                     * 获取<p>Value信息组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value <p>Value信息组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Value GetValue() const;

                    /**
                     * 设置<p>Value信息组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value <p>Value信息组</p>
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

                    /**
                     * 获取<p>返回这个字段是否比对审核通过</p><p>默认值：false</p>
                     * @return AuditResult <p>返回这个字段是否比对审核通过</p><p>默认值：false</p>
                     * 
                     */
                    bool GetAuditResult() const;

                    /**
                     * 设置<p>返回这个字段是否比对审核通过</p><p>默认值：false</p>
                     * @param _auditResult <p>返回这个字段是否比对审核通过</p><p>默认值：false</p>
                     * 
                     */
                    void SetAuditResult(const bool& _auditResult);

                    /**
                     * 判断参数 AuditResult 是否已赋值
                     * @return AuditResult 是否已赋值
                     * 
                     */
                    bool AuditResultHasBeenSet() const;

                private:

                    /**
                     * <p>key信息组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Key m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>Value信息组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Value m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * <p>返回这个字段是否比对审核通过</p><p>默认值：false</p>
                     */
                    bool m_auditResult;
                    bool m_auditResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ITEMINFO_H_
