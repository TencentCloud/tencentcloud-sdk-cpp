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

#include <tencentcloud/asr/v20190614/model/SpeakerRoleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Asr::V20190614::Model;
using namespace std;

SpeakerRoleInfo::SpeakerRoleInfo() :
    m_roleAudioUrlHasBeenSet(false),
    m_roleNameHasBeenSet(false)
{
}

CoreInternalOutcome SpeakerRoleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RoleAudioUrl") && !value["RoleAudioUrl"].IsNull())
    {
        if (!value["RoleAudioUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpeakerRoleInfo.RoleAudioUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleAudioUrl = string(value["RoleAudioUrl"].GetString());
        m_roleAudioUrlHasBeenSet = true;
    }

    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpeakerRoleInfo.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SpeakerRoleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_roleAudioUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleAudioUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleAudioUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

}


string SpeakerRoleInfo::GetRoleAudioUrl() const
{
    return m_roleAudioUrl;
}

void SpeakerRoleInfo::SetRoleAudioUrl(const string& _roleAudioUrl)
{
    m_roleAudioUrl = _roleAudioUrl;
    m_roleAudioUrlHasBeenSet = true;
}

bool SpeakerRoleInfo::RoleAudioUrlHasBeenSet() const
{
    return m_roleAudioUrlHasBeenSet;
}

string SpeakerRoleInfo::GetRoleName() const
{
    return m_roleName;
}

void SpeakerRoleInfo::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool SpeakerRoleInfo::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

