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

#include <tencentcloud/cwp/v20180228/model/ScanTaskAgainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ScanTaskAgainRequest::ScanTaskAgainRequest() :
    m_moduleTypeHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_quuidListHasBeenSet(false),
    m_timeoutPeriodHasBeenSet(false)
{
}

string ScanTaskAgainRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_moduleType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskId, allocator);
    }

    if (m_quuidListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuuidList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_quuidList.begin(); itr != m_quuidList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_timeoutPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeoutPeriod";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeoutPeriod, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ScanTaskAgainRequest::GetModuleType() const
{
    return m_moduleType;
}

void ScanTaskAgainRequest::SetModuleType(const string& _moduleType)
{
    m_moduleType = _moduleType;
    m_moduleTypeHasBeenSet = true;
}

bool ScanTaskAgainRequest::ModuleTypeHasBeenSet() const
{
    return m_moduleTypeHasBeenSet;
}

uint64_t ScanTaskAgainRequest::GetTaskId() const
{
    return m_taskId;
}

void ScanTaskAgainRequest::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ScanTaskAgainRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<string> ScanTaskAgainRequest::GetQuuidList() const
{
    return m_quuidList;
}

void ScanTaskAgainRequest::SetQuuidList(const vector<string>& _quuidList)
{
    m_quuidList = _quuidList;
    m_quuidListHasBeenSet = true;
}

bool ScanTaskAgainRequest::QuuidListHasBeenSet() const
{
    return m_quuidListHasBeenSet;
}

uint64_t ScanTaskAgainRequest::GetTimeoutPeriod() const
{
    return m_timeoutPeriod;
}

void ScanTaskAgainRequest::SetTimeoutPeriod(const uint64_t& _timeoutPeriod)
{
    m_timeoutPeriod = _timeoutPeriod;
    m_timeoutPeriodHasBeenSet = true;
}

bool ScanTaskAgainRequest::TimeoutPeriodHasBeenSet() const
{
    return m_timeoutPeriodHasBeenSet;
}


