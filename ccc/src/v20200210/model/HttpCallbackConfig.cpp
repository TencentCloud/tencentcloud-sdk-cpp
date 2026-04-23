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

#include <tencentcloud/ccc/v20200210/model/HttpCallbackConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

HttpCallbackConfig::HttpCallbackConfig() :
    m_urlHasBeenSet(false),
    m_headerParamsHasBeenSet(false),
    m_paramsHasBeenSet(false),
    m_returnsHasBeenSet(false),
    m_asyncHasBeenSet(false),
    m_authTypeHasBeenSet(false),
    m_basicAuthHasBeenSet(false),
    m_bearerAuthHasBeenSet(false),
    m_customAuthHasBeenSet(false),
    m_oauth2AuthHasBeenSet(false)
{
}

CoreInternalOutcome HttpCallbackConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpCallbackConfig.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("HeaderParams") && !value["HeaderParams"].IsNull())
    {
        if (!value["HeaderParams"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HttpCallbackConfig.HeaderParams` is not array type"));

        const rapidjson::Value &tmpValue = value["HeaderParams"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HeaderParams item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_headerParams.push_back(item);
        }
        m_headerParamsHasBeenSet = true;
    }

    if (value.HasMember("Params") && !value["Params"].IsNull())
    {
        if (!value["Params"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HttpCallbackConfig.Params` is not array type"));

        const rapidjson::Value &tmpValue = value["Params"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HttpParams item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_params.push_back(item);
        }
        m_paramsHasBeenSet = true;
    }

    if (value.HasMember("Returns") && !value["Returns"].IsNull())
    {
        if (!value["Returns"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HttpCallbackConfig.Returns` is not array type"));

        const rapidjson::Value &tmpValue = value["Returns"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReturnKey item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_returns.push_back(item);
        }
        m_returnsHasBeenSet = true;
    }

    if (value.HasMember("Async") && !value["Async"].IsNull())
    {
        if (!value["Async"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HttpCallbackConfig.Async` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_async = value["Async"].GetBool();
        m_asyncHasBeenSet = true;
    }

    if (value.HasMember("AuthType") && !value["AuthType"].IsNull())
    {
        if (!value["AuthType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HttpCallbackConfig.AuthType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_authType = value["AuthType"].GetUint64();
        m_authTypeHasBeenSet = true;
    }

    if (value.HasMember("BasicAuth") && !value["BasicAuth"].IsNull())
    {
        if (!value["BasicAuth"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HttpCallbackConfig.BasicAuth` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_basicAuth.Deserialize(value["BasicAuth"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_basicAuthHasBeenSet = true;
    }

    if (value.HasMember("BearerAuth") && !value["BearerAuth"].IsNull())
    {
        if (!value["BearerAuth"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HttpCallbackConfig.BearerAuth` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bearerAuth.Deserialize(value["BearerAuth"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bearerAuthHasBeenSet = true;
    }

    if (value.HasMember("CustomAuth") && !value["CustomAuth"].IsNull())
    {
        if (!value["CustomAuth"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HttpCallbackConfig.CustomAuth` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customAuth.Deserialize(value["CustomAuth"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customAuthHasBeenSet = true;
    }

    if (value.HasMember("Oauth2Auth") && !value["Oauth2Auth"].IsNull())
    {
        if (!value["Oauth2Auth"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `HttpCallbackConfig.Oauth2Auth` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_oauth2Auth.Deserialize(value["Oauth2Auth"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_oauth2AuthHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HttpCallbackConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_headerParamsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderParams";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headerParams.begin(); itr != m_headerParams.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_paramsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Params";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_params.begin(); itr != m_params.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_returnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Returns";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_returns.begin(); itr != m_returns.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_asyncHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Async";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_async, allocator);
    }

    if (m_authTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authType, allocator);
    }

    if (m_basicAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_basicAuth.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bearerAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BearerAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bearerAuth.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_customAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomAuth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customAuth.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_oauth2AuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Oauth2Auth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oauth2Auth.ToJsonObject(value[key.c_str()], allocator);
    }

}


string HttpCallbackConfig::GetUrl() const
{
    return m_url;
}

void HttpCallbackConfig::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool HttpCallbackConfig::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

vector<HeaderParams> HttpCallbackConfig::GetHeaderParams() const
{
    return m_headerParams;
}

void HttpCallbackConfig::SetHeaderParams(const vector<HeaderParams>& _headerParams)
{
    m_headerParams = _headerParams;
    m_headerParamsHasBeenSet = true;
}

bool HttpCallbackConfig::HeaderParamsHasBeenSet() const
{
    return m_headerParamsHasBeenSet;
}

vector<HttpParams> HttpCallbackConfig::GetParams() const
{
    return m_params;
}

void HttpCallbackConfig::SetParams(const vector<HttpParams>& _params)
{
    m_params = _params;
    m_paramsHasBeenSet = true;
}

bool HttpCallbackConfig::ParamsHasBeenSet() const
{
    return m_paramsHasBeenSet;
}

vector<ReturnKey> HttpCallbackConfig::GetReturns() const
{
    return m_returns;
}

void HttpCallbackConfig::SetReturns(const vector<ReturnKey>& _returns)
{
    m_returns = _returns;
    m_returnsHasBeenSet = true;
}

bool HttpCallbackConfig::ReturnsHasBeenSet() const
{
    return m_returnsHasBeenSet;
}

bool HttpCallbackConfig::GetAsync() const
{
    return m_async;
}

void HttpCallbackConfig::SetAsync(const bool& _async)
{
    m_async = _async;
    m_asyncHasBeenSet = true;
}

bool HttpCallbackConfig::AsyncHasBeenSet() const
{
    return m_asyncHasBeenSet;
}

uint64_t HttpCallbackConfig::GetAuthType() const
{
    return m_authType;
}

void HttpCallbackConfig::SetAuthType(const uint64_t& _authType)
{
    m_authType = _authType;
    m_authTypeHasBeenSet = true;
}

bool HttpCallbackConfig::AuthTypeHasBeenSet() const
{
    return m_authTypeHasBeenSet;
}

BasicAuth HttpCallbackConfig::GetBasicAuth() const
{
    return m_basicAuth;
}

void HttpCallbackConfig::SetBasicAuth(const BasicAuth& _basicAuth)
{
    m_basicAuth = _basicAuth;
    m_basicAuthHasBeenSet = true;
}

bool HttpCallbackConfig::BasicAuthHasBeenSet() const
{
    return m_basicAuthHasBeenSet;
}

BearerAuth HttpCallbackConfig::GetBearerAuth() const
{
    return m_bearerAuth;
}

void HttpCallbackConfig::SetBearerAuth(const BearerAuth& _bearerAuth)
{
    m_bearerAuth = _bearerAuth;
    m_bearerAuthHasBeenSet = true;
}

bool HttpCallbackConfig::BearerAuthHasBeenSet() const
{
    return m_bearerAuthHasBeenSet;
}

HttpParams HttpCallbackConfig::GetCustomAuth() const
{
    return m_customAuth;
}

void HttpCallbackConfig::SetCustomAuth(const HttpParams& _customAuth)
{
    m_customAuth = _customAuth;
    m_customAuthHasBeenSet = true;
}

bool HttpCallbackConfig::CustomAuthHasBeenSet() const
{
    return m_customAuthHasBeenSet;
}

OauthConfig HttpCallbackConfig::GetOauth2Auth() const
{
    return m_oauth2Auth;
}

void HttpCallbackConfig::SetOauth2Auth(const OauthConfig& _oauth2Auth)
{
    m_oauth2Auth = _oauth2Auth;
    m_oauth2AuthHasBeenSet = true;
}

bool HttpCallbackConfig::Oauth2AuthHasBeenSet() const
{
    return m_oauth2AuthHasBeenSet;
}

