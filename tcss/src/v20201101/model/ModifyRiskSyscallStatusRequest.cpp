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

#include <tencentcloud/tcss/v20201101/model/ModifyRiskSyscallStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ModifyRiskSyscallStatusRequest::ModifyRiskSyscallStatusRequest() :
    m_eventIdSetHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string ModifyRiskSyscallStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_eventIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_eventIdSet.begin(); itr != m_eventIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyRiskSyscallStatusRequest::GetEventIdSet() const
{
    return m_eventIdSet;
}

void ModifyRiskSyscallStatusRequest::SetEventIdSet(const vector<string>& _eventIdSet)
{
    m_eventIdSet = _eventIdSet;
    m_eventIdSetHasBeenSet = true;
}

bool ModifyRiskSyscallStatusRequest::EventIdSetHasBeenSet() const
{
    return m_eventIdSetHasBeenSet;
}

string ModifyRiskSyscallStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifyRiskSyscallStatusRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyRiskSyscallStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyRiskSyscallStatusRequest::GetRemark() const
{
    return m_remark;
}

void ModifyRiskSyscallStatusRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyRiskSyscallStatusRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


