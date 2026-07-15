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

#include <tencentcloud/cngw/v20230418/model/AIGWJWTAuthPluginConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWJWTAuthPluginConfig::AIGWJWTAuthPluginConfig() :
    m_headerNamesHasBeenSet(false),
    m_cookieNamesHasBeenSet(false),
    m_uRIParamNamesHasBeenSet(false),
    m_keyClaimNameHasBeenSet(false),
    m_claimsToVerifyHasBeenSet(false),
    m_maximumExpirationHasBeenSet(false),
    m_secretIsBase64HasBeenSet(false),
    m_runOnPreFlightHasBeenSet(false)
{
}

CoreInternalOutcome AIGWJWTAuthPluginConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HeaderNames") && !value["HeaderNames"].IsNull())
    {
        if (!value["HeaderNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWJWTAuthPluginConfig.HeaderNames` is not array type"));

        const rapidjson::Value &tmpValue = value["HeaderNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_headerNames.push_back((*itr).GetString());
        }
        m_headerNamesHasBeenSet = true;
    }

    if (value.HasMember("CookieNames") && !value["CookieNames"].IsNull())
    {
        if (!value["CookieNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWJWTAuthPluginConfig.CookieNames` is not array type"));

        const rapidjson::Value &tmpValue = value["CookieNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cookieNames.push_back((*itr).GetString());
        }
        m_cookieNamesHasBeenSet = true;
    }

    if (value.HasMember("URIParamNames") && !value["URIParamNames"].IsNull())
    {
        if (!value["URIParamNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWJWTAuthPluginConfig.URIParamNames` is not array type"));

        const rapidjson::Value &tmpValue = value["URIParamNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_uRIParamNames.push_back((*itr).GetString());
        }
        m_uRIParamNamesHasBeenSet = true;
    }

    if (value.HasMember("KeyClaimName") && !value["KeyClaimName"].IsNull())
    {
        if (!value["KeyClaimName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWJWTAuthPluginConfig.KeyClaimName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyClaimName = string(value["KeyClaimName"].GetString());
        m_keyClaimNameHasBeenSet = true;
    }

    if (value.HasMember("ClaimsToVerify") && !value["ClaimsToVerify"].IsNull())
    {
        if (!value["ClaimsToVerify"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWJWTAuthPluginConfig.ClaimsToVerify` is not array type"));

        const rapidjson::Value &tmpValue = value["ClaimsToVerify"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_claimsToVerify.push_back((*itr).GetString());
        }
        m_claimsToVerifyHasBeenSet = true;
    }

    if (value.HasMember("MaximumExpiration") && !value["MaximumExpiration"].IsNull())
    {
        if (!value["MaximumExpiration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWJWTAuthPluginConfig.MaximumExpiration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maximumExpiration = value["MaximumExpiration"].GetInt64();
        m_maximumExpirationHasBeenSet = true;
    }

    if (value.HasMember("SecretIsBase64") && !value["SecretIsBase64"].IsNull())
    {
        if (!value["SecretIsBase64"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWJWTAuthPluginConfig.SecretIsBase64` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_secretIsBase64 = value["SecretIsBase64"].GetBool();
        m_secretIsBase64HasBeenSet = true;
    }

    if (value.HasMember("RunOnPreFlight") && !value["RunOnPreFlight"].IsNull())
    {
        if (!value["RunOnPreFlight"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWJWTAuthPluginConfig.RunOnPreFlight` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_runOnPreFlight = value["RunOnPreFlight"].GetBool();
        m_runOnPreFlightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWJWTAuthPluginConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_headerNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeaderNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_headerNames.begin(); itr != m_headerNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cookieNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CookieNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cookieNames.begin(); itr != m_cookieNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_uRIParamNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URIParamNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uRIParamNames.begin(); itr != m_uRIParamNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_keyClaimNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyClaimName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyClaimName.c_str(), allocator).Move(), allocator);
    }

    if (m_claimsToVerifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClaimsToVerify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_claimsToVerify.begin(); itr != m_claimsToVerify.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_maximumExpirationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaximumExpiration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maximumExpiration, allocator);
    }

    if (m_secretIsBase64HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretIsBase64";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_secretIsBase64, allocator);
    }

    if (m_runOnPreFlightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunOnPreFlight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runOnPreFlight, allocator);
    }

}


vector<string> AIGWJWTAuthPluginConfig::GetHeaderNames() const
{
    return m_headerNames;
}

void AIGWJWTAuthPluginConfig::SetHeaderNames(const vector<string>& _headerNames)
{
    m_headerNames = _headerNames;
    m_headerNamesHasBeenSet = true;
}

bool AIGWJWTAuthPluginConfig::HeaderNamesHasBeenSet() const
{
    return m_headerNamesHasBeenSet;
}

vector<string> AIGWJWTAuthPluginConfig::GetCookieNames() const
{
    return m_cookieNames;
}

void AIGWJWTAuthPluginConfig::SetCookieNames(const vector<string>& _cookieNames)
{
    m_cookieNames = _cookieNames;
    m_cookieNamesHasBeenSet = true;
}

bool AIGWJWTAuthPluginConfig::CookieNamesHasBeenSet() const
{
    return m_cookieNamesHasBeenSet;
}

vector<string> AIGWJWTAuthPluginConfig::GetURIParamNames() const
{
    return m_uRIParamNames;
}

void AIGWJWTAuthPluginConfig::SetURIParamNames(const vector<string>& _uRIParamNames)
{
    m_uRIParamNames = _uRIParamNames;
    m_uRIParamNamesHasBeenSet = true;
}

bool AIGWJWTAuthPluginConfig::URIParamNamesHasBeenSet() const
{
    return m_uRIParamNamesHasBeenSet;
}

string AIGWJWTAuthPluginConfig::GetKeyClaimName() const
{
    return m_keyClaimName;
}

void AIGWJWTAuthPluginConfig::SetKeyClaimName(const string& _keyClaimName)
{
    m_keyClaimName = _keyClaimName;
    m_keyClaimNameHasBeenSet = true;
}

bool AIGWJWTAuthPluginConfig::KeyClaimNameHasBeenSet() const
{
    return m_keyClaimNameHasBeenSet;
}

vector<string> AIGWJWTAuthPluginConfig::GetClaimsToVerify() const
{
    return m_claimsToVerify;
}

void AIGWJWTAuthPluginConfig::SetClaimsToVerify(const vector<string>& _claimsToVerify)
{
    m_claimsToVerify = _claimsToVerify;
    m_claimsToVerifyHasBeenSet = true;
}

bool AIGWJWTAuthPluginConfig::ClaimsToVerifyHasBeenSet() const
{
    return m_claimsToVerifyHasBeenSet;
}

int64_t AIGWJWTAuthPluginConfig::GetMaximumExpiration() const
{
    return m_maximumExpiration;
}

void AIGWJWTAuthPluginConfig::SetMaximumExpiration(const int64_t& _maximumExpiration)
{
    m_maximumExpiration = _maximumExpiration;
    m_maximumExpirationHasBeenSet = true;
}

bool AIGWJWTAuthPluginConfig::MaximumExpirationHasBeenSet() const
{
    return m_maximumExpirationHasBeenSet;
}

bool AIGWJWTAuthPluginConfig::GetSecretIsBase64() const
{
    return m_secretIsBase64;
}

void AIGWJWTAuthPluginConfig::SetSecretIsBase64(const bool& _secretIsBase64)
{
    m_secretIsBase64 = _secretIsBase64;
    m_secretIsBase64HasBeenSet = true;
}

bool AIGWJWTAuthPluginConfig::SecretIsBase64HasBeenSet() const
{
    return m_secretIsBase64HasBeenSet;
}

bool AIGWJWTAuthPluginConfig::GetRunOnPreFlight() const
{
    return m_runOnPreFlight;
}

void AIGWJWTAuthPluginConfig::SetRunOnPreFlight(const bool& _runOnPreFlight)
{
    m_runOnPreFlight = _runOnPreFlight;
    m_runOnPreFlightHasBeenSet = true;
}

bool AIGWJWTAuthPluginConfig::RunOnPreFlightHasBeenSet() const
{
    return m_runOnPreFlightHasBeenSet;
}

