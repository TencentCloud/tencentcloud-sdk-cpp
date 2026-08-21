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

#include <tencentcloud/monitor/v20180724/model/GrafanaVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

GrafanaVersion::GrafanaVersion() :
    m_aliasHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

CoreInternalOutcome GrafanaVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaVersion.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaVersion.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GrafanaVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

}


string GrafanaVersion::GetAlias() const
{
    return m_alias;
}

void GrafanaVersion::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool GrafanaVersion::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string GrafanaVersion::GetVersion() const
{
    return m_version;
}

void GrafanaVersion::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool GrafanaVersion::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

