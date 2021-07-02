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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_BASICINFO_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_BASICINFO_H_

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
                class BasicInfo : public AbstractModel
                {
                public:
                    BasicInfo();
                    ~BasicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取医院名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HospitalName 医院名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHospitalName() const;

                    /**
                     * 设置医院名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HospitalName 医院名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHospitalName(const std::string& _hospitalName);

                    /**
                     * 判断参数 HospitalName 是否已赋值
                     * @return HospitalName 是否已赋值
                     */
                    bool HospitalNameHasBeenSet() const;

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
                     * 获取检查号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InspectionNum 检查号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInspectionNum() const;

                    /**
                     * 设置检查号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InspectionNum 检查号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInspectionNum(const std::string& _inspectionNum);

                    /**
                     * 判断参数 InspectionNum 是否已赋值
                     * @return InspectionNum 是否已赋值
                     */
                    bool InspectionNumHasBeenSet() const;

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
                     * 获取床位号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BedNum 床位号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBedNum() const;

                    /**
                     * 设置床位号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BedNum 床位号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBedNum(const std::string& _bedNum);

                    /**
                     * 判断参数 BedNum 是否已赋值
                     * @return BedNum 是否已赋值
                     */
                    bool BedNumHasBeenSet() const;

                    /**
                     * 获取入院时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InHospitalTime 入院时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInHospitalTime() const;

                    /**
                     * 设置入院时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InHospitalTime 入院时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInHospitalTime(const std::string& _inHospitalTime);

                    /**
                     * 判断参数 InHospitalTime 是否已赋值
                     * @return InHospitalTime 是否已赋值
                     */
                    bool InHospitalTimeHasBeenSet() const;

                    /**
                     * 获取出院时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutHospitalTime 出院时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOutHospitalTime() const;

                    /**
                     * 设置出院时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OutHospitalTime 出院时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOutHospitalTime(const std::string& _outHospitalTime);

                    /**
                     * 判断参数 OutHospitalTime 是否已赋值
                     * @return OutHospitalTime 是否已赋值
                     */
                    bool OutHospitalTimeHasBeenSet() const;

                    /**
                     * 获取住院治疗时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CureDuration 住院治疗时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCureDuration() const;

                    /**
                     * 设置住院治疗时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CureDuration 住院治疗时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCureDuration(const std::string& _cureDuration);

                    /**
                     * 判断参数 CureDuration 是否已赋值
                     * @return CureDuration 是否已赋值
                     */
                    bool CureDurationHasBeenSet() const;

                    /**
                     * 获取住院次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HospitalizationTimes 住院次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHospitalizationTimes() const;

                    /**
                     * 设置住院次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HospitalizationTimes 住院次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHospitalizationTimes(const std::string& _hospitalizationTimes);

                    /**
                     * 判断参数 HospitalizationTimes 是否已赋值
                     * @return HospitalizationTimes 是否已赋值
                     */
                    bool HospitalizationTimesHasBeenSet() const;

                    /**
                     * 获取送检检查时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InspectionTime 送检检查时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInspectionTime() const;

                    /**
                     * 设置送检检查时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InspectionTime 送检检查时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInspectionTime(const std::string& _inspectionTime);

                    /**
                     * 判断参数 InspectionTime 是否已赋值
                     * @return InspectionTime 是否已赋值
                     */
                    bool InspectionTimeHasBeenSet() const;

                private:

                    /**
                     * 医院名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hospitalName;
                    bool m_hospitalNameHasBeenSet;

                    /**
                     * 科室名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_departmentName;
                    bool m_departmentNameHasBeenSet;

                    /**
                     * 报告名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reportName;
                    bool m_reportNameHasBeenSet;

                    /**
                     * 报告时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reportTime;
                    bool m_reportTimeHasBeenSet;

                    /**
                     * 门诊号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outpatientNum;
                    bool m_outpatientNumHasBeenSet;

                    /**
                     * 住院号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inHospitalNum;
                    bool m_inHospitalNumHasBeenSet;

                    /**
                     * 检查号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inspectionNum;
                    bool m_inspectionNumHasBeenSet;

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
                     * 病理号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pathologyNum;
                    bool m_pathologyNumHasBeenSet;

                    /**
                     * 床位号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bedNum;
                    bool m_bedNumHasBeenSet;

                    /**
                     * 入院时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inHospitalTime;
                    bool m_inHospitalTimeHasBeenSet;

                    /**
                     * 出院时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outHospitalTime;
                    bool m_outHospitalTimeHasBeenSet;

                    /**
                     * 住院治疗时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cureDuration;
                    bool m_cureDurationHasBeenSet;

                    /**
                     * 住院次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hospitalizationTimes;
                    bool m_hospitalizationTimesHasBeenSet;

                    /**
                     * 送检检查时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inspectionTime;
                    bool m_inspectionTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_BASICINFO_H_
