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

#include <tencentcloud/teo/v20220901/model/Origin.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

Origin::Origin() :
    m_originsHasBeenSet(false),
    m_backupOriginsHasBeenSet(false),
    m_originPullProtocolHasBeenSet(false),
    m_cosPrivateAccessHasBeenSet(false)
{
}

CoreInternalOutcome Origin::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Origins") && !value["Origins"].IsNull())
    {
        if (!value["Origins"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Origin.Origins` is not array type"));

        const rapidjson::Value &tmpValue = value["Origins"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_origins.push_back((*itr).GetString());
        }
        m_originsHasBeenSet = true;
    }

    if (value.HasMember("BackupOrigins") && !value["BackupOrigins"].IsNull())
    {
        if (!value["BackupOrigins"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Origin.BackupOrigins` is not array type"));

        const rapidjson::Value &tmpValue = value["BackupOrigins"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_backupOrigins.push_back((*itr).GetString());
        }
        m_backupOriginsHasBeenSet = true;
    }

    if (value.HasMember("OriginPullProtocol") && !value["OriginPullProtocol"].IsNull())
    {
        if (!value["OriginPullProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Origin.OriginPullProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originPullProtocol = string(value["OriginPullProtocol"].GetString());
        m_originPullProtocolHasBeenSet = true;
    }

    if (value.HasMember("CosPrivateAccess") && !value["CosPrivateAccess"].IsNull())
    {
        if (!value["CosPrivateAccess"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Origin.CosPrivateAccess` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cosPrivateAccess = string(value["CosPrivateAccess"].GetString());
        m_cosPrivateAccessHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Origin::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_originsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origins";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_origins.begin(); itr != m_origins.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_backupOriginsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupOrigins";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_backupOrigins.begin(); itr != m_backupOrigins.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_originPullProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginPullProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originPullProtocol.c_str(), allocator).Move(), allocator);
    }

    if (m_cosPrivateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosPrivateAccess.c_str(), allocator).Move(), allocator);
    }

}


vector<string> Origin::GetOrigins() const
{
    return m_origins;
}

void Origin::SetOrigins(const vector<string>& _origins)
{
    m_origins = _origins;
    m_originsHasBeenSet = true;
}

bool Origin::OriginsHasBeenSet() const
{
    return m_originsHasBeenSet;
}

vector<string> Origin::GetBackupOrigins() const
{
    return m_backupOrigins;
}

void Origin::SetBackupOrigins(const vector<string>& _backupOrigins)
{
    m_backupOrigins = _backupOrigins;
    m_backupOriginsHasBeenSet = true;
}

bool Origin::BackupOriginsHasBeenSet() const
{
    return m_backupOriginsHasBeenSet;
}

string Origin::GetOriginPullProtocol() const
{
    return m_originPullProtocol;
}

void Origin::SetOriginPullProtocol(const string& _originPullProtocol)
{
    m_originPullProtocol = _originPullProtocol;
    m_originPullProtocolHasBeenSet = true;
}

bool Origin::OriginPullProtocolHasBeenSet() const
{
    return m_originPullProtocolHasBeenSet;
}

string Origin::GetCosPrivateAccess() const
{
    return m_cosPrivateAccess;
}

void Origin::SetCosPrivateAccess(const string& _cosPrivateAccess)
{
    m_cosPrivateAccess = _cosPrivateAccess;
    m_cosPrivateAccessHasBeenSet = true;
}

bool Origin::CosPrivateAccessHasBeenSet() const
{
    return m_cosPrivateAccessHasBeenSet;
}

