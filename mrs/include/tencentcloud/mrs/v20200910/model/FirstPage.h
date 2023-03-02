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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_FIRSTPAGE_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_FIRSTPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/DischargeDiagnosis.h>
#include <tencentcloud/mrs/v20200910/model/BlockInfo.h>
#include <tencentcloud/mrs/v20200910/model/BlockInfoV2.h>
#include <tencentcloud/mrs/v20200910/model/Fp2NdItem.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 病案首页
                */
                class FirstPage : public AbstractModel
                {
                public:
                    FirstPage();
                    ~FirstPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取出入院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DischargeDiagnosis 出入院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DischargeDiagnosis> GetDischargeDiagnosis() const;

                    /**
                     * 设置出入院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DischargeDiagnosis 出入院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDischargeDiagnosis(const std::vector<DischargeDiagnosis>& _dischargeDiagnosis);

                    /**
                     * 判断参数 DischargeDiagnosis 是否已赋值
                     * @return DischargeDiagnosis 是否已赋值
                     */
                    bool DischargeDiagnosisHasBeenSet() const;

                    /**
                     * 获取病理诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PathologicalDiagnosis 病理诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetPathologicalDiagnosis() const;

                    /**
                     * 设置病理诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PathologicalDiagnosis 病理诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPathologicalDiagnosis(const BlockInfo& _pathologicalDiagnosis);

                    /**
                     * 判断参数 PathologicalDiagnosis 是否已赋值
                     * @return PathologicalDiagnosis 是否已赋值
                     */
                    bool PathologicalDiagnosisHasBeenSet() const;

                    /**
                     * 获取临床诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClinicalDiagnosis 临床诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo GetClinicalDiagnosis() const;

                    /**
                     * 设置临床诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClinicalDiagnosis 临床诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClinicalDiagnosis(const BlockInfo& _clinicalDiagnosis);

                    /**
                     * 判断参数 ClinicalDiagnosis 是否已赋值
                     * @return ClinicalDiagnosis 是否已赋值
                     */
                    bool ClinicalDiagnosisHasBeenSet() const;

                    /**
                     * 获取受伤中毒的外部原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DamagePoi 受伤中毒的外部原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfoV2 GetDamagePoi() const;

                    /**
                     * 设置受伤中毒的外部原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DamagePoi 受伤中毒的外部原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDamagePoi(const BlockInfoV2& _damagePoi);

                    /**
                     * 判断参数 DamagePoi 是否已赋值
                     * @return DamagePoi 是否已赋值
                     */
                    bool DamagePoiHasBeenSet() const;

                    /**
                     * 获取病案首页第二页
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Fp2NdItems 病案首页第二页
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Fp2NdItem> GetFp2NdItems() const;

                    /**
                     * 设置病案首页第二页
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Fp2NdItems 病案首页第二页
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFp2NdItems(const std::vector<Fp2NdItem>& _fp2NdItems);

                    /**
                     * 判断参数 Fp2NdItems 是否已赋值
                     * @return Fp2NdItems 是否已赋值
                     */
                    bool Fp2NdItemsHasBeenSet() const;

                private:

                    /**
                     * 出入院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DischargeDiagnosis> m_dischargeDiagnosis;
                    bool m_dischargeDiagnosisHasBeenSet;

                    /**
                     * 病理诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_pathologicalDiagnosis;
                    bool m_pathologicalDiagnosisHasBeenSet;

                    /**
                     * 临床诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfo m_clinicalDiagnosis;
                    bool m_clinicalDiagnosisHasBeenSet;

                    /**
                     * 受伤中毒的外部原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BlockInfoV2 m_damagePoi;
                    bool m_damagePoiHasBeenSet;

                    /**
                     * 病案首页第二页
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Fp2NdItem> m_fp2NdItems;
                    bool m_fp2NdItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_FIRSTPAGE_H_
