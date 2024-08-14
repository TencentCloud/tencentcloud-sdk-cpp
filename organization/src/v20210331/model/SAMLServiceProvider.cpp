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

#include <tencentcloud/organization/v20210331/model/SAMLServiceProvider.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

SAMLServiceProvider::SAMLServiceProvider() :
    m_entityIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_encodedMetadataDocumentHasBeenSet(false),
    m_acsUrlHasBeenSet(false)
{
}

CoreInternalOutcome SAMLServiceProvider::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EntityId") && !value["EntityId"].IsNull())
    {
        if (!value["EntityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SAMLServiceProvider.EntityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entityId = string(value["EntityId"].GetString());
        m_entityIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SAMLServiceProvider.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("EncodedMetadataDocument") && !value["EncodedMetadataDocument"].IsNull())
    {
        if (!value["EncodedMetadataDocument"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SAMLServiceProvider.EncodedMetadataDocument` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encodedMetadataDocument = string(value["EncodedMetadataDocument"].GetString());
        m_encodedMetadataDocumentHasBeenSet = true;
    }

    if (value.HasMember("AcsUrl") && !value["AcsUrl"].IsNull())
    {
        if (!value["AcsUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SAMLServiceProvider.AcsUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_acsUrl = string(value["AcsUrl"].GetString());
        m_acsUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SAMLServiceProvider::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_entityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entityId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_encodedMetadataDocumentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncodedMetadataDocument";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encodedMetadataDocument.c_str(), allocator).Move(), allocator);
    }

    if (m_acsUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcsUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_acsUrl.c_str(), allocator).Move(), allocator);
    }

}


string SAMLServiceProvider::GetEntityId() const
{
    return m_entityId;
}

void SAMLServiceProvider::SetEntityId(const string& _entityId)
{
    m_entityId = _entityId;
    m_entityIdHasBeenSet = true;
}

bool SAMLServiceProvider::EntityIdHasBeenSet() const
{
    return m_entityIdHasBeenSet;
}

string SAMLServiceProvider::GetZoneId() const
{
    return m_zoneId;
}

void SAMLServiceProvider::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool SAMLServiceProvider::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string SAMLServiceProvider::GetEncodedMetadataDocument() const
{
    return m_encodedMetadataDocument;
}

void SAMLServiceProvider::SetEncodedMetadataDocument(const string& _encodedMetadataDocument)
{
    m_encodedMetadataDocument = _encodedMetadataDocument;
    m_encodedMetadataDocumentHasBeenSet = true;
}

bool SAMLServiceProvider::EncodedMetadataDocumentHasBeenSet() const
{
    return m_encodedMetadataDocumentHasBeenSet;
}

string SAMLServiceProvider::GetAcsUrl() const
{
    return m_acsUrl;
}

void SAMLServiceProvider::SetAcsUrl(const string& _acsUrl)
{
    m_acsUrl = _acsUrl;
    m_acsUrlHasBeenSet = true;
}

bool SAMLServiceProvider::AcsUrlHasBeenSet() const
{
    return m_acsUrlHasBeenSet;
}

