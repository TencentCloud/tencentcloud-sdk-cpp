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

#include <tencentcloud/apigateway/v20180808/model/ApiIdStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ApiIdStatus::ApiIdStatus() :
    m_serviceIdHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_apiDescHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_modifiedTimeHasBeenSet(false),
    m_apiNameHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_apiTypeHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_isDebugAfterChargeHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_apiBusinessTypeHasBeenSet(false),
    m_authRelationApiIdHasBeenSet(false),
    m_relationBuniessApiIdsHasBeenSet(false),
    m_oauthConfigHasBeenSet(false),
    m_tokenLocationHasBeenSet(false)
{
}

CoreInternalOutcome ApiIdStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceId") && !value["ServiceId"].IsNull())
    {
        if (!value["ServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiIdStatus.ServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceId = string(value["ServiceId"].GetString());
        m_serviceIdHasBeenSet = true;
    }

    if (value.HasMember("ApiId") && !value["ApiId"].IsNull())
    {
        if (!value["ApiId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiIdStatus.ApiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiId = string(value["ApiId"].GetString());
        m_apiIdHasBeenSet = true;
    }

    if (value.HasMember("ApiDesc") && !value["ApiDesc"].IsNull())
    {
        if (!value["ApiDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiIdStatus.ApiDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiDesc = string(value["ApiDesc"].GetString());
        m_apiDescHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiIdStatus.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiIdStatus.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiIdStatus.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ModifiedTime") && !value["ModifiedTime"].IsNull())
    {
        if (!value["ModifiedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiIdStatus.ModifiedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedTime = string(value["ModifiedTime"].GetString());
        m_modifiedTimeHasBeenSet = true;
    }

    if (value.HasMember("ApiName") && !value["ApiName"].IsNull())
    {
        if (!value["ApiName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiIdStatus.ApiName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiName = string(value["ApiName"].GetString());
        m_apiNameHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiIdStatus.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("ApiType") && !value["ApiType"].IsNull())
    {
        if (!value["ApiType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiIdStatus.ApiType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiType = string(value["ApiType"].GetString());
        m_apiTypeHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiIdStatus.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("IsDebugAfterCharge") && !value["IsDebugAfterCharge"].IsNull())
    {
        if (!value["IsDebugAfterCharge"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApiIdStatus.IsDebugAfterCharge` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDebugAfterCharge = value["IsDebugAfterCharge"].GetBool();
        m_isDebugAfterChargeHasBeenSet = true;
    }

    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiIdStatus.AuthType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authType = string(value["AuthType"].GetString());
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("ApiBusinessType") && !value["ApiBusinessType"].IsNull())
    {
        if (!value["ApiBusinessType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiIdStatus.ApiBusinessType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiBusinessType = string(value["ApiBusinessType"].GetString());
        m_apiBusinessTypeHasBeenSet = true;
    }

    if (value.HasMember("AuthRelationApiId") && !value["AuthRelationApiId"].IsNull())
    {
        if (!value["AuthRelationApiId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiIdStatus.AuthRelationApiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authRelationApiId = string(value["AuthRelationApiId"].GetString());
        m_authRelationApiIdHasBeenSet = true;
    }

    if (value.HasMember("RelationBuniessApiIds") && !value["RelationBuniessApiIds"].IsNull())
    {
        if (!value["RelationBuniessApiIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApiIdStatus.RelationBuniessApiIds` is not array type"));

        const rapidjson::Value &tmpValue = value["RelationBuniessApiIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_relationBuniessApiIds.push_back((*itr).GetString());
        }
        m_relationBuniessApiIdsHasBeenSet = true;
    }

    if (value.HasMember("OauthConfig") && !value["OauthConfig"].IsNull())
    {
        if (!value["OauthConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ApiIdStatus.OauthConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_oauthConfig.Deserialize(value["OauthConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_oauthConfigHasBeenSet = true;
    }

    if (value.HasMember("TokenLocation") && !value["TokenLocation"].IsNull())
    {
        if (!value["TokenLocation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiIdStatus.TokenLocation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tokenLocation = string(value["TokenLocation"].GetString());
        m_tokenLocationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiIdStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_apiNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiName.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiType.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_isDebugAfterChargeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDebugAfterCharge";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDebugAfterCharge, allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authType.c_str(), allocator).Move(), allocator);
    }

    if (m_apiBusinessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiBusinessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiBusinessType.c_str(), allocator).Move(), allocator);
    }

    if (m_authRelationApiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthRelationApiId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authRelationApiId.c_str(), allocator).Move(), allocator);
    }

    if (m_relationBuniessApiIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelationBuniessApiIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_relationBuniessApiIds.begin(); itr != m_relationBuniessApiIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_oauthConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OauthConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oauthConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tokenLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tokenLocation.c_str(), allocator).Move(), allocator);
    }

}


string ApiIdStatus::GetServiceId() const
{
    return m_serviceId;
}

void ApiIdStatus::SetServiceId(const string& _serviceId)
{
    m_serviceId = _serviceId;
    m_serviceIdHasBeenSet = true;
}

bool ApiIdStatus::ServiceIdHasBeenSet() const
{
    return m_serviceIdHasBeenSet;
}

string ApiIdStatus::GetApiId() const
{
    return m_apiId;
}

void ApiIdStatus::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool ApiIdStatus::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}

string ApiIdStatus::GetApiDesc() const
{
    return m_apiDesc;
}

void ApiIdStatus::SetApiDesc(const string& _apiDesc)
{
    m_apiDesc = _apiDesc;
    m_apiDescHasBeenSet = true;
}

bool ApiIdStatus::ApiDescHasBeenSet() const
{
    return m_apiDescHasBeenSet;
}

string ApiIdStatus::GetPath() const
{
    return m_path;
}

void ApiIdStatus::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool ApiIdStatus::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string ApiIdStatus::GetMethod() const
{
    return m_method;
}

void ApiIdStatus::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool ApiIdStatus::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string ApiIdStatus::GetCreatedTime() const
{
    return m_createdTime;
}

void ApiIdStatus::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ApiIdStatus::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string ApiIdStatus::GetModifiedTime() const
{
    return m_modifiedTime;
}

void ApiIdStatus::SetModifiedTime(const string& _modifiedTime)
{
    m_modifiedTime = _modifiedTime;
    m_modifiedTimeHasBeenSet = true;
}

bool ApiIdStatus::ModifiedTimeHasBeenSet() const
{
    return m_modifiedTimeHasBeenSet;
}

string ApiIdStatus::GetApiName() const
{
    return m_apiName;
}

void ApiIdStatus::SetApiName(const string& _apiName)
{
    m_apiName = _apiName;
    m_apiNameHasBeenSet = true;
}

bool ApiIdStatus::ApiNameHasBeenSet() const
{
    return m_apiNameHasBeenSet;
}

string ApiIdStatus::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void ApiIdStatus::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool ApiIdStatus::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string ApiIdStatus::GetApiType() const
{
    return m_apiType;
}

void ApiIdStatus::SetApiType(const string& _apiType)
{
    m_apiType = _apiType;
    m_apiTypeHasBeenSet = true;
}

bool ApiIdStatus::ApiTypeHasBeenSet() const
{
    return m_apiTypeHasBeenSet;
}

string ApiIdStatus::GetProtocol() const
{
    return m_protocol;
}

void ApiIdStatus::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ApiIdStatus::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

bool ApiIdStatus::GetIsDebugAfterCharge() const
{
    return m_isDebugAfterCharge;
}

void ApiIdStatus::SetIsDebugAfterCharge(const bool& _isDebugAfterCharge)
{
    m_isDebugAfterCharge = _isDebugAfterCharge;
    m_isDebugAfterChargeHasBeenSet = true;
}

bool ApiIdStatus::IsDebugAfterChargeHasBeenSet() const
{
    return m_isDebugAfterChargeHasBeenSet;
}

string ApiIdStatus::GetAuthType() const
{
    return m_authType;
}

void ApiIdStatus::SetAuthType(const string& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool ApiIdStatus::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

string ApiIdStatus::GetApiBusinessType() const
{
    return m_apiBusinessType;
}

void ApiIdStatus::SetApiBusinessType(const string& _apiBusinessType)
{
    m_apiBusinessType = _apiBusinessType;
    m_apiBusinessTypeHasBeenSet = true;
}

bool ApiIdStatus::ApiBusinessTypeHasBeenSet() const
{
    return m_apiBusinessTypeHasBeenSet;
}

string ApiIdStatus::GetAuthRelationApiId() const
{
    return m_authRelationApiId;
}

void ApiIdStatus::SetAuthRelationApiId(const string& _authRelationApiId)
{
    m_authRelationApiId = _authRelationApiId;
    m_authRelationApiIdHasBeenSet = true;
}

bool ApiIdStatus::AuthRelationApiIdHasBeenSet() const
{
    return m_authRelationApiIdHasBeenSet;
}

vector<string> ApiIdStatus::GetRelationBuniessApiIds() const
{
    return m_relationBuniessApiIds;
}

void ApiIdStatus::SetRelationBuniessApiIds(const vector<string>& _relationBuniessApiIds)
{
    m_relationBuniessApiIds = _relationBuniessApiIds;
    m_relationBuniessApiIdsHasBeenSet = true;
}

bool ApiIdStatus::RelationBuniessApiIdsHasBeenSet() const
{
    return m_relationBuniessApiIdsHasBeenSet;
}

OauthConfig ApiIdStatus::GetOauthConfig() const
{
    return m_oauthConfig;
}

void ApiIdStatus::SetOauthConfig(const OauthConfig& _oauthConfig)
{
    m_oauthConfig = _oauthConfig;
    m_oauthConfigHasBeenSet = true;
}

bool ApiIdStatus::OauthConfigHasBeenSet() const
{
    return m_oauthConfigHasBeenSet;
}

string ApiIdStatus::GetTokenLocation() const
{
    return m_tokenLocation;
}

void ApiIdStatus::SetTokenLocation(const string& _tokenLocation)
{
    m_tokenLocation = _tokenLocation;
    m_tokenLocationHasBeenSet = true;
}

bool ApiIdStatus::TokenLocationHasBeenSet() const
{
    return m_tokenLocationHasBeenSet;
}

