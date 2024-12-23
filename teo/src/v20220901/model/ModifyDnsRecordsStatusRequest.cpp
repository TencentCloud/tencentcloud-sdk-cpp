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

#include <tencentcloud/teo/v20220901/model/ModifyDnsRecordsStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifyDnsRecordsStatusRequest::ModifyDnsRecordsStatusRequest() :
    m_zoneIdHasBeenSet(false),
    m_recordsToEnableHasBeenSet(false),
    m_recordsToDisableHasBeenSet(false)
{
}

string ModifyDnsRecordsStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordsToEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordsToEnable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recordsToEnable.begin(); itr != m_recordsToEnable.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_recordsToDisableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordsToDisable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recordsToDisable.begin(); itr != m_recordsToDisable.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDnsRecordsStatusRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyDnsRecordsStatusRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyDnsRecordsStatusRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<string> ModifyDnsRecordsStatusRequest::GetRecordsToEnable() const
{
    return m_recordsToEnable;
}

void ModifyDnsRecordsStatusRequest::SetRecordsToEnable(const vector<string>& _recordsToEnable)
{
    m_recordsToEnable = _recordsToEnable;
    m_recordsToEnableHasBeenSet = true;
}

bool ModifyDnsRecordsStatusRequest::RecordsToEnableHasBeenSet() const
{
    return m_recordsToEnableHasBeenSet;
}

vector<string> ModifyDnsRecordsStatusRequest::GetRecordsToDisable() const
{
    return m_recordsToDisable;
}

void ModifyDnsRecordsStatusRequest::SetRecordsToDisable(const vector<string>& _recordsToDisable)
{
    m_recordsToDisable = _recordsToDisable;
    m_recordsToDisableHasBeenSet = true;
}

bool ModifyDnsRecordsStatusRequest::RecordsToDisableHasBeenSet() const
{
    return m_recordsToDisableHasBeenSet;
}


