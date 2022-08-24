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

#include <tencentcloud/vod/v20180717/model/TrtcRecordInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

TrtcRecordInfo::TrtcRecordInfo() :
    m_sdkAppIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_userIdsHasBeenSet(false)
{
}

CoreInternalOutcome TrtcRecordInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SdkAppId") && !value["SdkAppId"].IsNull())
    {
        if (!value["SdkAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrtcRecordInfo.SdkAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sdkAppId = value["SdkAppId"].GetUint64();
        m_sdkAppIdHasBeenSet = true;
    }

    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrtcRecordInfo.RoomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = string(value["RoomId"].GetString());
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrtcRecordInfo.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("UserIds") && !value["UserIds"].IsNull())
    {
        if (!value["UserIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TrtcRecordInfo.UserIds` is not array type"));

        const rapidjson::Value &tmpValue = value["UserIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_userIds.push_back((*itr).GetString());
        }
        m_userIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrtcRecordInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_userIds.begin(); itr != m_userIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t TrtcRecordInfo::GetSdkAppId() const
{
    return m_sdkAppId;
}

void TrtcRecordInfo::SetSdkAppId(const uint64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool TrtcRecordInfo::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string TrtcRecordInfo::GetRoomId() const
{
    return m_roomId;
}

void TrtcRecordInfo::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool TrtcRecordInfo::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string TrtcRecordInfo::GetTaskId() const
{
    return m_taskId;
}

void TrtcRecordInfo::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool TrtcRecordInfo::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<string> TrtcRecordInfo::GetUserIds() const
{
    return m_userIds;
}

void TrtcRecordInfo::SetUserIds(const vector<string>& _userIds)
{
    m_userIds = _userIds;
    m_userIdsHasBeenSet = true;
}

bool TrtcRecordInfo::UserIdsHasBeenSet() const
{
    return m_userIdsHasBeenSet;
}

