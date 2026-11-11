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

#include <tencentcloud/live/v20180801/model/DescribeAvatarEditingLiveResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeAvatarEditingLiveResponse::DescribeAvatarEditingLiveResponse() :
    m_channelIdHasBeenSet(false),
    m_liveIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_phaseHasBeenSet(false),
    m_callModeHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_traceIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAvatarEditingLiveResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ChannelId") && !rsp["ChannelId"].IsNull())
    {
        if (!rsp["ChannelId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChannelId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_channelId = string(rsp["ChannelId"].GetString());
        m_channelIdHasBeenSet = true;
    }

    if (rsp.HasMember("LiveId") && !rsp["LiveId"].IsNull())
    {
        if (!rsp["LiveId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_liveId = string(rsp["LiveId"].GetString());
        m_liveIdHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Phase") && !rsp["Phase"].IsNull())
    {
        if (!rsp["Phase"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Phase` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_phase = string(rsp["Phase"].GetString());
        m_phaseHasBeenSet = true;
    }

    if (rsp.HasMember("CallMode") && !rsp["CallMode"].IsNull())
    {
        if (!rsp["CallMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callMode = string(rsp["CallMode"].GetString());
        m_callModeHasBeenSet = true;
    }

    if (rsp.HasMember("CreatedAt") && !rsp["CreatedAt"].IsNull())
    {
        if (!rsp["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(rsp["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = string(rsp["StartTime"].GetString());
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = string(rsp["EndTime"].GetString());
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("TraceId") && !rsp["TraceId"].IsNull())
    {
        if (!rsp["TraceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TraceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceId = string(rsp["TraceId"].GetString());
        m_traceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAvatarEditingLiveResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_liveIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LiveId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_liveId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_phaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Phase";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_phase.c_str(), allocator).Move(), allocator);
    }

    if (m_callModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callMode.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_traceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceId.c_str(), allocator).Move(), allocator);
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


string DescribeAvatarEditingLiveResponse::GetChannelId() const
{
    return m_channelId;
}

bool DescribeAvatarEditingLiveResponse::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string DescribeAvatarEditingLiveResponse::GetLiveId() const
{
    return m_liveId;
}

bool DescribeAvatarEditingLiveResponse::LiveIdHasBeenSet() const
{
    return m_liveIdHasBeenSet;
}

string DescribeAvatarEditingLiveResponse::GetStatus() const
{
    return m_status;
}

bool DescribeAvatarEditingLiveResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DescribeAvatarEditingLiveResponse::GetPhase() const
{
    return m_phase;
}

bool DescribeAvatarEditingLiveResponse::PhaseHasBeenSet() const
{
    return m_phaseHasBeenSet;
}

string DescribeAvatarEditingLiveResponse::GetCallMode() const
{
    return m_callMode;
}

bool DescribeAvatarEditingLiveResponse::CallModeHasBeenSet() const
{
    return m_callModeHasBeenSet;
}

string DescribeAvatarEditingLiveResponse::GetCreatedAt() const
{
    return m_createdAt;
}

bool DescribeAvatarEditingLiveResponse::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string DescribeAvatarEditingLiveResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeAvatarEditingLiveResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeAvatarEditingLiveResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeAvatarEditingLiveResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeAvatarEditingLiveResponse::GetTraceId() const
{
    return m_traceId;
}

bool DescribeAvatarEditingLiveResponse::TraceIdHasBeenSet() const
{
    return m_traceIdHasBeenSet;
}


