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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_REPORTINFO_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_REPORTINFO_H_

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
                * 报告基本信息
                */
                class ReportInfo : public AbstractModel
                {
                public:
                    ReportInfo();
                    ~ReportInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取医院名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Hospital 医院名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHospital() const;

                    /**
                     * 设置医院名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Hospital 医院名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHospital(const std::string& _hospital);

                    /**
                     * 判断参数 Hospital 是否已赋值
                     * @return Hospital 是否已赋值
                     */
                    bool HospitalHasBeenSet() const;

                    /**
                     * 获取科室名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DepartmentName 科室名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDepartmentName() const;

                    /**
                     * 设置科室名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DepartmentName 科室名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDepartmentName(const std::string& _departmentName);

                    /**
                     * 判断参数 DepartmentName 是否已赋值
                     * @return DepartmentName 是否已赋值
                     */
                    bool DepartmentNameHasBeenSet() const;

                    /**
                     * 获取申请时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingTime 申请时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBillingTime() const;

                    /**
                     * 设置申请时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BillingTime 申请时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBillingTime(const std::string& _billingTime);

                    /**
                     * 判断参数 BillingTime 是否已赋值
                     * @return BillingTime 是否已赋值
                     */
                    bool BillingTimeHasBeenSet() const;

                    /**
                     * 获取报告时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportTime 报告时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetReportTime() const;

                    /**
                     * 设置报告时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ReportTime 报告时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReportTime(const std::string& _reportTime);

                    /**
                     * 判断参数 ReportTime 是否已赋值
                     * @return ReportTime 是否已赋值
                     */
                    bool ReportTimeHasBeenSet() const;

                    /**
                     * 获取检查时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InspectTime 检查时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInspectTime() const;

                    /**
                     * 设置检查时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InspectTime 检查时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInspectTime(const std::string& _inspectTime);

                    /**
                     * 判断参数 InspectTime 是否已赋值
                     * @return InspectTime 是否已赋值
                     */
                    bool InspectTimeHasBeenSet() const;

                    /**
                     * 获取检查号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CheckNum 检查号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCheckNum() const;

                    /**
                     * 设置检查号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CheckNum 检查号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCheckNum(const std::string& _checkNum);

                    /**
                     * 判断参数 CheckNum 是否已赋值
                     * @return CheckNum 是否已赋值
                     */
                    bool CheckNumHasBeenSet() const;

                    /**
                     * 获取影像号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageNum 影像号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetImageNum() const;

                    /**
                     * 设置影像号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ImageNum 影像号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetImageNum(const std::string& _imageNum);

                    /**
                     * 判断参数 ImageNum 是否已赋值
                     * @return ImageNum 是否已赋值
                     */
                    bool ImageNumHasBeenSet() const;

                    /**
                     * 获取放射号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RadiationNum 放射号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRadiationNum() const;

                    /**
                     * 设置放射号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RadiationNum 放射号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRadiationNum(const std::string& _radiationNum);

                    /**
                     * 判断参数 RadiationNum 是否已赋值
                     * @return RadiationNum 是否已赋值
                     */
                    bool RadiationNumHasBeenSet() const;

                    /**
                     * 获取检验号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TestNum 检验号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTestNum() const;

                    /**
                     * 设置检验号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TestNum 检验号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTestNum(const std::string& _testNum);

                    /**
                     * 判断参数 TestNum 是否已赋值
                     * @return TestNum 是否已赋值
                     */
                    bool TestNumHasBeenSet() const;

                    /**
                     * 获取门诊号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutpatientNum 门诊号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOutpatientNum() const;

                    /**
                     * 设置门诊号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OutpatientNum 门诊号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOutpatientNum(const std::string& _outpatientNum);

                    /**
                     * 判断参数 OutpatientNum 是否已赋值
                     * @return OutpatientNum 是否已赋值
                     */
                    bool OutpatientNumHasBeenSet() const;

                    /**
                     * 获取病理号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PathologyNum 病理号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPathologyNum() const;

                    /**
                     * 设置病理号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PathologyNum 病理号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPathologyNum(const std::string& _pathologyNum);

                    /**
                     * 判断参数 PathologyNum 是否已赋值
                     * @return PathologyNum 是否已赋值
                     */
                    bool PathologyNumHasBeenSet() const;

                    /**
                     * 获取住院号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InHospitalNum 住院号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInHospitalNum() const;

                    /**
                     * 设置住院号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InHospitalNum 住院号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInHospitalNum(const std::string& _inHospitalNum);

                    /**
                     * 判断参数 InHospitalNum 是否已赋值
                     * @return InHospitalNum 是否已赋值
                     */
                    bool InHospitalNumHasBeenSet() const;

                    /**
                     * 获取样本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SampleNum 样本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSampleNum() const;

                    /**
                     * 设置样本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SampleNum 样本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSampleNum(const std::string& _sampleNum);

                    /**
                     * 判断参数 SampleNum 是否已赋值
                     * @return SampleNum 是否已赋值
                     */
                    bool SampleNumHasBeenSet() const;

                    /**
                     * 获取标本种类
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SampleType 标本种类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSampleType() const;

                    /**
                     * 设置标本种类
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SampleType 标本种类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSampleType(const std::string& _sampleType);

                    /**
                     * 判断参数 SampleType 是否已赋值
                     * @return SampleType 是否已赋值
                     */
                    bool SampleTypeHasBeenSet() const;

                    /**
                     * 获取病历号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MedicalRecordNum 病历号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMedicalRecordNum() const;

                    /**
                     * 设置病历号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MedicalRecordNum 病历号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMedicalRecordNum(const std::string& _medicalRecordNum);

                    /**
                     * 判断参数 MedicalRecordNum 是否已赋值
                     * @return MedicalRecordNum 是否已赋值
                     */
                    bool MedicalRecordNumHasBeenSet() const;

                    /**
                     * 获取报告名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportName 报告名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetReportName() const;

                    /**
                     * 设置报告名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ReportName 报告名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReportName(const std::string& _reportName);

                    /**
                     * 判断参数 ReportName 是否已赋值
                     * @return ReportName 是否已赋值
                     */
                    bool ReportNameHasBeenSet() const;

                    /**
                     * 获取超声号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UltraNum 超声号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUltraNum() const;

                    /**
                     * 设置超声号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UltraNum 超声号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUltraNum(const std::string& _ultraNum);

                    /**
                     * 判断参数 UltraNum 是否已赋值
                     * @return UltraNum 是否已赋值
                     */
                    bool UltraNumHasBeenSet() const;

                private:

                    /**
                     * 医院名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hospital;
                    bool m_hospitalHasBeenSet;

                    /**
                     * 科室名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_departmentName;
                    bool m_departmentNameHasBeenSet;

                    /**
                     * 申请时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_billingTime;
                    bool m_billingTimeHasBeenSet;

                    /**
                     * 报告时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reportTime;
                    bool m_reportTimeHasBeenSet;

                    /**
                     * 检查时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inspectTime;
                    bool m_inspectTimeHasBeenSet;

                    /**
                     * 检查号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_checkNum;
                    bool m_checkNumHasBeenSet;

                    /**
                     * 影像号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_imageNum;
                    bool m_imageNumHasBeenSet;

                    /**
                     * 放射号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_radiationNum;
                    bool m_radiationNumHasBeenSet;

                    /**
                     * 检验号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_testNum;
                    bool m_testNumHasBeenSet;

                    /**
                     * 门诊号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outpatientNum;
                    bool m_outpatientNumHasBeenSet;

                    /**
                     * 病理号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pathologyNum;
                    bool m_pathologyNumHasBeenSet;

                    /**
                     * 住院号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inHospitalNum;
                    bool m_inHospitalNumHasBeenSet;

                    /**
                     * 样本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sampleNum;
                    bool m_sampleNumHasBeenSet;

                    /**
                     * 标本种类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sampleType;
                    bool m_sampleTypeHasBeenSet;

                    /**
                     * 病历号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_medicalRecordNum;
                    bool m_medicalRecordNumHasBeenSet;

                    /**
                     * 报告名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reportName;
                    bool m_reportNameHasBeenSet;

                    /**
                     * 超声号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ultraNum;
                    bool m_ultraNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_REPORTINFO_H_
