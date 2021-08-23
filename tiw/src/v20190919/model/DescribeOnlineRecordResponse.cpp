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

#include <tencentcloud/tiw/v20190919/model/DescribeOnlineRecordResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

DescribeOnlineRecordResponse::DescribeOnlineRecordResponse() :
    m_finishReasonHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_recordUserIdHasBeenSet(false),
    m_recordStartTimeHasBeenSet(false),
    m_recordStopTimeHasBeenSet(false),
    m_totalTimeHasBeenSet(false),
    m_exceptionCntHasBeenSet(false),
    m_omittedDurationsHasBeenSet(false),
    m_videoInfosHasBeenSet(false),
    m_replayUrlHasBeenSet(false),
    m_interruptsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeOnlineRecordResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("FinishReason") && !rsp["FinishReason"].IsNull())
    {
        if (!rsp["FinishReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FinishReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishReason = string(rsp["FinishReason"].GetString());
        m_finishReasonHasBeenSet = true;
    }

    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
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

    if (rsp.HasMember("RoomId") && !rsp["RoomId"].IsNull())
    {
        if (!rsp["RoomId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = rsp["RoomId"].GetInt64();
        m_roomIdHasBeenSet = true;
    }

    if (rsp.HasMember("GroupId") && !rsp["GroupId"].IsNull())
    {
        if (!rsp["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(rsp["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (rsp.HasMember("RecordUserId") && !rsp["RecordUserId"].IsNull())
    {
        if (!rsp["RecordUserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordUserId = string(rsp["RecordUserId"].GetString());
        m_recordUserIdHasBeenSet = true;
    }

    if (rsp.HasMember("RecordStartTime") && !rsp["RecordStartTime"].IsNull())
    {
        if (!rsp["RecordStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordStartTime = rsp["RecordStartTime"].GetInt64();
        m_recordStartTimeHasBeenSet = true;
    }

    if (rsp.HasMember("RecordStopTime") && !rsp["RecordStopTime"].IsNull())
    {
        if (!rsp["RecordStopTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordStopTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordStopTime = rsp["RecordStopTime"].GetInt64();
        m_recordStopTimeHasBeenSet = true;
    }

    if (rsp.HasMember("TotalTime") && !rsp["TotalTime"].IsNull())
    {
        if (!rsp["TotalTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTime = rsp["TotalTime"].GetInt64();
        m_totalTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ExceptionCnt") && !rsp["ExceptionCnt"].IsNull())
    {
        if (!rsp["ExceptionCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExceptionCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exceptionCnt = rsp["ExceptionCnt"].GetInt64();
        m_exceptionCntHasBeenSet = true;
    }

    if (rsp.HasMember("OmittedDurations") && !rsp["OmittedDurations"].IsNull())
    {
        if (!rsp["OmittedDurations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OmittedDurations` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OmittedDurations"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OmittedDuration item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_omittedDurations.push_back(item);
        }
        m_omittedDurationsHasBeenSet = true;
    }

    if (rsp.HasMember("VideoInfos") && !rsp["VideoInfos"].IsNull())
    {
        if (!rsp["VideoInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VideoInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VideoInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VideoInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_videoInfos.push_back(item);
        }
        m_videoInfosHasBeenSet = true;
    }

    if (rsp.HasMember("ReplayUrl") && !rsp["ReplayUrl"].IsNull())
    {
        if (!rsp["ReplayUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReplayUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replayUrl = string(rsp["ReplayUrl"].GetString());
        m_replayUrlHasBeenSet = true;
    }

    if (rsp.HasMember("Interrupts") && !rsp["Interrupts"].IsNull())
    {
        if (!rsp["Interrupts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Interrupts` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Interrupts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Interrupt item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_interrupts.push_back(item);
        }
        m_interruptsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeOnlineRecordResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_finishReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishReason.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roomId, allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordUserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_recordStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordStartTime, allocator);
    }

    if (m_recordStopTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordStopTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordStopTime, allocator);
    }

    if (m_totalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTime, allocator);
    }

    if (m_exceptionCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptionCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exceptionCnt, allocator);
    }

    if (m_omittedDurationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OmittedDurations";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_omittedDurations.begin(); itr != m_omittedDurations.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_videoInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_videoInfos.begin(); itr != m_videoInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_replayUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplayUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replayUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_interruptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Interrupts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_interrupts.begin(); itr != m_interrupts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string DescribeOnlineRecordResponse::GetFinishReason() const
{
    return m_finishReason;
}

bool DescribeOnlineRecordResponse::FinishReasonHasBeenSet() const
{
    return m_finishReasonHasBeenSet;
}

string DescribeOnlineRecordResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeOnlineRecordResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeOnlineRecordResponse::GetStatus() const
{
    return m_status;
}

bool DescribeOnlineRecordResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeOnlineRecordResponse::GetRoomId() const
{
    return m_roomId;
}

bool DescribeOnlineRecordResponse::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string DescribeOnlineRecordResponse::GetGroupId() const
{
    return m_groupId;
}

bool DescribeOnlineRecordResponse::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DescribeOnlineRecordResponse::GetRecordUserId() const
{
    return m_recordUserId;
}

bool DescribeOnlineRecordResponse::RecordUserIdHasBeenSet() const
{
    return m_recordUserIdHasBeenSet;
}

int64_t DescribeOnlineRecordResponse::GetRecordStartTime() const
{
    return m_recordStartTime;
}

bool DescribeOnlineRecordResponse::RecordStartTimeHasBeenSet() const
{
    return m_recordStartTimeHasBeenSet;
}

int64_t DescribeOnlineRecordResponse::GetRecordStopTime() const
{
    return m_recordStopTime;
}

bool DescribeOnlineRecordResponse::RecordStopTimeHasBeenSet() const
{
    return m_recordStopTimeHasBeenSet;
}

int64_t DescribeOnlineRecordResponse::GetTotalTime() const
{
    return m_totalTime;
}

bool DescribeOnlineRecordResponse::TotalTimeHasBeenSet() const
{
    return m_totalTimeHasBeenSet;
}

int64_t DescribeOnlineRecordResponse::GetExceptionCnt() const
{
    return m_exceptionCnt;
}

bool DescribeOnlineRecordResponse::ExceptionCntHasBeenSet() const
{
    return m_exceptionCntHasBeenSet;
}

vector<OmittedDuration> DescribeOnlineRecordResponse::GetOmittedDurations() const
{
    return m_omittedDurations;
}

bool DescribeOnlineRecordResponse::OmittedDurationsHasBeenSet() const
{
    return m_omittedDurationsHasBeenSet;
}

vector<VideoInfo> DescribeOnlineRecordResponse::GetVideoInfos() const
{
    return m_videoInfos;
}

bool DescribeOnlineRecordResponse::VideoInfosHasBeenSet() const
{
    return m_videoInfosHasBeenSet;
}

string DescribeOnlineRecordResponse::GetReplayUrl() const
{
    return m_replayUrl;
}

bool DescribeOnlineRecordResponse::ReplayUrlHasBeenSet() const
{
    return m_replayUrlHasBeenSet;
}

vector<Interrupt> DescribeOnlineRecordResponse::GetInterrupts() const
{
    return m_interrupts;
}

bool DescribeOnlineRecordResponse::InterruptsHasBeenSet() const
{
    return m_interruptsHasBeenSet;
}


