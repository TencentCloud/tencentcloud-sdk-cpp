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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_ATTRIBUTELABEL_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_ATTRIBUTELABEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 标签值
                */
                class AttributeLabel : public AbstractModel
                {
                public:
                    AttributeLabel();
                    ~AttributeLabel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标准词ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelBizId 标准词ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabelBizId() const;

                    /**
                     * 设置标准词ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelBizId 标准词ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelBizId(const std::string& _labelBizId);

                    /**
                     * 判断参数 LabelBizId 是否已赋值
                     * @return LabelBizId 是否已赋值
                     * 
                     */
                    bool LabelBizIdHasBeenSet() const;

                    /**
                     * 获取标准词名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelName 标准词名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabelName() const;

                    /**
                     * 设置标准词名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelName 标准词名称
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

                    /**
                     * 获取同义词名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SimilarLabels 同义词名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSimilarLabels() const;

                    /**
                     * 设置同义词名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _similarLabels 同义词名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSimilarLabels(const std::vector<std::string>& _similarLabels);

                    /**
                     * 判断参数 SimilarLabels 是否已赋值
                     * @return SimilarLabels 是否已赋值
                     * 
                     */
                    bool SimilarLabelsHasBeenSet() const;

                private:

                    /**
                     * 标准词ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_labelBizId;
                    bool m_labelBizIdHasBeenSet;

                    /**
                     * 标准词名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_labelName;
                    bool m_labelNameHasBeenSet;

                    /**
                     * 同义词名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_similarLabels;
                    bool m_similarLabelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_ATTRIBUTELABEL_H_
