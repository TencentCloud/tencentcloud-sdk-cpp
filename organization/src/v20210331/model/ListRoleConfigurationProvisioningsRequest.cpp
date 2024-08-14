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

#include <tencentcloud/organization/v20210331/model/ListRoleConfigurationProvisioningsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

ListRoleConfigurationProvisioningsRequest::ListRoleConfigurationProvisioningsRequest() :
    m_zoneIdHasBeenSet(false),
    m_roleConfigurationIdHasBeenSet(false),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_targetUinHasBeenSet(false),
    m_deploymentStatusHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

string ListRoleConfigurationProvisioningsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleConfigurationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleConfigurationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roleConfigurationId.c_str(), allocator).Move(), allocator);
    }

    if (m_maxResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxResults";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxResults, allocator);
    }

    if (m_nextTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nextToken.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_targetUin, allocator);
    }

    if (m_deploymentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeploymentStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deploymentStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_filterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filter.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ListRoleConfigurationProvisioningsRequest::GetZoneId() const
{
    return m_zoneId;
}

void ListRoleConfigurationProvisioningsRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ListRoleConfigurationProvisioningsRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ListRoleConfigurationProvisioningsRequest::GetRoleConfigurationId() const
{
    return m_roleConfigurationId;
}

void ListRoleConfigurationProvisioningsRequest::SetRoleConfigurationId(const string& _roleConfigurationId)
{
    m_roleConfigurationId = _roleConfigurationId;
    m_roleConfigurationIdHasBeenSet = true;
}

bool ListRoleConfigurationProvisioningsRequest::RoleConfigurationIdHasBeenSet() const
{
    return m_roleConfigurationIdHasBeenSet;
}

int64_t ListRoleConfigurationProvisioningsRequest::GetMaxResults() const
{
    return m_maxResults;
}

void ListRoleConfigurationProvisioningsRequest::SetMaxResults(const int64_t& _maxResults)
{
    m_maxResults = _maxResults;
    m_maxResultsHasBeenSet = true;
}

bool ListRoleConfigurationProvisioningsRequest::MaxResultsHasBeenSet() const
{
    return m_maxResultsHasBeenSet;
}

string ListRoleConfigurationProvisioningsRequest::GetNextToken() const
{
    return m_nextToken;
}

void ListRoleConfigurationProvisioningsRequest::SetNextToken(const string& _nextToken)
{
    m_nextToken = _nextToken;
    m_nextTokenHasBeenSet = true;
}

bool ListRoleConfigurationProvisioningsRequest::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}

string ListRoleConfigurationProvisioningsRequest::GetTargetType() const
{
    return m_targetType;
}

void ListRoleConfigurationProvisioningsRequest::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool ListRoleConfigurationProvisioningsRequest::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

int64_t ListRoleConfigurationProvisioningsRequest::GetTargetUin() const
{
    return m_targetUin;
}

void ListRoleConfigurationProvisioningsRequest::SetTargetUin(const int64_t& _targetUin)
{
    m_targetUin = _targetUin;
    m_targetUinHasBeenSet = true;
}

bool ListRoleConfigurationProvisioningsRequest::TargetUinHasBeenSet() const
{
    return m_targetUinHasBeenSet;
}

string ListRoleConfigurationProvisioningsRequest::GetDeploymentStatus() const
{
    return m_deploymentStatus;
}

void ListRoleConfigurationProvisioningsRequest::SetDeploymentStatus(const string& _deploymentStatus)
{
    m_deploymentStatus = _deploymentStatus;
    m_deploymentStatusHasBeenSet = true;
}

bool ListRoleConfigurationProvisioningsRequest::DeploymentStatusHasBeenSet() const
{
    return m_deploymentStatusHasBeenSet;
}

string ListRoleConfigurationProvisioningsRequest::GetFilter() const
{
    return m_filter;
}

void ListRoleConfigurationProvisioningsRequest::SetFilter(const string& _filter)
{
    m_filter = _filter;
    m_filterHasBeenSet = true;
}

bool ListRoleConfigurationProvisioningsRequest::FilterHasBeenSet() const
{
    return m_filterHasBeenSet;
}


