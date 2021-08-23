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

#include <tencentcloud/wav/v20210129/model/ChatArchivingDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

ChatArchivingDetail::ChatArchivingDetail() :
    m_msgIdHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_msgTypeHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_toListHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_msgTimeHasBeenSet(false),
    m_videoHasBeenSet(false),
    m_bodyJsonHasBeenSet(false)
{
}

CoreInternalOutcome ChatArchivingDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MsgId") && !value["MsgId"].IsNull())
    {
        if (!value["MsgId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatArchivingDetail.MsgId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgId = string(value["MsgId"].GetString());
        m_msgIdHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatArchivingDetail.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("MsgType") && !value["MsgType"].IsNull())
    {
        if (!value["MsgType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatArchivingDetail.MsgType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msgType = string(value["MsgType"].GetString());
        m_msgTypeHasBeenSet = true;
    }

    if (value.HasMember("From") && !value["From"].IsNull())
    {
        if (!value["From"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatArchivingDetail.From` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_from = string(value["From"].GetString());
        m_fromHasBeenSet = true;
    }

    if (value.HasMember("ToList") && !value["ToList"].IsNull())
    {
        if (!value["ToList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ChatArchivingDetail.ToList` is not array type"));

        const rapidjson::Value &tmpValue = value["ToList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_toList.push_back((*itr).GetString());
        }
        m_toListHasBeenSet = true;
    }

    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatArchivingDetail.RoomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = string(value["RoomId"].GetString());
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("MsgTime") && !value["MsgTime"].IsNull())
    {
        if (!value["MsgTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ChatArchivingDetail.MsgTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_msgTime = value["MsgTime"].GetUint64();
        m_msgTimeHasBeenSet = true;
    }

    if (value.HasMember("Video") && !value["Video"].IsNull())
    {
        if (!value["Video"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ChatArchivingDetail.Video` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_video.Deserialize(value["Video"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_videoHasBeenSet = true;
    }

    if (value.HasMember("BodyJson") && !value["BodyJson"].IsNull())
    {
        if (!value["BodyJson"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ChatArchivingDetail.BodyJson` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bodyJson = string(value["BodyJson"].GetString());
        m_bodyJsonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ChatArchivingDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_msgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgId.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_msgTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msgType.c_str(), allocator).Move(), allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_from.c_str(), allocator).Move(), allocator);
    }

    if (m_toListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_toList.begin(); itr != m_toList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_msgTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgTime, allocator);
    }

    if (m_videoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Video";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_video.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bodyJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BodyJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bodyJson.c_str(), allocator).Move(), allocator);
    }

}


string ChatArchivingDetail::GetMsgId() const
{
    return m_msgId;
}

void ChatArchivingDetail::SetMsgId(const string& _msgId)
{
    m_msgId = _msgId;
    m_msgIdHasBeenSet = true;
}

bool ChatArchivingDetail::MsgIdHasBeenSet() const
{
    return m_msgIdHasBeenSet;
}

string ChatArchivingDetail::GetAction() const
{
    return m_action;
}

void ChatArchivingDetail::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool ChatArchivingDetail::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string ChatArchivingDetail::GetMsgType() const
{
    return m_msgType;
}

void ChatArchivingDetail::SetMsgType(const string& _msgType)
{
    m_msgType = _msgType;
    m_msgTypeHasBeenSet = true;
}

bool ChatArchivingDetail::MsgTypeHasBeenSet() const
{
    return m_msgTypeHasBeenSet;
}

string ChatArchivingDetail::GetFrom() const
{
    return m_from;
}

void ChatArchivingDetail::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool ChatArchivingDetail::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

vector<string> ChatArchivingDetail::GetToList() const
{
    return m_toList;
}

void ChatArchivingDetail::SetToList(const vector<string>& _toList)
{
    m_toList = _toList;
    m_toListHasBeenSet = true;
}

bool ChatArchivingDetail::ToListHasBeenSet() const
{
    return m_toListHasBeenSet;
}

string ChatArchivingDetail::GetRoomId() const
{
    return m_roomId;
}

void ChatArchivingDetail::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool ChatArchivingDetail::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

uint64_t ChatArchivingDetail::GetMsgTime() const
{
    return m_msgTime;
}

void ChatArchivingDetail::SetMsgTime(const uint64_t& _msgTime)
{
    m_msgTime = _msgTime;
    m_msgTimeHasBeenSet = true;
}

bool ChatArchivingDetail::MsgTimeHasBeenSet() const
{
    return m_msgTimeHasBeenSet;
}

ChatArchivingMsgTypeVideo ChatArchivingDetail::GetVideo() const
{
    return m_video;
}

void ChatArchivingDetail::SetVideo(const ChatArchivingMsgTypeVideo& _video)
{
    m_video = _video;
    m_videoHasBeenSet = true;
}

bool ChatArchivingDetail::VideoHasBeenSet() const
{
    return m_videoHasBeenSet;
}

string ChatArchivingDetail::GetBodyJson() const
{
    return m_bodyJson;
}

void ChatArchivingDetail::SetBodyJson(const string& _bodyJson)
{
    m_bodyJson = _bodyJson;
    m_bodyJsonHasBeenSet = true;
}

bool ChatArchivingDetail::BodyJsonHasBeenSet() const
{
    return m_bodyJsonHasBeenSet;
}

