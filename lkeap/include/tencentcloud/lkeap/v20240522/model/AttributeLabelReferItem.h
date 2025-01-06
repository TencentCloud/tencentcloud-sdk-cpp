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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_ATTRIBUTELABELREFERITEM_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_ATTRIBUTELABELREFERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * 属性标签引用
                */
                class AttributeLabelReferItem : public AbstractModel
                {
                public:
                    AttributeLabelReferItem();
                    ~AttributeLabelReferItem() = default;
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
                     * 获取标签id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelIds 标签id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetLabelIds() const;

                    /**
                     * 设置标签id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelIds 标签id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelIds(const std::vector<std::string>& _labelIds);

                    /**
                     * 判断参数 LabelIds 是否已赋值
                     * @return LabelIds 是否已赋值
                     * 
                     */
                    bool LabelIdsHasBeenSet() const;

                private:

                    /**
                     * 属性id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attributeId;
                    bool m_attributeIdHasBeenSet;

                    /**
                     * 标签id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_labelIds;
                    bool m_labelIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_ATTRIBUTELABELREFERITEM_H_
