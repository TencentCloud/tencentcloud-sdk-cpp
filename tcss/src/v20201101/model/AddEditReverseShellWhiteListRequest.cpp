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

#include <tencentcloud/tcss/v20201101/model/AddEditReverseShellWhiteListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

AddEditReverseShellWhiteListRequest::AddEditReverseShellWhiteListRequest() :
    m_whiteListInfoHasBeenSet(false),
    m_eventIdHasBeenSet(false)
{
}

string AddEditReverseShellWhiteListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_whiteListInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WhiteListInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_whiteListInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_eventIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


ReverseShellWhiteListInfo AddEditReverseShellWhiteListRequest::GetWhiteListInfo() const
{
    return m_whiteListInfo;
}

void AddEditReverseShellWhiteListRequest::SetWhiteListInfo(const ReverseShellWhiteListInfo& _whiteListInfo)
{
    m_whiteListInfo = _whiteListInfo;
    m_whiteListInfoHasBeenSet = true;
}

bool AddEditReverseShellWhiteListRequest::WhiteListInfoHasBeenSet() const
{
    return m_whiteListInfoHasBeenSet;
}

string AddEditReverseShellWhiteListRequest::GetEventId() const
{
    return m_eventId;
}

void AddEditReverseShellWhiteListRequest::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool AddEditReverseShellWhiteListRequest::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}


