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

#include <tencentcloud/dsgc/v20190723/model/CreateDSPADiscoveryTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

CreateDSPADiscoveryTaskRequest::CreateDSPADiscoveryTaskRequest() :
    m_dspaIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_planHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_dataSourceTypeHasBeenSet(false),
    m_generalRuleSetEnableHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_conditionHasBeenSet(false),
    m_complianceGroupIdsHasBeenSet(false),
    m_timingStartTimeHasBeenSet(false),
    m_orderHasBeenSet(false),
    m_rowsHasBeenSet(false),
    m_globalOrderFieldHasBeenSet(false)
{
}

string CreateDSPADiscoveryTaskRequest::ToJsonString() const
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

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_dataSourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataSourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dataSourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
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

    if (m_generalRuleSetEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GeneralRuleSetEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_generalRuleSetEnable, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_condition.c_str(), allocator).Move(), allocator);
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

    if (m_timingStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimingStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timingStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

    if (m_rowsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rows";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rows, allocator);
    }

    if (m_globalOrderFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GlobalOrderField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_globalOrderField.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDSPADiscoveryTaskRequest::GetDspaId() const
{
    return m_dspaId;
}

void CreateDSPADiscoveryTaskRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool CreateDSPADiscoveryTaskRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

string CreateDSPADiscoveryTaskRequest::GetName() const
{
    return m_name;
}

void CreateDSPADiscoveryTaskRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateDSPADiscoveryTaskRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateDSPADiscoveryTaskRequest::GetDataSourceId() const
{
    return m_dataSourceId;
}

void CreateDSPADiscoveryTaskRequest::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool CreateDSPADiscoveryTaskRequest::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

int64_t CreateDSPADiscoveryTaskRequest::GetEnable() const
{
    return m_enable;
}

void CreateDSPADiscoveryTaskRequest::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool CreateDSPADiscoveryTaskRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

int64_t CreateDSPADiscoveryTaskRequest::GetPlan() const
{
    return m_plan;
}

void CreateDSPADiscoveryTaskRequest::SetPlan(const int64_t& _plan)
{
    m_plan = _plan;
    m_planHasBeenSet = true;
}

bool CreateDSPADiscoveryTaskRequest::PlanHasBeenSet() const
{
    return m_planHasBeenSet;
}

int64_t CreateDSPADiscoveryTaskRequest::GetPeriod() const
{
    return m_period;
}

void CreateDSPADiscoveryTaskRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateDSPADiscoveryTaskRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string CreateDSPADiscoveryTaskRequest::GetResourceRegion() const
{
    return m_resourceRegion;
}

void CreateDSPADiscoveryTaskRequest::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool CreateDSPADiscoveryTaskRequest::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

string CreateDSPADiscoveryTaskRequest::GetDataSourceType() const
{
    return m_dataSourceType;
}

void CreateDSPADiscoveryTaskRequest::SetDataSourceType(const string& _dataSourceType)
{
    m_dataSourceType = _dataSourceType;
    m_dataSourceTypeHasBeenSet = true;
}

bool CreateDSPADiscoveryTaskRequest::DataSourceTypeHasBeenSet() const
{
    return m_dataSourceTypeHasBeenSet;
}

int64_t CreateDSPADiscoveryTaskRequest::GetGeneralRuleSetEnable() const
{
    return m_generalRuleSetEnable;
}

void CreateDSPADiscoveryTaskRequest::SetGeneralRuleSetEnable(const int64_t& _generalRuleSetEnable)
{
    m_generalRuleSetEnable = _generalRuleSetEnable;
    m_generalRuleSetEnableHasBeenSet = true;
}

bool CreateDSPADiscoveryTaskRequest::GeneralRuleSetEnableHasBeenSet() const
{
    return m_generalRuleSetEnableHasBeenSet;
}

string CreateDSPADiscoveryTaskRequest::GetDescription() const
{
    return m_description;
}

void CreateDSPADiscoveryTaskRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateDSPADiscoveryTaskRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateDSPADiscoveryTaskRequest::GetCondition() const
{
    return m_condition;
}

void CreateDSPADiscoveryTaskRequest::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool CreateDSPADiscoveryTaskRequest::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

vector<int64_t> CreateDSPADiscoveryTaskRequest::GetComplianceGroupIds() const
{
    return m_complianceGroupIds;
}

void CreateDSPADiscoveryTaskRequest::SetComplianceGroupIds(const vector<int64_t>& _complianceGroupIds)
{
    m_complianceGroupIds = _complianceGroupIds;
    m_complianceGroupIdsHasBeenSet = true;
}

bool CreateDSPADiscoveryTaskRequest::ComplianceGroupIdsHasBeenSet() const
{
    return m_complianceGroupIdsHasBeenSet;
}

string CreateDSPADiscoveryTaskRequest::GetTimingStartTime() const
{
    return m_timingStartTime;
}

void CreateDSPADiscoveryTaskRequest::SetTimingStartTime(const string& _timingStartTime)
{
    m_timingStartTime = _timingStartTime;
    m_timingStartTimeHasBeenSet = true;
}

bool CreateDSPADiscoveryTaskRequest::TimingStartTimeHasBeenSet() const
{
    return m_timingStartTimeHasBeenSet;
}

string CreateDSPADiscoveryTaskRequest::GetOrder() const
{
    return m_order;
}

void CreateDSPADiscoveryTaskRequest::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool CreateDSPADiscoveryTaskRequest::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

int64_t CreateDSPADiscoveryTaskRequest::GetRows() const
{
    return m_rows;
}

void CreateDSPADiscoveryTaskRequest::SetRows(const int64_t& _rows)
{
    m_rows = _rows;
    m_rowsHasBeenSet = true;
}

bool CreateDSPADiscoveryTaskRequest::RowsHasBeenSet() const
{
    return m_rowsHasBeenSet;
}

string CreateDSPADiscoveryTaskRequest::GetGlobalOrderField() const
{
    return m_globalOrderField;
}

void CreateDSPADiscoveryTaskRequest::SetGlobalOrderField(const string& _globalOrderField)
{
    m_globalOrderField = _globalOrderField;
    m_globalOrderFieldHasBeenSet = true;
}

bool CreateDSPADiscoveryTaskRequest::GlobalOrderFieldHasBeenSet() const
{
    return m_globalOrderFieldHasBeenSet;
}


