/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/lcic/v20220817/model/TokenResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

TokenResult::TokenResult() :
    m_roomIdHasBeenSet(false),
    m_tokenHasBeenSet(false)
{
}

CoreInternalOutcome TokenResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TokenResult.RoomId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = value["RoomId"].GetUint64();
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TokenResult.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TokenResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_roomId, allocator);
    }

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

}


uint64_t TokenResult::GetRoomId() const
{
    return m_roomId;
}

void TokenResult::SetRoomId(const uint64_t& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool TokenResult::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string TokenResult::GetToken() const
{
    return m_token;
}

void TokenResult::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool TokenResult::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

