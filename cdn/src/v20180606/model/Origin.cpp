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

#include <tencentcloud/cdn/v20180606/model/Origin.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

Origin::Origin() :
    m_originsHasBeenSet(false),
    m_originTypeHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_cosPrivateAccessHasBeenSet(false),
    m_originPullProtocolHasBeenSet(false),
    m_backupOriginsHasBeenSet(false),
    m_backupOriginTypeHasBeenSet(false),
    m_backupServerNameHasBeenSet(false),
    m_basePathHasBeenSet(false),
    m_pathRulesHasBeenSet(false),
    m_pathBasedOriginHasBeenSet(false),
    m_sniHasBeenSet(false),
    m_advanceHttpsHasBeenSet(false),
    m_originCompanyHasBeenSet(false)
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

    if (value.HasMember("OriginType") && !value["OriginType"].IsNull())
    {
        if (!value["OriginType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Origin.OriginType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originType = string(value["OriginType"].GetString());
        m_originTypeHasBeenSet = true;
    }

    if (value.HasMember("ServerName") && !value["ServerName"].IsNull())
    {
        if (!value["ServerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Origin.ServerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverName = string(value["ServerName"].GetString());
        m_serverNameHasBeenSet = true;
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

    if (value.HasMember("OriginPullProtocol") && !value["OriginPullProtocol"].IsNull())
    {
        if (!value["OriginPullProtocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Origin.OriginPullProtocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originPullProtocol = string(value["OriginPullProtocol"].GetString());
        m_originPullProtocolHasBeenSet = true;
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

    if (value.HasMember("BackupOriginType") && !value["BackupOriginType"].IsNull())
    {
        if (!value["BackupOriginType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Origin.BackupOriginType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupOriginType = string(value["BackupOriginType"].GetString());
        m_backupOriginTypeHasBeenSet = true;
    }

    if (value.HasMember("BackupServerName") && !value["BackupServerName"].IsNull())
    {
        if (!value["BackupServerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Origin.BackupServerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_backupServerName = string(value["BackupServerName"].GetString());
        m_backupServerNameHasBeenSet = true;
    }

    if (value.HasMember("BasePath") && !value["BasePath"].IsNull())
    {
        if (!value["BasePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Origin.BasePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_basePath = string(value["BasePath"].GetString());
        m_basePathHasBeenSet = true;
    }

    if (value.HasMember("PathRules") && !value["PathRules"].IsNull())
    {
        if (!value["PathRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Origin.PathRules` is not array type"));

        const rapidjson::Value &tmpValue = value["PathRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PathRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pathRules.push_back(item);
        }
        m_pathRulesHasBeenSet = true;
    }

    if (value.HasMember("PathBasedOrigin") && !value["PathBasedOrigin"].IsNull())
    {
        if (!value["PathBasedOrigin"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Origin.PathBasedOrigin` is not array type"));

        const rapidjson::Value &tmpValue = value["PathBasedOrigin"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PathBasedOriginRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_pathBasedOrigin.push_back(item);
        }
        m_pathBasedOriginHasBeenSet = true;
    }

    if (value.HasMember("Sni") && !value["Sni"].IsNull())
    {
        if (!value["Sni"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Origin.Sni` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sni.Deserialize(value["Sni"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sniHasBeenSet = true;
    }

    if (value.HasMember("AdvanceHttps") && !value["AdvanceHttps"].IsNull())
    {
        if (!value["AdvanceHttps"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Origin.AdvanceHttps` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_advanceHttps.Deserialize(value["AdvanceHttps"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_advanceHttpsHasBeenSet = true;
    }

    if (value.HasMember("OriginCompany") && !value["OriginCompany"].IsNull())
    {
        if (!value["OriginCompany"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Origin.OriginCompany` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originCompany = string(value["OriginCompany"].GetString());
        m_originCompanyHasBeenSet = true;
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

    if (m_originTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originType.c_str(), allocator).Move(), allocator);
    }

    if (m_serverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverName.c_str(), allocator).Move(), allocator);
    }

    if (m_cosPrivateAccessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosPrivateAccess";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cosPrivateAccess.c_str(), allocator).Move(), allocator);
    }

    if (m_originPullProtocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginPullProtocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originPullProtocol.c_str(), allocator).Move(), allocator);
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

    if (m_backupOriginTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupOriginType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupOriginType.c_str(), allocator).Move(), allocator);
    }

    if (m_backupServerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupServerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_backupServerName.c_str(), allocator).Move(), allocator);
    }

    if (m_basePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_basePath.c_str(), allocator).Move(), allocator);
    }

    if (m_pathRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pathRules.begin(); itr != m_pathRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pathBasedOriginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathBasedOrigin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pathBasedOrigin.begin(); itr != m_pathBasedOrigin.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_sniHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sni";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sni.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_advanceHttpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvanceHttps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_advanceHttps.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_originCompanyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginCompany";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originCompany.c_str(), allocator).Move(), allocator);
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

string Origin::GetOriginType() const
{
    return m_originType;
}

void Origin::SetOriginType(const string& _originType)
{
    m_originType = _originType;
    m_originTypeHasBeenSet = true;
}

bool Origin::OriginTypeHasBeenSet() const
{
    return m_originTypeHasBeenSet;
}

string Origin::GetServerName() const
{
    return m_serverName;
}

void Origin::SetServerName(const string& _serverName)
{
    m_serverName = _serverName;
    m_serverNameHasBeenSet = true;
}

bool Origin::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
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

string Origin::GetBackupOriginType() const
{
    return m_backupOriginType;
}

void Origin::SetBackupOriginType(const string& _backupOriginType)
{
    m_backupOriginType = _backupOriginType;
    m_backupOriginTypeHasBeenSet = true;
}

bool Origin::BackupOriginTypeHasBeenSet() const
{
    return m_backupOriginTypeHasBeenSet;
}

string Origin::GetBackupServerName() const
{
    return m_backupServerName;
}

void Origin::SetBackupServerName(const string& _backupServerName)
{
    m_backupServerName = _backupServerName;
    m_backupServerNameHasBeenSet = true;
}

bool Origin::BackupServerNameHasBeenSet() const
{
    return m_backupServerNameHasBeenSet;
}

string Origin::GetBasePath() const
{
    return m_basePath;
}

void Origin::SetBasePath(const string& _basePath)
{
    m_basePath = _basePath;
    m_basePathHasBeenSet = true;
}

bool Origin::BasePathHasBeenSet() const
{
    return m_basePathHasBeenSet;
}

vector<PathRule> Origin::GetPathRules() const
{
    return m_pathRules;
}

void Origin::SetPathRules(const vector<PathRule>& _pathRules)
{
    m_pathRules = _pathRules;
    m_pathRulesHasBeenSet = true;
}

bool Origin::PathRulesHasBeenSet() const
{
    return m_pathRulesHasBeenSet;
}

vector<PathBasedOriginRule> Origin::GetPathBasedOrigin() const
{
    return m_pathBasedOrigin;
}

void Origin::SetPathBasedOrigin(const vector<PathBasedOriginRule>& _pathBasedOrigin)
{
    m_pathBasedOrigin = _pathBasedOrigin;
    m_pathBasedOriginHasBeenSet = true;
}

bool Origin::PathBasedOriginHasBeenSet() const
{
    return m_pathBasedOriginHasBeenSet;
}

OriginSni Origin::GetSni() const
{
    return m_sni;
}

void Origin::SetSni(const OriginSni& _sni)
{
    m_sni = _sni;
    m_sniHasBeenSet = true;
}

bool Origin::SniHasBeenSet() const
{
    return m_sniHasBeenSet;
}

AdvanceHttps Origin::GetAdvanceHttps() const
{
    return m_advanceHttps;
}

void Origin::SetAdvanceHttps(const AdvanceHttps& _advanceHttps)
{
    m_advanceHttps = _advanceHttps;
    m_advanceHttpsHasBeenSet = true;
}

bool Origin::AdvanceHttpsHasBeenSet() const
{
    return m_advanceHttpsHasBeenSet;
}

string Origin::GetOriginCompany() const
{
    return m_originCompany;
}

void Origin::SetOriginCompany(const string& _originCompany)
{
    m_originCompany = _originCompany;
    m_originCompanyHasBeenSet = true;
}

bool Origin::OriginCompanyHasBeenSet() const
{
    return m_originCompanyHasBeenSet;
}

