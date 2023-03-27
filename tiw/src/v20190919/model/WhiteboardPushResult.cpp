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

#include <tencentcloud/tiw/v20190919/model/WhiteboardPushResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

WhiteboardPushResult::WhiteboardPushResult() :
    m_finishReasonHasBeenSet(false),
    m_exceptionCntHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_pushStartTimeHasBeenSet(false),
    m_pushStopTimeHasBeenSet(false),
    m_iMSyncTimeHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMsgHasBeenSet(false)
{
}

CoreInternalOutcome WhiteboardPushResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FinishReason") && !value["FinishReason"].IsNull())
    {
        if (!value["FinishReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboardPushResult.FinishReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_finishReason = string(value["FinishReason"].GetString());
        m_finishReasonHasBeenSet = true;
    }

    if (value.HasMember("ExceptionCnt") && !value["ExceptionCnt"].IsNull())
    {
        if (!value["ExceptionCnt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboardPushResult.ExceptionCnt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exceptionCnt = value["ExceptionCnt"].GetInt64();
        m_exceptionCntHasBeenSet = true;
    }

    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboardPushResult.RoomId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = value["RoomId"].GetInt64();
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboardPushResult.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("PushStartTime") && !value["PushStartTime"].IsNull())
    {
        if (!value["PushStartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboardPushResult.PushStartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pushStartTime = value["PushStartTime"].GetInt64();
        m_pushStartTimeHasBeenSet = true;
    }

    if (value.HasMember("PushStopTime") && !value["PushStopTime"].IsNull())
    {
        if (!value["PushStopTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboardPushResult.PushStopTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_pushStopTime = value["PushStopTime"].GetInt64();
        m_pushStopTimeHasBeenSet = true;
    }

    if (value.HasMember("IMSyncTime") && !value["IMSyncTime"].IsNull())
    {
        if (!value["IMSyncTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboardPushResult.IMSyncTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iMSyncTime = value["IMSyncTime"].GetInt64();
        m_iMSyncTimeHasBeenSet = true;
    }

    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboardPushResult.ErrorCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = value["ErrorCode"].GetInt64();
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMsg") && !value["ErrorMsg"].IsNull())
    {
        if (!value["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `WhiteboardPushResult.ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(value["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void WhiteboardPushResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_pushStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pushStartTime, allocator);
    }

    if (m_pushStopTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PushStopTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pushStopTime, allocator);
    }

    if (m_iMSyncTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IMSyncTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iMSyncTime, allocator);
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


string WhiteboardPushResult::GetFinishReason() const
{
    return m_finishReason;
}

void WhiteboardPushResult::SetFinishReason(const string& _finishReason)
{
    m_finishReason = _finishReason;
    m_finishReasonHasBeenSet = true;
}

bool WhiteboardPushResult::FinishReasonHasBeenSet() const
{
    return m_finishReasonHasBeenSet;
}

int64_t WhiteboardPushResult::GetExceptionCnt() const
{
    return m_exceptionCnt;
}

void WhiteboardPushResult::SetExceptionCnt(const int64_t& _exceptionCnt)
{
    m_exceptionCnt = _exceptionCnt;
    m_exceptionCntHasBeenSet = true;
}

bool WhiteboardPushResult::ExceptionCntHasBeenSet() const
{
    return m_exceptionCntHasBeenSet;
}

int64_t WhiteboardPushResult::GetRoomId() const
{
    return m_roomId;
}

void WhiteboardPushResult::SetRoomId(const int64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool WhiteboardPushResult::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string WhiteboardPushResult::GetGroupId() const
{
    return m_groupId;
}

void WhiteboardPushResult::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool WhiteboardPushResult::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

int64_t WhiteboardPushResult::GetPushStartTime() const
{
    return m_pushStartTime;
}

void WhiteboardPushResult::SetPushStartTime(const int64_t& _pushStartTime)
{
    m_pushStartTime = _pushStartTime;
    m_pushStartTimeHasBeenSet = true;
}

bool WhiteboardPushResult::PushStartTimeHasBeenSet() const
{
    return m_pushStartTimeHasBeenSet;
}

int64_t WhiteboardPushResult::GetPushStopTime() const
{
    return m_pushStopTime;
}

void WhiteboardPushResult::SetPushStopTime(const int64_t& _pushStopTime)
{
    m_pushStopTime = _pushStopTime;
    m_pushStopTimeHasBeenSet = true;
}

bool WhiteboardPushResult::PushStopTimeHasBeenSet() const
{
    return m_pushStopTimeHasBeenSet;
}

int64_t WhiteboardPushResult::GetIMSyncTime() const
{
    return m_iMSyncTime;
}

void WhiteboardPushResult::SetIMSyncTime(const int64_t& _iMSyncTime)
{
    m_iMSyncTime = _iMSyncTime;
    m_iMSyncTimeHasBeenSet = true;
}

bool WhiteboardPushResult::IMSyncTimeHasBeenSet() const
{
    return m_iMSyncTimeHasBeenSet;
}

int64_t WhiteboardPushResult::GetErrorCode() const
{
    return m_errorCode;
}

void WhiteboardPushResult::SetErrorCode(const int64_t& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool WhiteboardPushResult::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string WhiteboardPushResult::GetErrorMsg() const
{
    return m_errorMsg;
}

void WhiteboardPushResult::SetErrorMsg(const string& _errorMsg)
{
    m_errorMsg = _errorMsg;
    m_errorMsgHasBeenSet = true;
}

bool WhiteboardPushResult::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

