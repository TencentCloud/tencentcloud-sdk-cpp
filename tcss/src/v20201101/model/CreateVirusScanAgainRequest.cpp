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

#include <tencentcloud/tcss/v20201101/model/CreateVirusScanAgainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

CreateVirusScanAgainRequest::CreateVirusScanAgainRequest() :
    m_taskIdHasBeenSet(false),
    m_containerIdsHasBeenSet(false),
    m_timeoutAllHasBeenSet(false),
    m_timeoutHasBeenSet(false)
{
}

string CreateVirusScanAgainRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_containerIds.begin(); itr != m_containerIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timeoutAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeoutAll, allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVirusScanAgainRequest::GetTaskId() const
{
    return m_taskId;
}

void CreateVirusScanAgainRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CreateVirusScanAgainRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<string> CreateVirusScanAgainRequest::GetContainerIds() const
{
    return m_containerIds;
}

void CreateVirusScanAgainRequest::SetContainerIds(const vector<string>& _containerIds)
{
    m_containerIds = _containerIds;
    m_containerIdsHasBeenSet = true;
}

bool CreateVirusScanAgainRequest::ContainerIdsHasBeenSet() const
{
    return m_containerIdsHasBeenSet;
}

bool CreateVirusScanAgainRequest::GetTimeoutAll() const
{
    return m_timeoutAll;
}

void CreateVirusScanAgainRequest::SetTimeoutAll(const bool& _timeoutAll)
{
    m_timeoutAll = _timeoutAll;
    m_timeoutAllHasBeenSet = true;
}

bool CreateVirusScanAgainRequest::TimeoutAllHasBeenSet() const
{
    return m_timeoutAllHasBeenSet;
}

uint64_t CreateVirusScanAgainRequest::GetTimeout() const
{
    return m_timeout;
}

void CreateVirusScanAgainRequest::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool CreateVirusScanAgainRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}


