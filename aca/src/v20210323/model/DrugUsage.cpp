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

#include <tencentcloud/aca/v20210323/model/DrugUsage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Aca::V20210323::Model;
using namespace std;

DrugUsage::DrugUsage() :
    m_drugIdHasBeenSet(false),
    m_drugNameHasBeenSet(false),
    m_timePerDayHasBeenSet(false),
    m_usageHasBeenSet(false),
    m_prescriptionIdHasBeenSet(false),
    m_dosagePerTimeHasBeenSet(false),
    m_dosagePerTimeUnitHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_cycleHasBeenSet(false),
    m_dosagePerDayHasBeenSet(false),
    m_courseHasBeenSet(false),
    m_speedHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_packageHasBeenSet(false),
    m_packageUnitHasBeenSet(false),
    m_groupInjHasBeenSet(false),
    m_prescriptionChargeHasBeenSet(false),
    m_medicationDaysHasBeenSet(false)
{
}

CoreInternalOutcome DrugUsage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DrugId") && !value["DrugId"].IsNull())
    {
        if (!value["DrugId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugUsage.DrugId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugId = string(value["DrugId"].GetString());
        m_drugIdHasBeenSet = true;
    }

    if (value.HasMember("DrugName") && !value["DrugName"].IsNull())
    {
        if (!value["DrugName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugUsage.DrugName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_drugName = string(value["DrugName"].GetString());
        m_drugNameHasBeenSet = true;
    }

    if (value.HasMember("TimePerDay") && !value["TimePerDay"].IsNull())
    {
        if (!value["TimePerDay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugUsage.TimePerDay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timePerDay = string(value["TimePerDay"].GetString());
        m_timePerDayHasBeenSet = true;
    }

    if (value.HasMember("Usage") && !value["Usage"].IsNull())
    {
        if (!value["Usage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugUsage.Usage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usage = string(value["Usage"].GetString());
        m_usageHasBeenSet = true;
    }

    if (value.HasMember("PrescriptionId") && !value["PrescriptionId"].IsNull())
    {
        if (!value["PrescriptionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugUsage.PrescriptionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prescriptionId = string(value["PrescriptionId"].GetString());
        m_prescriptionIdHasBeenSet = true;
    }

    if (value.HasMember("DosagePerTime") && !value["DosagePerTime"].IsNull())
    {
        if (!value["DosagePerTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugUsage.DosagePerTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dosagePerTime = string(value["DosagePerTime"].GetString());
        m_dosagePerTimeHasBeenSet = true;
    }

    if (value.HasMember("DosagePerTimeUnit") && !value["DosagePerTimeUnit"].IsNull())
    {
        if (!value["DosagePerTimeUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugUsage.DosagePerTimeUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dosagePerTimeUnit = string(value["DosagePerTimeUnit"].GetString());
        m_dosagePerTimeUnitHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugUsage.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Cycle") && !value["Cycle"].IsNull())
    {
        if (!value["Cycle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugUsage.Cycle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycle = string(value["Cycle"].GetString());
        m_cycleHasBeenSet = true;
    }

    if (value.HasMember("DosagePerDay") && !value["DosagePerDay"].IsNull())
    {
        if (!value["DosagePerDay"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugUsage.DosagePerDay` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dosagePerDay = string(value["DosagePerDay"].GetString());
        m_dosagePerDayHasBeenSet = true;
    }

    if (value.HasMember("Course") && !value["Course"].IsNull())
    {
        if (!value["Course"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugUsage.Course` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_course = string(value["Course"].GetString());
        m_courseHasBeenSet = true;
    }

    if (value.HasMember("Speed") && !value["Speed"].IsNull())
    {
        if (!value["Speed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugUsage.Speed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_speed = string(value["Speed"].GetString());
        m_speedHasBeenSet = true;
    }

    if (value.HasMember("BeginTime") && !value["BeginTime"].IsNull())
    {
        if (!value["BeginTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DrugUsage.BeginTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_beginTime = value["BeginTime"].GetInt64();
        m_beginTimeHasBeenSet = true;
    }

    if (value.HasMember("EndTime") && !value["EndTime"].IsNull())
    {
        if (!value["EndTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DrugUsage.EndTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = value["EndTime"].GetInt64();
        m_endTimeHasBeenSet = true;
    }

    if (value.HasMember("Package") && !value["Package"].IsNull())
    {
        if (!value["Package"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugUsage.Package` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_package = string(value["Package"].GetString());
        m_packageHasBeenSet = true;
    }

    if (value.HasMember("PackageUnit") && !value["PackageUnit"].IsNull())
    {
        if (!value["PackageUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugUsage.PackageUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageUnit = string(value["PackageUnit"].GetString());
        m_packageUnitHasBeenSet = true;
    }

    if (value.HasMember("GroupInj") && !value["GroupInj"].IsNull())
    {
        if (!value["GroupInj"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugUsage.GroupInj` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupInj = string(value["GroupInj"].GetString());
        m_groupInjHasBeenSet = true;
    }

    if (value.HasMember("PrescriptionCharge") && !value["PrescriptionCharge"].IsNull())
    {
        if (!value["PrescriptionCharge"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugUsage.PrescriptionCharge` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_prescriptionCharge = string(value["PrescriptionCharge"].GetString());
        m_prescriptionChargeHasBeenSet = true;
    }

    if (value.HasMember("MedicationDays") && !value["MedicationDays"].IsNull())
    {
        if (!value["MedicationDays"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DrugUsage.MedicationDays` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_medicationDays = string(value["MedicationDays"].GetString());
        m_medicationDaysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DrugUsage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_drugIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drugId.c_str(), allocator).Move(), allocator);
    }

    if (m_drugNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrugName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_drugName.c_str(), allocator).Move(), allocator);
    }

    if (m_timePerDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimePerDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timePerDay.c_str(), allocator).Move(), allocator);
    }

    if (m_usageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Usage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usage.c_str(), allocator).Move(), allocator);
    }

    if (m_prescriptionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrescriptionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prescriptionId.c_str(), allocator).Move(), allocator);
    }

    if (m_dosagePerTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DosagePerTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dosagePerTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dosagePerTimeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DosagePerTimeUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dosagePerTimeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cycle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycle.c_str(), allocator).Move(), allocator);
    }

    if (m_dosagePerDayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DosagePerDay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dosagePerDay.c_str(), allocator).Move(), allocator);
    }

    if (m_courseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Course";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_course.c_str(), allocator).Move(), allocator);
    }

    if (m_speedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Speed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_speed.c_str(), allocator).Move(), allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_beginTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_packageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Package";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_package.c_str(), allocator).Move(), allocator);
    }

    if (m_packageUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_groupInjHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupInj";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupInj.c_str(), allocator).Move(), allocator);
    }

    if (m_prescriptionChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrescriptionCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_prescriptionCharge.c_str(), allocator).Move(), allocator);
    }

    if (m_medicationDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MedicationDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_medicationDays.c_str(), allocator).Move(), allocator);
    }

}


string DrugUsage::GetDrugId() const
{
    return m_drugId;
}

void DrugUsage::SetDrugId(const string& _drugId)
{
    m_drugId = _drugId;
    m_drugIdHasBeenSet = true;
}

bool DrugUsage::DrugIdHasBeenSet() const
{
    return m_drugIdHasBeenSet;
}

string DrugUsage::GetDrugName() const
{
    return m_drugName;
}

void DrugUsage::SetDrugName(const string& _drugName)
{
    m_drugName = _drugName;
    m_drugNameHasBeenSet = true;
}

bool DrugUsage::DrugNameHasBeenSet() const
{
    return m_drugNameHasBeenSet;
}

string DrugUsage::GetTimePerDay() const
{
    return m_timePerDay;
}

void DrugUsage::SetTimePerDay(const string& _timePerDay)
{
    m_timePerDay = _timePerDay;
    m_timePerDayHasBeenSet = true;
}

bool DrugUsage::TimePerDayHasBeenSet() const
{
    return m_timePerDayHasBeenSet;
}

string DrugUsage::GetUsage() const
{
    return m_usage;
}

void DrugUsage::SetUsage(const string& _usage)
{
    m_usage = _usage;
    m_usageHasBeenSet = true;
}

bool DrugUsage::UsageHasBeenSet() const
{
    return m_usageHasBeenSet;
}

string DrugUsage::GetPrescriptionId() const
{
    return m_prescriptionId;
}

void DrugUsage::SetPrescriptionId(const string& _prescriptionId)
{
    m_prescriptionId = _prescriptionId;
    m_prescriptionIdHasBeenSet = true;
}

bool DrugUsage::PrescriptionIdHasBeenSet() const
{
    return m_prescriptionIdHasBeenSet;
}

string DrugUsage::GetDosagePerTime() const
{
    return m_dosagePerTime;
}

void DrugUsage::SetDosagePerTime(const string& _dosagePerTime)
{
    m_dosagePerTime = _dosagePerTime;
    m_dosagePerTimeHasBeenSet = true;
}

bool DrugUsage::DosagePerTimeHasBeenSet() const
{
    return m_dosagePerTimeHasBeenSet;
}

string DrugUsage::GetDosagePerTimeUnit() const
{
    return m_dosagePerTimeUnit;
}

void DrugUsage::SetDosagePerTimeUnit(const string& _dosagePerTimeUnit)
{
    m_dosagePerTimeUnit = _dosagePerTimeUnit;
    m_dosagePerTimeUnitHasBeenSet = true;
}

bool DrugUsage::DosagePerTimeUnitHasBeenSet() const
{
    return m_dosagePerTimeUnitHasBeenSet;
}

string DrugUsage::GetTime() const
{
    return m_time;
}

void DrugUsage::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool DrugUsage::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string DrugUsage::GetCycle() const
{
    return m_cycle;
}

void DrugUsage::SetCycle(const string& _cycle)
{
    m_cycle = _cycle;
    m_cycleHasBeenSet = true;
}

bool DrugUsage::CycleHasBeenSet() const
{
    return m_cycleHasBeenSet;
}

string DrugUsage::GetDosagePerDay() const
{
    return m_dosagePerDay;
}

void DrugUsage::SetDosagePerDay(const string& _dosagePerDay)
{
    m_dosagePerDay = _dosagePerDay;
    m_dosagePerDayHasBeenSet = true;
}

bool DrugUsage::DosagePerDayHasBeenSet() const
{
    return m_dosagePerDayHasBeenSet;
}

string DrugUsage::GetCourse() const
{
    return m_course;
}

void DrugUsage::SetCourse(const string& _course)
{
    m_course = _course;
    m_courseHasBeenSet = true;
}

bool DrugUsage::CourseHasBeenSet() const
{
    return m_courseHasBeenSet;
}

string DrugUsage::GetSpeed() const
{
    return m_speed;
}

void DrugUsage::SetSpeed(const string& _speed)
{
    m_speed = _speed;
    m_speedHasBeenSet = true;
}

bool DrugUsage::SpeedHasBeenSet() const
{
    return m_speedHasBeenSet;
}

int64_t DrugUsage::GetBeginTime() const
{
    return m_beginTime;
}

void DrugUsage::SetBeginTime(const int64_t& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool DrugUsage::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

int64_t DrugUsage::GetEndTime() const
{
    return m_endTime;
}

void DrugUsage::SetEndTime(const int64_t& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DrugUsage::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DrugUsage::GetPackage() const
{
    return m_package;
}

void DrugUsage::SetPackage(const string& _package)
{
    m_package = _package;
    m_packageHasBeenSet = true;
}

bool DrugUsage::PackageHasBeenSet() const
{
    return m_packageHasBeenSet;
}

string DrugUsage::GetPackageUnit() const
{
    return m_packageUnit;
}

void DrugUsage::SetPackageUnit(const string& _packageUnit)
{
    m_packageUnit = _packageUnit;
    m_packageUnitHasBeenSet = true;
}

bool DrugUsage::PackageUnitHasBeenSet() const
{
    return m_packageUnitHasBeenSet;
}

string DrugUsage::GetGroupInj() const
{
    return m_groupInj;
}

void DrugUsage::SetGroupInj(const string& _groupInj)
{
    m_groupInj = _groupInj;
    m_groupInjHasBeenSet = true;
}

bool DrugUsage::GroupInjHasBeenSet() const
{
    return m_groupInjHasBeenSet;
}

string DrugUsage::GetPrescriptionCharge() const
{
    return m_prescriptionCharge;
}

void DrugUsage::SetPrescriptionCharge(const string& _prescriptionCharge)
{
    m_prescriptionCharge = _prescriptionCharge;
    m_prescriptionChargeHasBeenSet = true;
}

bool DrugUsage::PrescriptionChargeHasBeenSet() const
{
    return m_prescriptionChargeHasBeenSet;
}

string DrugUsage::GetMedicationDays() const
{
    return m_medicationDays;
}

void DrugUsage::SetMedicationDays(const string& _medicationDays)
{
    m_medicationDays = _medicationDays;
    m_medicationDaysHasBeenSet = true;
}

bool DrugUsage::MedicationDaysHasBeenSet() const
{
    return m_medicationDaysHasBeenSet;
}

