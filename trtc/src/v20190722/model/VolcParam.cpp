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

#include <tencentcloud/trtc/v20190722/model/VolcParam.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

VolcParam::VolcParam() :
    m_appIdHasBeenSet(false),
    m_roomIdHasBeenSet(false),
    m_tokenHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_trustedUserIdListHasBeenSet(false),
    m_untrustedUserIdListHasBeenSet(false)
{
}

CoreInternalOutcome VolcParam::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolcParam.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("RoomId") && !value["RoomId"].IsNull())
    {
        if (!value["RoomId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolcParam.RoomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roomId = string(value["RoomId"].GetString());
        m_roomIdHasBeenSet = true;
    }

    if (value.HasMember("Token") && !value["Token"].IsNull())
    {
        if (!value["Token"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolcParam.Token` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_token = string(value["Token"].GetString());
        m_tokenHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolcParam.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("TrustedUserIdList") && !value["TrustedUserIdList"].IsNull())
    {
        if (!value["TrustedUserIdList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolcParam.TrustedUserIdList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trustedUserIdList = string(value["TrustedUserIdList"].GetString());
        m_trustedUserIdListHasBeenSet = true;
    }

    if (value.HasMember("UntrustedUserIdList") && !value["UntrustedUserIdList"].IsNull())
    {
        if (!value["UntrustedUserIdList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VolcParam.UntrustedUserIdList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_untrustedUserIdList = string(value["UntrustedUserIdList"].GetString());
        m_untrustedUserIdListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VolcParam::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_roomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roomId.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Token";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_token.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_trustedUserIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrustedUserIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trustedUserIdList.c_str(), allocator).Move(), allocator);
    }

    if (m_untrustedUserIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UntrustedUserIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_untrustedUserIdList.c_str(), allocator).Move(), allocator);
    }

}


string VolcParam::GetAppId() const
{
    return m_appId;
}

void VolcParam::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool VolcParam::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string VolcParam::GetRoomId() const
{
    return m_roomId;
}

void VolcParam::SetRoomId(const string& _roomId)
{
    m_roomId = _roomId;
    m_roomIdHasBeenSet = true;
}

bool VolcParam::RoomIdHasBeenSet() const
{
    return m_roomIdHasBeenSet;
}

string VolcParam::GetToken() const
{
    return m_token;
}

void VolcParam::SetToken(const string& _token)
{
    m_token = _token;
    m_tokenHasBeenSet = true;
}

bool VolcParam::TokenHasBeenSet() const
{
    return m_tokenHasBeenSet;
}

string VolcParam::GetUserId() const
{
    return m_userId;
}

void VolcParam::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool VolcParam::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string VolcParam::GetTrustedUserIdList() const
{
    return m_trustedUserIdList;
}

void VolcParam::SetTrustedUserIdList(const string& _trustedUserIdList)
{
    m_trustedUserIdList = _trustedUserIdList;
    m_trustedUserIdListHasBeenSet = true;
}

bool VolcParam::TrustedUserIdListHasBeenSet() const
{
    return m_trustedUserIdListHasBeenSet;
}

string VolcParam::GetUntrustedUserIdList() const
{
    return m_untrustedUserIdList;
}

void VolcParam::SetUntrustedUserIdList(const string& _untrustedUserIdList)
{
    m_untrustedUserIdList = _untrustedUserIdList;
    m_untrustedUserIdListHasBeenSet = true;
}

bool VolcParam::UntrustedUserIdListHasBeenSet() const
{
    return m_untrustedUserIdListHasBeenSet;
}

