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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_SYMPTOM_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_SYMPTOM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Attribute.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 可见病症内容
                */
                class Symptom : public AbstractModel
                {
                public:
                    Symptom();
                    ~Symptom() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Desc 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute GetDesc() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Desc 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDesc(const Attribute& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取部位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Part 部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute GetPart() const;

                    /**
                     * 设置部位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Part 部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPart(const Attribute& _part);

                    /**
                     * 判断参数 Part 是否已赋值
                     * @return Part 是否已赋值
                     */
                    bool PartHasBeenSet() const;

                    /**
                     * 获取等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Grade 等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute GetGrade() const;

                    /**
                     * 设置等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Grade 等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGrade(const Attribute& _grade);

                    /**
                     * 判断参数 Grade 是否已赋值
                     * @return Grade 是否已赋值
                     */
                    bool GradeHasBeenSet() const;

                    /**
                     * 获取性质
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttrList 性质
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Attribute> GetAttrList() const;

                    /**
                     * 设置性质
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AttrList 性质
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAttrList(const std::vector<Attribute>& _attrList);

                    /**
                     * 判断参数 AttrList 是否已赋值
                     * @return AttrList 是否已赋值
                     */
                    bool AttrListHasBeenSet() const;

                private:

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute m_part;
                    bool m_partHasBeenSet;

                    /**
                     * 等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Attribute m_grade;
                    bool m_gradeHasBeenSet;

                    /**
                     * 性质
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Attribute> m_attrList;
                    bool m_attrListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_SYMPTOM_H_
