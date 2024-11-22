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

#include <tencentcloud/iap/v20240713/model/DescribeIAPUserOIDCConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iap::V20240713::Model;
using namespace std;

DescribeIAPUserOIDCConfigResponse::DescribeIAPUserOIDCConfigResponse() :
    m_providerTypeHasBeenSet(false),
    m_identityUrlHasBeenSet(false),
    m_identityKeyHasBeenSet(false),
    m_clientIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_fingerprintsHasBeenSet(false),
    m_enableAutoPublicKeyHasBeenSet(false),
    m_authorizationEndpointHasBeenSet(false),
    m_scopeHasBeenSet(false),
    m_responseTypeHasBeenSet(false),
    m_responseModeHasBeenSet(false),
    m_mappingFiledHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeIAPUserOIDCConfigResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ProviderType") && !rsp["ProviderType"].IsNull())
    {
        if (!rsp["ProviderType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProviderType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_providerType = rsp["ProviderType"].GetUint64();
        m_providerTypeHasBeenSet = true;
    }

    if (rsp.HasMember("IdentityUrl") && !rsp["IdentityUrl"].IsNull())
    {
        if (!rsp["IdentityUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdentityUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identityUrl = string(rsp["IdentityUrl"].GetString());
        m_identityUrlHasBeenSet = true;
    }

    if (rsp.HasMember("IdentityKey") && !rsp["IdentityKey"].IsNull())
    {
        if (!rsp["IdentityKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IdentityKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identityKey = string(rsp["IdentityKey"].GetString());
        m_identityKeyHasBeenSet = true;
    }

    if (rsp.HasMember("ClientId") && !rsp["ClientId"].IsNull())
    {
        if (!rsp["ClientId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClientId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientId = string(rsp["ClientId"].GetString());
        m_clientIdHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Fingerprints") && !rsp["Fingerprints"].IsNull())
    {
        if (!rsp["Fingerprints"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Fingerprints` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Fingerprints"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fingerprints.push_back((*itr).GetString());
        }
        m_fingerprintsHasBeenSet = true;
    }

    if (rsp.HasMember("EnableAutoPublicKey") && !rsp["EnableAutoPublicKey"].IsNull())
    {
        if (!rsp["EnableAutoPublicKey"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EnableAutoPublicKey` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enableAutoPublicKey = rsp["EnableAutoPublicKey"].GetUint64();
        m_enableAutoPublicKeyHasBeenSet = true;
    }

    if (rsp.HasMember("AuthorizationEndpoint") && !rsp["AuthorizationEndpoint"].IsNull())
    {
        if (!rsp["AuthorizationEndpoint"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AuthorizationEndpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationEndpoint = string(rsp["AuthorizationEndpoint"].GetString());
        m_authorizationEndpointHasBeenSet = true;
    }

    if (rsp.HasMember("Scope") && !rsp["Scope"].IsNull())
    {
        if (!rsp["Scope"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Scope` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Scope"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_scope.push_back((*itr).GetString());
        }
        m_scopeHasBeenSet = true;
    }

    if (rsp.HasMember("ResponseType") && !rsp["ResponseType"].IsNull())
    {
        if (!rsp["ResponseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResponseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responseType = string(rsp["ResponseType"].GetString());
        m_responseTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ResponseMode") && !rsp["ResponseMode"].IsNull())
    {
        if (!rsp["ResponseMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResponseMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responseMode = string(rsp["ResponseMode"].GetString());
        m_responseModeHasBeenSet = true;
    }

    if (rsp.HasMember("MappingFiled") && !rsp["MappingFiled"].IsNull())
    {
        if (!rsp["MappingFiled"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MappingFiled` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mappingFiled = string(rsp["MappingFiled"].GetString());
        m_mappingFiledHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeIAPUserOIDCConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_providerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProviderType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_providerType, allocator);
    }

    if (m_identityUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identityUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_identityKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentityKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identityKey.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_fingerprintsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fingerprints";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fingerprints.begin(); itr != m_fingerprints.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_enableAutoPublicKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableAutoPublicKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableAutoPublicKey, allocator);
    }

    if (m_authorizationEndpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationEndpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authorizationEndpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scope.begin(); itr != m_scope.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_responseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_responseType.c_str(), allocator).Move(), allocator);
    }

    if (m_responseModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_responseMode.c_str(), allocator).Move(), allocator);
    }

    if (m_mappingFiledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MappingFiled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mappingFiled.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeIAPUserOIDCConfigResponse::GetProviderType() const
{
    return m_providerType;
}

bool DescribeIAPUserOIDCConfigResponse::ProviderTypeHasBeenSet() const
{
    return m_providerTypeHasBeenSet;
}

string DescribeIAPUserOIDCConfigResponse::GetIdentityUrl() const
{
    return m_identityUrl;
}

bool DescribeIAPUserOIDCConfigResponse::IdentityUrlHasBeenSet() const
{
    return m_identityUrlHasBeenSet;
}

string DescribeIAPUserOIDCConfigResponse::GetIdentityKey() const
{
    return m_identityKey;
}

bool DescribeIAPUserOIDCConfigResponse::IdentityKeyHasBeenSet() const
{
    return m_identityKeyHasBeenSet;
}

string DescribeIAPUserOIDCConfigResponse::GetClientId() const
{
    return m_clientId;
}

bool DescribeIAPUserOIDCConfigResponse::ClientIdHasBeenSet() const
{
    return m_clientIdHasBeenSet;
}

uint64_t DescribeIAPUserOIDCConfigResponse::GetStatus() const
{
    return m_status;
}

bool DescribeIAPUserOIDCConfigResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DescribeIAPUserOIDCConfigResponse::GetFingerprints() const
{
    return m_fingerprints;
}

bool DescribeIAPUserOIDCConfigResponse::FingerprintsHasBeenSet() const
{
    return m_fingerprintsHasBeenSet;
}

uint64_t DescribeIAPUserOIDCConfigResponse::GetEnableAutoPublicKey() const
{
    return m_enableAutoPublicKey;
}

bool DescribeIAPUserOIDCConfigResponse::EnableAutoPublicKeyHasBeenSet() const
{
    return m_enableAutoPublicKeyHasBeenSet;
}

string DescribeIAPUserOIDCConfigResponse::GetAuthorizationEndpoint() const
{
    return m_authorizationEndpoint;
}

bool DescribeIAPUserOIDCConfigResponse::AuthorizationEndpointHasBeenSet() const
{
    return m_authorizationEndpointHasBeenSet;
}

vector<string> DescribeIAPUserOIDCConfigResponse::GetScope() const
{
    return m_scope;
}

bool DescribeIAPUserOIDCConfigResponse::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

string DescribeIAPUserOIDCConfigResponse::GetResponseType() const
{
    return m_responseType;
}

bool DescribeIAPUserOIDCConfigResponse::ResponseTypeHasBeenSet() const
{
    return m_responseTypeHasBeenSet;
}

string DescribeIAPUserOIDCConfigResponse::GetResponseMode() const
{
    return m_responseMode;
}

bool DescribeIAPUserOIDCConfigResponse::ResponseModeHasBeenSet() const
{
    return m_responseModeHasBeenSet;
}

string DescribeIAPUserOIDCConfigResponse::GetMappingFiled() const
{
    return m_mappingFiled;
}

bool DescribeIAPUserOIDCConfigResponse::MappingFiledHasBeenSet() const
{
    return m_mappingFiledHasBeenSet;
}

string DescribeIAPUserOIDCConfigResponse::GetDescription() const
{
    return m_description;
}

bool DescribeIAPUserOIDCConfigResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


