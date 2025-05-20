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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_BLOCK_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_BLOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Check.h>
#include <tencentcloud/mrs/v20200910/model/PathologyReport.h>
#include <tencentcloud/mrs/v20200910/model/MedDoc.h>
#include <tencentcloud/mrs/v20200910/model/DiagCert.h>
#include <tencentcloud/mrs/v20200910/model/FirstPage.h>
#include <tencentcloud/mrs/v20200910/model/Indicator.h>
#include <tencentcloud/mrs/v20200910/model/MedicalRecordInfo.h>
#include <tencentcloud/mrs/v20200910/model/Hospitalization.h>
#include <tencentcloud/mrs/v20200910/model/Surgery.h>
#include <tencentcloud/mrs/v20200910/model/Prescription.h>
#include <tencentcloud/mrs/v20200910/model/VaccineCertificate.h>
#include <tencentcloud/mrs/v20200910/model/Electrocardiogram.h>
#include <tencentcloud/mrs/v20200910/model/PathologyV2.h>
#include <tencentcloud/mrs/v20200910/model/Endoscopy.h>
#include <tencentcloud/mrs/v20200910/model/Exame.h>
#include <tencentcloud/mrs/v20200910/model/DischargeInfoBlock.h>
#include <tencentcloud/mrs/v20200910/model/IndicatorV3.h>
#include <tencentcloud/mrs/v20200910/model/Maternity.h>
#include <tencentcloud/mrs/v20200910/model/TimelineInformation.h>
#include <tencentcloud/mrs/v20200910/model/CovidItemsInfo.h>
#include <tencentcloud/mrs/v20200910/model/EyeItemsInfo.h>
#include <tencentcloud/mrs/v20200910/model/BirthCert.h>
#include <tencentcloud/mrs/v20200910/model/TextTypeListBlock.h>
#include <tencentcloud/mrs/v20200910/model/PhysicalExaminationV1.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 结构化信息
                */
                class Block : public AbstractModel
                {
                public:
                    Block();
                    ~Block() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取诊断信息
                     * @return Check 诊断信息
                     * 
                     */
                    std::vector<Check> GetCheck() const;

                    /**
                     * 设置诊断信息
                     * @param _check 诊断信息
                     * 
                     */
                    void SetCheck(const std::vector<Check>& _check);

                    /**
                     * 判断参数 Check 是否已赋值
                     * @return Check 是否已赋值
                     * 
                     */
                    bool CheckHasBeenSet() const;

                    /**
                     * 获取病理报告
                     * @return Pathology 病理报告
                     * 
                     */
                    std::vector<PathologyReport> GetPathology() const;

                    /**
                     * 设置病理报告
                     * @param _pathology 病理报告
                     * 
                     */
                    void SetPathology(const std::vector<PathologyReport>& _pathology);

                    /**
                     * 判断参数 Pathology 是否已赋值
                     * @return Pathology 是否已赋值
                     * 
                     */
                    bool PathologyHasBeenSet() const;

                    /**
                     * 获取医学资料
                     * @return MedDoc 医学资料
                     * 
                     */
                    std::vector<MedDoc> GetMedDoc() const;

                    /**
                     * 设置医学资料
                     * @param _medDoc 医学资料
                     * 
                     */
                    void SetMedDoc(const std::vector<MedDoc>& _medDoc);

                    /**
                     * 判断参数 MedDoc 是否已赋值
                     * @return MedDoc 是否已赋值
                     * 
                     */
                    bool MedDocHasBeenSet() const;

                    /**
                     * 获取诊断证明
                     * @return DiagCert 诊断证明
                     * 
                     */
                    std::vector<DiagCert> GetDiagCert() const;

                    /**
                     * 设置诊断证明
                     * @param _diagCert 诊断证明
                     * 
                     */
                    void SetDiagCert(const std::vector<DiagCert>& _diagCert);

                    /**
                     * 判断参数 DiagCert 是否已赋值
                     * @return DiagCert 是否已赋值
                     * 
                     */
                    bool DiagCertHasBeenSet() const;

                    /**
                     * 获取病案首页
                     * @return FirstPage 病案首页
                     * 
                     */
                    std::vector<FirstPage> GetFirstPage() const;

                    /**
                     * 设置病案首页
                     * @param _firstPage 病案首页
                     * 
                     */
                    void SetFirstPage(const std::vector<FirstPage>& _firstPage);

                    /**
                     * 判断参数 FirstPage 是否已赋值
                     * @return FirstPage 是否已赋值
                     * 
                     */
                    bool FirstPageHasBeenSet() const;

                    /**
                     * 获取检验报告
                     * @return Indicator 检验报告
                     * 
                     */
                    std::vector<Indicator> GetIndicator() const;

                    /**
                     * 设置检验报告
                     * @param _indicator 检验报告
                     * 
                     */
                    void SetIndicator(const std::vector<Indicator>& _indicator);

                    /**
                     * 判断参数 Indicator 是否已赋值
                     * @return Indicator 是否已赋值
                     * 
                     */
                    bool IndicatorHasBeenSet() const;

                    /**
                     * 获取门诊病历信息
                     * @return MedicalRecordInfo 门诊病历信息
                     * 
                     */
                    std::vector<MedicalRecordInfo> GetMedicalRecordInfo() const;

                    /**
                     * 设置门诊病历信息
                     * @param _medicalRecordInfo 门诊病历信息
                     * 
                     */
                    void SetMedicalRecordInfo(const std::vector<MedicalRecordInfo>& _medicalRecordInfo);

                    /**
                     * 判断参数 MedicalRecordInfo 是否已赋值
                     * @return MedicalRecordInfo 是否已赋值
                     * 
                     */
                    bool MedicalRecordInfoHasBeenSet() const;

                    /**
                     * 获取出入院信息
                     * @return Hospitalization 出入院信息
                     * 
                     */
                    std::vector<Hospitalization> GetHospitalization() const;

                    /**
                     * 设置出入院信息
                     * @param _hospitalization 出入院信息
                     * 
                     */
                    void SetHospitalization(const std::vector<Hospitalization>& _hospitalization);

                    /**
                     * 判断参数 Hospitalization 是否已赋值
                     * @return Hospitalization 是否已赋值
                     * 
                     */
                    bool HospitalizationHasBeenSet() const;

                    /**
                     * 获取手术记录
                     * @return Surgery 手术记录
                     * 
                     */
                    std::vector<Surgery> GetSurgery() const;

                    /**
                     * 设置手术记录
                     * @param _surgery 手术记录
                     * 
                     */
                    void SetSurgery(const std::vector<Surgery>& _surgery);

                    /**
                     * 判断参数 Surgery 是否已赋值
                     * @return Surgery 是否已赋值
                     * 
                     */
                    bool SurgeryHasBeenSet() const;

                    /**
                     * 获取处方单
                     * @return Prescription 处方单
                     * 
                     */
                    std::vector<Prescription> GetPrescription() const;

                    /**
                     * 设置处方单
                     * @param _prescription 处方单
                     * 
                     */
                    void SetPrescription(const std::vector<Prescription>& _prescription);

                    /**
                     * 判断参数 Prescription 是否已赋值
                     * @return Prescription 是否已赋值
                     * 
                     */
                    bool PrescriptionHasBeenSet() const;

                    /**
                     * 获取免疫接种证明
                     * @return VaccineCertificate 免疫接种证明
                     * 
                     */
                    std::vector<VaccineCertificate> GetVaccineCertificate() const;

                    /**
                     * 设置免疫接种证明
                     * @param _vaccineCertificate 免疫接种证明
                     * 
                     */
                    void SetVaccineCertificate(const std::vector<VaccineCertificate>& _vaccineCertificate);

                    /**
                     * 判断参数 VaccineCertificate 是否已赋值
                     * @return VaccineCertificate 是否已赋值
                     * 
                     */
                    bool VaccineCertificateHasBeenSet() const;

                    /**
                     * 获取心电图
                     * @return Electrocardiogram 心电图
                     * 
                     */
                    std::vector<Electrocardiogram> GetElectrocardiogram() const;

                    /**
                     * 设置心电图
                     * @param _electrocardiogram 心电图
                     * 
                     */
                    void SetElectrocardiogram(const std::vector<Electrocardiogram>& _electrocardiogram);

                    /**
                     * 判断参数 Electrocardiogram 是否已赋值
                     * @return Electrocardiogram 是否已赋值
                     * 
                     */
                    bool ElectrocardiogramHasBeenSet() const;

                    /**
                     * 获取病理报告v2
                     * @return PathologyV2 病理报告v2
                     * 
                     */
                    std::vector<PathologyV2> GetPathologyV2() const;

                    /**
                     * 设置病理报告v2
                     * @param _pathologyV2 病理报告v2
                     * 
                     */
                    void SetPathologyV2(const std::vector<PathologyV2>& _pathologyV2);

                    /**
                     * 判断参数 PathologyV2 是否已赋值
                     * @return PathologyV2 是否已赋值
                     * 
                     */
                    bool PathologyV2HasBeenSet() const;

                    /**
                     * 获取内窥镜报告
                     * @return Endoscopy 内窥镜报告
                     * 
                     */
                    std::vector<Endoscopy> GetEndoscopy() const;

                    /**
                     * 设置内窥镜报告
                     * @param _endoscopy 内窥镜报告
                     * 
                     */
                    void SetEndoscopy(const std::vector<Endoscopy>& _endoscopy);

                    /**
                     * 判断参数 Endoscopy 是否已赋值
                     * @return Endoscopy 是否已赋值
                     * 
                     */
                    bool EndoscopyHasBeenSet() const;

                    /**
                     * 获取C14检验报告
                     * @return C14 C14检验报告
                     * 
                     */
                    std::vector<Indicator> GetC14() const;

                    /**
                     * 设置C14检验报告
                     * @param _c14 C14检验报告
                     * 
                     */
                    void SetC14(const std::vector<Indicator>& _c14);

                    /**
                     * 判断参数 C14 是否已赋值
                     * @return C14 是否已赋值
                     * 
                     */
                    bool C14HasBeenSet() const;

                    /**
                     * 获取体检结论
                     * @return Exame 体检结论
                     * 
                     */
                    std::vector<Exame> GetExame() const;

                    /**
                     * 设置体检结论
                     * @param _exame 体检结论
                     * 
                     */
                    void SetExame(const std::vector<Exame>& _exame);

                    /**
                     * 判断参数 Exame 是否已赋值
                     * @return Exame 是否已赋值
                     * 
                     */
                    bool ExameHasBeenSet() const;

                    /**
                     * 获取出入院结构体
                     * @return MedDocV2 出入院结构体
                     * 
                     */
                    std::vector<DischargeInfoBlock> GetMedDocV2() const;

                    /**
                     * 设置出入院结构体
                     * @param _medDocV2 出入院结构体
                     * 
                     */
                    void SetMedDocV2(const std::vector<DischargeInfoBlock>& _medDocV2);

                    /**
                     * 判断参数 MedDocV2 是否已赋值
                     * @return MedDocV2 是否已赋值
                     * 
                     */
                    bool MedDocV2HasBeenSet() const;

                    /**
                     * 获取检验报告v3
                     * @return IndicatorV3 检验报告v3
                     * 
                     */
                    std::vector<IndicatorV3> GetIndicatorV3() const;

                    /**
                     * 设置检验报告v3
                     * @param _indicatorV3 检验报告v3
                     * 
                     */
                    void SetIndicatorV3(const std::vector<IndicatorV3>& _indicatorV3);

                    /**
                     * 判断参数 IndicatorV3 是否已赋值
                     * @return IndicatorV3 是否已赋值
                     * 
                     */
                    bool IndicatorV3HasBeenSet() const;

                    /**
                     * 获取孕产报告
                     * @return Maternity 孕产报告
                     * 
                     */
                    std::vector<Maternity> GetMaternity() const;

                    /**
                     * 设置孕产报告
                     * @param _maternity 孕产报告
                     * 
                     */
                    void SetMaternity(const std::vector<Maternity>& _maternity);

                    /**
                     * 判断参数 Maternity 是否已赋值
                     * @return Maternity 是否已赋值
                     * 
                     */
                    bool MaternityHasBeenSet() const;

                    /**
                     * 获取时间轴
                     * @return Timeline 时间轴
                     * 
                     */
                    std::vector<TimelineInformation> GetTimeline() const;

                    /**
                     * 设置时间轴
                     * @param _timeline 时间轴
                     * 
                     */
                    void SetTimeline(const std::vector<TimelineInformation>& _timeline);

                    /**
                     * 判断参数 Timeline 是否已赋值
                     * @return Timeline 是否已赋值
                     * 
                     */
                    bool TimelineHasBeenSet() const;

                    /**
                     * 获取核酸报告结论
                     * @return Covid 核酸报告结论
                     * 
                     */
                    std::vector<CovidItemsInfo> GetCovid() const;

                    /**
                     * 设置核酸报告结论
                     * @param _covid 核酸报告结论
                     * 
                     */
                    void SetCovid(const std::vector<CovidItemsInfo>& _covid);

                    /**
                     * 判断参数 Covid 是否已赋值
                     * @return Covid 是否已赋值
                     * 
                     */
                    bool CovidHasBeenSet() const;

                    /**
                     * 获取眼科报告结构体
                     * @return Eye 眼科报告结构体
                     * 
                     */
                    std::vector<EyeItemsInfo> GetEye() const;

                    /**
                     * 设置眼科报告结构体
                     * @param _eye 眼科报告结构体
                     * 
                     */
                    void SetEye(const std::vector<EyeItemsInfo>& _eye);

                    /**
                     * 判断参数 Eye 是否已赋值
                     * @return Eye 是否已赋值
                     * 
                     */
                    bool EyeHasBeenSet() const;

                    /**
                     * 获取出生证明结构化信息
                     * @return BirthCert 出生证明结构化信息
                     * 
                     */
                    std::vector<BirthCert> GetBirthCert() const;

                    /**
                     * 设置出生证明结构化信息
                     * @param _birthCert 出生证明结构化信息
                     * 
                     */
                    void SetBirthCert(const std::vector<BirthCert>& _birthCert);

                    /**
                     * 判断参数 BirthCert 是否已赋值
                     * @return BirthCert 是否已赋值
                     * 
                     */
                    bool BirthCertHasBeenSet() const;

                    /**
                     * 获取文本类型列表
                     * @return TextTypeListBlocks 文本类型列表
                     * 
                     */
                    std::vector<TextTypeListBlock> GetTextTypeListBlocks() const;

                    /**
                     * 设置文本类型列表
                     * @param _textTypeListBlocks 文本类型列表
                     * 
                     */
                    void SetTextTypeListBlocks(const std::vector<TextTypeListBlock>& _textTypeListBlocks);

                    /**
                     * 判断参数 TextTypeListBlocks 是否已赋值
                     * @return TextTypeListBlocks 是否已赋值
                     * 
                     */
                    bool TextTypeListBlocksHasBeenSet() const;

                    /**
                     * 获取体检报告信息
                     * @return PhysicalExamination 体检报告信息
                     * 
                     */
                    PhysicalExaminationV1 GetPhysicalExamination() const;

                    /**
                     * 设置体检报告信息
                     * @param _physicalExamination 体检报告信息
                     * 
                     */
                    void SetPhysicalExamination(const PhysicalExaminationV1& _physicalExamination);

                    /**
                     * 判断参数 PhysicalExamination 是否已赋值
                     * @return PhysicalExamination 是否已赋值
                     * 
                     */
                    bool PhysicalExaminationHasBeenSet() const;

                    /**
                     * 获取内窥镜报告V2
                     * @return EndoscopyV2 内窥镜报告V2
                     * 
                     */
                    std::vector<Check> GetEndoscopyV2() const;

                    /**
                     * 设置内窥镜报告V2
                     * @param _endoscopyV2 内窥镜报告V2
                     * 
                     */
                    void SetEndoscopyV2(const std::vector<Check>& _endoscopyV2);

                    /**
                     * 判断参数 EndoscopyV2 是否已赋值
                     * @return EndoscopyV2 是否已赋值
                     * 
                     */
                    bool EndoscopyV2HasBeenSet() const;

                private:

                    /**
                     * 诊断信息
                     */
                    std::vector<Check> m_check;
                    bool m_checkHasBeenSet;

                    /**
                     * 病理报告
                     */
                    std::vector<PathologyReport> m_pathology;
                    bool m_pathologyHasBeenSet;

                    /**
                     * 医学资料
                     */
                    std::vector<MedDoc> m_medDoc;
                    bool m_medDocHasBeenSet;

                    /**
                     * 诊断证明
                     */
                    std::vector<DiagCert> m_diagCert;
                    bool m_diagCertHasBeenSet;

                    /**
                     * 病案首页
                     */
                    std::vector<FirstPage> m_firstPage;
                    bool m_firstPageHasBeenSet;

                    /**
                     * 检验报告
                     */
                    std::vector<Indicator> m_indicator;
                    bool m_indicatorHasBeenSet;

                    /**
                     * 门诊病历信息
                     */
                    std::vector<MedicalRecordInfo> m_medicalRecordInfo;
                    bool m_medicalRecordInfoHasBeenSet;

                    /**
                     * 出入院信息
                     */
                    std::vector<Hospitalization> m_hospitalization;
                    bool m_hospitalizationHasBeenSet;

                    /**
                     * 手术记录
                     */
                    std::vector<Surgery> m_surgery;
                    bool m_surgeryHasBeenSet;

                    /**
                     * 处方单
                     */
                    std::vector<Prescription> m_prescription;
                    bool m_prescriptionHasBeenSet;

                    /**
                     * 免疫接种证明
                     */
                    std::vector<VaccineCertificate> m_vaccineCertificate;
                    bool m_vaccineCertificateHasBeenSet;

                    /**
                     * 心电图
                     */
                    std::vector<Electrocardiogram> m_electrocardiogram;
                    bool m_electrocardiogramHasBeenSet;

                    /**
                     * 病理报告v2
                     */
                    std::vector<PathologyV2> m_pathologyV2;
                    bool m_pathologyV2HasBeenSet;

                    /**
                     * 内窥镜报告
                     */
                    std::vector<Endoscopy> m_endoscopy;
                    bool m_endoscopyHasBeenSet;

                    /**
                     * C14检验报告
                     */
                    std::vector<Indicator> m_c14;
                    bool m_c14HasBeenSet;

                    /**
                     * 体检结论
                     */
                    std::vector<Exame> m_exame;
                    bool m_exameHasBeenSet;

                    /**
                     * 出入院结构体
                     */
                    std::vector<DischargeInfoBlock> m_medDocV2;
                    bool m_medDocV2HasBeenSet;

                    /**
                     * 检验报告v3
                     */
                    std::vector<IndicatorV3> m_indicatorV3;
                    bool m_indicatorV3HasBeenSet;

                    /**
                     * 孕产报告
                     */
                    std::vector<Maternity> m_maternity;
                    bool m_maternityHasBeenSet;

                    /**
                     * 时间轴
                     */
                    std::vector<TimelineInformation> m_timeline;
                    bool m_timelineHasBeenSet;

                    /**
                     * 核酸报告结论
                     */
                    std::vector<CovidItemsInfo> m_covid;
                    bool m_covidHasBeenSet;

                    /**
                     * 眼科报告结构体
                     */
                    std::vector<EyeItemsInfo> m_eye;
                    bool m_eyeHasBeenSet;

                    /**
                     * 出生证明结构化信息
                     */
                    std::vector<BirthCert> m_birthCert;
                    bool m_birthCertHasBeenSet;

                    /**
                     * 文本类型列表
                     */
                    std::vector<TextTypeListBlock> m_textTypeListBlocks;
                    bool m_textTypeListBlocksHasBeenSet;

                    /**
                     * 体检报告信息
                     */
                    PhysicalExaminationV1 m_physicalExamination;
                    bool m_physicalExaminationHasBeenSet;

                    /**
                     * 内窥镜报告V2
                     */
                    std::vector<Check> m_endoscopyV2;
                    bool m_endoscopyV2HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_BLOCK_H_
