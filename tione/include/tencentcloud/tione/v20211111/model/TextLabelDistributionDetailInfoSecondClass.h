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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_TEXTLABELDISTRIBUTIONDETAILINFOSECONDCLASS_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_TEXTLABELDISTRIBUTIONDETAILINFOSECONDCLASS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/TextLabelDistributionDetailInfoThirdClass.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 二级标签
                */
                class TextLabelDistributionDetailInfoSecondClass : public AbstractModel
                {
                public:
                    TextLabelDistributionDetailInfoSecondClass();
                    ~TextLabelDistributionDetailInfoSecondClass() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelValue 标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabelValue() const;

                    /**
                     * 设置标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelValue 标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelValue(const std::string& _labelValue);

                    /**
                     * 判断参数 LabelValue 是否已赋值
                     * @return LabelValue 是否已赋值
                     * 
                     */
                    bool LabelValueHasBeenSet() const;

                    /**
                     * 获取标签个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelCount 标签个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLabelCount() const;

                    /**
                     * 设置标签个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelCount 标签个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelCount(const uint64_t& _labelCount);

                    /**
                     * 判断参数 LabelCount 是否已赋值
                     * @return LabelCount 是否已赋值
                     * 
                     */
                    bool LabelCountHasBeenSet() const;

                    /**
                     * 获取标签占比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelPercentage 标签占比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLabelPercentage() const;

                    /**
                     * 设置标签占比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _labelPercentage 标签占比
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLabelPercentage(const double& _labelPercentage);

                    /**
                     * 判断参数 LabelPercentage 是否已赋值
                     * @return LabelPercentage 是否已赋值
                     * 
                     */
                    bool LabelPercentageHasBeenSet() const;

                    /**
                     * 获取子标签分布
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChildLabelList 子标签分布
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TextLabelDistributionDetailInfoThirdClass> GetChildLabelList() const;

                    /**
                     * 设置子标签分布
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _childLabelList 子标签分布
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChildLabelList(const std::vector<TextLabelDistributionDetailInfoThirdClass>& _childLabelList);

                    /**
                     * 判断参数 ChildLabelList 是否已赋值
                     * @return ChildLabelList 是否已赋值
                     * 
                     */
                    bool ChildLabelListHasBeenSet() const;

                private:

                    /**
                     * 标签名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_labelValue;
                    bool m_labelValueHasBeenSet;

                    /**
                     * 标签个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_labelCount;
                    bool m_labelCountHasBeenSet;

                    /**
                     * 标签占比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_labelPercentage;
                    bool m_labelPercentageHasBeenSet;

                    /**
                     * 子标签分布
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TextLabelDistributionDetailInfoThirdClass> m_childLabelList;
                    bool m_childLabelListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_TEXTLABELDISTRIBUTIONDETAILINFOSECONDCLASS_H_
