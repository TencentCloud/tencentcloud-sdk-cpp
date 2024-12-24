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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_REQUESTCASE_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_REQUESTCASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/aca/v20210323/model/PatientBaseInfo.h>
#include <tencentcloud/aca/v20210323/model/DoctorInfo.h>
#include <tencentcloud/aca/v20210323/model/PatientHistory.h>
#include <tencentcloud/aca/v20210323/model/PatientFamilyHistory.h>
#include <tencentcloud/aca/v20210323/model/PhysicalExam.h>
#include <tencentcloud/aca/v20210323/model/EmrDiagnosises.h>
#include <tencentcloud/aca/v20210323/model/DrugUsage.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 预测数据
                */
                class RequestCase : public AbstractModel
                {
                public:
                    RequestCase();
                    ~RequestCase() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取处方类型 0:门诊处方；1:住院医嘱；2:急诊处方 
                     * @return CaseType 处方类型 0:门诊处方；1:住院医嘱；2:急诊处方 
                     * 
                     */
                    int64_t GetCaseType() const;

                    /**
                     * 设置处方类型 0:门诊处方；1:住院医嘱；2:急诊处方 
                     * @param _caseType 处方类型 0:门诊处方；1:住院医嘱；2:急诊处方 
                     * 
                     */
                    void SetCaseType(const int64_t& _caseType);

                    /**
                     * 判断参数 CaseType 是否已赋值
                     * @return CaseType 是否已赋值
                     * 
                     */
                    bool CaseTypeHasBeenSet() const;

                    /**
                     * 获取主诉
                     * @return ChiefComplaint 主诉
                     * 
                     */
                    std::string GetChiefComplaint() const;

                    /**
                     * 设置主诉
                     * @param _chiefComplaint 主诉
                     * 
                     */
                    void SetChiefComplaint(const std::string& _chiefComplaint);

                    /**
                     * 判断参数 ChiefComplaint 是否已赋值
                     * @return ChiefComplaint 是否已赋值
                     * 
                     */
                    bool ChiefComplaintHasBeenSet() const;

                    /**
                     * 获取科室
                     * @return Department 科室
                     * 
                     */
                    std::string GetDepartment() const;

                    /**
                     * 设置科室
                     * @param _department 科室
                     * 
                     */
                    void SetDepartment(const std::string& _department);

                    /**
                     * 判断参数 Department 是否已赋值
                     * @return Department 是否已赋值
                     * 
                     */
                    bool DepartmentHasBeenSet() const;

                    /**
                     * 获取病历文书ID
医生每次书写病历文书的ID，文书内容包含主诉，病史，当前诊断等内容<br />门诊场景：门诊病历文书（带有主诉、病史、诊断及药品的）只有一份，这个编号只有一个。<br/>住院场景：假设住院3天，医生每天都会写一份病历文书（带有主诉、病史、诊断及医嘱药品的文书），那么有对应三个病历文书编号，每次调用预测接口都要传入不同的病历文书编号。注意：如两次调用预测接口，传相同的caseid，则在药师端管理平台的上一次审方记录中的诊断会被本次接口传入的诊断更新。
                     * @return CaseId 病历文书ID
医生每次书写病历文书的ID，文书内容包含主诉，病史，当前诊断等内容<br />门诊场景：门诊病历文书（带有主诉、病史、诊断及药品的）只有一份，这个编号只有一个。<br/>住院场景：假设住院3天，医生每天都会写一份病历文书（带有主诉、病史、诊断及医嘱药品的文书），那么有对应三个病历文书编号，每次调用预测接口都要传入不同的病历文书编号。注意：如两次调用预测接口，传相同的caseid，则在药师端管理平台的上一次审方记录中的诊断会被本次接口传入的诊断更新。
                     * 
                     */
                    std::string GetCaseId() const;

                    /**
                     * 设置病历文书ID
医生每次书写病历文书的ID，文书内容包含主诉，病史，当前诊断等内容<br />门诊场景：门诊病历文书（带有主诉、病史、诊断及药品的）只有一份，这个编号只有一个。<br/>住院场景：假设住院3天，医生每天都会写一份病历文书（带有主诉、病史、诊断及医嘱药品的文书），那么有对应三个病历文书编号，每次调用预测接口都要传入不同的病历文书编号。注意：如两次调用预测接口，传相同的caseid，则在药师端管理平台的上一次审方记录中的诊断会被本次接口传入的诊断更新。
                     * @param _caseId 病历文书ID
医生每次书写病历文书的ID，文书内容包含主诉，病史，当前诊断等内容<br />门诊场景：门诊病历文书（带有主诉、病史、诊断及药品的）只有一份，这个编号只有一个。<br/>住院场景：假设住院3天，医生每天都会写一份病历文书（带有主诉、病史、诊断及医嘱药品的文书），那么有对应三个病历文书编号，每次调用预测接口都要传入不同的病历文书编号。注意：如两次调用预测接口，传相同的caseid，则在药师端管理平台的上一次审方记录中的诊断会被本次接口传入的诊断更新。
                     * 
                     */
                    void SetCaseId(const std::string& _caseId);

                    /**
                     * 判断参数 CaseId 是否已赋值
                     * @return CaseId 是否已赋值
                     * 
                     */
                    bool CaseIdHasBeenSet() const;

                    /**
                     * 获取病历更新时间
                     * @return CaseTime 病历更新时间
                     * 
                     */
                    std::string GetCaseTime() const;

                    /**
                     * 设置病历更新时间
                     * @param _caseTime 病历更新时间
                     * 
                     */
                    void SetCaseTime(const std::string& _caseTime);

                    /**
                     * 判断参数 CaseTime 是否已赋值
                     * @return CaseTime 是否已赋值
                     * 
                     */
                    bool CaseTimeHasBeenSet() const;

                    /**
                     * 获取就诊ID
门诊处方传门诊号，住院医嘱传住院号；备注：门诊场景：用户挂一次号，看一个医生，这时候会有一个代表变成就诊的编号，下一次挂号就诊，这个编号会变。<br/>住院场景：用户本次办理入院，会有一个住院编号，仅代表本次住院，如果下次再住院，这个编号会变。
                     * @return VisitId 就诊ID
门诊处方传门诊号，住院医嘱传住院号；备注：门诊场景：用户挂一次号，看一个医生，这时候会有一个代表变成就诊的编号，下一次挂号就诊，这个编号会变。<br/>住院场景：用户本次办理入院，会有一个住院编号，仅代表本次住院，如果下次再住院，这个编号会变。
                     * 
                     */
                    std::string GetVisitId() const;

                    /**
                     * 设置就诊ID
门诊处方传门诊号，住院医嘱传住院号；备注：门诊场景：用户挂一次号，看一个医生，这时候会有一个代表变成就诊的编号，下一次挂号就诊，这个编号会变。<br/>住院场景：用户本次办理入院，会有一个住院编号，仅代表本次住院，如果下次再住院，这个编号会变。
                     * @param _visitId 就诊ID
门诊处方传门诊号，住院医嘱传住院号；备注：门诊场景：用户挂一次号，看一个医生，这时候会有一个代表变成就诊的编号，下一次挂号就诊，这个编号会变。<br/>住院场景：用户本次办理入院，会有一个住院编号，仅代表本次住院，如果下次再住院，这个编号会变。
                     * 
                     */
                    void SetVisitId(const std::string& _visitId);

                    /**
                     * 判断参数 VisitId 是否已赋值
                     * @return VisitId 是否已赋值
                     * 
                     */
                    bool VisitIdHasBeenSet() const;

                    /**
                     * 获取患者信息
                     * @return PatientBaseinfo 患者信息
                     * 
                     */
                    PatientBaseInfo GetPatientBaseinfo() const;

                    /**
                     * 设置患者信息
                     * @param _patientBaseinfo 患者信息
                     * 
                     */
                    void SetPatientBaseinfo(const PatientBaseInfo& _patientBaseinfo);

                    /**
                     * 判断参数 PatientBaseinfo 是否已赋值
                     * @return PatientBaseinfo 是否已赋值
                     * 
                     */
                    bool PatientBaseinfoHasBeenSet() const;

                    /**
                     * 获取医生信息
                     * @return DoctorInfo 医生信息
                     * 
                     */
                    DoctorInfo GetDoctorInfo() const;

                    /**
                     * 设置医生信息
                     * @param _doctorInfo 医生信息
                     * 
                     */
                    void SetDoctorInfo(const DoctorInfo& _doctorInfo);

                    /**
                     * 判断参数 DoctorInfo 是否已赋值
                     * @return DoctorInfo 是否已赋值
                     * 
                     */
                    bool DoctorInfoHasBeenSet() const;

                    /**
                     * 获取现病史
                     * @return PresentIllness 现病史
                     * 
                     */
                    std::string GetPresentIllness() const;

                    /**
                     * 设置现病史
                     * @param _presentIllness 现病史
                     * 
                     */
                    void SetPresentIllness(const std::string& _presentIllness);

                    /**
                     * 判断参数 PresentIllness 是否已赋值
                     * @return PresentIllness 是否已赋值
                     * 
                     */
                    bool PresentIllnessHasBeenSet() const;

                    /**
                     * 获取患者其他信息，包含过敏史等
                     * @return PatientOther 患者其他信息，包含过敏史等
                     * 
                     */
                    std::string GetPatientOther() const;

                    /**
                     * 设置患者其他信息，包含过敏史等
                     * @param _patientOther 患者其他信息，包含过敏史等
                     * 
                     */
                    void SetPatientOther(const std::string& _patientOther);

                    /**
                     * 判断参数 PatientOther 是否已赋值
                     * @return PatientOther 是否已赋值
                     * 
                     */
                    bool PatientOtherHasBeenSet() const;

                    /**
                     * 获取患者过往病史
                     * @return PatientHistory 患者过往病史
                     * 
                     */
                    PatientHistory GetPatientHistory() const;

                    /**
                     * 设置患者过往病史
                     * @param _patientHistory 患者过往病史
                     * 
                     */
                    void SetPatientHistory(const PatientHistory& _patientHistory);

                    /**
                     * 判断参数 PatientHistory 是否已赋值
                     * @return PatientHistory 是否已赋值
                     * 
                     */
                    bool PatientHistoryHasBeenSet() const;

                    /**
                     * 获取患者家族病史
                     * @return PatientFamilyHistory 患者家族病史
                     * 
                     */
                    PatientFamilyHistory GetPatientFamilyHistory() const;

                    /**
                     * 设置患者家族病史
                     * @param _patientFamilyHistory 患者家族病史
                     * 
                     */
                    void SetPatientFamilyHistory(const PatientFamilyHistory& _patientFamilyHistory);

                    /**
                     * 判断参数 PatientFamilyHistory 是否已赋值
                     * @return PatientFamilyHistory 是否已赋值
                     * 
                     */
                    bool PatientFamilyHistoryHasBeenSet() const;

                    /**
                     * 获取体格检查
                     * @return PhysicalExam 体格检查
                     * 
                     */
                    PhysicalExam GetPhysicalExam() const;

                    /**
                     * 设置体格检查
                     * @param _physicalExam 体格检查
                     * 
                     */
                    void SetPhysicalExam(const PhysicalExam& _physicalExam);

                    /**
                     * 判断参数 PhysicalExam 是否已赋值
                     * @return PhysicalExam 是否已赋值
                     * 
                     */
                    bool PhysicalExamHasBeenSet() const;

                    /**
                     * 获取诊断列表，第一个为首要诊断
                     * @return EmrDiagnosises 诊断列表，第一个为首要诊断
                     * 
                     */
                    std::vector<EmrDiagnosises> GetEmrDiagnosises() const;

                    /**
                     * 设置诊断列表，第一个为首要诊断
                     * @param _emrDiagnosises 诊断列表，第一个为首要诊断
                     * 
                     */
                    void SetEmrDiagnosises(const std::vector<EmrDiagnosises>& _emrDiagnosises);

                    /**
                     * 判断参数 EmrDiagnosises 是否已赋值
                     * @return EmrDiagnosises 是否已赋值
                     * 
                     */
                    bool EmrDiagnosisesHasBeenSet() const;

                    /**
                     * 获取处方列表
                     * @return Prescriptions 处方列表
                     * 
                     */
                    std::vector<DrugUsage> GetPrescriptions() const;

                    /**
                     * 设置处方列表
                     * @param _prescriptions 处方列表
                     * 
                     */
                    void SetPrescriptions(const std::vector<DrugUsage>& _prescriptions);

                    /**
                     * 判断参数 Prescriptions 是否已赋值
                     * @return Prescriptions 是否已赋值
                     * 
                     */
                    bool PrescriptionsHasBeenSet() const;

                private:

                    /**
                     * 处方类型 0:门诊处方；1:住院医嘱；2:急诊处方 
                     */
                    int64_t m_caseType;
                    bool m_caseTypeHasBeenSet;

                    /**
                     * 主诉
                     */
                    std::string m_chiefComplaint;
                    bool m_chiefComplaintHasBeenSet;

                    /**
                     * 科室
                     */
                    std::string m_department;
                    bool m_departmentHasBeenSet;

                    /**
                     * 病历文书ID
医生每次书写病历文书的ID，文书内容包含主诉，病史，当前诊断等内容<br />门诊场景：门诊病历文书（带有主诉、病史、诊断及药品的）只有一份，这个编号只有一个。<br/>住院场景：假设住院3天，医生每天都会写一份病历文书（带有主诉、病史、诊断及医嘱药品的文书），那么有对应三个病历文书编号，每次调用预测接口都要传入不同的病历文书编号。注意：如两次调用预测接口，传相同的caseid，则在药师端管理平台的上一次审方记录中的诊断会被本次接口传入的诊断更新。
                     */
                    std::string m_caseId;
                    bool m_caseIdHasBeenSet;

                    /**
                     * 病历更新时间
                     */
                    std::string m_caseTime;
                    bool m_caseTimeHasBeenSet;

                    /**
                     * 就诊ID
门诊处方传门诊号，住院医嘱传住院号；备注：门诊场景：用户挂一次号，看一个医生，这时候会有一个代表变成就诊的编号，下一次挂号就诊，这个编号会变。<br/>住院场景：用户本次办理入院，会有一个住院编号，仅代表本次住院，如果下次再住院，这个编号会变。
                     */
                    std::string m_visitId;
                    bool m_visitIdHasBeenSet;

                    /**
                     * 患者信息
                     */
                    PatientBaseInfo m_patientBaseinfo;
                    bool m_patientBaseinfoHasBeenSet;

                    /**
                     * 医生信息
                     */
                    DoctorInfo m_doctorInfo;
                    bool m_doctorInfoHasBeenSet;

                    /**
                     * 现病史
                     */
                    std::string m_presentIllness;
                    bool m_presentIllnessHasBeenSet;

                    /**
                     * 患者其他信息，包含过敏史等
                     */
                    std::string m_patientOther;
                    bool m_patientOtherHasBeenSet;

                    /**
                     * 患者过往病史
                     */
                    PatientHistory m_patientHistory;
                    bool m_patientHistoryHasBeenSet;

                    /**
                     * 患者家族病史
                     */
                    PatientFamilyHistory m_patientFamilyHistory;
                    bool m_patientFamilyHistoryHasBeenSet;

                    /**
                     * 体格检查
                     */
                    PhysicalExam m_physicalExam;
                    bool m_physicalExamHasBeenSet;

                    /**
                     * 诊断列表，第一个为首要诊断
                     */
                    std::vector<EmrDiagnosises> m_emrDiagnosises;
                    bool m_emrDiagnosisesHasBeenSet;

                    /**
                     * 处方列表
                     */
                    std::vector<DrugUsage> m_prescriptions;
                    bool m_prescriptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_REQUESTCASE_H_
