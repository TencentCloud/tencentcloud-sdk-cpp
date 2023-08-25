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

#include <tencentcloud/dsgc/v20190723/model/DspaDiscoveryTaskDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DspaDiscoveryTaskDetail::DspaDiscoveryTaskDetail() :
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_planHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_dataSourceInfoHasBeenSet(false),
    m_generalRuleSetEnableHasBeenSet(false),
    m_defaultComplianceInfoHasBeenSet(false),
    m_customComplianceInfoHasBeenSet(false),
    m_timingStartTimeHasBeenSet(false)
{
}

CoreInternalOutcome DspaDiscoveryTaskDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDetail.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDetail.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDetail.Period` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_period = value["Period"].GetInt64();
        m_periodHasBeenSet = true;
    }

    if (value.HasMember("Plan") && !value["Plan"].IsNull())
    {
        if (!value["Plan"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDetail.Plan` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_plan = value["Plan"].GetInt64();
        m_planHasBeenSet = true;
    }

    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDetail.Enable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetInt64();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("DataSourceInfo") && !value["DataSourceInfo"].IsNull())
    {
        if (!value["DataSourceInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDetail.DataSourceInfo` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDetail.GeneralRuleSetEnable` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_generalRuleSetEnable = value["GeneralRuleSetEnable"].GetInt64();
        m_generalRuleSetEnableHasBeenSet = true;
    }

    if (value.HasMember("DefaultComplianceInfo") && !value["DefaultComplianceInfo"].IsNull())
    {
        if (!value["DefaultComplianceInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDetail.DefaultComplianceInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["DefaultComplianceInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScanTaskComplianceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_defaultComplianceInfo.push_back(item);
        }
        m_defaultComplianceInfoHasBeenSet = true;
    }

    if (value.HasMember("CustomComplianceInfo") && !value["CustomComplianceInfo"].IsNull())
    {
        if (!value["CustomComplianceInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDetail.CustomComplianceInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomComplianceInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ScanTaskComplianceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customComplianceInfo.push_back(item);
        }
        m_customComplianceInfoHasBeenSet = true;
    }

    if (value.HasMember("TimingStartTime") && !value["TimingStartTime"].IsNull())
    {
        if (!value["TimingStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspaDiscoveryTaskDetail.TimingStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timingStartTime = string(value["TimingStartTime"].GetString());
        m_timingStartTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspaDiscoveryTaskDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_defaultComplianceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultComplianceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_defaultComplianceInfo.begin(); itr != m_defaultComplianceInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_customComplianceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomComplianceInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customComplianceInfo.begin(); itr != m_customComplianceInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_timingStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimingStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timingStartTime.c_str(), allocator).Move(), allocator);
    }

}


string DspaDiscoveryTaskDetail::GetName() const
{
    return m_name;
}

void DspaDiscoveryTaskDetail::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DspaDiscoveryTaskDetail::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DspaDiscoveryTaskDetail::GetDescription() const
{
    return m_description;
}

void DspaDiscoveryTaskDetail::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool DspaDiscoveryTaskDetail::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t DspaDiscoveryTaskDetail::GetPeriod() const
{
    return m_period;
}

void DspaDiscoveryTaskDetail::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool DspaDiscoveryTaskDetail::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

int64_t DspaDiscoveryTaskDetail::GetPlan() const
{
    return m_plan;
}

void DspaDiscoveryTaskDetail::SetPlan(const int64_t& _plan)
{
    m_plan = _plan;
    m_planHasBeenSet = true;
}

bool DspaDiscoveryTaskDetail::PlanHasBeenSet() const
{
    return m_planHasBeenSet;
}

int64_t DspaDiscoveryTaskDetail::GetEnable() const
{
    return m_enable;
}

void DspaDiscoveryTaskDetail::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool DspaDiscoveryTaskDetail::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

DspaDiscoveryTaskDataSource DspaDiscoveryTaskDetail::GetDataSourceInfo() const
{
    return m_dataSourceInfo;
}

void DspaDiscoveryTaskDetail::SetDataSourceInfo(const DspaDiscoveryTaskDataSource& _dataSourceInfo)
{
    m_dataSourceInfo = _dataSourceInfo;
    m_dataSourceInfoHasBeenSet = true;
}

bool DspaDiscoveryTaskDetail::DataSourceInfoHasBeenSet() const
{
    return m_dataSourceInfoHasBeenSet;
}

int64_t DspaDiscoveryTaskDetail::GetGeneralRuleSetEnable() const
{
    return m_generalRuleSetEnable;
}

void DspaDiscoveryTaskDetail::SetGeneralRuleSetEnable(const int64_t& _generalRuleSetEnable)
{
    m_generalRuleSetEnable = _generalRuleSetEnable;
    m_generalRuleSetEnableHasBeenSet = true;
}

bool DspaDiscoveryTaskDetail::GeneralRuleSetEnableHasBeenSet() const
{
    return m_generalRuleSetEnableHasBeenSet;
}

vector<ScanTaskComplianceInfo> DspaDiscoveryTaskDetail::GetDefaultComplianceInfo() const
{
    return m_defaultComplianceInfo;
}

void DspaDiscoveryTaskDetail::SetDefaultComplianceInfo(const vector<ScanTaskComplianceInfo>& _defaultComplianceInfo)
{
    m_defaultComplianceInfo = _defaultComplianceInfo;
    m_defaultComplianceInfoHasBeenSet = true;
}

bool DspaDiscoveryTaskDetail::DefaultComplianceInfoHasBeenSet() const
{
    return m_defaultComplianceInfoHasBeenSet;
}

vector<ScanTaskComplianceInfo> DspaDiscoveryTaskDetail::GetCustomComplianceInfo() const
{
    return m_customComplianceInfo;
}

void DspaDiscoveryTaskDetail::SetCustomComplianceInfo(const vector<ScanTaskComplianceInfo>& _customComplianceInfo)
{
    m_customComplianceInfo = _customComplianceInfo;
    m_customComplianceInfoHasBeenSet = true;
}

bool DspaDiscoveryTaskDetail::CustomComplianceInfoHasBeenSet() const
{
    return m_customComplianceInfoHasBeenSet;
}

string DspaDiscoveryTaskDetail::GetTimingStartTime() const
{
    return m_timingStartTime;
}

void DspaDiscoveryTaskDetail::SetTimingStartTime(const string& _timingStartTime)
{
    m_timingStartTime = _timingStartTime;
    m_timingStartTimeHasBeenSet = true;
}

bool DspaDiscoveryTaskDetail::TimingStartTimeHasBeenSet() const
{
    return m_timingStartTimeHasBeenSet;
}

