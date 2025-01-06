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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_ATTRIBUTEITEM_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_ATTRIBUTEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/AttributeLabelItem.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * 属性信息
                */
                class AttributeItem : public AbstractModel
                {
                public:
                    AttributeItem();
                    ~AttributeItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取属性id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttributeId 属性id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttributeId() const;

                    /**
                     * 设置属性id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attributeId 属性id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttributeId(const std::string& _attributeId);

                    /**
                     * 判断参数 AttributeId 是否已赋值
                     * @return AttributeId 是否已赋值
                     * 
                     */
                    bool AttributeIdHasBeenSet() const;

                    /**
                     * 获取属性标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttributeKey 属性标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttributeKey() const;

                    /**
                     * 设置属性标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attributeKey 属性标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttributeKey(const std::string& _attributeKey);

                    /**
                     * 判断参数 AttributeKey 是否已赋值
                     * @return AttributeKey 是否已赋值
                     * 
                     */
                    bool AttributeKeyHasBeenSet() const;

                    /**
                     * 获取属性名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttributeName 属性名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttributeName() const;

                    /**
                     * 设置属性名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attributeName 属性名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttributeName(const std::string& _attributeName);

                    /**
                     * 判断参数 AttributeName 是否已赋值
                     * @return AttributeName 是否已赋值
                     * 
                     */
                    bool AttributeNameHasBeenSet() const;

                    /**
                     * 获取标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Labels 标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AttributeLabelItem> GetLabels() const;

                    /**
                     * 设置标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labels 标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabels(const std::vector<AttributeLabelItem>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                private:

                    /**
                     * 属性id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attributeId;
                    bool m_attributeIdHasBeenSet;

                    /**
                     * 属性标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attributeKey;
                    bool m_attributeKeyHasBeenSet;

                    /**
                     * 属性名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attributeName;
                    bool m_attributeNameHasBeenSet;

                    /**
                     * 标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AttributeLabelItem> m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_ATTRIBUTEITEM_H_
