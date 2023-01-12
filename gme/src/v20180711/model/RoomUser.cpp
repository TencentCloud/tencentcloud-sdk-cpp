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

#include <tencentcloud/gme/v20180711/model/RoomUser.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

RoomUser::RoomUser() :
    m_roomIdHasBeenSet(false),
    m_uinsHasBeenSet(false),
    m_strRoomIdHasBeenSet(false),
    m_strUinsHasBeenSet(false)
{
}

CoreInternalOutcome RoomUser::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RoomUser.RoomId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = value["RoomId"].GetUint64();
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("Uins") && !value["Uins"].IsNull())
    {
        if (!value["Uins"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RoomUser.Uins` is not array type"));

        const rapidjson::Value &tmpValue = value["Uins"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_uins.push_back((*itr).GetUint64());
        }
        m_uinsHasBeenSet = true;
    }

    if (value.HasMember("StrRoomId") && !value["StrRoomId"].IsNull())
    {
        if (!value["StrRoomId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RoomUser.StrRoomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strRoomId = string(value["StrRoomId"].GetString());
        m_strRoomIdHasBeenSet = true;
    }

    if (value.HasMember("StrUins") && !value["StrUins"].IsNull())
    {
        if (!value["StrUins"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RoomUser.StrUins` is not array type"));

        const rapidjson::Value &tmpValue = value["StrUins"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_strUins.push_back((*itr).GetString());
        }
        m_strUinsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoomUser::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roomId, allocator);
    }

    if (m_uinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uins";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uins.begin(); itr != m_uins.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_strRoomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrRoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strRoomId.c_str(), allocator).Move(), allocator);
    }

    if (m_strUinsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrUins";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_strUins.begin(); itr != m_strUins.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t RoomUser::GetRoomId() const
{
    return m_roomId;
}

void RoomUser::SetRoomId(const uint64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool RoomUser::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

vector<uint64_t> RoomUser::GetUins() const
{
    return m_uins;
}

void RoomUser::SetUins(const vector<uint64_t>& _uins)
{
    m_uins = _uins;
    m_uinsHasBeenSet = true;
}

bool RoomUser::UinsHasBeenSet() const
{
    return m_uinsHasBeenSet;
}

string RoomUser::GetStrRoomId() const
{
    return m_strRoomId;
}

void RoomUser::SetStrRoomId(const string& _strRoomId)
{
    m_strRoomId = _strRoomId;
    m_strRoomIdHasBeenSet = true;
}

bool RoomUser::StrRoomIdHasBeenSet() const
{
    return m_strRoomIdHasBeenSet;
}

vector<string> RoomUser::GetStrUins() const
{
    return m_strUins;
}

void RoomUser::SetStrUins(const vector<string>& _strUins)
{
    m_strUins = _strUins;
    m_strUinsHasBeenSet = true;
}

bool RoomUser::StrUinsHasBeenSet() const
{
    return m_strUinsHasBeenSet;
}

