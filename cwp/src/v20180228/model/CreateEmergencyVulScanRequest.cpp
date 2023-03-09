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

#include <tencentcloud/cwp/v20180228/model/CreateEmergencyVulScanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

CreateEmergencyVulScanRequest::CreateEmergencyVulScanRequest() :
    m_vulIdHasBeenSet(false),
    m_uuidsHasBeenSet(false),
    m_timeoutPeriodHasBeenSet(false)
{
}

string CreateEmergencyVulScanRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vulIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vulId, allocator);
    }

    if (m_uuidsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uuids";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uuids.begin(); itr != m_uuids.end(); ++itr)
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


uint64_t CreateEmergencyVulScanRequest::GetVulId() const
{
    return m_vulId;
}

void CreateEmergencyVulScanRequest::SetVulId(const uint64_t& _vulId)
{
    m_vulId = _vulId;
    m_vulIdHasBeenSet = true;
}

bool CreateEmergencyVulScanRequest::VulIdHasBeenSet() const
{
    return m_vulIdHasBeenSet;
}

vector<string> CreateEmergencyVulScanRequest::GetUuids() const
{
    return m_uuids;
}

void CreateEmergencyVulScanRequest::SetUuids(const vector<string>& _uuids)
{
    m_uuids = _uuids;
    m_uuidsHasBeenSet = true;
}

bool CreateEmergencyVulScanRequest::UuidsHasBeenSet() const
{
    return m_uuidsHasBeenSet;
}

uint64_t CreateEmergencyVulScanRequest::GetTimeoutPeriod() const
{
    return m_timeoutPeriod;
}

void CreateEmergencyVulScanRequest::SetTimeoutPeriod(const uint64_t& _timeoutPeriod)
{
    m_timeoutPeriod = _timeoutPeriod;
    m_timeoutPeriodHasBeenSet = true;
}

bool CreateEmergencyVulScanRequest::TimeoutPeriodHasBeenSet() const
{
    return m_timeoutPeriodHasBeenSet;
}


