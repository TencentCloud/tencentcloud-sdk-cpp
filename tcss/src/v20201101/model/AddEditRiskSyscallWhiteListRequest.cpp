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

#include <tencentcloud/tcss/v20201101/model/AddEditRiskSyscallWhiteListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AddEditRiskSyscallWhiteListRequest::AddEditRiskSyscallWhiteListRequest() :
    m_eventIdHasBeenSet(false),
    m_whiteListInfoHasBeenSet(false)
{
}

string AddEditRiskSyscallWhiteListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }

    if (m_whiteListInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteListInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_whiteListInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string AddEditRiskSyscallWhiteListRequest::GetEventId() const
{
    return m_eventId;
}

void AddEditRiskSyscallWhiteListRequest::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool AddEditRiskSyscallWhiteListRequest::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

RiskSyscallWhiteListInfo AddEditRiskSyscallWhiteListRequest::GetWhiteListInfo() const
{
    return m_whiteListInfo;
}

void AddEditRiskSyscallWhiteListRequest::SetWhiteListInfo(const RiskSyscallWhiteListInfo& _whiteListInfo)
{
    m_whiteListInfo = _whiteListInfo;
    m_whiteListInfoHasBeenSet = true;
}

bool AddEditRiskSyscallWhiteListRequest::WhiteListInfoHasBeenSet() const
{
    return m_whiteListInfoHasBeenSet;
}


