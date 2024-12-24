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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_DRUGUSAGE_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_DRUGUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 处方药品信息
                */
                class DrugUsage : public AbstractModel
                {
                public:
                    DrugUsage();
                    ~DrugUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取药品ID
                     * @return DrugId 药品ID
                     * 
                     */
                    std::string GetDrugId() const;

                    /**
                     * 设置药品ID
                     * @param _drugId 药品ID
                     * 
                     */
                    void SetDrugId(const std::string& _drugId);

                    /**
                     * 判断参数 DrugId 是否已赋值
                     * @return DrugId 是否已赋值
                     * 
                     */
                    bool DrugIdHasBeenSet() const;

                    /**
                     * 获取药品名称
                     * @return DrugName 药品名称
                     * 
                     */
                    std::string GetDrugName() const;

                    /**
                     * 设置药品名称
                     * @param _drugName 药品名称
                     * 
                     */
                    void SetDrugName(const std::string& _drugName);

                    /**
                     * 判断参数 DrugName 是否已赋值
                     * @return DrugName 是否已赋值
                     * 
                     */
                    bool DrugNameHasBeenSet() const;

                    /**
                     * 获取日服药频次
                     * @return TimePerDay 日服药频次
                     * 
                     */
                    std::string GetTimePerDay() const;

                    /**
                     * 设置日服药频次
                     * @param _timePerDay 日服药频次
                     * 
                     */
                    void SetTimePerDay(const std::string& _timePerDay);

                    /**
                     * 判断参数 TimePerDay 是否已赋值
                     * @return TimePerDay 是否已赋值
                     * 
                     */
                    bool TimePerDayHasBeenSet() const;

                    /**
                     * 获取给药途径
                     * @return Usage 给药途径
                     * 
                     */
                    std::string GetUsage() const;

                    /**
                     * 设置给药途径
                     * @param _usage 给药途径
                     * 
                     */
                    void SetUsage(const std::string& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取处方ID，药品不同分组是传不同的处方ID
                     * @return PrescriptionId 处方ID，药品不同分组是传不同的处方ID
                     * 
                     */
                    std::string GetPrescriptionId() const;

                    /**
                     * 设置处方ID，药品不同分组是传不同的处方ID
                     * @param _prescriptionId 处方ID，药品不同分组是传不同的处方ID
                     * 
                     */
                    void SetPrescriptionId(const std::string& _prescriptionId);

                    /**
                     * 判断参数 PrescriptionId 是否已赋值
                     * @return PrescriptionId 是否已赋值
                     * 
                     */
                    bool PrescriptionIdHasBeenSet() const;

                    /**
                     * 获取每次剂量
                     * @return DosagePerTime 每次剂量
                     * 
                     */
                    std::string GetDosagePerTime() const;

                    /**
                     * 设置每次剂量
                     * @param _dosagePerTime 每次剂量
                     * 
                     */
                    void SetDosagePerTime(const std::string& _dosagePerTime);

                    /**
                     * 判断参数 DosagePerTime 是否已赋值
                     * @return DosagePerTime 是否已赋值
                     * 
                     */
                    bool DosagePerTimeHasBeenSet() const;

                    /**
                     * 获取每次剂量单位
                     * @return DosagePerTimeUnit 每次剂量单位
                     * 
                     */
                    std::string GetDosagePerTimeUnit() const;

                    /**
                     * 设置每次剂量单位
                     * @param _dosagePerTimeUnit 每次剂量单位
                     * 
                     */
                    void SetDosagePerTimeUnit(const std::string& _dosagePerTimeUnit);

                    /**
                     * 判断参数 DosagePerTimeUnit 是否已赋值
                     * @return DosagePerTimeUnit 是否已赋值
                     * 
                     */
                    bool DosagePerTimeUnitHasBeenSet() const;

                    /**
                     * 获取单次服药时间
                     * @return Time 单次服药时间
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置单次服药时间
                     * @param _time 单次服药时间
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取给药周期
                     * @return Cycle 给药周期
                     * 
                     */
                    std::string GetCycle() const;

                    /**
                     * 设置给药周期
                     * @param _cycle 给药周期
                     * 
                     */
                    void SetCycle(const std::string& _cycle);

                    /**
                     * 判断参数 Cycle 是否已赋值
                     * @return Cycle 是否已赋值
                     * 
                     */
                    bool CycleHasBeenSet() const;

                    /**
                     * 获取单日剂量
                     * @return DosagePerDay 单日剂量
                     * 
                     */
                    std::string GetDosagePerDay() const;

                    /**
                     * 设置单日剂量
                     * @param _dosagePerDay 单日剂量
                     * 
                     */
                    void SetDosagePerDay(const std::string& _dosagePerDay);

                    /**
                     * 判断参数 DosagePerDay 是否已赋值
                     * @return DosagePerDay 是否已赋值
                     * 
                     */
                    bool DosagePerDayHasBeenSet() const;

                    /**
                     * 获取疗程
                     * @return Course 疗程
                     * 
                     */
                    std::string GetCourse() const;

                    /**
                     * 设置疗程
                     * @param _course 疗程
                     * 
                     */
                    void SetCourse(const std::string& _course);

                    /**
                     * 判断参数 Course 是否已赋值
                     * @return Course 是否已赋值
                     * 
                     */
                    bool CourseHasBeenSet() const;

                    /**
                     * 获取给药速度
                     * @return Speed 给药速度
                     * 
                     */
                    std::string GetSpeed() const;

                    /**
                     * 设置给药速度
                     * @param _speed 给药速度
                     * 
                     */
                    void SetSpeed(const std::string& _speed);

                    /**
                     * 判断参数 Speed 是否已赋值
                     * @return Speed 是否已赋值
                     * 
                     */
                    bool SpeedHasBeenSet() const;

                    /**
                     * 获取处方生效时间戳，住院医嘱必须传(caseType =1)
                     * @return BeginTime 处方生效时间戳，住院医嘱必须传(caseType =1)
                     * 
                     */
                    int64_t GetBeginTime() const;

                    /**
                     * 设置处方生效时间戳，住院医嘱必须传(caseType =1)
                     * @param _beginTime 处方生效时间戳，住院医嘱必须传(caseType =1)
                     * 
                     */
                    void SetBeginTime(const int64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取处方失效时间戳，住院医嘱必须传(caseType =1)
                     * @return EndTime 处方失效时间戳，住院医嘱必须传(caseType =1)
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置处方失效时间戳，住院医嘱必须传(caseType =1)
                     * @param _endTime 处方失效时间戳，住院医嘱必须传(caseType =1)
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取开具数量
                     * @return Package 开具数量
                     * 
                     */
                    std::string GetPackage() const;

                    /**
                     * 设置开具数量
                     * @param _package 开具数量
                     * 
                     */
                    void SetPackage(const std::string& _package);

                    /**
                     * 判断参数 Package 是否已赋值
                     * @return Package 是否已赋值
                     * 
                     */
                    bool PackageHasBeenSet() const;

                    /**
                     * 获取开具数量单位
                     * @return PackageUnit 开具数量单位
                     * 
                     */
                    std::string GetPackageUnit() const;

                    /**
                     * 设置开具数量单位
                     * @param _packageUnit 开具数量单位
                     * 
                     */
                    void SetPackageUnit(const std::string& _packageUnit);

                    /**
                     * 判断参数 PackageUnit 是否已赋值
                     * @return PackageUnit 是否已赋值
                     * 
                     */
                    bool PackageUnitHasBeenSet() const;

                    /**
                     * 获取相同标志液体间进行配伍禁忌审核，不同标志间液体不进行配伍禁忌审核
                     * @return GroupInj 相同标志液体间进行配伍禁忌审核，不同标志间液体不进行配伍禁忌审核
                     * 
                     */
                    std::string GetGroupInj() const;

                    /**
                     * 设置相同标志液体间进行配伍禁忌审核，不同标志间液体不进行配伍禁忌审核
                     * @param _groupInj 相同标志液体间进行配伍禁忌审核，不同标志间液体不进行配伍禁忌审核
                     * 
                     */
                    void SetGroupInj(const std::string& _groupInj);

                    /**
                     * 判断参数 GroupInj 是否已赋值
                     * @return GroupInj 是否已赋值
                     * 
                     */
                    bool GroupInjHasBeenSet() const;

                    /**
                     * 获取处方金额
                     * @return PrescriptionCharge 处方金额
                     * 
                     */
                    std::string GetPrescriptionCharge() const;

                    /**
                     * 设置处方金额
                     * @param _prescriptionCharge 处方金额
                     * 
                     */
                    void SetPrescriptionCharge(const std::string& _prescriptionCharge);

                    /**
                     * 判断参数 PrescriptionCharge 是否已赋值
                     * @return PrescriptionCharge 是否已赋值
                     * 
                     */
                    bool PrescriptionChargeHasBeenSet() const;

                    /**
                     * 获取用药天数
                     * @return MedicationDays 用药天数
                     * 
                     */
                    std::string GetMedicationDays() const;

                    /**
                     * 设置用药天数
                     * @param _medicationDays 用药天数
                     * 
                     */
                    void SetMedicationDays(const std::string& _medicationDays);

                    /**
                     * 判断参数 MedicationDays 是否已赋值
                     * @return MedicationDays 是否已赋值
                     * 
                     */
                    bool MedicationDaysHasBeenSet() const;

                private:

                    /**
                     * 药品ID
                     */
                    std::string m_drugId;
                    bool m_drugIdHasBeenSet;

                    /**
                     * 药品名称
                     */
                    std::string m_drugName;
                    bool m_drugNameHasBeenSet;

                    /**
                     * 日服药频次
                     */
                    std::string m_timePerDay;
                    bool m_timePerDayHasBeenSet;

                    /**
                     * 给药途径
                     */
                    std::string m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * 处方ID，药品不同分组是传不同的处方ID
                     */
                    std::string m_prescriptionId;
                    bool m_prescriptionIdHasBeenSet;

                    /**
                     * 每次剂量
                     */
                    std::string m_dosagePerTime;
                    bool m_dosagePerTimeHasBeenSet;

                    /**
                     * 每次剂量单位
                     */
                    std::string m_dosagePerTimeUnit;
                    bool m_dosagePerTimeUnitHasBeenSet;

                    /**
                     * 单次服药时间
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 给药周期
                     */
                    std::string m_cycle;
                    bool m_cycleHasBeenSet;

                    /**
                     * 单日剂量
                     */
                    std::string m_dosagePerDay;
                    bool m_dosagePerDayHasBeenSet;

                    /**
                     * 疗程
                     */
                    std::string m_course;
                    bool m_courseHasBeenSet;

                    /**
                     * 给药速度
                     */
                    std::string m_speed;
                    bool m_speedHasBeenSet;

                    /**
                     * 处方生效时间戳，住院医嘱必须传(caseType =1)
                     */
                    int64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 处方失效时间戳，住院医嘱必须传(caseType =1)
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 开具数量
                     */
                    std::string m_package;
                    bool m_packageHasBeenSet;

                    /**
                     * 开具数量单位
                     */
                    std::string m_packageUnit;
                    bool m_packageUnitHasBeenSet;

                    /**
                     * 相同标志液体间进行配伍禁忌审核，不同标志间液体不进行配伍禁忌审核
                     */
                    std::string m_groupInj;
                    bool m_groupInjHasBeenSet;

                    /**
                     * 处方金额
                     */
                    std::string m_prescriptionCharge;
                    bool m_prescriptionChargeHasBeenSet;

                    /**
                     * 用药天数
                     */
                    std::string m_medicationDays;
                    bool m_medicationDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_DRUGUSAGE_H_
