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

#include <tencentcloud/cwp/v20180228/model/AddLoginWhiteListsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

AddLoginWhiteListsRequest::AddLoginWhiteListsRequest() :
    m_hostLoginWhiteObjHasBeenSet(false),
    m_processTypeHasBeenSet(false),
    m_eventIdHasBeenSet(false)
{
}

string AddLoginWhiteListsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_hostLoginWhiteObjHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostLoginWhiteObj";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostLoginWhiteObj.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_processTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProcessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_processType.c_str(), allocator).Move(), allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_eventId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


HostLoginWhiteObj AddLoginWhiteListsRequest::GetHostLoginWhiteObj() const
{
    return m_hostLoginWhiteObj;
}

void AddLoginWhiteListsRequest::SetHostLoginWhiteObj(const HostLoginWhiteObj& _hostLoginWhiteObj)
{
    m_hostLoginWhiteObj = _hostLoginWhiteObj;
    m_hostLoginWhiteObjHasBeenSet = true;
}

bool AddLoginWhiteListsRequest::HostLoginWhiteObjHasBeenSet() const
{
    return m_hostLoginWhiteObjHasBeenSet;
}

string AddLoginWhiteListsRequest::GetProcessType() const
{
    return m_processType;
}

void AddLoginWhiteListsRequest::SetProcessType(const string& _processType)
{
    m_processType = _processType;
    m_processTypeHasBeenSet = true;
}

bool AddLoginWhiteListsRequest::ProcessTypeHasBeenSet() const
{
    return m_processTypeHasBeenSet;
}

uint64_t AddLoginWhiteListsRequest::GetEventId() const
{
    return m_eventId;
}

void AddLoginWhiteListsRequest::SetEventId(const uint64_t& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool AddLoginWhiteListsRequest::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}


