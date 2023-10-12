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

#include <tencentcloud/lcic/v20220817/model/ClassScoreItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

ClassScoreItem::ClassScoreItem() :
    m_roomIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_scoreMsgHasBeenSet(false)
{
}

CoreInternalOutcome ClassScoreItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassScoreItem.RoomId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = value["RoomId"].GetUint64();
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClassScoreItem.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassScoreItem.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClassScoreItem.Score` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetUint64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("ScoreMsg") && !value["ScoreMsg"].IsNull())
    {
        if (!value["ScoreMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClassScoreItem.ScoreMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scoreMsg = string(value["ScoreMsg"].GetString());
        m_scoreMsgHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClassScoreItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roomId, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_scoreMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScoreMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scoreMsg.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ClassScoreItem::GetRoomId() const
{
    return m_roomId;
}

void ClassScoreItem::SetRoomId(const uint64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool ClassScoreItem::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string ClassScoreItem::GetUserId() const
{
    return m_userId;
}

void ClassScoreItem::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool ClassScoreItem::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

uint64_t ClassScoreItem::GetCreateTime() const
{
    return m_createTime;
}

void ClassScoreItem::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ClassScoreItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t ClassScoreItem::GetScore() const
{
    return m_score;
}

void ClassScoreItem::SetScore(const uint64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool ClassScoreItem::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

string ClassScoreItem::GetScoreMsg() const
{
    return m_scoreMsg;
}

void ClassScoreItem::SetScoreMsg(const string& _scoreMsg)
{
    m_scoreMsg = _scoreMsg;
    m_scoreMsgHasBeenSet = true;
}

bool ClassScoreItem::ScoreMsgHasBeenSet() const
{
    return m_scoreMsgHasBeenSet;
}

