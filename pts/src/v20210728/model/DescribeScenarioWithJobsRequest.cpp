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

#include <tencentcloud/pts/v20210728/model/DescribeScenarioWithJobsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

DescribeScenarioWithJobsRequest::DescribeScenarioWithJobsRequest() :
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_projectIdsHasBeenSet(false),
    m_scenarioIdsHasBeenSet(false),
    m_scenarioNameHasBeenSet(false),
    m_scenarioStatusHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_ascendHasBeenSet(false),
    m_scenarioRelatedJobsParamsHasBeenSet(false),
    m_ignoreScriptHasBeenSet(false),
    m_ignoreDatasetHasBeenSet(false),
    m_scenarioTypeHasBeenSet(false),
    m_ownerHasBeenSet(false)
{
}

string DescribeScenarioWithJobsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_projectIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_projectIds.begin(); itr != m_projectIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scenarioIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scenarioIds.begin(); itr != m_scenarioIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_scenarioNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scenarioName.c_str(), allocator).Move(), allocator);
    }

    if (m_scenarioStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_scenarioStatus, allocator);
    }

    if (m_orderByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderBy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderBy.c_str(), allocator).Move(), allocator);
    }

    if (m_ascendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ascend";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ascend, allocator);
    }

    if (m_scenarioRelatedJobsParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioRelatedJobsParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_scenarioRelatedJobsParams.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ignoreScriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreScript";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ignoreScript, allocator);
    }

    if (m_ignoreDatasetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreDataset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ignoreDataset, allocator);
    }

    if (m_scenarioTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scenarioType.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeScenarioWithJobsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeScenarioWithJobsRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeScenarioWithJobsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeScenarioWithJobsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeScenarioWithJobsRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeScenarioWithJobsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

vector<string> DescribeScenarioWithJobsRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DescribeScenarioWithJobsRequest::SetProjectIds(const vector<string>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DescribeScenarioWithJobsRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

vector<string> DescribeScenarioWithJobsRequest::GetScenarioIds() const
{
    return m_scenarioIds;
}

void DescribeScenarioWithJobsRequest::SetScenarioIds(const vector<string>& _scenarioIds)
{
    m_scenarioIds = _scenarioIds;
    m_scenarioIdsHasBeenSet = true;
}

bool DescribeScenarioWithJobsRequest::ScenarioIdsHasBeenSet() const
{
    return m_scenarioIdsHasBeenSet;
}

string DescribeScenarioWithJobsRequest::GetScenarioName() const
{
    return m_scenarioName;
}

void DescribeScenarioWithJobsRequest::SetScenarioName(const string& _scenarioName)
{
    m_scenarioName = _scenarioName;
    m_scenarioNameHasBeenSet = true;
}

bool DescribeScenarioWithJobsRequest::ScenarioNameHasBeenSet() const
{
    return m_scenarioNameHasBeenSet;
}

int64_t DescribeScenarioWithJobsRequest::GetScenarioStatus() const
{
    return m_scenarioStatus;
}

void DescribeScenarioWithJobsRequest::SetScenarioStatus(const int64_t& _scenarioStatus)
{
    m_scenarioStatus = _scenarioStatus;
    m_scenarioStatusHasBeenSet = true;
}

bool DescribeScenarioWithJobsRequest::ScenarioStatusHasBeenSet() const
{
    return m_scenarioStatusHasBeenSet;
}

string DescribeScenarioWithJobsRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeScenarioWithJobsRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeScenarioWithJobsRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

bool DescribeScenarioWithJobsRequest::GetAscend() const
{
    return m_ascend;
}

void DescribeScenarioWithJobsRequest::SetAscend(const bool& _ascend)
{
    m_ascend = _ascend;
    m_ascendHasBeenSet = true;
}

bool DescribeScenarioWithJobsRequest::AscendHasBeenSet() const
{
    return m_ascendHasBeenSet;
}

ScenarioRelatedJobsParams DescribeScenarioWithJobsRequest::GetScenarioRelatedJobsParams() const
{
    return m_scenarioRelatedJobsParams;
}

void DescribeScenarioWithJobsRequest::SetScenarioRelatedJobsParams(const ScenarioRelatedJobsParams& _scenarioRelatedJobsParams)
{
    m_scenarioRelatedJobsParams = _scenarioRelatedJobsParams;
    m_scenarioRelatedJobsParamsHasBeenSet = true;
}

bool DescribeScenarioWithJobsRequest::ScenarioRelatedJobsParamsHasBeenSet() const
{
    return m_scenarioRelatedJobsParamsHasBeenSet;
}

bool DescribeScenarioWithJobsRequest::GetIgnoreScript() const
{
    return m_ignoreScript;
}

void DescribeScenarioWithJobsRequest::SetIgnoreScript(const bool& _ignoreScript)
{
    m_ignoreScript = _ignoreScript;
    m_ignoreScriptHasBeenSet = true;
}

bool DescribeScenarioWithJobsRequest::IgnoreScriptHasBeenSet() const
{
    return m_ignoreScriptHasBeenSet;
}

bool DescribeScenarioWithJobsRequest::GetIgnoreDataset() const
{
    return m_ignoreDataset;
}

void DescribeScenarioWithJobsRequest::SetIgnoreDataset(const bool& _ignoreDataset)
{
    m_ignoreDataset = _ignoreDataset;
    m_ignoreDatasetHasBeenSet = true;
}

bool DescribeScenarioWithJobsRequest::IgnoreDatasetHasBeenSet() const
{
    return m_ignoreDatasetHasBeenSet;
}

string DescribeScenarioWithJobsRequest::GetScenarioType() const
{
    return m_scenarioType;
}

void DescribeScenarioWithJobsRequest::SetScenarioType(const string& _scenarioType)
{
    m_scenarioType = _scenarioType;
    m_scenarioTypeHasBeenSet = true;
}

bool DescribeScenarioWithJobsRequest::ScenarioTypeHasBeenSet() const
{
    return m_scenarioTypeHasBeenSet;
}

string DescribeScenarioWithJobsRequest::GetOwner() const
{
    return m_owner;
}

void DescribeScenarioWithJobsRequest::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool DescribeScenarioWithJobsRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}


