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
using namespace rapidjson;
using namespace std;

RoomUser::RoomUser() :
    m_roomIdHasBeenSet(false),
    m_uinsHasBeenSet(false)
{
}

CoreInternalOutcome RoomUser::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `RoomUser.RoomId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = value["RoomId"].GetUint64();
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("Uins") && !value["Uins"].IsNull())
    {
        if (!value["Uins"].IsArray())
            return CoreInternalOutcome(Error("response `RoomUser.Uins` is not array type"));

        const Value &tmpValue = value["Uins"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_uins.push_back((*itr).GetUint64());
        }
        m_uinsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RoomUser::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_roomIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roomId, allocator);
    }

    if (m_uinsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Uins";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_uins.begin(); itr != m_uins.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetUint64(*itr), allocator);
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

