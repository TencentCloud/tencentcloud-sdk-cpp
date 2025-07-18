/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/dsgc/v20190723/model/DspaDiscoveryTask.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaDiscoveryTask::DspaDiscoveryTask() :
    m_taskIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_planHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_dataSourceInfoHasBeenSet(false),
    m_generalRuleSetEnableHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_timingStartTimeHasBeenSet(false),
    m_complianceUpdateHasBeenSet(false),
    m_scanRangeHasBeenSet(false)
{
}

CoreInternalOutcome DspaDiscoveryTask::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTask.TaskId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = value["TaskId"].GetInt64();
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTask.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTask.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTask.Period` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetInt64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("Plan") && !value["Plan"].IsNull())
    {
        if (!value["Plan"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTask.Plan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_plan = value["Plan"].GetInt64();
        m_planHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTask.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("DataSourceInfo") && !value["DataSourceInfo"].IsNull())
    {
        if (!value["DataSourceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTask.DataSourceInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dataSourceInfo.Deserialize(value["DataSourceInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataSourceInfoHasBeenSet = true;
    }

    if (value.HasMember("GeneralRuleSetEnable") && !value["GeneralRuleSetEnable"].IsNull())
    {
        if (!value["GeneralRuleSetEnable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTask.GeneralRuleSetEnable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_generalRuleSetEnable = value["GeneralRuleSetEnable"].GetInt64();
        m_generalRuleSetEnableHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTask.Result` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_result.Deserialize(value["Result"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resultHasBeenSet = true;
    }

    if (value.HasMember("TimingStartTime") && !value["TimingStartTime"].IsNull())
    {
        if (!value["TimingStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTask.TimingStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timingStartTime = string(value["TimingStartTime"].GetString());
        m_timingStartTimeHasBeenSet = true;
    }

    if (value.HasMember("ComplianceUpdate") && !value["ComplianceUpdate"].IsNull())
    {
        if (!value["ComplianceUpdate"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTask.ComplianceUpdate` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_complianceUpdate = value["ComplianceUpdate"].GetBool();
        m_complianceUpdateHasBeenSet = true;
    }

    if (value.HasMember("ScanRange") && !value["ScanRange"].IsNull())
    {
        if (!value["ScanRange"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTask.ScanRange` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scanRange = string(value["ScanRange"].GetString());
        m_scanRangeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaDiscoveryTask::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_taskId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_period, allocator);
    }

    if (m_planHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Plan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_plan, allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_dataSourceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dataSourceInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_generalRuleSetEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GeneralRuleSetEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_generalRuleSetEnable, allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_result.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_timingStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimingStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timingStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_complianceUpdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceUpdate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_complianceUpdate, allocator);
    }

    if (m_scanRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScanRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scanRange.c_str(), allocator).Move(), allocator);
    }

}


int64_t DspaDiscoveryTask::GetTaskId() const
{
    return m_taskId;
}

void DspaDiscoveryTask::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DspaDiscoveryTask::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DspaDiscoveryTask::GetName() const
{
    return m_name;
}

void DspaDiscoveryTask::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DspaDiscoveryTask::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DspaDiscoveryTask::GetDescription() const
{
    return m_description;
}

void DspaDiscoveryTask::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DspaDiscoveryTask::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t DspaDiscoveryTask::GetPeriod() const
{
    return m_period;
}

void DspaDiscoveryTask::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool DspaDiscoveryTask::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

int64_t DspaDiscoveryTask::GetPlan() const
{
    return m_plan;
}

void DspaDiscoveryTask::SetPlan(const int64_t& _plan)
{
    m_plan = _plan;
    m_planHasBeenSet = true;
}

bool DspaDiscoveryTask::PlanHasBeenSet() const
{
    return m_planHasBeenSet;
}

int64_t DspaDiscoveryTask::GetEnable() const
{
    return m_enable;
}

void DspaDiscoveryTask::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool DspaDiscoveryTask::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

DspaDiscoveryTaskDataSource DspaDiscoveryTask::GetDataSourceInfo() const
{
    return m_dataSourceInfo;
}

void DspaDiscoveryTask::SetDataSourceInfo(const DspaDiscoveryTaskDataSource& _dataSourceInfo)
{
    m_dataSourceInfo = _dataSourceInfo;
    m_dataSourceInfoHasBeenSet = true;
}

bool DspaDiscoveryTask::DataSourceInfoHasBeenSet() const
{
    return m_dataSourceInfoHasBeenSet;
}

int64_t DspaDiscoveryTask::GetGeneralRuleSetEnable() const
{
    return m_generalRuleSetEnable;
}

void DspaDiscoveryTask::SetGeneralRuleSetEnable(const int64_t& _generalRuleSetEnable)
{
    m_generalRuleSetEnable = _generalRuleSetEnable;
    m_generalRuleSetEnableHasBeenSet = true;
}

bool DspaDiscoveryTask::GeneralRuleSetEnableHasBeenSet() const
{
    return m_generalRuleSetEnableHasBeenSet;
}

ScanTaskResult DspaDiscoveryTask::GetResult() const
{
    return m_result;
}

void DspaDiscoveryTask::SetResult(const ScanTaskResult& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool DspaDiscoveryTask::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string DspaDiscoveryTask::GetTimingStartTime() const
{
    return m_timingStartTime;
}

void DspaDiscoveryTask::SetTimingStartTime(const string& _timingStartTime)
{
    m_timingStartTime = _timingStartTime;
    m_timingStartTimeHasBeenSet = true;
}

bool DspaDiscoveryTask::TimingStartTimeHasBeenSet() const
{
    return m_timingStartTimeHasBeenSet;
}

bool DspaDiscoveryTask::GetComplianceUpdate() const
{
    return m_complianceUpdate;
}

void DspaDiscoveryTask::SetComplianceUpdate(const bool& _complianceUpdate)
{
    m_complianceUpdate = _complianceUpdate;
    m_complianceUpdateHasBeenSet = true;
}

bool DspaDiscoveryTask::ComplianceUpdateHasBeenSet() const
{
    return m_complianceUpdateHasBeenSet;
}

string DspaDiscoveryTask::GetScanRange() const
{
    return m_scanRange;
}

void DspaDiscoveryTask::SetScanRange(const string& _scanRange)
{
    m_scanRange = _scanRange;
    m_scanRangeHasBeenSet = true;
}

bool DspaDiscoveryTask::ScanRangeHasBeenSet() const
{
    return m_scanRangeHasBeenSet;
}

