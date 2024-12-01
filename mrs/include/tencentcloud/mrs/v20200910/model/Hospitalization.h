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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_HOSPITALIZATION_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_HOSPITALIZATION_H_

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
                * 出入院信息
                */
                class Hospitalization : public AbstractModel
                {
                public:
                    Hospitalization();
                    ~Hospitalization() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取入院时间
                     * @return AdmissionTime 入院时间
                     * 
                     */
                    std::string GetAdmissionTime() const;

                    /**
                     * 设置入院时间
                     * @param _admissionTime 入院时间
                     * 
                     */
                    void SetAdmissionTime(const std::string& _admissionTime);

                    /**
                     * 判断参数 AdmissionTime 是否已赋值
                     * @return AdmissionTime 是否已赋值
                     * 
                     */
                    bool AdmissionTimeHasBeenSet() const;

                    /**
                     * 获取出院时间
                     * @return DischargeTime 出院时间
                     * 
                     */
                    std::string GetDischargeTime() const;

                    /**
                     * 设置出院时间
                     * @param _dischargeTime 出院时间
                     * 
                     */
                    void SetDischargeTime(const std::string& _dischargeTime);

                    /**
                     * 判断参数 DischargeTime 是否已赋值
                     * @return DischargeTime 是否已赋值
                     * 
                     */
                    bool DischargeTimeHasBeenSet() const;

                    /**
                     * 获取住院天数
                     * @return AdmissionDays 住院天数
                     * 
                     */
                    std::string GetAdmissionDays() const;

                    /**
                     * 设置住院天数
                     * @param _admissionDays 住院天数
                     * 
                     */
                    void SetAdmissionDays(const std::string& _admissionDays);

                    /**
                     * 判断参数 AdmissionDays 是否已赋值
                     * @return AdmissionDays 是否已赋值
                     * 
                     */
                    bool AdmissionDaysHasBeenSet() const;

                    /**
                     * 获取入院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdmissionDignosis 入院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetAdmissionDignosis() const;

                    /**
                     * 设置入院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _admissionDignosis 入院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetAdmissionDignosis(const std::string& _admissionDignosis);

                    /**
                     * 判断参数 AdmissionDignosis 是否已赋值
                     * @return AdmissionDignosis 是否已赋值
                     * @deprecated
                     */
                    bool AdmissionDignosisHasBeenSet() const;

                    /**
                     * 获取入院情况
                     * @return AdmissionCondition 入院情况
                     * 
                     */
                    std::string GetAdmissionCondition() const;

                    /**
                     * 设置入院情况
                     * @param _admissionCondition 入院情况
                     * 
                     */
                    void SetAdmissionCondition(const std::string& _admissionCondition);

                    /**
                     * 判断参数 AdmissionCondition 是否已赋值
                     * @return AdmissionCondition 是否已赋值
                     * 
                     */
                    bool AdmissionConditionHasBeenSet() const;

                    /**
                     * 获取诊疗经过
                     * @return DiagnosisTreatment 诊疗经过
                     * 
                     */
                    std::string GetDiagnosisTreatment() const;

                    /**
                     * 设置诊疗经过
                     * @param _diagnosisTreatment 诊疗经过
                     * 
                     */
                    void SetDiagnosisTreatment(const std::string& _diagnosisTreatment);

                    /**
                     * 判断参数 DiagnosisTreatment 是否已赋值
                     * @return DiagnosisTreatment 是否已赋值
                     * 
                     */
                    bool DiagnosisTreatmentHasBeenSet() const;

                    /**
                     * 获取出院诊断
                     * @return DischargeDiagnosis 出院诊断
                     * 
                     */
                    std::string GetDischargeDiagnosis() const;

                    /**
                     * 设置出院诊断
                     * @param _dischargeDiagnosis 出院诊断
                     * 
                     */
                    void SetDischargeDiagnosis(const std::string& _dischargeDiagnosis);

                    /**
                     * 判断参数 DischargeDiagnosis 是否已赋值
                     * @return DischargeDiagnosis 是否已赋值
                     * 
                     */
                    bool DischargeDiagnosisHasBeenSet() const;

                    /**
                     * 获取出院医嘱
                     * @return DischargeInstruction 出院医嘱
                     * 
                     */
                    std::string GetDischargeInstruction() const;

                    /**
                     * 设置出院医嘱
                     * @param _dischargeInstruction 出院医嘱
                     * 
                     */
                    void SetDischargeInstruction(const std::string& _dischargeInstruction);

                    /**
                     * 判断参数 DischargeInstruction 是否已赋值
                     * @return DischargeInstruction 是否已赋值
                     * 
                     */
                    bool DischargeInstructionHasBeenSet() const;

                    /**
                     * 获取入院诊断
                     * @return AdmissionDiagnosis 入院诊断
                     * 
                     */
                    std::string GetAdmissionDiagnosis() const;

                    /**
                     * 设置入院诊断
                     * @param _admissionDiagnosis 入院诊断
                     * 
                     */
                    void SetAdmissionDiagnosis(const std::string& _admissionDiagnosis);

                    /**
                     * 判断参数 AdmissionDiagnosis 是否已赋值
                     * @return AdmissionDiagnosis 是否已赋值
                     * 
                     */
                    bool AdmissionDiagnosisHasBeenSet() const;

                    /**
                     * 获取数据在原PDF文件中的第几页
                     * @return Page 数据在原PDF文件中的第几页
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置数据在原PDF文件中的第几页
                     * @param _page 数据在原PDF文件中的第几页
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                private:

                    /**
                     * 入院时间
                     */
                    std::string m_admissionTime;
                    bool m_admissionTimeHasBeenSet;

                    /**
                     * 出院时间
                     */
                    std::string m_dischargeTime;
                    bool m_dischargeTimeHasBeenSet;

                    /**
                     * 住院天数
                     */
                    std::string m_admissionDays;
                    bool m_admissionDaysHasBeenSet;

                    /**
                     * 入院诊断
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_admissionDignosis;
                    bool m_admissionDignosisHasBeenSet;

                    /**
                     * 入院情况
                     */
                    std::string m_admissionCondition;
                    bool m_admissionConditionHasBeenSet;

                    /**
                     * 诊疗经过
                     */
                    std::string m_diagnosisTreatment;
                    bool m_diagnosisTreatmentHasBeenSet;

                    /**
                     * 出院诊断
                     */
                    std::string m_dischargeDiagnosis;
                    bool m_dischargeDiagnosisHasBeenSet;

                    /**
                     * 出院医嘱
                     */
                    std::string m_dischargeInstruction;
                    bool m_dischargeInstructionHasBeenSet;

                    /**
                     * 入院诊断
                     */
                    std::string m_admissionDiagnosis;
                    bool m_admissionDiagnosisHasBeenSet;

                    /**
                     * 数据在原PDF文件中的第几页
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_HOSPITALIZATION_H_
