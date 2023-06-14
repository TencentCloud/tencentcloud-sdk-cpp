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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_TEMPLATE_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_TEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/PatientInfo.h>
#include <tencentcloud/mrs/v20200910/model/ReportInfo.h>
#include <tencentcloud/mrs/v20200910/model/Check.h>
#include <tencentcloud/mrs/v20200910/model/PathologyReport.h>
#include <tencentcloud/mrs/v20200910/model/MedDoc.h>
#include <tencentcloud/mrs/v20200910/model/DiagCert.h>
#include <tencentcloud/mrs/v20200910/model/FirstPage.h>
#include <tencentcloud/mrs/v20200910/model/Indicator.h>
#include <tencentcloud/mrs/v20200910/model/MedicalRecordInfo.h>
#include <tencentcloud/mrs/v20200910/model/Hospitalization.h>
#include <tencentcloud/mrs/v20200910/model/Surgery.h>
#include <tencentcloud/mrs/v20200910/model/Electrocardiogram.h>
#include <tencentcloud/mrs/v20200910/model/Endoscopy.h>
#include <tencentcloud/mrs/v20200910/model/Prescription.h>
#include <tencentcloud/mrs/v20200910/model/VaccineCertificate.h>
#include <tencentcloud/mrs/v20200910/model/PathologyV2.h>
#include <tencentcloud/mrs/v20200910/model/Exame.h>
#include <tencentcloud/mrs/v20200910/model/DischargeInfoBlock.h>
#include <tencentcloud/mrs/v20200910/model/IndicatorV3.h>
#include <tencentcloud/mrs/v20200910/model/CovidItemsInfo.h>
#include <tencentcloud/mrs/v20200910/model/Maternity.h>
#include <tencentcloud/mrs/v20200910/model/EyeItemsInfo.h>
#include <tencentcloud/mrs/v20200910/model/BirthCert.h>
#include <tencentcloud/mrs/v20200910/model/TimelineInformation.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 报告模板
                */
                class Template : public AbstractModel
                {
                public:
                    Template();
                    ~Template() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取患者信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PatientInfo 患者信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PatientInfo GetPatientInfo() const;

                    /**
                     * 设置患者信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _patientInfo 患者信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPatientInfo(const PatientInfo& _patientInfo);

                    /**
                     * 判断参数 PatientInfo 是否已赋值
                     * @return PatientInfo 是否已赋值
                     * 
                     */
                    bool PatientInfoHasBeenSet() const;

                    /**
                     * 获取报告信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportInfo 报告信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ReportInfo GetReportInfo() const;

                    /**
                     * 设置报告信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reportInfo 报告信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReportInfo(const ReportInfo& _reportInfo);

                    /**
                     * 判断参数 ReportInfo 是否已赋值
                     * @return ReportInfo 是否已赋值
                     * 
                     */
                    bool ReportInfoHasBeenSet() const;

                    /**
                     * 获取检查报告
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Check 检查报告
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Check GetCheck() const;

                    /**
                     * 设置检查报告
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _check 检查报告
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCheck(const Check& _check);

                    /**
                     * 判断参数 Check 是否已赋值
                     * @return Check 是否已赋值
                     * 
                     */
                    bool CheckHasBeenSet() const;

                    /**
                     * 获取病理报告
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Pathology 病理报告
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PathologyReport GetPathology() const;

                    /**
                     * 设置病理报告
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pathology 病理报告
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPathology(const PathologyReport& _pathology);

                    /**
                     * 判断参数 Pathology 是否已赋值
                     * @return Pathology 是否已赋值
                     * 
                     */
                    bool PathologyHasBeenSet() const;

                    /**
                     * 获取出院报告，入院报告，门诊病历
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MedDoc 出院报告，入院报告，门诊病历
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MedDoc GetMedDoc() const;

                    /**
                     * 设置出院报告，入院报告，门诊病历
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _medDoc 出院报告，入院报告，门诊病历
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMedDoc(const MedDoc& _medDoc);

                    /**
                     * 判断参数 MedDoc 是否已赋值
                     * @return MedDoc 是否已赋值
                     * 
                     */
                    bool MedDocHasBeenSet() const;

                    /**
                     * 获取诊断证明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiagCert 诊断证明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DiagCert GetDiagCert() const;

                    /**
                     * 设置诊断证明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diagCert 诊断证明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiagCert(const DiagCert& _diagCert);

                    /**
                     * 判断参数 DiagCert 是否已赋值
                     * @return DiagCert 是否已赋值
                     * 
                     */
                    bool DiagCertHasBeenSet() const;

                    /**
                     * 获取病案首页
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstPage 病案首页
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FirstPage GetFirstPage() const;

                    /**
                     * 设置病案首页
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firstPage 病案首页
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFirstPage(const FirstPage& _firstPage);

                    /**
                     * 判断参数 FirstPage 是否已赋值
                     * @return FirstPage 是否已赋值
                     * 
                     */
                    bool FirstPageHasBeenSet() const;

                    /**
                     * 获取检验报告
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Indicator 检验报告
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Indicator GetIndicator() const;

                    /**
                     * 设置检验报告
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indicator 检验报告
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndicator(const Indicator& _indicator);

                    /**
                     * 判断参数 Indicator 是否已赋值
                     * @return Indicator 是否已赋值
                     * 
                     */
                    bool IndicatorHasBeenSet() const;

                    /**
                     * 获取报告类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportType 报告类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReportType() const;

                    /**
                     * 设置报告类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reportType 报告类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReportType(const std::string& _reportType);

                    /**
                     * 判断参数 ReportType 是否已赋值
                     * @return ReportType 是否已赋值
                     * 
                     */
                    bool ReportTypeHasBeenSet() const;

                    /**
                     * 获取门诊病历信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MedicalRecordInfo 门诊病历信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MedicalRecordInfo GetMedicalRecordInfo() const;

                    /**
                     * 设置门诊病历信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _medicalRecordInfo 门诊病历信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMedicalRecordInfo(const MedicalRecordInfo& _medicalRecordInfo);

                    /**
                     * 判断参数 MedicalRecordInfo 是否已赋值
                     * @return MedicalRecordInfo 是否已赋值
                     * 
                     */
                    bool MedicalRecordInfoHasBeenSet() const;

                    /**
                     * 获取出入院信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Hospitalization 出入院信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Hospitalization GetHospitalization() const;

                    /**
                     * 设置出入院信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hospitalization 出入院信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHospitalization(const Hospitalization& _hospitalization);

                    /**
                     * 判断参数 Hospitalization 是否已赋值
                     * @return Hospitalization 是否已赋值
                     * 
                     */
                    bool HospitalizationHasBeenSet() const;

                    /**
                     * 获取手术记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Surgery 手术记录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Surgery GetSurgery() const;

                    /**
                     * 设置手术记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _surgery 手术记录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSurgery(const Surgery& _surgery);

                    /**
                     * 判断参数 Surgery 是否已赋值
                     * @return Surgery 是否已赋值
                     * 
                     */
                    bool SurgeryHasBeenSet() const;

                    /**
                     * 获取心电图报告
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Electrocardiogram 心电图报告
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Electrocardiogram GetElectrocardiogram() const;

                    /**
                     * 设置心电图报告
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _electrocardiogram 心电图报告
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetElectrocardiogram(const Electrocardiogram& _electrocardiogram);

                    /**
                     * 判断参数 Electrocardiogram 是否已赋值
                     * @return Electrocardiogram 是否已赋值
                     * 
                     */
                    bool ElectrocardiogramHasBeenSet() const;

                    /**
                     * 获取内窥镜报告
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Endoscopy 内窥镜报告
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Endoscopy GetEndoscopy() const;

                    /**
                     * 设置内窥镜报告
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endoscopy 内窥镜报告
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndoscopy(const Endoscopy& _endoscopy);

                    /**
                     * 判断参数 Endoscopy 是否已赋值
                     * @return Endoscopy 是否已赋值
                     * 
                     */
                    bool EndoscopyHasBeenSet() const;

                    /**
                     * 获取处方单
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Prescription 处方单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Prescription GetPrescription() const;

                    /**
                     * 设置处方单
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _prescription 处方单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrescription(const Prescription& _prescription);

                    /**
                     * 判断参数 Prescription 是否已赋值
                     * @return Prescription 是否已赋值
                     * 
                     */
                    bool PrescriptionHasBeenSet() const;

                    /**
                     * 获取疫苗接种凭证
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VaccineCertificate 疫苗接种凭证
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VaccineCertificate GetVaccineCertificate() const;

                    /**
                     * 设置疫苗接种凭证
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vaccineCertificate 疫苗接种凭证
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVaccineCertificate(const VaccineCertificate& _vaccineCertificate);

                    /**
                     * 判断参数 VaccineCertificate 是否已赋值
                     * @return VaccineCertificate 是否已赋值
                     * 
                     */
                    bool VaccineCertificateHasBeenSet() const;

                    /**
                     * 获取OCR文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OcrText OCR文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOcrText() const;

                    /**
                     * 设置OCR文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ocrText OCR文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOcrText(const std::string& _ocrText);

                    /**
                     * 判断参数 OcrText 是否已赋值
                     * @return OcrText 是否已赋值
                     * 
                     */
                    bool OcrTextHasBeenSet() const;

                    /**
                     * 获取OCR拼接后文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OcrResult OCR拼接后文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOcrResult() const;

                    /**
                     * 设置OCR拼接后文本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ocrResult OCR拼接后文本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOcrResult(const std::string& _ocrResult);

                    /**
                     * 判断参数 OcrResult 是否已赋值
                     * @return OcrResult 是否已赋值
                     * 
                     */
                    bool OcrResultHasBeenSet() const;

                    /**
                     * 获取报告类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportTypeDesc 报告类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReportTypeDesc() const;

                    /**
                     * 设置报告类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reportTypeDesc 报告类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReportTypeDesc(const std::string& _reportTypeDesc);

                    /**
                     * 判断参数 ReportTypeDesc 是否已赋值
                     * @return ReportTypeDesc 是否已赋值
                     * 
                     */
                    bool ReportTypeDescHasBeenSet() const;

                    /**
                     * 获取病理报告v2
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PathologyV2 病理报告v2
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PathologyV2 GetPathologyV2() const;

                    /**
                     * 设置病理报告v2
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pathologyV2 病理报告v2
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPathologyV2(const PathologyV2& _pathologyV2);

                    /**
                     * 判断参数 PathologyV2 是否已赋值
                     * @return PathologyV2 是否已赋值
                     * 
                     */
                    bool PathologyV2HasBeenSet() const;

                    /**
                     * 获取碳14尿素呼气试验
注意：此字段可能返回 null，表示取不到有效值。
                     * @return C14 碳14尿素呼气试验
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Indicator GetC14() const;

                    /**
                     * 设置碳14尿素呼气试验
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _c14 碳14尿素呼气试验
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetC14(const Indicator& _c14);

                    /**
                     * 判断参数 C14 是否已赋值
                     * @return C14 是否已赋值
                     * 
                     */
                    bool C14HasBeenSet() const;

                    /**
                     * 获取体检结论
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Exame 体检结论
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Exame GetExame() const;

                    /**
                     * 设置体检结论
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _exame 体检结论
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExame(const Exame& _exame);

                    /**
                     * 判断参数 Exame 是否已赋值
                     * @return Exame 是否已赋值
                     * 
                     */
                    bool ExameHasBeenSet() const;

                    /**
                     * 获取出院报告v2，入院报告v2，门诊病历v2
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MedDocV2 出院报告v2，入院报告v2，门诊病历v2
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DischargeInfoBlock GetMedDocV2() const;

                    /**
                     * 设置出院报告v2，入院报告v2，门诊病历v2
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _medDocV2 出院报告v2，入院报告v2，门诊病历v2
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMedDocV2(const DischargeInfoBlock& _medDocV2);

                    /**
                     * 判断参数 MedDocV2 是否已赋值
                     * @return MedDocV2 是否已赋值
                     * 
                     */
                    bool MedDocV2HasBeenSet() const;

                    /**
                     * 获取检验报告v3
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndicatorV3 检验报告v3
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    IndicatorV3 GetIndicatorV3() const;

                    /**
                     * 设置检验报告v3
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indicatorV3 检验报告v3
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndicatorV3(const IndicatorV3& _indicatorV3);

                    /**
                     * 判断参数 IndicatorV3 是否已赋值
                     * @return IndicatorV3 是否已赋值
                     * 
                     */
                    bool IndicatorV3HasBeenSet() const;

                    /**
                     * 获取核酸报告
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Covid 核酸报告
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CovidItemsInfo GetCovid() const;

                    /**
                     * 设置核酸报告
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _covid 核酸报告
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCovid(const CovidItemsInfo& _covid);

                    /**
                     * 判断参数 Covid 是否已赋值
                     * @return Covid 是否已赋值
                     * 
                     */
                    bool CovidHasBeenSet() const;

                    /**
                     * 获取孕产报告
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Maternity 孕产报告
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Maternity GetMaternity() const;

                    /**
                     * 设置孕产报告
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maternity 孕产报告
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaternity(const Maternity& _maternity);

                    /**
                     * 判断参数 Maternity 是否已赋值
                     * @return Maternity 是否已赋值
                     * 
                     */
                    bool MaternityHasBeenSet() const;

                    /**
                     * 获取眼科报告
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Eye 眼科报告
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EyeItemsInfo GetEye() const;

                    /**
                     * 设置眼科报告
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eye 眼科报告
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEye(const EyeItemsInfo& _eye);

                    /**
                     * 判断参数 Eye 是否已赋值
                     * @return Eye 是否已赋值
                     * 
                     */
                    bool EyeHasBeenSet() const;

                    /**
                     * 获取出生证明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BirthCert 出生证明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BirthCert GetBirthCert() const;

                    /**
                     * 设置出生证明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _birthCert 出生证明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBirthCert(const BirthCert& _birthCert);

                    /**
                     * 判断参数 BirthCert 是否已赋值
                     * @return BirthCert 是否已赋值
                     * 
                     */
                    bool BirthCertHasBeenSet() const;

                    /**
                     * 获取时间轴
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timeline 时间轴
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TimelineInformation GetTimeline() const;

                    /**
                     * 设置时间轴
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeline 时间轴
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeline(const TimelineInformation& _timeline);

                    /**
                     * 判断参数 Timeline 是否已赋值
                     * @return Timeline 是否已赋值
                     * 
                     */
                    bool TimelineHasBeenSet() const;

                private:

                    /**
                     * 患者信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PatientInfo m_patientInfo;
                    bool m_patientInfoHasBeenSet;

                    /**
                     * 报告信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ReportInfo m_reportInfo;
                    bool m_reportInfoHasBeenSet;

                    /**
                     * 检查报告
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Check m_check;
                    bool m_checkHasBeenSet;

                    /**
                     * 病理报告
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PathologyReport m_pathology;
                    bool m_pathologyHasBeenSet;

                    /**
                     * 出院报告，入院报告，门诊病历
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MedDoc m_medDoc;
                    bool m_medDocHasBeenSet;

                    /**
                     * 诊断证明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiagCert m_diagCert;
                    bool m_diagCertHasBeenSet;

                    /**
                     * 病案首页
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FirstPage m_firstPage;
                    bool m_firstPageHasBeenSet;

                    /**
                     * 检验报告
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Indicator m_indicator;
                    bool m_indicatorHasBeenSet;

                    /**
                     * 报告类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reportType;
                    bool m_reportTypeHasBeenSet;

                    /**
                     * 门诊病历信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MedicalRecordInfo m_medicalRecordInfo;
                    bool m_medicalRecordInfoHasBeenSet;

                    /**
                     * 出入院信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Hospitalization m_hospitalization;
                    bool m_hospitalizationHasBeenSet;

                    /**
                     * 手术记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Surgery m_surgery;
                    bool m_surgeryHasBeenSet;

                    /**
                     * 心电图报告
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Electrocardiogram m_electrocardiogram;
                    bool m_electrocardiogramHasBeenSet;

                    /**
                     * 内窥镜报告
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Endoscopy m_endoscopy;
                    bool m_endoscopyHasBeenSet;

                    /**
                     * 处方单
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Prescription m_prescription;
                    bool m_prescriptionHasBeenSet;

                    /**
                     * 疫苗接种凭证
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VaccineCertificate m_vaccineCertificate;
                    bool m_vaccineCertificateHasBeenSet;

                    /**
                     * OCR文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ocrText;
                    bool m_ocrTextHasBeenSet;

                    /**
                     * OCR拼接后文本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ocrResult;
                    bool m_ocrResultHasBeenSet;

                    /**
                     * 报告类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reportTypeDesc;
                    bool m_reportTypeDescHasBeenSet;

                    /**
                     * 病理报告v2
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PathologyV2 m_pathologyV2;
                    bool m_pathologyV2HasBeenSet;

                    /**
                     * 碳14尿素呼气试验
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Indicator m_c14;
                    bool m_c14HasBeenSet;

                    /**
                     * 体检结论
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Exame m_exame;
                    bool m_exameHasBeenSet;

                    /**
                     * 出院报告v2，入院报告v2，门诊病历v2
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DischargeInfoBlock m_medDocV2;
                    bool m_medDocV2HasBeenSet;

                    /**
                     * 检验报告v3
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IndicatorV3 m_indicatorV3;
                    bool m_indicatorV3HasBeenSet;

                    /**
                     * 核酸报告
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CovidItemsInfo m_covid;
                    bool m_covidHasBeenSet;

                    /**
                     * 孕产报告
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Maternity m_maternity;
                    bool m_maternityHasBeenSet;

                    /**
                     * 眼科报告
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EyeItemsInfo m_eye;
                    bool m_eyeHasBeenSet;

                    /**
                     * 出生证明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BirthCert m_birthCert;
                    bool m_birthCertHasBeenSet;

                    /**
                     * 时间轴
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TimelineInformation m_timeline;
                    bool m_timelineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_TEMPLATE_H_
