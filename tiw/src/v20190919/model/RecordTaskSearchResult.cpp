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

#include <tencentcloud/tiw/v20190919/model/RecordTaskSearchResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiw::V20190919::Model;
using namespace std;

RecordTaskSearchResult::RecordTaskSearchResult() :
    m_taskIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_sdkAppIdHasBeenSet(false),
    m_resultHasBeenSet(false)
{
}

CoreInternalOutcome RecordTaskSearchResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskSearchResult.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskSearchResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskSearchResult.RoomId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = value["RoomId"].GetInt64();
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskSearchResult.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("SdkAppId") && !value["SdkAppId"].IsNull())
    {
        if (!value["SdkAppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskSearchResult.SdkAppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sdkAppId = value["SdkAppId"].GetInt64();
        m_sdkAppIdHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RecordTaskSearchResult.Result` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_result.Deserialize(value["Result"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_resultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RecordTaskSearchResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_result.ToJsonObject(value[key.c_str()], allocator);
    }

}


string RecordTaskSearchResult::GetTaskId() const
{
    return m_taskId;
}

void RecordTaskSearchResult::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool RecordTaskSearchResult::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string RecordTaskSearchResult::GetStatus() const
{
    return m_status;
}

void RecordTaskSearchResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RecordTaskSearchResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t RecordTaskSearchResult::GetRoomId() const
{
    return m_roomId;
}

void RecordTaskSearchResult::SetRoomId(const int64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool RecordTaskSearchResult::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string RecordTaskSearchResult::GetCreateTime() const
{
    return m_createTime;
}

void RecordTaskSearchResult::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RecordTaskSearchResult::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t RecordTaskSearchResult::GetSdkAppId() const
{
    return m_sdkAppId;
}

void RecordTaskSearchResult::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool RecordTaskSearchResult::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

RecordTaskResult RecordTaskSearchResult::GetResult() const
{
    return m_result;
}

void RecordTaskSearchResult::SetResult(const RecordTaskResult& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool RecordTaskSearchResult::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

