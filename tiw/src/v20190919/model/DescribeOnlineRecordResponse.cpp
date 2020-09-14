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
using namespace rapidjson;
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
    m_replayUrlHasBeenSet(false)
{
}

CoreInternalOutcome DescribeOnlineRecordResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("FinishReason") && !rsp["FinishReason"].IsNull())
    {
        if (!rsp["FinishReason"].IsString())
        {
            return CoreInternalOutcome(Error("response `FinishReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishReason = string(rsp["FinishReason"].GetString());
        m_finishReasonHasBeenSet = true;
    }

    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("RoomId") && !rsp["RoomId"].IsNull())
    {
        if (!rsp["RoomId"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RoomId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = rsp["RoomId"].GetInt64();
        m_roomIdHasBeenSet = true;
    }

    if (rsp.HasMember("GroupId") && !rsp["GroupId"].IsNull())
    {
        if (!rsp["GroupId"].IsString())
        {
            return CoreInternalOutcome(Error("response `GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(rsp["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (rsp.HasMember("RecordUserId") && !rsp["RecordUserId"].IsNull())
    {
        if (!rsp["RecordUserId"].IsString())
        {
            return CoreInternalOutcome(Error("response `RecordUserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordUserId = string(rsp["RecordUserId"].GetString());
        m_recordUserIdHasBeenSet = true;
    }

    if (rsp.HasMember("RecordStartTime") && !rsp["RecordStartTime"].IsNull())
    {
        if (!rsp["RecordStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RecordStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordStartTime = rsp["RecordStartTime"].GetInt64();
        m_recordStartTimeHasBeenSet = true;
    }

    if (rsp.HasMember("RecordStopTime") && !rsp["RecordStopTime"].IsNull())
    {
        if (!rsp["RecordStopTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RecordStopTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordStopTime = rsp["RecordStopTime"].GetInt64();
        m_recordStopTimeHasBeenSet = true;
    }

    if (rsp.HasMember("TotalTime") && !rsp["TotalTime"].IsNull())
    {
        if (!rsp["TotalTime"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `TotalTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTime = rsp["TotalTime"].GetInt64();
        m_totalTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ExceptionCnt") && !rsp["ExceptionCnt"].IsNull())
    {
        if (!rsp["ExceptionCnt"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ExceptionCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exceptionCnt = rsp["ExceptionCnt"].GetInt64();
        m_exceptionCntHasBeenSet = true;
    }

    if (rsp.HasMember("OmittedDurations") && !rsp["OmittedDurations"].IsNull())
    {
        if (!rsp["OmittedDurations"].IsArray())
            return CoreInternalOutcome(Error("response `OmittedDurations` is not array type"));

        const Value &tmpValue = rsp["OmittedDurations"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `VideoInfos` is not array type"));

        const Value &tmpValue = rsp["VideoInfos"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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
            return CoreInternalOutcome(Error("response `ReplayUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replayUrl = string(rsp["ReplayUrl"].GetString());
        m_replayUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


