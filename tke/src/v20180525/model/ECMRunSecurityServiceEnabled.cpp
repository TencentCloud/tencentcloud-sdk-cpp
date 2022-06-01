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

#include <tencentcloud/tke/v20180525/model/ECMRunSecurityServiceEnabled.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ECMRunSecurityServiceEnabled::ECMRunSecurityServiceEnabled() :
    m_enabledHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

CoreInternalOutcome ECMRunSecurityServiceEnabled::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ECMRunSecurityServiceEnabled.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ECMRunSecurityServiceEnabled.Version` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_version = value["Version"].GetInt64();
        m_versionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ECMRunSecurityServiceEnabled::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_version, allocator);
    }

}


bool ECMRunSecurityServiceEnabled::GetEnabled() const
{
    return m_enabled;
}

void ECMRunSecurityServiceEnabled::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool ECMRunSecurityServiceEnabled::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

int64_t ECMRunSecurityServiceEnabled::GetVersion() const
{
    return m_version;
}

void ECMRunSecurityServiceEnabled::SetVersion(const int64_t& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool ECMRunSecurityServiceEnabled::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

