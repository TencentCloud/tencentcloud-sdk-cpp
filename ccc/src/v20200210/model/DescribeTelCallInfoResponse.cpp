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

#include <tencentcloud/ccc/v20200210/model/DescribeTelCallInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

DescribeTelCallInfoResponse::DescribeTelCallInfoResponse() :
    m_telCallOutCountHasBeenSet(false),
    m_telCallInCountHasBeenSet(false),
    m_seatUsedCountHasBeenSet(false),
    m_voipCallInCountHasBeenSet(false),
    m_vOIPCallInCountHasBeenSet(false),
    m_asrOfflineCountHasBeenSet(false),
    m_asrRealtimeCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTelCallInfoResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("TelCallOutCount") && !rsp["TelCallOutCount"].IsNull())
    {
        if (!rsp["TelCallOutCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TelCallOutCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_telCallOutCount = rsp["TelCallOutCount"].GetInt64();
        m_telCallOutCountHasBeenSet = true;
    }

    if (rsp.HasMember("TelCallInCount") && !rsp["TelCallInCount"].IsNull())
    {
        if (!rsp["TelCallInCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TelCallInCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_telCallInCount = rsp["TelCallInCount"].GetInt64();
        m_telCallInCountHasBeenSet = true;
    }

    if (rsp.HasMember("SeatUsedCount") && !rsp["SeatUsedCount"].IsNull())
    {
        if (!rsp["SeatUsedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeatUsedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_seatUsedCount = rsp["SeatUsedCount"].GetInt64();
        m_seatUsedCountHasBeenSet = true;
    }

    if (rsp.HasMember("VoipCallInCount") && !rsp["VoipCallInCount"].IsNull())
    {
        if (!rsp["VoipCallInCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VoipCallInCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_voipCallInCount = rsp["VoipCallInCount"].GetInt64();
        m_voipCallInCountHasBeenSet = true;
    }

    if (rsp.HasMember("VOIPCallInCount") && !rsp["VOIPCallInCount"].IsNull())
    {
        if (!rsp["VOIPCallInCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VOIPCallInCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vOIPCallInCount = rsp["VOIPCallInCount"].GetInt64();
        m_vOIPCallInCountHasBeenSet = true;
    }

    if (rsp.HasMember("AsrOfflineCount") && !rsp["AsrOfflineCount"].IsNull())
    {
        if (!rsp["AsrOfflineCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AsrOfflineCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_asrOfflineCount = rsp["AsrOfflineCount"].GetInt64();
        m_asrOfflineCountHasBeenSet = true;
    }

    if (rsp.HasMember("AsrRealtimeCount") && !rsp["AsrRealtimeCount"].IsNull())
    {
        if (!rsp["AsrRealtimeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AsrRealtimeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_asrRealtimeCount = rsp["AsrRealtimeCount"].GetInt64();
        m_asrRealtimeCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTelCallInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_telCallOutCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TelCallOutCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_telCallOutCount, allocator);
    }

    if (m_telCallInCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TelCallInCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_telCallInCount, allocator);
    }

    if (m_seatUsedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeatUsedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_seatUsedCount, allocator);
    }

    if (m_voipCallInCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoipCallInCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_voipCallInCount, allocator);
    }

    if (m_vOIPCallInCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VOIPCallInCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vOIPCallInCount, allocator);
    }

    if (m_asrOfflineCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrOfflineCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asrOfflineCount, allocator);
    }

    if (m_asrRealtimeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrRealtimeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_asrRealtimeCount, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeTelCallInfoResponse::GetTelCallOutCount() const
{
    return m_telCallOutCount;
}

bool DescribeTelCallInfoResponse::TelCallOutCountHasBeenSet() const
{
    return m_telCallOutCountHasBeenSet;
}

int64_t DescribeTelCallInfoResponse::GetTelCallInCount() const
{
    return m_telCallInCount;
}

bool DescribeTelCallInfoResponse::TelCallInCountHasBeenSet() const
{
    return m_telCallInCountHasBeenSet;
}

int64_t DescribeTelCallInfoResponse::GetSeatUsedCount() const
{
    return m_seatUsedCount;
}

bool DescribeTelCallInfoResponse::SeatUsedCountHasBeenSet() const
{
    return m_seatUsedCountHasBeenSet;
}

int64_t DescribeTelCallInfoResponse::GetVoipCallInCount() const
{
    return m_voipCallInCount;
}

bool DescribeTelCallInfoResponse::VoipCallInCountHasBeenSet() const
{
    return m_voipCallInCountHasBeenSet;
}

int64_t DescribeTelCallInfoResponse::GetVOIPCallInCount() const
{
    return m_vOIPCallInCount;
}

bool DescribeTelCallInfoResponse::VOIPCallInCountHasBeenSet() const
{
    return m_vOIPCallInCountHasBeenSet;
}

int64_t DescribeTelCallInfoResponse::GetAsrOfflineCount() const
{
    return m_asrOfflineCount;
}

bool DescribeTelCallInfoResponse::AsrOfflineCountHasBeenSet() const
{
    return m_asrOfflineCountHasBeenSet;
}

int64_t DescribeTelCallInfoResponse::GetAsrRealtimeCount() const
{
    return m_asrRealtimeCount;
}

bool DescribeTelCallInfoResponse::AsrRealtimeCountHasBeenSet() const
{
    return m_asrRealtimeCountHasBeenSet;
}


