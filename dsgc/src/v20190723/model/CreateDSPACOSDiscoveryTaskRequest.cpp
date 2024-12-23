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

#include <tencentcloud/dsgc/v20190723/model/CreateDSPACOSDiscoveryTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

CreateDSPACOSDiscoveryTaskRequest::CreateDSPACOSDiscoveryTaskRequest() :
    m_dspaIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_dataSourceIdHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_planHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_fileTypesHasBeenSet(false),
    m_fileSizeLimitHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_generalRuleSetEnableHasBeenSet(false),
    m_complianceGroupIdsHasBeenSet(false),
    m_timingStartTimeHasBeenSet(false)
{
}

string CreateDSPACOSDiscoveryTaskRequest::ToJsonString() const
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

    if (m_bucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bucket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bucket.c_str(), allocator).Move(), allocator);
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

    if (m_fileTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fileTypes.begin(); itr != m_fileTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileSizeLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSizeLimit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fileSizeLimit, allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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

    if (m_timingStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimingStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timingStartTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDSPACOSDiscoveryTaskRequest::GetDspaId() const
{
    return m_dspaId;
}

void CreateDSPACOSDiscoveryTaskRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool CreateDSPACOSDiscoveryTaskRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

string CreateDSPACOSDiscoveryTaskRequest::GetName() const
{
    return m_name;
}

void CreateDSPACOSDiscoveryTaskRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateDSPACOSDiscoveryTaskRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateDSPACOSDiscoveryTaskRequest::GetDataSourceId() const
{
    return m_dataSourceId;
}

void CreateDSPACOSDiscoveryTaskRequest::SetDataSourceId(const string& _dataSourceId)
{
    m_dataSourceId = _dataSourceId;
    m_dataSourceIdHasBeenSet = true;
}

bool CreateDSPACOSDiscoveryTaskRequest::DataSourceIdHasBeenSet() const
{
    return m_dataSourceIdHasBeenSet;
}

int64_t CreateDSPACOSDiscoveryTaskRequest::GetEnable() const
{
    return m_enable;
}

void CreateDSPACOSDiscoveryTaskRequest::SetEnable(const int64_t& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool CreateDSPACOSDiscoveryTaskRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string CreateDSPACOSDiscoveryTaskRequest::GetBucket() const
{
    return m_bucket;
}

void CreateDSPACOSDiscoveryTaskRequest::SetBucket(const string& _bucket)
{
    m_bucket = _bucket;
    m_bucketHasBeenSet = true;
}

bool CreateDSPACOSDiscoveryTaskRequest::BucketHasBeenSet() const
{
    return m_bucketHasBeenSet;
}

int64_t CreateDSPACOSDiscoveryTaskRequest::GetPlan() const
{
    return m_plan;
}

void CreateDSPACOSDiscoveryTaskRequest::SetPlan(const int64_t& _plan)
{
    m_plan = _plan;
    m_planHasBeenSet = true;
}

bool CreateDSPACOSDiscoveryTaskRequest::PlanHasBeenSet() const
{
    return m_planHasBeenSet;
}

int64_t CreateDSPACOSDiscoveryTaskRequest::GetPeriod() const
{
    return m_period;
}

void CreateDSPACOSDiscoveryTaskRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateDSPACOSDiscoveryTaskRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

vector<string> CreateDSPACOSDiscoveryTaskRequest::GetFileTypes() const
{
    return m_fileTypes;
}

void CreateDSPACOSDiscoveryTaskRequest::SetFileTypes(const vector<string>& _fileTypes)
{
    m_fileTypes = _fileTypes;
    m_fileTypesHasBeenSet = true;
}

bool CreateDSPACOSDiscoveryTaskRequest::FileTypesHasBeenSet() const
{
    return m_fileTypesHasBeenSet;
}

int64_t CreateDSPACOSDiscoveryTaskRequest::GetFileSizeLimit() const
{
    return m_fileSizeLimit;
}

void CreateDSPACOSDiscoveryTaskRequest::SetFileSizeLimit(const int64_t& _fileSizeLimit)
{
    m_fileSizeLimit = _fileSizeLimit;
    m_fileSizeLimitHasBeenSet = true;
}

bool CreateDSPACOSDiscoveryTaskRequest::FileSizeLimitHasBeenSet() const
{
    return m_fileSizeLimitHasBeenSet;
}

string CreateDSPACOSDiscoveryTaskRequest::GetResourceRegion() const
{
    return m_resourceRegion;
}

void CreateDSPACOSDiscoveryTaskRequest::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool CreateDSPACOSDiscoveryTaskRequest::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

string CreateDSPACOSDiscoveryTaskRequest::GetDescription() const
{
    return m_description;
}

void CreateDSPACOSDiscoveryTaskRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateDSPACOSDiscoveryTaskRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t CreateDSPACOSDiscoveryTaskRequest::GetGeneralRuleSetEnable() const
{
    return m_generalRuleSetEnable;
}

void CreateDSPACOSDiscoveryTaskRequest::SetGeneralRuleSetEnable(const int64_t& _generalRuleSetEnable)
{
    m_generalRuleSetEnable = _generalRuleSetEnable;
    m_generalRuleSetEnableHasBeenSet = true;
}

bool CreateDSPACOSDiscoveryTaskRequest::GeneralRuleSetEnableHasBeenSet() const
{
    return m_generalRuleSetEnableHasBeenSet;
}

vector<int64_t> CreateDSPACOSDiscoveryTaskRequest::GetComplianceGroupIds() const
{
    return m_complianceGroupIds;
}

void CreateDSPACOSDiscoveryTaskRequest::SetComplianceGroupIds(const vector<int64_t>& _complianceGroupIds)
{
    m_complianceGroupIds = _complianceGroupIds;
    m_complianceGroupIdsHasBeenSet = true;
}

bool CreateDSPACOSDiscoveryTaskRequest::ComplianceGroupIdsHasBeenSet() const
{
    return m_complianceGroupIdsHasBeenSet;
}

string CreateDSPACOSDiscoveryTaskRequest::GetTimingStartTime() const
{
    return m_timingStartTime;
}

void CreateDSPACOSDiscoveryTaskRequest::SetTimingStartTime(const string& _timingStartTime)
{
    m_timingStartTime = _timingStartTime;
    m_timingStartTimeHasBeenSet = true;
}

bool CreateDSPACOSDiscoveryTaskRequest::TimingStartTimeHasBeenSet() const
{
    return m_timingStartTimeHasBeenSet;
}


