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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_IHC_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_IHC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 免疫组化项目
                */
                class IHC : public AbstractModel
                {
                public:
                    IHC();
                    ~IHC() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取索引位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Index 索引位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetIndex() const;

                    /**
                     * 设置索引位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Index 索引位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIndex(const std::vector<int64_t>& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取原文
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Text 原文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetText() const;

                    /**
                     * 设置原文
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Text 原文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

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
                     * 获取等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Grade 等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGrade() const;

                    /**
                     * 设置等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Grade 等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGrade(const std::string& _grade);

                    /**
                     * 判断参数 Grade 是否已赋值
                     * @return Grade 是否已赋值
                     */
                    bool GradeHasBeenSet() const;

                    /**
                     * 获取百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Percent 百分比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPercent() const;

                    /**
                     * 设置百分比
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Percent 百分比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPercent(const std::string& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取阴阳性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Positive 阴阳性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPositive() const;

                    /**
                     * 设置阴阳性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Positive 阴阳性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPositive(const std::string& _positive);

                    /**
                     * 判断参数 Positive 是否已赋值
                     * @return Positive 是否已赋值
                     */
                    bool PositiveHasBeenSet() const;

                private:

                    /**
                     * 索引位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 原文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_grade;
                    bool m_gradeHasBeenSet;

                    /**
                     * 百分比
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 阴阳性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_positive;
                    bool m_positiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_IHC_H_
