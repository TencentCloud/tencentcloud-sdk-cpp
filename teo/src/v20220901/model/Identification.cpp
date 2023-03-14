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

#include <tencentcloud/teo/v20220901/model/Identification.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

Identification::Identification() :
    m_zoneNameHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_ascriptionHasBeenSet(false),
    m_originalNameServersHasBeenSet(false),
    m_fileAscriptionHasBeenSet(false)
{
}

CoreInternalOutcome Identification::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identification.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identification.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identification.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Ascription") && !value["Ascription"].IsNull())
    {
        if (!value["Ascription"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Identification.Ascription` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ascription.Deserialize(value["Ascription"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ascriptionHasBeenSet = true;
    }

    if (value.HasMember("OriginalNameServers") && !value["OriginalNameServers"].IsNull())
    {
        if (!value["OriginalNameServers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Identification.OriginalNameServers` is not array type"));

        const rapidjson::Value &tmpValue = value["OriginalNameServers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_originalNameServers.push_back((*itr).GetString());
        }
        m_originalNameServersHasBeenSet = true;
    }

    if (value.HasMember("FileAscription") && !value["FileAscription"].IsNull())
    {
        if (!value["FileAscription"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Identification.FileAscription` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fileAscription.Deserialize(value["FileAscription"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fileAscriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Identification::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_ascriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ascription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ascription.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_originalNameServersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalNameServers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_originalNameServers.begin(); itr != m_originalNameServers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fileAscriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileAscription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fileAscription.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Identification::GetZoneName() const
{
    return m_zoneName;
}

void Identification::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool Identification::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string Identification::GetDomain() const
{
    return m_domain;
}

void Identification::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool Identification::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string Identification::GetStatus() const
{
    return m_status;
}

void Identification::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Identification::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

AscriptionInfo Identification::GetAscription() const
{
    return m_ascription;
}

void Identification::SetAscription(const AscriptionInfo& _ascription)
{
    m_ascription = _ascription;
    m_ascriptionHasBeenSet = true;
}

bool Identification::AscriptionHasBeenSet() const
{
    return m_ascriptionHasBeenSet;
}

vector<string> Identification::GetOriginalNameServers() const
{
    return m_originalNameServers;
}

void Identification::SetOriginalNameServers(const vector<string>& _originalNameServers)
{
    m_originalNameServers = _originalNameServers;
    m_originalNameServersHasBeenSet = true;
}

bool Identification::OriginalNameServersHasBeenSet() const
{
    return m_originalNameServersHasBeenSet;
}

FileAscriptionInfo Identification::GetFileAscription() const
{
    return m_fileAscription;
}

void Identification::SetFileAscription(const FileAscriptionInfo& _fileAscription)
{
    m_fileAscription = _fileAscription;
    m_fileAscriptionHasBeenSet = true;
}

bool Identification::FileAscriptionHasBeenSet() const
{
    return m_fileAscriptionHasBeenSet;
}

