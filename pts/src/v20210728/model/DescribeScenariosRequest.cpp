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

#include <tencentcloud/pts/v20210728/model/DescribeScenariosRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

DescribeScenariosRequest::DescribeScenariosRequest() :
    m_scenarioIdsHasBeenSet(false),
    m_scenarioNameHasBeenSet(false),
    m_scenarioStatusHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_orderByHasBeenSet(false),
    m_ascendHasBeenSet(false),
    m_projectIdsHasBeenSet(false),
    m_scenarioTypeHasBeenSet(false)
{
}

string DescribeScenariosRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scenarioStatus.begin(); itr != m_scenarioStatus.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

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

    if (m_scenarioTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scenarioType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeScenariosRequest::GetScenarioIds() const
{
    return m_scenarioIds;
}

void DescribeScenariosRequest::SetScenarioIds(const vector<string>& _scenarioIds)
{
    m_scenarioIds = _scenarioIds;
    m_scenarioIdsHasBeenSet = true;
}

bool DescribeScenariosRequest::ScenarioIdsHasBeenSet() const
{
    return m_scenarioIdsHasBeenSet;
}

string DescribeScenariosRequest::GetScenarioName() const
{
    return m_scenarioName;
}

void DescribeScenariosRequest::SetScenarioName(const string& _scenarioName)
{
    m_scenarioName = _scenarioName;
    m_scenarioNameHasBeenSet = true;
}

bool DescribeScenariosRequest::ScenarioNameHasBeenSet() const
{
    return m_scenarioNameHasBeenSet;
}

vector<int64_t> DescribeScenariosRequest::GetScenarioStatus() const
{
    return m_scenarioStatus;
}

void DescribeScenariosRequest::SetScenarioStatus(const vector<int64_t>& _scenarioStatus)
{
    m_scenarioStatus = _scenarioStatus;
    m_scenarioStatusHasBeenSet = true;
}

bool DescribeScenariosRequest::ScenarioStatusHasBeenSet() const
{
    return m_scenarioStatusHasBeenSet;
}

int64_t DescribeScenariosRequest::GetOffset() const
{
    return m_offset;
}

void DescribeScenariosRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeScenariosRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeScenariosRequest::GetLimit() const
{
    return m_limit;
}

void DescribeScenariosRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeScenariosRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeScenariosRequest::GetOrderBy() const
{
    return m_orderBy;
}

void DescribeScenariosRequest::SetOrderBy(const string& _orderBy)
{
    m_orderBy = _orderBy;
    m_orderByHasBeenSet = true;
}

bool DescribeScenariosRequest::OrderByHasBeenSet() const
{
    return m_orderByHasBeenSet;
}

bool DescribeScenariosRequest::GetAscend() const
{
    return m_ascend;
}

void DescribeScenariosRequest::SetAscend(const bool& _ascend)
{
    m_ascend = _ascend;
    m_ascendHasBeenSet = true;
}

bool DescribeScenariosRequest::AscendHasBeenSet() const
{
    return m_ascendHasBeenSet;
}

vector<string> DescribeScenariosRequest::GetProjectIds() const
{
    return m_projectIds;
}

void DescribeScenariosRequest::SetProjectIds(const vector<string>& _projectIds)
{
    m_projectIds = _projectIds;
    m_projectIdsHasBeenSet = true;
}

bool DescribeScenariosRequest::ProjectIdsHasBeenSet() const
{
    return m_projectIdsHasBeenSet;
}

string DescribeScenariosRequest::GetScenarioType() const
{
    return m_scenarioType;
}

void DescribeScenariosRequest::SetScenarioType(const string& _scenarioType)
{
    m_scenarioType = _scenarioType;
    m_scenarioTypeHasBeenSet = true;
}

bool DescribeScenariosRequest::ScenarioTypeHasBeenSet() const
{
    return m_scenarioTypeHasBeenSet;
}


