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

#include <tencentcloud/monitor/v20230616/model/ListAIWorkbenchExecutionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20230616::Model;
using namespace std;

ListAIWorkbenchExecutionsRequest::ListAIWorkbenchExecutionsRequest() :
    m_perPageHasBeenSet(false),
    m_pageNoHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_executionIdsHasBeenSet(false),
    m_taskIdsHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_enabledHasBeenSet(false)
{
}

string ListAIWorkbenchExecutionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_perPageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PerPage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_perPage, allocator);
    }

    if (m_pageNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNo, allocator);
    }

    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_executionIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_executionIds.begin(); itr != m_executionIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_taskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskIds.begin(); itr != m_taskIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_triggerType.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enabled, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ListAIWorkbenchExecutionsRequest::GetPerPage() const
{
    return m_perPage;
}

void ListAIWorkbenchExecutionsRequest::SetPerPage(const int64_t& _perPage)
{
    m_perPage = _perPage;
    m_perPageHasBeenSet = true;
}

bool ListAIWorkbenchExecutionsRequest::PerPageHasBeenSet() const
{
    return m_perPageHasBeenSet;
}

int64_t ListAIWorkbenchExecutionsRequest::GetPageNo() const
{
    return m_pageNo;
}

void ListAIWorkbenchExecutionsRequest::SetPageNo(const int64_t& _pageNo)
{
    m_pageNo = _pageNo;
    m_pageNoHasBeenSet = true;
}

bool ListAIWorkbenchExecutionsRequest::PageNoHasBeenSet() const
{
    return m_pageNoHasBeenSet;
}

string ListAIWorkbenchExecutionsRequest::GetAgentId() const
{
    return m_agentId;
}

void ListAIWorkbenchExecutionsRequest::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool ListAIWorkbenchExecutionsRequest::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

string ListAIWorkbenchExecutionsRequest::GetStatus() const
{
    return m_status;
}

void ListAIWorkbenchExecutionsRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ListAIWorkbenchExecutionsRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> ListAIWorkbenchExecutionsRequest::GetExecutionIds() const
{
    return m_executionIds;
}

void ListAIWorkbenchExecutionsRequest::SetExecutionIds(const vector<string>& _executionIds)
{
    m_executionIds = _executionIds;
    m_executionIdsHasBeenSet = true;
}

bool ListAIWorkbenchExecutionsRequest::ExecutionIdsHasBeenSet() const
{
    return m_executionIdsHasBeenSet;
}

vector<string> ListAIWorkbenchExecutionsRequest::GetTaskIds() const
{
    return m_taskIds;
}

void ListAIWorkbenchExecutionsRequest::SetTaskIds(const vector<string>& _taskIds)
{
    m_taskIds = _taskIds;
    m_taskIdsHasBeenSet = true;
}

bool ListAIWorkbenchExecutionsRequest::TaskIdsHasBeenSet() const
{
    return m_taskIdsHasBeenSet;
}

string ListAIWorkbenchExecutionsRequest::GetTriggerType() const
{
    return m_triggerType;
}

void ListAIWorkbenchExecutionsRequest::SetTriggerType(const string& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool ListAIWorkbenchExecutionsRequest::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string ListAIWorkbenchExecutionsRequest::GetKeyword() const
{
    return m_keyword;
}

void ListAIWorkbenchExecutionsRequest::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool ListAIWorkbenchExecutionsRequest::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

bool ListAIWorkbenchExecutionsRequest::GetEnabled() const
{
    return m_enabled;
}

void ListAIWorkbenchExecutionsRequest::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ListAIWorkbenchExecutionsRequest::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}


