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

#include <tencentcloud/tcbr/v20220217/model/SimpleVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcbr::V20220217::Model;
using namespace std;

SimpleVersion::SimpleVersion() :
    m_envIdHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_versionNameHasBeenSet(false)
{
}

CoreInternalOutcome SimpleVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvId") && !value["EnvId"].IsNull())
    {
        if (!value["EnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleVersion.EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(value["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (value.HasMember("ServerName") && !value["ServerName"].IsNull())
    {
        if (!value["ServerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleVersion.ServerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverName = string(value["ServerName"].GetString());
        m_serverNameHasBeenSet = true;
    }

    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SimpleVersion.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SimpleVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_serverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverName.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

}


string SimpleVersion::GetEnvId() const
{
    return m_envId;
}

void SimpleVersion::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool SimpleVersion::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string SimpleVersion::GetServerName() const
{
    return m_serverName;
}

void SimpleVersion::SetServerName(const string& _serverName)
{
    m_serverName = _serverName;
    m_serverNameHasBeenSet = true;
}

bool SimpleVersion::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

string SimpleVersion::GetVersionName() const
{
    return m_versionName;
}

void SimpleVersion::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool SimpleVersion::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

