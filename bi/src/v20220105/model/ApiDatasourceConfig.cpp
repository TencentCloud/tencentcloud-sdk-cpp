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

#include <tencentcloud/bi/v20220105/model/ApiDatasourceConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

ApiDatasourceConfig::ApiDatasourceConfig() :
    m_fieldsJsonDataHasBeenSet(false),
    m_connectionTypeHasBeenSet(false),
    m_frequencyConfigHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_requestMethodHasBeenSet(false),
    m_requestHeaderHasBeenSet(false),
    m_requestParamsHasBeenSet(false),
    m_requestBodyHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_authorizationTypeHasBeenSet(false),
    m_tableIdHasBeenSet(false),
    m_jsonPathDbNameMapHasBeenSet(false),
    m_authApiHasBeenSet(false),
    m_appKeyHasBeenSet(false),
    m_appSecretHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_secretIvHasBeenSet(false)
{
}

CoreInternalOutcome ApiDatasourceConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FieldsJsonData") && !value["FieldsJsonData"].IsNull())
    {
        if (!value["FieldsJsonData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDatasourceConfig.FieldsJsonData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldsJsonData = string(value["FieldsJsonData"].GetString());
        m_fieldsJsonDataHasBeenSet = true;
    }

    if (value.HasMember("ConnectionType") && !value["ConnectionType"].IsNull())
    {
        if (!value["ConnectionType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDatasourceConfig.ConnectionType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_connectionType = value["ConnectionType"].GetUint64();
        m_connectionTypeHasBeenSet = true;
    }

    if (value.HasMember("FrequencyConfig") && !value["FrequencyConfig"].IsNull())
    {
        if (!value["FrequencyConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDatasourceConfig.FrequencyConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_frequencyConfig.Deserialize(value["FrequencyConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_frequencyConfigHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDatasourceConfig.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("RequestMethod") && !value["RequestMethod"].IsNull())
    {
        if (!value["RequestMethod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDatasourceConfig.RequestMethod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_requestMethod = value["RequestMethod"].GetUint64();
        m_requestMethodHasBeenSet = true;
    }

    if (value.HasMember("RequestHeader") && !value["RequestHeader"].IsNull())
    {
        if (!value["RequestHeader"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDatasourceConfig.RequestHeader` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestHeader = string(value["RequestHeader"].GetString());
        m_requestHeaderHasBeenSet = true;
    }

    if (value.HasMember("RequestParams") && !value["RequestParams"].IsNull())
    {
        if (!value["RequestParams"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDatasourceConfig.RequestParams` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestParams = string(value["RequestParams"].GetString());
        m_requestParamsHasBeenSet = true;
    }

    if (value.HasMember("RequestBody") && !value["RequestBody"].IsNull())
    {
        if (!value["RequestBody"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDatasourceConfig.RequestBody` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestBody = string(value["RequestBody"].GetString());
        m_requestBodyHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDatasourceConfig.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDatasourceConfig.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }

    if (value.HasMember("AuthorizationType") && !value["AuthorizationType"].IsNull())
    {
        if (!value["AuthorizationType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDatasourceConfig.AuthorizationType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_authorizationType = value["AuthorizationType"].GetUint64();
        m_authorizationTypeHasBeenSet = true;
    }

    if (value.HasMember("TableId") && !value["TableId"].IsNull())
    {
        if (!value["TableId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDatasourceConfig.TableId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_tableId = value["TableId"].GetUint64();
        m_tableIdHasBeenSet = true;
    }

    if (value.HasMember("JsonPathDbNameMap") && !value["JsonPathDbNameMap"].IsNull())
    {
        if (!value["JsonPathDbNameMap"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDatasourceConfig.JsonPathDbNameMap` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_jsonPathDbNameMap = string(value["JsonPathDbNameMap"].GetString());
        m_jsonPathDbNameMapHasBeenSet = true;
    }

    if (value.HasMember("AuthApi") && !value["AuthApi"].IsNull())
    {
        if (!value["AuthApi"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDatasourceConfig.AuthApi` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_authApi = string(value["AuthApi"].GetString());
        m_authApiHasBeenSet = true;
    }

    if (value.HasMember("AppKey") && !value["AppKey"].IsNull())
    {
        if (!value["AppKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDatasourceConfig.AppKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appKey = string(value["AppKey"].GetString());
        m_appKeyHasBeenSet = true;
    }

    if (value.HasMember("AppSecret") && !value["AppSecret"].IsNull())
    {
        if (!value["AppSecret"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDatasourceConfig.AppSecret` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appSecret = string(value["AppSecret"].GetString());
        m_appSecretHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDatasourceConfig.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("SecretIv") && !value["SecretIv"].IsNull())
    {
        if (!value["SecretIv"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiDatasourceConfig.SecretIv` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretIv = string(value["SecretIv"].GetString());
        m_secretIvHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiDatasourceConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldsJsonDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldsJsonData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldsJsonData.c_str(), allocator).Move(), allocator);
    }

    if (m_connectionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConnectionType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_connectionType, allocator);
    }

    if (m_frequencyConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrequencyConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_frequencyConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_requestMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestMethod, allocator);
    }

    if (m_requestHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestHeader.c_str(), allocator).Move(), allocator);
    }

    if (m_requestParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestParams.c_str(), allocator).Move(), allocator);
    }

    if (m_requestBodyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestBody";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestBody.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authorizationType, allocator);
    }

    if (m_tableIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tableId, allocator);
    }

    if (m_jsonPathDbNameMapHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JsonPathDbNameMap";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_jsonPathDbNameMap.c_str(), allocator).Move(), allocator);
    }

    if (m_authApiHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthApi";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_authApi.c_str(), allocator).Move(), allocator);
    }

    if (m_appKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appKey.c_str(), allocator).Move(), allocator);
    }

    if (m_appSecretHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppSecret";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appSecret.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_secretIvHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretIv";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretIv.c_str(), allocator).Move(), allocator);
    }

}


string ApiDatasourceConfig::GetFieldsJsonData() const
{
    return m_fieldsJsonData;
}

void ApiDatasourceConfig::SetFieldsJsonData(const string& _fieldsJsonData)
{
    m_fieldsJsonData = _fieldsJsonData;
    m_fieldsJsonDataHasBeenSet = true;
}

bool ApiDatasourceConfig::FieldsJsonDataHasBeenSet() const
{
    return m_fieldsJsonDataHasBeenSet;
}

uint64_t ApiDatasourceConfig::GetConnectionType() const
{
    return m_connectionType;
}

void ApiDatasourceConfig::SetConnectionType(const uint64_t& _connectionType)
{
    m_connectionType = _connectionType;
    m_connectionTypeHasBeenSet = true;
}

bool ApiDatasourceConfig::ConnectionTypeHasBeenSet() const
{
    return m_connectionTypeHasBeenSet;
}

FrequencyConfig ApiDatasourceConfig::GetFrequencyConfig() const
{
    return m_frequencyConfig;
}

void ApiDatasourceConfig::SetFrequencyConfig(const FrequencyConfig& _frequencyConfig)
{
    m_frequencyConfig = _frequencyConfig;
    m_frequencyConfigHasBeenSet = true;
}

bool ApiDatasourceConfig::FrequencyConfigHasBeenSet() const
{
    return m_frequencyConfigHasBeenSet;
}

string ApiDatasourceConfig::GetUrl() const
{
    return m_url;
}

void ApiDatasourceConfig::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool ApiDatasourceConfig::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

uint64_t ApiDatasourceConfig::GetRequestMethod() const
{
    return m_requestMethod;
}

void ApiDatasourceConfig::SetRequestMethod(const uint64_t& _requestMethod)
{
    m_requestMethod = _requestMethod;
    m_requestMethodHasBeenSet = true;
}

bool ApiDatasourceConfig::RequestMethodHasBeenSet() const
{
    return m_requestMethodHasBeenSet;
}

string ApiDatasourceConfig::GetRequestHeader() const
{
    return m_requestHeader;
}

void ApiDatasourceConfig::SetRequestHeader(const string& _requestHeader)
{
    m_requestHeader = _requestHeader;
    m_requestHeaderHasBeenSet = true;
}

bool ApiDatasourceConfig::RequestHeaderHasBeenSet() const
{
    return m_requestHeaderHasBeenSet;
}

string ApiDatasourceConfig::GetRequestParams() const
{
    return m_requestParams;
}

void ApiDatasourceConfig::SetRequestParams(const string& _requestParams)
{
    m_requestParams = _requestParams;
    m_requestParamsHasBeenSet = true;
}

bool ApiDatasourceConfig::RequestParamsHasBeenSet() const
{
    return m_requestParamsHasBeenSet;
}

string ApiDatasourceConfig::GetRequestBody() const
{
    return m_requestBody;
}

void ApiDatasourceConfig::SetRequestBody(const string& _requestBody)
{
    m_requestBody = _requestBody;
    m_requestBodyHasBeenSet = true;
}

bool ApiDatasourceConfig::RequestBodyHasBeenSet() const
{
    return m_requestBodyHasBeenSet;
}

string ApiDatasourceConfig::GetUserName() const
{
    return m_userName;
}

void ApiDatasourceConfig::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool ApiDatasourceConfig::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string ApiDatasourceConfig::GetPassword() const
{
    return m_password;
}

void ApiDatasourceConfig::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool ApiDatasourceConfig::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

uint64_t ApiDatasourceConfig::GetAuthorizationType() const
{
    return m_authorizationType;
}

void ApiDatasourceConfig::SetAuthorizationType(const uint64_t& _authorizationType)
{
    m_authorizationType = _authorizationType;
    m_authorizationTypeHasBeenSet = true;
}

bool ApiDatasourceConfig::AuthorizationTypeHasBeenSet() const
{
    return m_authorizationTypeHasBeenSet;
}

uint64_t ApiDatasourceConfig::GetTableId() const
{
    return m_tableId;
}

void ApiDatasourceConfig::SetTableId(const uint64_t& _tableId)
{
    m_tableId = _tableId;
    m_tableIdHasBeenSet = true;
}

bool ApiDatasourceConfig::TableIdHasBeenSet() const
{
    return m_tableIdHasBeenSet;
}

string ApiDatasourceConfig::GetJsonPathDbNameMap() const
{
    return m_jsonPathDbNameMap;
}

void ApiDatasourceConfig::SetJsonPathDbNameMap(const string& _jsonPathDbNameMap)
{
    m_jsonPathDbNameMap = _jsonPathDbNameMap;
    m_jsonPathDbNameMapHasBeenSet = true;
}

bool ApiDatasourceConfig::JsonPathDbNameMapHasBeenSet() const
{
    return m_jsonPathDbNameMapHasBeenSet;
}

string ApiDatasourceConfig::GetAuthApi() const
{
    return m_authApi;
}

void ApiDatasourceConfig::SetAuthApi(const string& _authApi)
{
    m_authApi = _authApi;
    m_authApiHasBeenSet = true;
}

bool ApiDatasourceConfig::AuthApiHasBeenSet() const
{
    return m_authApiHasBeenSet;
}

string ApiDatasourceConfig::GetAppKey() const
{
    return m_appKey;
}

void ApiDatasourceConfig::SetAppKey(const string& _appKey)
{
    m_appKey = _appKey;
    m_appKeyHasBeenSet = true;
}

bool ApiDatasourceConfig::AppKeyHasBeenSet() const
{
    return m_appKeyHasBeenSet;
}

string ApiDatasourceConfig::GetAppSecret() const
{
    return m_appSecret;
}

void ApiDatasourceConfig::SetAppSecret(const string& _appSecret)
{
    m_appSecret = _appSecret;
    m_appSecretHasBeenSet = true;
}

bool ApiDatasourceConfig::AppSecretHasBeenSet() const
{
    return m_appSecretHasBeenSet;
}

string ApiDatasourceConfig::GetSecretKey() const
{
    return m_secretKey;
}

void ApiDatasourceConfig::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool ApiDatasourceConfig::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string ApiDatasourceConfig::GetSecretIv() const
{
    return m_secretIv;
}

void ApiDatasourceConfig::SetSecretIv(const string& _secretIv)
{
    m_secretIv = _secretIv;
    m_secretIvHasBeenSet = true;
}

bool ApiDatasourceConfig::SecretIvHasBeenSet() const
{
    return m_secretIvHasBeenSet;
}

