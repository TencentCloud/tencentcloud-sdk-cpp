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

#include <tencentcloud/cynosdb/v20190107/model/RollbackToNewClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cynosdb::V20190107::Model;
using namespace std;

RollbackToNewClusterRequest::RollbackToNewClusterRequest() :
    m_zoneHasBeenSet(false),
    m_originalClusterIdHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_rollbackIdHasBeenSet(false),
    m_expectTimeHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_dbModeHasBeenSet(false),
    m_minCpuHasBeenSet(false),
    m_maxCpuHasBeenSet(false),
    m_autoPauseHasBeenSet(false),
    m_autoPauseDelayHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_alarmPolicyIdsHasBeenSet(false),
    m_clusterParamsHasBeenSet(false),
    m_paramTemplateIdHasBeenSet(false),
    m_instanceInitInfosHasBeenSet(false),
    m_dealModeHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_timeSpanHasBeenSet(false),
    m_timeUnitHasBeenSet(false),
    m_rollbackDatabasesHasBeenSet(false),
    m_rollbackTablesHasBeenSet(false),
    m_originalROInstanceListHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_autoArchiveHasBeenSet(false)
{
}

string RollbackToNewClusterRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_originalClusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originalClusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqSubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uniqSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterName.c_str(), allocator).Move(), allocator);
    }

    if (m_rollbackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rollbackId, allocator);
    }

    if (m_expectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpectTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_expectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_autoVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }

    if (m_resourceTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resourceTags.begin(); itr != m_resourceTags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_dbModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dbMode.c_str(), allocator).Move(), allocator);
    }

    if (m_minCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_minCpu, allocator);
    }

    if (m_maxCpuHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxCpu";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxCpu, allocator);
    }

    if (m_autoPauseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoPause";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoPause.c_str(), allocator).Move(), allocator);
    }

    if (m_autoPauseDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoPauseDelay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoPauseDelay, allocator);
    }

    if (m_securityGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupIds.begin(); itr != m_securityGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_alarmPolicyIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmPolicyIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmPolicyIds.begin(); itr != m_alarmPolicyIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_clusterParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusterParams.begin(); itr != m_clusterParams.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_paramTemplateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParamTemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_paramTemplateId, allocator);
    }

    if (m_instanceInitInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceInitInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_instanceInitInfos.begin(); itr != m_instanceInitInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_dealModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DealMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dealMode, allocator);
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_timeSpanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeSpan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeSpan, allocator);
    }

    if (m_timeUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeUnit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeUnit.c_str(), allocator).Move(), allocator);
    }

    if (m_rollbackDatabasesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackDatabases";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rollbackDatabases.begin(); itr != m_rollbackDatabases.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_rollbackTablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollbackTables";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rollbackTables.begin(); itr != m_rollbackTables.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_originalROInstanceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalROInstanceList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_originalROInstanceList.begin(); itr != m_originalROInstanceList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_autoArchiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoArchive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_autoArchive.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RollbackToNewClusterRequest::GetZone() const
{
    return m_zone;
}

void RollbackToNewClusterRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool RollbackToNewClusterRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string RollbackToNewClusterRequest::GetOriginalClusterId() const
{
    return m_originalClusterId;
}

void RollbackToNewClusterRequest::SetOriginalClusterId(const string& _originalClusterId)
{
    m_originalClusterId = _originalClusterId;
    m_originalClusterIdHasBeenSet = true;
}

bool RollbackToNewClusterRequest::OriginalClusterIdHasBeenSet() const
{
    return m_originalClusterIdHasBeenSet;
}

string RollbackToNewClusterRequest::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void RollbackToNewClusterRequest::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool RollbackToNewClusterRequest::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string RollbackToNewClusterRequest::GetUniqSubnetId() const
{
    return m_uniqSubnetId;
}

void RollbackToNewClusterRequest::SetUniqSubnetId(const string& _uniqSubnetId)
{
    m_uniqSubnetId = _uniqSubnetId;
    m_uniqSubnetIdHasBeenSet = true;
}

bool RollbackToNewClusterRequest::UniqSubnetIdHasBeenSet() const
{
    return m_uniqSubnetIdHasBeenSet;
}

string RollbackToNewClusterRequest::GetClusterName() const
{
    return m_clusterName;
}

void RollbackToNewClusterRequest::SetClusterName(const string& _clusterName)
{
    m_clusterName = _clusterName;
    m_clusterNameHasBeenSet = true;
}

bool RollbackToNewClusterRequest::ClusterNameHasBeenSet() const
{
    return m_clusterNameHasBeenSet;
}

uint64_t RollbackToNewClusterRequest::GetRollbackId() const
{
    return m_rollbackId;
}

void RollbackToNewClusterRequest::SetRollbackId(const uint64_t& _rollbackId)
{
    m_rollbackId = _rollbackId;
    m_rollbackIdHasBeenSet = true;
}

bool RollbackToNewClusterRequest::RollbackIdHasBeenSet() const
{
    return m_rollbackIdHasBeenSet;
}

string RollbackToNewClusterRequest::GetExpectTime() const
{
    return m_expectTime;
}

void RollbackToNewClusterRequest::SetExpectTime(const string& _expectTime)
{
    m_expectTime = _expectTime;
    m_expectTimeHasBeenSet = true;
}

bool RollbackToNewClusterRequest::ExpectTimeHasBeenSet() const
{
    return m_expectTimeHasBeenSet;
}

int64_t RollbackToNewClusterRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void RollbackToNewClusterRequest::SetAutoVoucher(const int64_t& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool RollbackToNewClusterRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

vector<Tag> RollbackToNewClusterRequest::GetResourceTags() const
{
    return m_resourceTags;
}

void RollbackToNewClusterRequest::SetResourceTags(const vector<Tag>& _resourceTags)
{
    m_resourceTags = _resourceTags;
    m_resourceTagsHasBeenSet = true;
}

bool RollbackToNewClusterRequest::ResourceTagsHasBeenSet() const
{
    return m_resourceTagsHasBeenSet;
}

string RollbackToNewClusterRequest::GetDbMode() const
{
    return m_dbMode;
}

void RollbackToNewClusterRequest::SetDbMode(const string& _dbMode)
{
    m_dbMode = _dbMode;
    m_dbModeHasBeenSet = true;
}

bool RollbackToNewClusterRequest::DbModeHasBeenSet() const
{
    return m_dbModeHasBeenSet;
}

double RollbackToNewClusterRequest::GetMinCpu() const
{
    return m_minCpu;
}

void RollbackToNewClusterRequest::SetMinCpu(const double& _minCpu)
{
    m_minCpu = _minCpu;
    m_minCpuHasBeenSet = true;
}

bool RollbackToNewClusterRequest::MinCpuHasBeenSet() const
{
    return m_minCpuHasBeenSet;
}

double RollbackToNewClusterRequest::GetMaxCpu() const
{
    return m_maxCpu;
}

void RollbackToNewClusterRequest::SetMaxCpu(const double& _maxCpu)
{
    m_maxCpu = _maxCpu;
    m_maxCpuHasBeenSet = true;
}

bool RollbackToNewClusterRequest::MaxCpuHasBeenSet() const
{
    return m_maxCpuHasBeenSet;
}

string RollbackToNewClusterRequest::GetAutoPause() const
{
    return m_autoPause;
}

void RollbackToNewClusterRequest::SetAutoPause(const string& _autoPause)
{
    m_autoPause = _autoPause;
    m_autoPauseHasBeenSet = true;
}

bool RollbackToNewClusterRequest::AutoPauseHasBeenSet() const
{
    return m_autoPauseHasBeenSet;
}

int64_t RollbackToNewClusterRequest::GetAutoPauseDelay() const
{
    return m_autoPauseDelay;
}

void RollbackToNewClusterRequest::SetAutoPauseDelay(const int64_t& _autoPauseDelay)
{
    m_autoPauseDelay = _autoPauseDelay;
    m_autoPauseDelayHasBeenSet = true;
}

bool RollbackToNewClusterRequest::AutoPauseDelayHasBeenSet() const
{
    return m_autoPauseDelayHasBeenSet;
}

vector<string> RollbackToNewClusterRequest::GetSecurityGroupIds() const
{
    return m_securityGroupIds;
}

void RollbackToNewClusterRequest::SetSecurityGroupIds(const vector<string>& _securityGroupIds)
{
    m_securityGroupIds = _securityGroupIds;
    m_securityGroupIdsHasBeenSet = true;
}

bool RollbackToNewClusterRequest::SecurityGroupIdsHasBeenSet() const
{
    return m_securityGroupIdsHasBeenSet;
}

vector<string> RollbackToNewClusterRequest::GetAlarmPolicyIds() const
{
    return m_alarmPolicyIds;
}

void RollbackToNewClusterRequest::SetAlarmPolicyIds(const vector<string>& _alarmPolicyIds)
{
    m_alarmPolicyIds = _alarmPolicyIds;
    m_alarmPolicyIdsHasBeenSet = true;
}

bool RollbackToNewClusterRequest::AlarmPolicyIdsHasBeenSet() const
{
    return m_alarmPolicyIdsHasBeenSet;
}

vector<ParamItem> RollbackToNewClusterRequest::GetClusterParams() const
{
    return m_clusterParams;
}

void RollbackToNewClusterRequest::SetClusterParams(const vector<ParamItem>& _clusterParams)
{
    m_clusterParams = _clusterParams;
    m_clusterParamsHasBeenSet = true;
}

bool RollbackToNewClusterRequest::ClusterParamsHasBeenSet() const
{
    return m_clusterParamsHasBeenSet;
}

int64_t RollbackToNewClusterRequest::GetParamTemplateId() const
{
    return m_paramTemplateId;
}

void RollbackToNewClusterRequest::SetParamTemplateId(const int64_t& _paramTemplateId)
{
    m_paramTemplateId = _paramTemplateId;
    m_paramTemplateIdHasBeenSet = true;
}

bool RollbackToNewClusterRequest::ParamTemplateIdHasBeenSet() const
{
    return m_paramTemplateIdHasBeenSet;
}

vector<InstanceInitInfo> RollbackToNewClusterRequest::GetInstanceInitInfos() const
{
    return m_instanceInitInfos;
}

void RollbackToNewClusterRequest::SetInstanceInitInfos(const vector<InstanceInitInfo>& _instanceInitInfos)
{
    m_instanceInitInfos = _instanceInitInfos;
    m_instanceInitInfosHasBeenSet = true;
}

bool RollbackToNewClusterRequest::InstanceInitInfosHasBeenSet() const
{
    return m_instanceInitInfosHasBeenSet;
}

int64_t RollbackToNewClusterRequest::GetDealMode() const
{
    return m_dealMode;
}

void RollbackToNewClusterRequest::SetDealMode(const int64_t& _dealMode)
{
    m_dealMode = _dealMode;
    m_dealModeHasBeenSet = true;
}

bool RollbackToNewClusterRequest::DealModeHasBeenSet() const
{
    return m_dealModeHasBeenSet;
}

int64_t RollbackToNewClusterRequest::GetPayMode() const
{
    return m_payMode;
}

void RollbackToNewClusterRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool RollbackToNewClusterRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t RollbackToNewClusterRequest::GetTimeSpan() const
{
    return m_timeSpan;
}

void RollbackToNewClusterRequest::SetTimeSpan(const int64_t& _timeSpan)
{
    m_timeSpan = _timeSpan;
    m_timeSpanHasBeenSet = true;
}

bool RollbackToNewClusterRequest::TimeSpanHasBeenSet() const
{
    return m_timeSpanHasBeenSet;
}

string RollbackToNewClusterRequest::GetTimeUnit() const
{
    return m_timeUnit;
}

void RollbackToNewClusterRequest::SetTimeUnit(const string& _timeUnit)
{
    m_timeUnit = _timeUnit;
    m_timeUnitHasBeenSet = true;
}

bool RollbackToNewClusterRequest::TimeUnitHasBeenSet() const
{
    return m_timeUnitHasBeenSet;
}

vector<RollbackDatabase> RollbackToNewClusterRequest::GetRollbackDatabases() const
{
    return m_rollbackDatabases;
}

void RollbackToNewClusterRequest::SetRollbackDatabases(const vector<RollbackDatabase>& _rollbackDatabases)
{
    m_rollbackDatabases = _rollbackDatabases;
    m_rollbackDatabasesHasBeenSet = true;
}

bool RollbackToNewClusterRequest::RollbackDatabasesHasBeenSet() const
{
    return m_rollbackDatabasesHasBeenSet;
}

vector<RollbackTable> RollbackToNewClusterRequest::GetRollbackTables() const
{
    return m_rollbackTables;
}

void RollbackToNewClusterRequest::SetRollbackTables(const vector<RollbackTable>& _rollbackTables)
{
    m_rollbackTables = _rollbackTables;
    m_rollbackTablesHasBeenSet = true;
}

bool RollbackToNewClusterRequest::RollbackTablesHasBeenSet() const
{
    return m_rollbackTablesHasBeenSet;
}

vector<string> RollbackToNewClusterRequest::GetOriginalROInstanceList() const
{
    return m_originalROInstanceList;
}

void RollbackToNewClusterRequest::SetOriginalROInstanceList(const vector<string>& _originalROInstanceList)
{
    m_originalROInstanceList = _originalROInstanceList;
    m_originalROInstanceListHasBeenSet = true;
}

bool RollbackToNewClusterRequest::OriginalROInstanceListHasBeenSet() const
{
    return m_originalROInstanceListHasBeenSet;
}

int64_t RollbackToNewClusterRequest::GetProjectId() const
{
    return m_projectId;
}

void RollbackToNewClusterRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool RollbackToNewClusterRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string RollbackToNewClusterRequest::GetAutoArchive() const
{
    return m_autoArchive;
}

void RollbackToNewClusterRequest::SetAutoArchive(const string& _autoArchive)
{
    m_autoArchive = _autoArchive;
    m_autoArchiveHasBeenSet = true;
}

bool RollbackToNewClusterRequest::AutoArchiveHasBeenSet() const
{
    return m_autoArchiveHasBeenSet;
}


