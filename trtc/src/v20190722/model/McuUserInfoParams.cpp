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

#include <tencentcloud/trtc/v20190722/model/McuUserInfoParams.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trtc::V20190722::Model;
using namespace std;

McuUserInfoParams::McuUserInfoParams() :
    m_userInfoHasBeenSet(false),
    m_soundLevelHasBeenSet(false)
{
}

CoreInternalOutcome McuUserInfoParams::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserInfo") && !value["UserInfo"].IsNull())
    {
        if (!value["UserInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `McuUserInfoParams.UserInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userInfo.Deserialize(value["UserInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userInfoHasBeenSet = true;
    }

    if (value.HasMember("SoundLevel") && !value["SoundLevel"].IsNull())
    {
        if (!value["SoundLevel"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `McuUserInfoParams.SoundLevel` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_soundLevel = value["SoundLevel"].GetUint64();
        m_soundLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void McuUserInfoParams::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_soundLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SoundLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_soundLevel, allocator);
    }

}


MixUserInfo McuUserInfoParams::GetUserInfo() const
{
    return m_userInfo;
}

void McuUserInfoParams::SetUserInfo(const MixUserInfo& _userInfo)
{
    m_userInfo = _userInfo;
    m_userInfoHasBeenSet = true;
}

bool McuUserInfoParams::UserInfoHasBeenSet() const
{
    return m_userInfoHasBeenSet;
}

uint64_t McuUserInfoParams::GetSoundLevel() const
{
    return m_soundLevel;
}

void McuUserInfoParams::SetSoundLevel(const uint64_t& _soundLevel)
{
    m_soundLevel = _soundLevel;
    m_soundLevelHasBeenSet = true;
}

bool McuUserInfoParams::SoundLevelHasBeenSet() const
{
    return m_soundLevelHasBeenSet;
}

