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

#include <tencentcloud/vod/v20180717/model/ConfirmEventsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace rapidjson;
using namespace std;

ConfirmEventsRequest::ConfirmEventsRequest() :
    m_eventHandlesHasBeenSet(false),
    m_extInfoHasBeenSet(false),
    m_subAppIdHasBeenSet(false)
{
}

string ConfirmEventsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_eventHandlesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EventHandles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_eventHandles.begin(); itr != m_eventHandles.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_extInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExtInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_extInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ConfirmEventsRequest::GetEventHandles() const
{
    return m_eventHandles;
}

void ConfirmEventsRequest::SetEventHandles(const vector<string>& _eventHandles)
{
    m_eventHandles = _eventHandles;
    m_eventHandlesHasBeenSet = true;
}

bool ConfirmEventsRequest::EventHandlesHasBeenSet() const
{
    return m_eventHandlesHasBeenSet;
}

string ConfirmEventsRequest::GetExtInfo() const
{
    return m_extInfo;
}

void ConfirmEventsRequest::SetExtInfo(const string& _extInfo)
{
    m_extInfo = _extInfo;
    m_extInfoHasBeenSet = true;
}

bool ConfirmEventsRequest::ExtInfoHasBeenSet() const
{
    return m_extInfoHasBeenSet;
}

uint64_t ConfirmEventsRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ConfirmEventsRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ConfirmEventsRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}


