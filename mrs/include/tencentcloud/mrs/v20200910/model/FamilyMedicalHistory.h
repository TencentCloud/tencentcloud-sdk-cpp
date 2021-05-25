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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_FAMILYMEDICALHISTORY_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_FAMILYMEDICALHISTORY_H_

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
                * 家族疾病史
                */
                class FamilyMedicalHistory : public AbstractModel
                {
                public:
                    FamilyMedicalHistory();
                    ~FamilyMedicalHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取""
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelativeHistory ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRelativeHistory() const;

                    /**
                     * 设置""
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RelativeHistory ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRelativeHistory(const std::string& _relativeHistory);

                    /**
                     * 判断参数 RelativeHistory 是否已赋值
                     * @return RelativeHistory 是否已赋值
                     */
                    bool RelativeHistoryHasBeenSet() const;

                    /**
                     * 获取""
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelativeCancerHistory ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRelativeCancerHistory() const;

                    /**
                     * 设置""
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RelativeCancerHistory ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRelativeCancerHistory(const std::string& _relativeCancerHistory);

                    /**
                     * 判断参数 RelativeCancerHistory 是否已赋值
                     * @return RelativeCancerHistory 是否已赋值
                     */
                    bool RelativeCancerHistoryHasBeenSet() const;

                    /**
                     * 获取""
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GeneticHistory ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGeneticHistory() const;

                    /**
                     * 设置""
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GeneticHistory ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGeneticHistory(const std::string& _geneticHistory);

                    /**
                     * 判断参数 GeneticHistory 是否已赋值
                     * @return GeneticHistory 是否已赋值
                     */
                    bool GeneticHistoryHasBeenSet() const;

                private:

                    /**
                     * ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_relativeHistory;
                    bool m_relativeHistoryHasBeenSet;

                    /**
                     * ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_relativeCancerHistory;
                    bool m_relativeCancerHistoryHasBeenSet;

                    /**
                     * ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_geneticHistory;
                    bool m_geneticHistoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_FAMILYMEDICALHISTORY_H_
