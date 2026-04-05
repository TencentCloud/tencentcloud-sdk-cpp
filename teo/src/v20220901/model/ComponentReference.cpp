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

#include <tencentcloud/teo/v20220901/model/ComponentReference.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ComponentReference::ComponentReference() :
    m_referenceTypeHasBeenSet(false),
    m_referenceIdHasBeenSet(false),
    m_referenceNameHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_aliasZoneNameHasBeenSet(false)
{
}

CoreInternalOutcome ComponentReference::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ReferenceType") && !value["ReferenceType"].IsNull())
    {
        if (!value["ReferenceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentReference.ReferenceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referenceType = string(value["ReferenceType"].GetString());
        m_referenceTypeHasBeenSet = true;
    }

    if (value.HasMember("ReferenceId") && !value["ReferenceId"].IsNull())
    {
        if (!value["ReferenceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentReference.ReferenceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referenceId = string(value["ReferenceId"].GetString());
        m_referenceIdHasBeenSet = true;
    }

    if (value.HasMember("ReferenceName") && !value["ReferenceName"].IsNull())
    {
        if (!value["ReferenceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentReference.ReferenceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referenceName = string(value["ReferenceName"].GetString());
        m_referenceNameHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentReference.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentReference.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("AliasZoneName") && !value["AliasZoneName"].IsNull())
    {
        if (!value["AliasZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentReference.AliasZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasZoneName = string(value["AliasZoneName"].GetString());
        m_aliasZoneNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComponentReference::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_referenceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referenceType.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referenceId.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referenceName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasZoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasZoneName.c_str(), allocator).Move(), allocator);
    }

}


string ComponentReference::GetReferenceType() const
{
    return m_referenceType;
}

void ComponentReference::SetReferenceType(const string& _referenceType)
{
    m_referenceType = _referenceType;
    m_referenceTypeHasBeenSet = true;
}

bool ComponentReference::ReferenceTypeHasBeenSet() const
{
    return m_referenceTypeHasBeenSet;
}

string ComponentReference::GetReferenceId() const
{
    return m_referenceId;
}

void ComponentReference::SetReferenceId(const string& _referenceId)
{
    m_referenceId = _referenceId;
    m_referenceIdHasBeenSet = true;
}

bool ComponentReference::ReferenceIdHasBeenSet() const
{
    return m_referenceIdHasBeenSet;
}

string ComponentReference::GetReferenceName() const
{
    return m_referenceName;
}

void ComponentReference::SetReferenceName(const string& _referenceName)
{
    m_referenceName = _referenceName;
    m_referenceNameHasBeenSet = true;
}

bool ComponentReference::ReferenceNameHasBeenSet() const
{
    return m_referenceNameHasBeenSet;
}

string ComponentReference::GetZoneId() const
{
    return m_zoneId;
}

void ComponentReference::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ComponentReference::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ComponentReference::GetZoneName() const
{
    return m_zoneName;
}

void ComponentReference::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool ComponentReference::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string ComponentReference::GetAliasZoneName() const
{
    return m_aliasZoneName;
}

void ComponentReference::SetAliasZoneName(const string& _aliasZoneName)
{
    m_aliasZoneName = _aliasZoneName;
    m_aliasZoneNameHasBeenSet = true;
}

bool ComponentReference::AliasZoneNameHasBeenSet() const
{
    return m_aliasZoneNameHasBeenSet;
}

