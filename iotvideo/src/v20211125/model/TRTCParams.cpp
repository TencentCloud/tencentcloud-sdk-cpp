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

#include <tencentcloud/iotvideo/v20211125/model/TRTCParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

TRTCParams::TRTCParams() :
    m_sDKAppIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userSigHasBeenSet(false),
    m_strRoomIdHasBeenSet(false),
    m_privateMapKeyHasBeenSet(false)
{
}

CoreInternalOutcome TRTCParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SDKAppId") && !value["SDKAppId"].IsNull())
    {
        if (!value["SDKAppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TRTCParams.SDKAppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sDKAppId = value["SDKAppId"].GetInt64();
        m_sDKAppIdHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TRTCParams.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserSig") && !value["UserSig"].IsNull())
    {
        if (!value["UserSig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TRTCParams.UserSig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userSig = string(value["UserSig"].GetString());
        m_userSigHasBeenSet = true;
    }

    if (value.HasMember("StrRoomId") && !value["StrRoomId"].IsNull())
    {
        if (!value["StrRoomId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TRTCParams.StrRoomId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strRoomId = string(value["StrRoomId"].GetString());
        m_strRoomIdHasBeenSet = true;
    }

    if (value.HasMember("PrivateMapKey") && !value["PrivateMapKey"].IsNull())
    {
        if (!value["PrivateMapKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TRTCParams.PrivateMapKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateMapKey = string(value["PrivateMapKey"].GetString());
        m_privateMapKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TRTCParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sDKAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SDKAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sDKAppId, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_userSigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserSig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userSig.c_str(), allocator).Move(), allocator);
    }

    if (m_strRoomIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrRoomId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strRoomId.c_str(), allocator).Move(), allocator);
    }

    if (m_privateMapKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateMapKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateMapKey.c_str(), allocator).Move(), allocator);
    }

}


int64_t TRTCParams::GetSDKAppId() const
{
    return m_sDKAppId;
}

void TRTCParams::SetSDKAppId(const int64_t& _sDKAppId)
{
    m_sDKAppId = _sDKAppId;
    m_sDKAppIdHasBeenSet = true;
}

bool TRTCParams::SDKAppIdHasBeenSet() const
{
    return m_sDKAppIdHasBeenSet;
}

string TRTCParams::GetUserId() const
{
    return m_userId;
}

void TRTCParams::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool TRTCParams::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string TRTCParams::GetUserSig() const
{
    return m_userSig;
}

void TRTCParams::SetUserSig(const string& _userSig)
{
    m_userSig = _userSig;
    m_userSigHasBeenSet = true;
}

bool TRTCParams::UserSigHasBeenSet() const
{
    return m_userSigHasBeenSet;
}

string TRTCParams::GetStrRoomId() const
{
    return m_strRoomId;
}

void TRTCParams::SetStrRoomId(const string& _strRoomId)
{
    m_strRoomId = _strRoomId;
    m_strRoomIdHasBeenSet = true;
}

bool TRTCParams::StrRoomIdHasBeenSet() const
{
    return m_strRoomIdHasBeenSet;
}

string TRTCParams::GetPrivateMapKey() const
{
    return m_privateMapKey;
}

void TRTCParams::SetPrivateMapKey(const string& _privateMapKey)
{
    m_privateMapKey = _privateMapKey;
    m_privateMapKeyHasBeenSet = true;
}

bool TRTCParams::PrivateMapKeyHasBeenSet() const
{
    return m_privateMapKeyHasBeenSet;
}

