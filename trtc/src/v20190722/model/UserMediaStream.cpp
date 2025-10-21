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

#include <tencentcloud/trtc/v20190722/model/UserMediaStream.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

UserMediaStream::UserMediaStream() :
    m_userInfoHasBeenSet(false),
    m_streamTypeHasBeenSet(false)
{
}

CoreInternalOutcome UserMediaStream::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserInfo") && !value["UserInfo"].IsNull())
    {
        if (!value["UserInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UserMediaStream.UserInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userInfo.Deserialize(value["UserInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userInfoHasBeenSet = true;
    }

    if (value.HasMember("StreamType") && !value["StreamType"].IsNull())
    {
        if (!value["StreamType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserMediaStream.StreamType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_streamType = value["StreamType"].GetUint64();
        m_streamTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserMediaStream::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_streamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_streamType, allocator);
    }

}


MixUserInfo UserMediaStream::GetUserInfo() const
{
    return m_userInfo;
}

void UserMediaStream::SetUserInfo(const MixUserInfo& _userInfo)
{
    m_userInfo = _userInfo;
    m_userInfoHasBeenSet = true;
}

bool UserMediaStream::UserInfoHasBeenSet() const
{
    return m_userInfoHasBeenSet;
}

uint64_t UserMediaStream::GetStreamType() const
{
    return m_streamType;
}

void UserMediaStream::SetStreamType(const uint64_t& _streamType)
{
    m_streamType = _streamType;
    m_streamTypeHasBeenSet = true;
}

bool UserMediaStream::StreamTypeHasBeenSet() const
{
    return m_streamTypeHasBeenSet;
}

