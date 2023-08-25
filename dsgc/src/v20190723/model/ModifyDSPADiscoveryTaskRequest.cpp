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

#include <tencentcloud/dsgc/v20190723/model/ModifyDSPADiscoveryTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

ModifyDSPADiscoveryTaskRequest::ModifyDSPADiscoveryTaskRequest() :
    m_dspaIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_generalRuleSetEnableHasBeenSet(false),
    m_complianceGroupIdsHasBeenSet(false),
    m_planHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_timingStartTimeHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_dataSourceTypeHasBeenSet(false)
{
}

string ModifyDSPADiscoveryTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_condition.c_str(), allocator).Move(), allocator);
    }

    if (m_generalRuleSetEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GeneralRuleSetEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_generalRuleSetEnable, allocator);
    }

    if (m_complianceGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComplianceGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_complianceGroupIds.begin(); itr != m_complianceGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_planHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Plan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_plan, allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_timingStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimingStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timingStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataSourceType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDSPADiscoveryTaskRequest::GetDspaId() const
{
    return m_dspaId;
}

void ModifyDSPADiscoveryTaskRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool ModifyDSPADiscoveryTaskRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

int64_t ModifyDSPADiscoveryTaskRequest::GetTaskId() const
{
    return m_taskId;
}

void ModifyDSPADiscoveryTaskRequest::SetTaskId(const int64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ModifyDSPADiscoveryTaskRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string ModifyDSPADiscoveryTaskRequest::GetName() const
{
    return m_name;
}

void ModifyDSPADiscoveryTaskRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyDSPADiscoveryTaskRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyDSPADiscoveryTaskRequest::GetDescription() const
{
    return m_description;
}

void ModifyDSPADiscoveryTaskRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyDSPADiscoveryTaskRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t ModifyDSPADiscoveryTaskRequest::GetEnable() const
{
    return m_enable;
}

void ModifyDSPADiscoveryTaskRequest::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyDSPADiscoveryTaskRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string ModifyDSPADiscoveryTaskRequest::GetDataSourceId() const
{
    return m_dataSourceId;
}

void ModifyDSPADiscoveryTaskRequest::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool ModifyDSPADiscoveryTaskRequest::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

string ModifyDSPADiscoveryTaskRequest::GetCondition() const
{
    return m_condition;
}

void ModifyDSPADiscoveryTaskRequest::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool ModifyDSPADiscoveryTaskRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

int64_t ModifyDSPADiscoveryTaskRequest::GetGeneralRuleSetEnable() const
{
    return m_generalRuleSetEnable;
}

void ModifyDSPADiscoveryTaskRequest::SetGeneralRuleSetEnable(const int64_t& _generalRuleSetEnable)
{
    m_generalRuleSetEnable = _generalRuleSetEnable;
    m_generalRuleSetEnableHasBeenSet = true;
}

bool ModifyDSPADiscoveryTaskRequest::GeneralRuleSetEnableHasBeenSet() const
{
    return m_generalRuleSetEnableHasBeenSet;
}

vector<int64_t> ModifyDSPADiscoveryTaskRequest::GetComplianceGroupIds() const
{
    return m_complianceGroupIds;
}

void ModifyDSPADiscoveryTaskRequest::SetComplianceGroupIds(const vector<int64_t>& _complianceGroupIds)
{
    m_complianceGroupIds = _complianceGroupIds;
    m_complianceGroupIdsHasBeenSet = true;
}

bool ModifyDSPADiscoveryTaskRequest::ComplianceGroupIdsHasBeenSet() const
{
    return m_complianceGroupIdsHasBeenSet;
}

int64_t ModifyDSPADiscoveryTaskRequest::GetPlan() const
{
    return m_plan;
}

void ModifyDSPADiscoveryTaskRequest::SetPlan(const int64_t& _plan)
{
    m_plan = _plan;
    m_planHasBeenSet = true;
}

bool ModifyDSPADiscoveryTaskRequest::PlanHasBeenSet() const
{
    return m_planHasBeenSet;
}

int64_t ModifyDSPADiscoveryTaskRequest::GetPeriod() const
{
    return m_period;
}

void ModifyDSPADiscoveryTaskRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool ModifyDSPADiscoveryTaskRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string ModifyDSPADiscoveryTaskRequest::GetTimingStartTime() const
{
    return m_timingStartTime;
}

void ModifyDSPADiscoveryTaskRequest::SetTimingStartTime(const string& _timingStartTime)
{
    m_timingStartTime = _timingStartTime;
    m_timingStartTimeHasBeenSet = true;
}

bool ModifyDSPADiscoveryTaskRequest::TimingStartTimeHasBeenSet() const
{
    return m_timingStartTimeHasBeenSet;
}

string ModifyDSPADiscoveryTaskRequest::GetResourceRegion() const
{
    return m_resourceRegion;
}

void ModifyDSPADiscoveryTaskRequest::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool ModifyDSPADiscoveryTaskRequest::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

string ModifyDSPADiscoveryTaskRequest::GetDataSourceType() const
{
    return m_dataSourceType;
}

void ModifyDSPADiscoveryTaskRequest::SetDataSourceType(const string& _dataSourceType)
{
    m_dataSourceType = _dataSourceType;
    m_dataSourceTypeHasBeenSet = true;
}

bool ModifyDSPADiscoveryTaskRequest::DataSourceTypeHasBeenSet() const
{
    return m_dataSourceTypeHasBeenSet;
}


