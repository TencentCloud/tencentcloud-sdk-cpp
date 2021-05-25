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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_SYMPTOMINFO_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_SYMPTOMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/BlockInfo.h>
#include <tencentcloud/mrs/v20200910/model/Part.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 病症描述
                */
                class SymptomInfo : public AbstractModel
                {
                public:
                    SymptomInfo();
                    ~SymptomInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Grade 等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetGrade() const;

                    /**
                     * 设置等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Grade 等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGrade(const BlockInfo& _grade);

                    /**
                     * 判断参数 Grade 是否已赋值
                     * @return Grade 是否已赋值
                     */
                    bool GradeHasBeenSet() const;

                    /**
                     * 获取部位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Part 部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Part GetPart() const;

                    /**
                     * 设置部位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Part 部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPart(const Part& _part);

                    /**
                     * 判断参数 Part 是否已赋值
                     * @return Part 是否已赋值
                     */
                    bool PartHasBeenSet() const;

                    /**
                     * 获取原文位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Index 原文位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetIndex() const;

                    /**
                     * 设置原文位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Index 原文位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIndex(const std::vector<int64_t>& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取病变
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Symptom 病变
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetSymptom() const;

                    /**
                     * 设置病变
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Symptom 病变
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSymptom(const BlockInfo& _symptom);

                    /**
                     * 判断参数 Symptom 是否已赋值
                     * @return Symptom 是否已赋值
                     */
                    bool SymptomHasBeenSet() const;

                    /**
                     * 获取属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Attrs 属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BlockInfo> GetAttrs() const;

                    /**
                     * 设置属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Attrs 属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAttrs(const std::vector<BlockInfo>& _attrs);

                    /**
                     * 判断参数 Attrs 是否已赋值
                     * @return Attrs 是否已赋值
                     */
                    bool AttrsHasBeenSet() const;

                    /**
                     * 获取原文
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Src 原文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSrc() const;

                    /**
                     * 设置原文
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Src 原文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSrc(const std::string& _src);

                    /**
                     * 判断参数 Src 是否已赋值
                     * @return Src 是否已赋值
                     */
                    bool SrcHasBeenSet() const;

                private:

                    /**
                     * 等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_grade;
                    bool m_gradeHasBeenSet;

                    /**
                     * 部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Part m_part;
                    bool m_partHasBeenSet;

                    /**
                     * 原文位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 病变
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_symptom;
                    bool m_symptomHasBeenSet;

                    /**
                     * 属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BlockInfo> m_attrs;
                    bool m_attrsHasBeenSet;

                    /**
                     * 原文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_src;
                    bool m_srcHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_SYMPTOMINFO_H_
