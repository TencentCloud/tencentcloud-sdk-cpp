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

#include <tencentcloud/privatedns/v20201028/model/ModifyRecordsStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

ModifyRecordsStatusRequest::ModifyRecordsStatusRequest() :
    m_zoneIdHasBeenSet(false),
    m_recordIdsHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string ModifyRecordsStatusRequest::ToJsonString() const
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

    if (m_recordIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_recordIds.begin(); itr != m_recordIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyRecordsStatusRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyRecordsStatusRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyRecordsStatusRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<int64_t> ModifyRecordsStatusRequest::GetRecordIds() const
{
    return m_recordIds;
}

void ModifyRecordsStatusRequest::SetRecordIds(const vector<int64_t>& _recordIds)
{
    m_recordIds = _recordIds;
    m_recordIdsHasBeenSet = true;
}

bool ModifyRecordsStatusRequest::RecordIdsHasBeenSet() const
{
    return m_recordIdsHasBeenSet;
}

string ModifyRecordsStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifyRecordsStatusRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyRecordsStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


