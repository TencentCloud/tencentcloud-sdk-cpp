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

#include <tencentcloud/tcr/v20190924/model/Registry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace rapidjson;
using namespace std;

Registry::Registry() :
    m_registryIdHasBeenSet(false),
    m_registryNameHasBeenSet(false),
    m_registryTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_publicDomainHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_regionNameHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_enableAnonymousHasBeenSet(false),
    m_tokenValidTimeHasBeenSet(false)
{
}

CoreInternalOutcome Registry::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("RegistryId") && !value["RegistryId"].IsNull())
    {
        if (!value["RegistryId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Registry.RegistryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryId = string(value["RegistryId"].GetString());
        m_registryIdHasBeenSet = true;
    }

    if (value.HasMember("RegistryName") && !value["RegistryName"].IsNull())
    {
        if (!value["RegistryName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Registry.RegistryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryName = string(value["RegistryName"].GetString());
        m_registryNameHasBeenSet = true;
    }

    if (value.HasMember("RegistryType") && !value["RegistryType"].IsNull())
    {
        if (!value["RegistryType"].IsString())
        {
            return CoreInternalOutcome(Error("response `Registry.RegistryType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryType = string(value["RegistryType"].GetString());
        m_registryTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `Registry.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("PublicDomain") && !value["PublicDomain"].IsNull())
    {
        if (!value["PublicDomain"].IsString())
        {
            return CoreInternalOutcome(Error("response `Registry.PublicDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicDomain = string(value["PublicDomain"].GetString());
        m_publicDomainHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Error("response `Registry.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("RegionName") && !value["RegionName"].IsNull())
    {
        if (!value["RegionName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Registry.RegionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionName = string(value["RegionName"].GetString());
        m_regionNameHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Registry.RegionId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetUint64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("EnableAnonymous") && !value["EnableAnonymous"].IsNull())
    {
        if (!value["EnableAnonymous"].IsBool())
        {
            return CoreInternalOutcome(Error("response `Registry.EnableAnonymous` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableAnonymous = value["EnableAnonymous"].GetBool();
        m_enableAnonymousHasBeenSet = true;
    }

    if (value.HasMember("TokenValidTime") && !value["TokenValidTime"].IsNull())
    {
        if (!value["TokenValidTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Registry.TokenValidTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tokenValidTime = value["TokenValidTime"].GetUint64();
        m_tokenValidTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Registry::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_registryIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_registryNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegistryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_registryName.c_str(), allocator).Move(), allocator);
    }

    if (m_registryTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegistryType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_registryType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_publicDomainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PublicDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_publicDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_regionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_regionName.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_enableAnonymousHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnableAnonymous";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableAnonymous, allocator);
    }

    if (m_tokenValidTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TokenValidTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tokenValidTime, allocator);
    }

}


string Registry::GetRegistryId() const
{
    return m_registryId;
}

void Registry::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool Registry::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string Registry::GetRegistryName() const
{
    return m_registryName;
}

void Registry::SetRegistryName(const string& _registryName)
{
    m_registryName = _registryName;
    m_registryNameHasBeenSet = true;
}

bool Registry::RegistryNameHasBeenSet() const
{
    return m_registryNameHasBeenSet;
}

string Registry::GetRegistryType() const
{
    return m_registryType;
}

void Registry::SetRegistryType(const string& _registryType)
{
    m_registryType = _registryType;
    m_registryTypeHasBeenSet = true;
}

bool Registry::RegistryTypeHasBeenSet() const
{
    return m_registryTypeHasBeenSet;
}

string Registry::GetStatus() const
{
    return m_status;
}

void Registry::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Registry::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string Registry::GetPublicDomain() const
{
    return m_publicDomain;
}

void Registry::SetPublicDomain(const string& _publicDomain)
{
    m_publicDomain = _publicDomain;
    m_publicDomainHasBeenSet = true;
}

bool Registry::PublicDomainHasBeenSet() const
{
    return m_publicDomainHasBeenSet;
}

string Registry::GetCreatedAt() const
{
    return m_createdAt;
}

void Registry::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool Registry::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string Registry::GetRegionName() const
{
    return m_regionName;
}

void Registry::SetRegionName(const string& _regionName)
{
    m_regionName = _regionName;
    m_regionNameHasBeenSet = true;
}

bool Registry::RegionNameHasBeenSet() const
{
    return m_regionNameHasBeenSet;
}

uint64_t Registry::GetRegionId() const
{
    return m_regionId;
}

void Registry::SetRegionId(const uint64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool Registry::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

bool Registry::GetEnableAnonymous() const
{
    return m_enableAnonymous;
}

void Registry::SetEnableAnonymous(const bool& _enableAnonymous)
{
    m_enableAnonymous = _enableAnonymous;
    m_enableAnonymousHasBeenSet = true;
}

bool Registry::EnableAnonymousHasBeenSet() const
{
    return m_enableAnonymousHasBeenSet;
}

uint64_t Registry::GetTokenValidTime() const
{
    return m_tokenValidTime;
}

void Registry::SetTokenValidTime(const uint64_t& _tokenValidTime)
{
    m_tokenValidTime = _tokenValidTime;
    m_tokenValidTimeHasBeenSet = true;
}

bool Registry::TokenValidTimeHasBeenSet() const
{
    return m_tokenValidTimeHasBeenSet;
}

