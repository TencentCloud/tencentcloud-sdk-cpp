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

#include <tencentcloud/evt/v20250217/model/PutMessageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Evt::V20250217::Model;
using namespace std;

PutMessageRequest::PutMessageRequest() :
    m_eventIdHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
}

string PutMessageRequest::ToJsonString() const
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

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_data.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string PutMessageRequest::GetEventId() const
{
    return m_eventId;
}

void PutMessageRequest::SetEventId(const string& _eventId)
{
    m_eventId = _eventId;
    m_eventIdHasBeenSet = true;
}

bool PutMessageRequest::EventIdHasBeenSet() const
{
    return m_eventIdHasBeenSet;
}

string PutMessageRequest::GetData() const
{
    return m_data;
}

void PutMessageRequest::SetData(const string& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool PutMessageRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

string PutMessageRequest::GetSource() const
{
    return m_source;
}

void PutMessageRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool PutMessageRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}


