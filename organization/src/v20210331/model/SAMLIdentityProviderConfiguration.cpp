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

#include <tencentcloud/organization/v20210331/model/SAMLIdentityProviderConfiguration.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Organization::V20210331::Model;
using namespace std;

SAMLIdentityProviderConfiguration::SAMLIdentityProviderConfiguration() :
    m_entityIdHasBeenSet(false),
    m_sSOStatusHasBeenSet(false),
    m_encodedMetadataDocumentHasBeenSet(false),
    m_certificateIdsHasBeenSet(false),
    m_loginUrlHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome SAMLIdentityProviderConfiguration::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EntityId") && !value["EntityId"].IsNull())
    {
        if (!value["EntityId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SAMLIdentityProviderConfiguration.EntityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_entityId = string(value["EntityId"].GetString());
        m_entityIdHasBeenSet = true;
    }

    if (value.HasMember("SSOStatus") && !value["SSOStatus"].IsNull())
    {
        if (!value["SSOStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SAMLIdentityProviderConfiguration.SSOStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSOStatus = string(value["SSOStatus"].GetString());
        m_sSOStatusHasBeenSet = true;
    }

    if (value.HasMember("EncodedMetadataDocument") && !value["EncodedMetadataDocument"].IsNull())
    {
        if (!value["EncodedMetadataDocument"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SAMLIdentityProviderConfiguration.EncodedMetadataDocument` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encodedMetadataDocument = string(value["EncodedMetadataDocument"].GetString());
        m_encodedMetadataDocumentHasBeenSet = true;
    }

    if (value.HasMember("CertificateIds") && !value["CertificateIds"].IsNull())
    {
        if (!value["CertificateIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SAMLIdentityProviderConfiguration.CertificateIds` is not array type"));

        const rapidjson::Value &tmpValue = value["CertificateIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_certificateIds.push_back((*itr).GetString());
        }
        m_certificateIdsHasBeenSet = true;
    }

    if (value.HasMember("LoginUrl") && !value["LoginUrl"].IsNull())
    {
        if (!value["LoginUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SAMLIdentityProviderConfiguration.LoginUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loginUrl = string(value["LoginUrl"].GetString());
        m_loginUrlHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SAMLIdentityProviderConfiguration.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SAMLIdentityProviderConfiguration.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SAMLIdentityProviderConfiguration::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_entityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EntityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_entityId.c_str(), allocator).Move(), allocator);
    }

    if (m_sSOStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSOStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sSOStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_encodedMetadataDocumentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncodedMetadataDocument";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encodedMetadataDocument.c_str(), allocator).Move(), allocator);
    }

    if (m_certificateIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertificateIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_certificateIds.begin(); itr != m_certificateIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_loginUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loginUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string SAMLIdentityProviderConfiguration::GetEntityId() const
{
    return m_entityId;
}

void SAMLIdentityProviderConfiguration::SetEntityId(const string& _entityId)
{
    m_entityId = _entityId;
    m_entityIdHasBeenSet = true;
}

bool SAMLIdentityProviderConfiguration::EntityIdHasBeenSet() const
{
    return m_entityIdHasBeenSet;
}

string SAMLIdentityProviderConfiguration::GetSSOStatus() const
{
    return m_sSOStatus;
}

void SAMLIdentityProviderConfiguration::SetSSOStatus(const string& _sSOStatus)
{
    m_sSOStatus = _sSOStatus;
    m_sSOStatusHasBeenSet = true;
}

bool SAMLIdentityProviderConfiguration::SSOStatusHasBeenSet() const
{
    return m_sSOStatusHasBeenSet;
}

string SAMLIdentityProviderConfiguration::GetEncodedMetadataDocument() const
{
    return m_encodedMetadataDocument;
}

void SAMLIdentityProviderConfiguration::SetEncodedMetadataDocument(const string& _encodedMetadataDocument)
{
    m_encodedMetadataDocument = _encodedMetadataDocument;
    m_encodedMetadataDocumentHasBeenSet = true;
}

bool SAMLIdentityProviderConfiguration::EncodedMetadataDocumentHasBeenSet() const
{
    return m_encodedMetadataDocumentHasBeenSet;
}

vector<string> SAMLIdentityProviderConfiguration::GetCertificateIds() const
{
    return m_certificateIds;
}

void SAMLIdentityProviderConfiguration::SetCertificateIds(const vector<string>& _certificateIds)
{
    m_certificateIds = _certificateIds;
    m_certificateIdsHasBeenSet = true;
}

bool SAMLIdentityProviderConfiguration::CertificateIdsHasBeenSet() const
{
    return m_certificateIdsHasBeenSet;
}

string SAMLIdentityProviderConfiguration::GetLoginUrl() const
{
    return m_loginUrl;
}

void SAMLIdentityProviderConfiguration::SetLoginUrl(const string& _loginUrl)
{
    m_loginUrl = _loginUrl;
    m_loginUrlHasBeenSet = true;
}

bool SAMLIdentityProviderConfiguration::LoginUrlHasBeenSet() const
{
    return m_loginUrlHasBeenSet;
}

string SAMLIdentityProviderConfiguration::GetCreateTime() const
{
    return m_createTime;
}

void SAMLIdentityProviderConfiguration::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SAMLIdentityProviderConfiguration::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SAMLIdentityProviderConfiguration::GetUpdateTime() const
{
    return m_updateTime;
}

void SAMLIdentityProviderConfiguration::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SAMLIdentityProviderConfiguration::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

