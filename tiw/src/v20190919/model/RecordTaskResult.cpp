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

#include <tencentcloud/tiw/v20190919/model/RecordTaskResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

RecordTaskResult::RecordTaskResult() :
    m_finishReasonHasBeenSet(false),
    m_exceptionCntHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_recordStartTimeHasBeenSet(false),
    m_recordStopTimeHasBeenSet(false),
    m_totalTimeHasBeenSet(false),
    m_videoInfosHasBeenSet(false),
    m_omittedDurationsHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMsgHasBeenSet(false)
{
}

CoreInternalOutcome RecordTaskResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FinishReason") && !value["FinishReason"].IsNull())
    {
        if (!value["FinishReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskResult.FinishReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishReason = string(value["FinishReason"].GetString());
        m_finishReasonHasBeenSet = true;
    }

    if (value.HasMember("ExceptionCnt") && !value["ExceptionCnt"].IsNull())
    {
        if (!value["ExceptionCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskResult.ExceptionCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exceptionCnt = value["ExceptionCnt"].GetInt64();
        m_exceptionCntHasBeenSet = true;
    }

    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskResult.RoomId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = value["RoomId"].GetInt64();
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskResult.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("RecordStartTime") && !value["RecordStartTime"].IsNull())
    {
        if (!value["RecordStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskResult.RecordStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordStartTime = value["RecordStartTime"].GetInt64();
        m_recordStartTimeHasBeenSet = true;
    }

    if (value.HasMember("RecordStopTime") && !value["RecordStopTime"].IsNull())
    {
        if (!value["RecordStopTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskResult.RecordStopTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordStopTime = value["RecordStopTime"].GetInt64();
        m_recordStopTimeHasBeenSet = true;
    }

    if (value.HasMember("TotalTime") && !value["TotalTime"].IsNull())
    {
        if (!value["TotalTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskResult.TotalTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalTime = value["TotalTime"].GetInt64();
        m_totalTimeHasBeenSet = true;
    }

    if (value.HasMember("VideoInfos") && !value["VideoInfos"].IsNull())
    {
        if (!value["VideoInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RecordTaskResult.VideoInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["VideoInfos"];
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

    if (value.HasMember("OmittedDurations") && !value["OmittedDurations"].IsNull())
    {
        if (!value["OmittedDurations"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RecordTaskResult.OmittedDurations` is not array type"));

        const rapidjson::Value &tmpValue = value["OmittedDurations"];
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

    if (value.HasMember("Details") && !value["Details"].IsNull())
    {
        if (!value["Details"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskResult.Details` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_details = string(value["Details"].GetString());
        m_detailsHasBeenSet = true;
    }

    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskResult.ErrorCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = value["ErrorCode"].GetInt64();
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMsg") && !value["ErrorMsg"].IsNull())
    {
        if (!value["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskResult.ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(value["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordTaskResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_finishReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinishReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_finishReason.c_str(), allocator).Move(), allocator);
    }

    if (m_exceptionCntHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExceptionCnt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exceptionCnt, allocator);
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

    if (m_detailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Details";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_details.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorCode, allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }

}


string RecordTaskResult::GetFinishReason() const
{
    return m_finishReason;
}

void RecordTaskResult::SetFinishReason(const string& _finishReason)
{
    m_finishReason = _finishReason;
    m_finishReasonHasBeenSet = true;
}

bool RecordTaskResult::FinishReasonHasBeenSet() const
{
    return m_finishReasonHasBeenSet;
}

int64_t RecordTaskResult::GetExceptionCnt() const
{
    return m_exceptionCnt;
}

void RecordTaskResult::SetExceptionCnt(const int64_t& _exceptionCnt)
{
    m_exceptionCnt = _exceptionCnt;
    m_exceptionCntHasBeenSet = true;
}

bool RecordTaskResult::ExceptionCntHasBeenSet() const
{
    return m_exceptionCntHasBeenSet;
}

int64_t RecordTaskResult::GetRoomId() const
{
    return m_roomId;
}

void RecordTaskResult::SetRoomId(const int64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool RecordTaskResult::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string RecordTaskResult::GetGroupId() const
{
    return m_groupId;
}

void RecordTaskResult::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool RecordTaskResult::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t RecordTaskResult::GetRecordStartTime() const
{
    return m_recordStartTime;
}

void RecordTaskResult::SetRecordStartTime(const int64_t& _recordStartTime)
{
    m_recordStartTime = _recordStartTime;
    m_recordStartTimeHasBeenSet = true;
}

bool RecordTaskResult::RecordStartTimeHasBeenSet() const
{
    return m_recordStartTimeHasBeenSet;
}

int64_t RecordTaskResult::GetRecordStopTime() const
{
    return m_recordStopTime;
}

void RecordTaskResult::SetRecordStopTime(const int64_t& _recordStopTime)
{
    m_recordStopTime = _recordStopTime;
    m_recordStopTimeHasBeenSet = true;
}

bool RecordTaskResult::RecordStopTimeHasBeenSet() const
{
    return m_recordStopTimeHasBeenSet;
}

int64_t RecordTaskResult::GetTotalTime() const
{
    return m_totalTime;
}

void RecordTaskResult::SetTotalTime(const int64_t& _totalTime)
{
    m_totalTime = _totalTime;
    m_totalTimeHasBeenSet = true;
}

bool RecordTaskResult::TotalTimeHasBeenSet() const
{
    return m_totalTimeHasBeenSet;
}

vector<VideoInfo> RecordTaskResult::GetVideoInfos() const
{
    return m_videoInfos;
}

void RecordTaskResult::SetVideoInfos(const vector<VideoInfo>& _videoInfos)
{
    m_videoInfos = _videoInfos;
    m_videoInfosHasBeenSet = true;
}

bool RecordTaskResult::VideoInfosHasBeenSet() const
{
    return m_videoInfosHasBeenSet;
}

vector<OmittedDuration> RecordTaskResult::GetOmittedDurations() const
{
    return m_omittedDurations;
}

void RecordTaskResult::SetOmittedDurations(const vector<OmittedDuration>& _omittedDurations)
{
    m_omittedDurations = _omittedDurations;
    m_omittedDurationsHasBeenSet = true;
}

bool RecordTaskResult::OmittedDurationsHasBeenSet() const
{
    return m_omittedDurationsHasBeenSet;
}

string RecordTaskResult::GetDetails() const
{
    return m_details;
}

void RecordTaskResult::SetDetails(const string& _details)
{
    m_details = _details;
    m_detailsHasBeenSet = true;
}

bool RecordTaskResult::DetailsHasBeenSet() const
{
    return m_detailsHasBeenSet;
}

int64_t RecordTaskResult::GetErrorCode() const
{
    return m_errorCode;
}

void RecordTaskResult::SetErrorCode(const int64_t& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool RecordTaskResult::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string RecordTaskResult::GetErrorMsg() const
{
    return m_errorMsg;
}

void RecordTaskResult::SetErrorMsg(const string& _errorMsg)
{
    m_errorMsg = _errorMsg;
    m_errorMsgHasBeenSet = true;
}

bool RecordTaskResult::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

