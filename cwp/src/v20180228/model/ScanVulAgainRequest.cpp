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

#include <tencentcloud/cwp/v20180228/model/ScanVulAgainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ScanVulAgainRequest::ScanVulAgainRequest() :
    m_eventIdsHasBeenSet(false),
    m_uuidsHasBeenSet(false)
{
}

string ScanVulAgainRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_eventIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_eventIds.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uuids.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ScanVulAgainRequest::GetEventIds() const
{
    return m_eventIds;
}

void ScanVulAgainRequest::SetEventIds(const string& _eventIds)
{
    m_eventIds = _eventIds;
    m_eventIdsHasBeenSet = true;
}

bool ScanVulAgainRequest::EventIdsHasBeenSet() const
{
    return m_eventIdsHasBeenSet;
}

string ScanVulAgainRequest::GetUuids() const
{
    return m_uuids;
}

void ScanVulAgainRequest::SetUuids(const string& _uuids)
{
    m_uuids = _uuids;
    m_uuidsHasBeenSet = true;
}

bool ScanVulAgainRequest::UuidsHasBeenSet() const
{
    return m_uuidsHasBeenSet;
}


