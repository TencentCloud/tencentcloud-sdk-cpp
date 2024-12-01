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
#include <tencentcloud/mrs/v20200910/model/Time.h>


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
                     * @return Hospital 医院名称
                     * 
                     */
                    std::string GetHospital() const;

                    /**
                     * 设置医院名称
                     * @param _hospital 医院名称
                     * 
                     */
                    void SetHospital(const std::string& _hospital);

                    /**
                     * 判断参数 Hospital 是否已赋值
                     * @return Hospital 是否已赋值
                     * 
                     */
                    bool HospitalHasBeenSet() const;

                    /**
                     * 获取科室名称
                     * @return DepartmentName 科室名称
                     * 
                     */
                    std::string GetDepartmentName() const;

                    /**
                     * 设置科室名称
                     * @param _departmentName 科室名称
                     * 
                     */
                    void SetDepartmentName(const std::string& _departmentName);

                    /**
                     * 判断参数 DepartmentName 是否已赋值
                     * @return DepartmentName 是否已赋值
                     * 
                     */
                    bool DepartmentNameHasBeenSet() const;

                    /**
                     * 获取申请时间
                     * @return BillingTime 申请时间
                     * 
                     */
                    std::string GetBillingTime() const;

                    /**
                     * 设置申请时间
                     * @param _billingTime 申请时间
                     * 
                     */
                    void SetBillingTime(const std::string& _billingTime);

                    /**
                     * 判断参数 BillingTime 是否已赋值
                     * @return BillingTime 是否已赋值
                     * 
                     */
                    bool BillingTimeHasBeenSet() const;

                    /**
                     * 获取报告时间
                     * @return ReportTime 报告时间
                     * 
                     */
                    std::string GetReportTime() const;

                    /**
                     * 设置报告时间
                     * @param _reportTime 报告时间
                     * 
                     */
                    void SetReportTime(const std::string& _reportTime);

                    /**
                     * 判断参数 ReportTime 是否已赋值
                     * @return ReportTime 是否已赋值
                     * 
                     */
                    bool ReportTimeHasBeenSet() const;

                    /**
                     * 获取检查时间
                     * @return InspectTime 检查时间
                     * 
                     */
                    std::string GetInspectTime() const;

                    /**
                     * 设置检查时间
                     * @param _inspectTime 检查时间
                     * 
                     */
                    void SetInspectTime(const std::string& _inspectTime);

                    /**
                     * 判断参数 InspectTime 是否已赋值
                     * @return InspectTime 是否已赋值
                     * 
                     */
                    bool InspectTimeHasBeenSet() const;

                    /**
                     * 获取检查号
                     * @return CheckNum 检查号
                     * 
                     */
                    std::string GetCheckNum() const;

                    /**
                     * 设置检查号
                     * @param _checkNum 检查号
                     * 
                     */
                    void SetCheckNum(const std::string& _checkNum);

                    /**
                     * 判断参数 CheckNum 是否已赋值
                     * @return CheckNum 是否已赋值
                     * 
                     */
                    bool CheckNumHasBeenSet() const;

                    /**
                     * 获取影像号
                     * @return ImageNum 影像号
                     * 
                     */
                    std::string GetImageNum() const;

                    /**
                     * 设置影像号
                     * @param _imageNum 影像号
                     * 
                     */
                    void SetImageNum(const std::string& _imageNum);

                    /**
                     * 判断参数 ImageNum 是否已赋值
                     * @return ImageNum 是否已赋值
                     * 
                     */
                    bool ImageNumHasBeenSet() const;

                    /**
                     * 获取放射号
                     * @return RadiationNum 放射号
                     * 
                     */
                    std::string GetRadiationNum() const;

                    /**
                     * 设置放射号
                     * @param _radiationNum 放射号
                     * 
                     */
                    void SetRadiationNum(const std::string& _radiationNum);

                    /**
                     * 判断参数 RadiationNum 是否已赋值
                     * @return RadiationNum 是否已赋值
                     * 
                     */
                    bool RadiationNumHasBeenSet() const;

                    /**
                     * 获取检验号
                     * @return TestNum 检验号
                     * 
                     */
                    std::string GetTestNum() const;

                    /**
                     * 设置检验号
                     * @param _testNum 检验号
                     * 
                     */
                    void SetTestNum(const std::string& _testNum);

                    /**
                     * 判断参数 TestNum 是否已赋值
                     * @return TestNum 是否已赋值
                     * 
                     */
                    bool TestNumHasBeenSet() const;

                    /**
                     * 获取门诊号
                     * @return OutpatientNum 门诊号
                     * 
                     */
                    std::string GetOutpatientNum() const;

                    /**
                     * 设置门诊号
                     * @param _outpatientNum 门诊号
                     * 
                     */
                    void SetOutpatientNum(const std::string& _outpatientNum);

                    /**
                     * 判断参数 OutpatientNum 是否已赋值
                     * @return OutpatientNum 是否已赋值
                     * 
                     */
                    bool OutpatientNumHasBeenSet() const;

                    /**
                     * 获取病理号
                     * @return PathologyNum 病理号
                     * 
                     */
                    std::string GetPathologyNum() const;

                    /**
                     * 设置病理号
                     * @param _pathologyNum 病理号
                     * 
                     */
                    void SetPathologyNum(const std::string& _pathologyNum);

                    /**
                     * 判断参数 PathologyNum 是否已赋值
                     * @return PathologyNum 是否已赋值
                     * 
                     */
                    bool PathologyNumHasBeenSet() const;

                    /**
                     * 获取住院号
                     * @return InHospitalNum 住院号
                     * 
                     */
                    std::string GetInHospitalNum() const;

                    /**
                     * 设置住院号
                     * @param _inHospitalNum 住院号
                     * 
                     */
                    void SetInHospitalNum(const std::string& _inHospitalNum);

                    /**
                     * 判断参数 InHospitalNum 是否已赋值
                     * @return InHospitalNum 是否已赋值
                     * 
                     */
                    bool InHospitalNumHasBeenSet() const;

                    /**
                     * 获取样本号
                     * @return SampleNum 样本号
                     * 
                     */
                    std::string GetSampleNum() const;

                    /**
                     * 设置样本号
                     * @param _sampleNum 样本号
                     * 
                     */
                    void SetSampleNum(const std::string& _sampleNum);

                    /**
                     * 判断参数 SampleNum 是否已赋值
                     * @return SampleNum 是否已赋值
                     * 
                     */
                    bool SampleNumHasBeenSet() const;

                    /**
                     * 获取标本种类
                     * @return SampleType 标本种类
                     * 
                     */
                    std::string GetSampleType() const;

                    /**
                     * 设置标本种类
                     * @param _sampleType 标本种类
                     * 
                     */
                    void SetSampleType(const std::string& _sampleType);

                    /**
                     * 判断参数 SampleType 是否已赋值
                     * @return SampleType 是否已赋值
                     * 
                     */
                    bool SampleTypeHasBeenSet() const;

                    /**
                     * 获取病历号
                     * @return MedicalRecordNum 病历号
                     * 
                     */
                    std::string GetMedicalRecordNum() const;

                    /**
                     * 设置病历号
                     * @param _medicalRecordNum 病历号
                     * 
                     */
                    void SetMedicalRecordNum(const std::string& _medicalRecordNum);

                    /**
                     * 判断参数 MedicalRecordNum 是否已赋值
                     * @return MedicalRecordNum 是否已赋值
                     * 
                     */
                    bool MedicalRecordNumHasBeenSet() const;

                    /**
                     * 获取报告名称
                     * @return ReportName 报告名称
                     * 
                     */
                    std::string GetReportName() const;

                    /**
                     * 设置报告名称
                     * @param _reportName 报告名称
                     * 
                     */
                    void SetReportName(const std::string& _reportName);

                    /**
                     * 判断参数 ReportName 是否已赋值
                     * @return ReportName 是否已赋值
                     * 
                     */
                    bool ReportNameHasBeenSet() const;

                    /**
                     * 获取超声号
                     * @return UltraNum 超声号
                     * 
                     */
                    std::string GetUltraNum() const;

                    /**
                     * 设置超声号
                     * @param _ultraNum 超声号
                     * 
                     */
                    void SetUltraNum(const std::string& _ultraNum);

                    /**
                     * 判断参数 UltraNum 是否已赋值
                     * @return UltraNum 是否已赋值
                     * 
                     */
                    bool UltraNumHasBeenSet() const;

                    /**
                     * 获取临床诊断
                     * @return Diagnose 临床诊断
                     * 
                     */
                    std::string GetDiagnose() const;

                    /**
                     * 设置临床诊断
                     * @param _diagnose 临床诊断
                     * 
                     */
                    void SetDiagnose(const std::string& _diagnose);

                    /**
                     * 判断参数 Diagnose 是否已赋值
                     * @return Diagnose 是否已赋值
                     * 
                     */
                    bool DiagnoseHasBeenSet() const;

                    /**
                     * 获取检查项目
                     * @return CheckItem 检查项目
                     * 
                     */
                    std::string GetCheckItem() const;

                    /**
                     * 设置检查项目
                     * @param _checkItem 检查项目
                     * 
                     */
                    void SetCheckItem(const std::string& _checkItem);

                    /**
                     * 判断参数 CheckItem 是否已赋值
                     * @return CheckItem 是否已赋值
                     * 
                     */
                    bool CheckItemHasBeenSet() const;

                    /**
                     * 获取检查方法
                     * @return CheckMethod 检查方法
                     * 
                     */
                    std::string GetCheckMethod() const;

                    /**
                     * 设置检查方法
                     * @param _checkMethod 检查方法
                     * 
                     */
                    void SetCheckMethod(const std::string& _checkMethod);

                    /**
                     * 判断参数 CheckMethod 是否已赋值
                     * @return CheckMethod 是否已赋值
                     * 
                     */
                    bool CheckMethodHasBeenSet() const;

                    /**
                     * 获取诊断时间
                     * @return DiagnoseTime 诊断时间
                     * 
                     */
                    std::string GetDiagnoseTime() const;

                    /**
                     * 设置诊断时间
                     * @param _diagnoseTime 诊断时间
                     * 
                     */
                    void SetDiagnoseTime(const std::string& _diagnoseTime);

                    /**
                     * 判断参数 DiagnoseTime 是否已赋值
                     * @return DiagnoseTime 是否已赋值
                     * 
                     */
                    bool DiagnoseTimeHasBeenSet() const;

                    /**
                     * 获取体检号
                     * @return HealthCheckupNum 体检号
                     * 
                     */
                    std::string GetHealthCheckupNum() const;

                    /**
                     * 设置体检号
                     * @param _healthCheckupNum 体检号
                     * 
                     */
                    void SetHealthCheckupNum(const std::string& _healthCheckupNum);

                    /**
                     * 判断参数 HealthCheckupNum 是否已赋值
                     * @return HealthCheckupNum 是否已赋值
                     * 
                     */
                    bool HealthCheckupNumHasBeenSet() const;

                    /**
                     * 获取其它时间
                     * @return OtherTime 其它时间
                     * 
                     */
                    std::string GetOtherTime() const;

                    /**
                     * 设置其它时间
                     * @param _otherTime 其它时间
                     * 
                     */
                    void SetOtherTime(const std::string& _otherTime);

                    /**
                     * 判断参数 OtherTime 是否已赋值
                     * @return OtherTime 是否已赋值
                     * 
                     */
                    bool OtherTimeHasBeenSet() const;

                    /**
                     * 获取打印时间
                     * @return PrintTime 打印时间
                     * 
                     */
                    std::string GetPrintTime() const;

                    /**
                     * 设置打印时间
                     * @param _printTime 打印时间
                     * 
                     */
                    void SetPrintTime(const std::string& _printTime);

                    /**
                     * 判断参数 PrintTime 是否已赋值
                     * @return PrintTime 是否已赋值
                     * 
                     */
                    bool PrintTimeHasBeenSet() const;

                    /**
                     * 获取未归类时间
                     * @return Times 未归类时间
                     * 
                     */
                    std::vector<Time> GetTimes() const;

                    /**
                     * 设置未归类时间
                     * @param _times 未归类时间
                     * 
                     */
                    void SetTimes(const std::vector<Time>& _times);

                    /**
                     * 判断参数 Times 是否已赋值
                     * @return Times 是否已赋值
                     * 
                     */
                    bool TimesHasBeenSet() const;

                    /**
                     * 获取床号
                     * @return BedNo 床号
                     * 
                     */
                    std::string GetBedNo() const;

                    /**
                     * 设置床号
                     * @param _bedNo 床号
                     * 
                     */
                    void SetBedNo(const std::string& _bedNo);

                    /**
                     * 判断参数 BedNo 是否已赋值
                     * @return BedNo 是否已赋值
                     * 
                     */
                    bool BedNoHasBeenSet() const;

                private:

                    /**
                     * 医院名称
                     */
                    std::string m_hospital;
                    bool m_hospitalHasBeenSet;

                    /**
                     * 科室名称
                     */
                    std::string m_departmentName;
                    bool m_departmentNameHasBeenSet;

                    /**
                     * 申请时间
                     */
                    std::string m_billingTime;
                    bool m_billingTimeHasBeenSet;

                    /**
                     * 报告时间
                     */
                    std::string m_reportTime;
                    bool m_reportTimeHasBeenSet;

                    /**
                     * 检查时间
                     */
                    std::string m_inspectTime;
                    bool m_inspectTimeHasBeenSet;

                    /**
                     * 检查号
                     */
                    std::string m_checkNum;
                    bool m_checkNumHasBeenSet;

                    /**
                     * 影像号
                     */
                    std::string m_imageNum;
                    bool m_imageNumHasBeenSet;

                    /**
                     * 放射号
                     */
                    std::string m_radiationNum;
                    bool m_radiationNumHasBeenSet;

                    /**
                     * 检验号
                     */
                    std::string m_testNum;
                    bool m_testNumHasBeenSet;

                    /**
                     * 门诊号
                     */
                    std::string m_outpatientNum;
                    bool m_outpatientNumHasBeenSet;

                    /**
                     * 病理号
                     */
                    std::string m_pathologyNum;
                    bool m_pathologyNumHasBeenSet;

                    /**
                     * 住院号
                     */
                    std::string m_inHospitalNum;
                    bool m_inHospitalNumHasBeenSet;

                    /**
                     * 样本号
                     */
                    std::string m_sampleNum;
                    bool m_sampleNumHasBeenSet;

                    /**
                     * 标本种类
                     */
                    std::string m_sampleType;
                    bool m_sampleTypeHasBeenSet;

                    /**
                     * 病历号
                     */
                    std::string m_medicalRecordNum;
                    bool m_medicalRecordNumHasBeenSet;

                    /**
                     * 报告名称
                     */
                    std::string m_reportName;
                    bool m_reportNameHasBeenSet;

                    /**
                     * 超声号
                     */
                    std::string m_ultraNum;
                    bool m_ultraNumHasBeenSet;

                    /**
                     * 临床诊断
                     */
                    std::string m_diagnose;
                    bool m_diagnoseHasBeenSet;

                    /**
                     * 检查项目
                     */
                    std::string m_checkItem;
                    bool m_checkItemHasBeenSet;

                    /**
                     * 检查方法
                     */
                    std::string m_checkMethod;
                    bool m_checkMethodHasBeenSet;

                    /**
                     * 诊断时间
                     */
                    std::string m_diagnoseTime;
                    bool m_diagnoseTimeHasBeenSet;

                    /**
                     * 体检号
                     */
                    std::string m_healthCheckupNum;
                    bool m_healthCheckupNumHasBeenSet;

                    /**
                     * 其它时间
                     */
                    std::string m_otherTime;
                    bool m_otherTimeHasBeenSet;

                    /**
                     * 打印时间
                     */
                    std::string m_printTime;
                    bool m_printTimeHasBeenSet;

                    /**
                     * 未归类时间
                     */
                    std::vector<Time> m_times;
                    bool m_timesHasBeenSet;

                    /**
                     * 床号
                     */
                    std::string m_bedNo;
                    bool m_bedNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_REPORTINFO_H_
