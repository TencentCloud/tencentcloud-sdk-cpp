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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_HEALTHHISTORY_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_HEALTHHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/DiseaseHistory.h>
#include <tencentcloud/mrs/v20200910/model/FamilyHistory.h>
#include <tencentcloud/mrs/v20200910/model/MarryHistory.h>
#include <tencentcloud/mrs/v20200910/model/PersonalHistory.h>
#include <tencentcloud/mrs/v20200910/model/MenstrualHistory.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 健康史信息
                */
                class HealthHistory : public AbstractModel
                {
                public:
                    HealthHistory();
                    ~HealthHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取疾病史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiseaseHistory 疾病史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseaseHistory GetDiseaseHistory() const;

                    /**
                     * 设置疾病史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DiseaseHistory 疾病史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDiseaseHistory(const DiseaseHistory& _diseaseHistory);

                    /**
                     * 判断参数 DiseaseHistory 是否已赋值
                     * @return DiseaseHistory 是否已赋值
                     */
                    bool DiseaseHistoryHasBeenSet() const;

                    /**
                     * 获取家族史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FamilyHistory 家族史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FamilyHistory GetFamilyHistory() const;

                    /**
                     * 设置家族史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FamilyHistory 家族史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFamilyHistory(const FamilyHistory& _familyHistory);

                    /**
                     * 判断参数 FamilyHistory 是否已赋值
                     * @return FamilyHistory 是否已赋值
                     */
                    bool FamilyHistoryHasBeenSet() const;

                    /**
                     * 获取婚育史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MarryHistory 婚育史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MarryHistory GetMarryHistory() const;

                    /**
                     * 设置婚育史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MarryHistory 婚育史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMarryHistory(const MarryHistory& _marryHistory);

                    /**
                     * 判断参数 MarryHistory 是否已赋值
                     * @return MarryHistory 是否已赋值
                     */
                    bool MarryHistoryHasBeenSet() const;

                    /**
                     * 获取个人史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PersonalHistory 个人史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PersonalHistory GetPersonalHistory() const;

                    /**
                     * 设置个人史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PersonalHistory 个人史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPersonalHistory(const PersonalHistory& _personalHistory);

                    /**
                     * 判断参数 PersonalHistory 是否已赋值
                     * @return PersonalHistory 是否已赋值
                     */
                    bool PersonalHistoryHasBeenSet() const;

                    /**
                     * 获取月经史
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MenstrualHistory 月经史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MenstrualHistory GetMenstrualHistory() const;

                    /**
                     * 设置月经史
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MenstrualHistory 月经史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMenstrualHistory(const MenstrualHistory& _menstrualHistory);

                    /**
                     * 判断参数 MenstrualHistory 是否已赋值
                     * @return MenstrualHistory 是否已赋值
                     */
                    bool MenstrualHistoryHasBeenSet() const;

                private:

                    /**
                     * 疾病史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiseaseHistory m_diseaseHistory;
                    bool m_diseaseHistoryHasBeenSet;

                    /**
                     * 家族史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FamilyHistory m_familyHistory;
                    bool m_familyHistoryHasBeenSet;

                    /**
                     * 婚育史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MarryHistory m_marryHistory;
                    bool m_marryHistoryHasBeenSet;

                    /**
                     * 个人史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PersonalHistory m_personalHistory;
                    bool m_personalHistoryHasBeenSet;

                    /**
                     * 月经史
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MenstrualHistory m_menstrualHistory;
                    bool m_menstrualHistoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_HEALTHHISTORY_H_
