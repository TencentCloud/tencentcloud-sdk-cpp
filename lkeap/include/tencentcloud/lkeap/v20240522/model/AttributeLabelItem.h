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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_ATTRIBUTELABELITEM_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_ATTRIBUTELABELITEM_H_

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
                * 属性标签信息
                */
                class AttributeLabelItem : public AbstractModel
                {
                public:
                    AttributeLabelItem();
                    ~AttributeLabelItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelId 标签id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabelId() const;

                    /**
                     * 设置标签id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelId 标签id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelId(const std::string& _labelId);

                    /**
                     * 判断参数 LabelId 是否已赋值
                     * @return LabelId 是否已赋值
                     * 
                     */
                    bool LabelIdHasBeenSet() const;

                    /**
                     * 获取标签名称，最大80个英文字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelName 标签名称，最大80个英文字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置标签名称，最大80个英文字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelName 标签名称，最大80个英文字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelName(const std::string& _labelName);

                    /**
                     * 判断参数 LabelName 是否已赋值
                     * @return LabelName 是否已赋值
                     * 
                     */
                    bool LabelNameHasBeenSet() const;

                private:

                    /**
                     * 标签id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_labelId;
                    bool m_labelIdHasBeenSet;

                    /**
                     * 标签名称，最大80个英文字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_ATTRIBUTELABELITEM_H_
