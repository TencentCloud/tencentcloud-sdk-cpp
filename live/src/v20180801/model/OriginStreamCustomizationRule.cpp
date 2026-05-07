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

#include <tencentcloud/live/v20180801/model/OriginStreamCustomizationRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

OriginStreamCustomizationRule::OriginStreamCustomizationRule() :
    m_matchRuleHasBeenSet(false),
    m_originAddressTypeHasBeenSet(false),
    m_originHostHasBeenSet(false),
    m_originAddressHasBeenSet(false),
    m_passThroughHttpHeaderHasBeenSet(false),
    m_passThroughResponseHasBeenSet(false),
    m_passThroughParamHasBeenSet(false),
    m_urlReplaceRulesHasBeenSet(false),
    m_optionsRequestHasBeenSet(false),
    m_originTimeoutHasBeenSet(false),
    m_originRetryTimesHasBeenSet(false),
    m_cacheStatusCodeHasBeenSet(false),
    m_cacheHasBeenSet(false),
    m_keepParamHasBeenSet(false),
    m_httpHeaderHasBeenSet(false),
    m_customizationCacheFollowOriginHasBeenSet(false),
    m_keepHttpHeaderHasBeenSet(false)
{
}

CoreInternalOutcome OriginStreamCustomizationRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MatchRule") && !value["MatchRule"].IsNull())
    {
        if (!value["MatchRule"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginStreamCustomizationRule.MatchRule` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_matchRule = string(value["MatchRule"].GetString());
        m_matchRuleHasBeenSet = true;
    }

    if (value.HasMember("OriginAddressType") && !value["OriginAddressType"].IsNull())
    {
        if (!value["OriginAddressType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OriginStreamCustomizationRule.OriginAddressType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originAddressType = value["OriginAddressType"].GetInt64();
        m_originAddressTypeHasBeenSet = true;
    }

    if (value.HasMember("OriginHost") && !value["OriginHost"].IsNull())
    {
        if (!value["OriginHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginStreamCustomizationRule.OriginHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originHost = string(value["OriginHost"].GetString());
        m_originHostHasBeenSet = true;
    }

    if (value.HasMember("OriginAddress") && !value["OriginAddress"].IsNull())
    {
        if (!value["OriginAddress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginStreamCustomizationRule.OriginAddress` is not array type"));

        const rapidjson::Value &tmpValue = value["OriginAddress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_originAddress.push_back((*itr).GetString());
        }
        m_originAddressHasBeenSet = true;
    }

    if (value.HasMember("PassThroughHttpHeader") && !value["PassThroughHttpHeader"].IsNull())
    {
        if (!value["PassThroughHttpHeader"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginStreamCustomizationRule.PassThroughHttpHeader` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passThroughHttpHeader = string(value["PassThroughHttpHeader"].GetString());
        m_passThroughHttpHeaderHasBeenSet = true;
    }

    if (value.HasMember("PassThroughResponse") && !value["PassThroughResponse"].IsNull())
    {
        if (!value["PassThroughResponse"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginStreamCustomizationRule.PassThroughResponse` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passThroughResponse = string(value["PassThroughResponse"].GetString());
        m_passThroughResponseHasBeenSet = true;
    }

    if (value.HasMember("PassThroughParam") && !value["PassThroughParam"].IsNull())
    {
        if (!value["PassThroughParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginStreamCustomizationRule.PassThroughParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passThroughParam = string(value["PassThroughParam"].GetString());
        m_passThroughParamHasBeenSet = true;
    }

    if (value.HasMember("UrlReplaceRules") && !value["UrlReplaceRules"].IsNull())
    {
        if (!value["UrlReplaceRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginStreamCustomizationRule.UrlReplaceRules` is not array type"));

        const rapidjson::Value &tmpValue = value["UrlReplaceRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_urlReplaceRules.push_back((*itr).GetString());
        }
        m_urlReplaceRulesHasBeenSet = true;
    }

    if (value.HasMember("OptionsRequest") && !value["OptionsRequest"].IsNull())
    {
        if (!value["OptionsRequest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginStreamCustomizationRule.OptionsRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_optionsRequest = string(value["OptionsRequest"].GetString());
        m_optionsRequestHasBeenSet = true;
    }

    if (value.HasMember("OriginTimeout") && !value["OriginTimeout"].IsNull())
    {
        if (!value["OriginTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OriginStreamCustomizationRule.OriginTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originTimeout = value["OriginTimeout"].GetInt64();
        m_originTimeoutHasBeenSet = true;
    }

    if (value.HasMember("OriginRetryTimes") && !value["OriginRetryTimes"].IsNull())
    {
        if (!value["OriginRetryTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OriginStreamCustomizationRule.OriginRetryTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originRetryTimes = value["OriginRetryTimes"].GetInt64();
        m_originRetryTimesHasBeenSet = true;
    }

    if (value.HasMember("CacheStatusCode") && !value["CacheStatusCode"].IsNull())
    {
        if (!value["CacheStatusCode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginStreamCustomizationRule.CacheStatusCode` is not array type"));

        const rapidjson::Value &tmpValue = value["CacheStatusCode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cacheStatusCode.push_back((*itr).GetString());
        }
        m_cacheStatusCodeHasBeenSet = true;
    }

    if (value.HasMember("Cache") && !value["Cache"].IsNull())
    {
        if (!value["Cache"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OriginStreamCustomizationRule.Cache` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cache = value["Cache"].GetInt64();
        m_cacheHasBeenSet = true;
    }

    if (value.HasMember("KeepParam") && !value["KeepParam"].IsNull())
    {
        if (!value["KeepParam"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginStreamCustomizationRule.KeepParam` is not array type"));

        const rapidjson::Value &tmpValue = value["KeepParam"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keepParam.push_back((*itr).GetString());
        }
        m_keepParamHasBeenSet = true;
    }

    if (value.HasMember("HttpHeader") && !value["HttpHeader"].IsNull())
    {
        if (!value["HttpHeader"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginStreamCustomizationRule.HttpHeader` is not array type"));

        const rapidjson::Value &tmpValue = value["HttpHeader"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_httpHeader.push_back((*itr).GetString());
        }
        m_httpHeaderHasBeenSet = true;
    }

    if (value.HasMember("CustomizationCacheFollowOrigin") && !value["CustomizationCacheFollowOrigin"].IsNull())
    {
        if (!value["CustomizationCacheFollowOrigin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OriginStreamCustomizationRule.CustomizationCacheFollowOrigin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_customizationCacheFollowOrigin = value["CustomizationCacheFollowOrigin"].GetInt64();
        m_customizationCacheFollowOriginHasBeenSet = true;
    }

    if (value.HasMember("KeepHttpHeader") && !value["KeepHttpHeader"].IsNull())
    {
        if (!value["KeepHttpHeader"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginStreamCustomizationRule.KeepHttpHeader` is not array type"));

        const rapidjson::Value &tmpValue = value["KeepHttpHeader"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keepHttpHeader.push_back((*itr).GetString());
        }
        m_keepHttpHeaderHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OriginStreamCustomizationRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_matchRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MatchRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_matchRule.c_str(), allocator).Move(), allocator);
    }

    if (m_originAddressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginAddressType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originAddressType, allocator);
    }

    if (m_originHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originHost.c_str(), allocator).Move(), allocator);
    }

    if (m_originAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_originAddress.begin(); itr != m_originAddress.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_passThroughHttpHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassThroughHttpHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passThroughHttpHeader.c_str(), allocator).Move(), allocator);
    }

    if (m_passThroughResponseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassThroughResponse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passThroughResponse.c_str(), allocator).Move(), allocator);
    }

    if (m_passThroughParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassThroughParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_passThroughParam.c_str(), allocator).Move(), allocator);
    }

    if (m_urlReplaceRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlReplaceRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_urlReplaceRules.begin(); itr != m_urlReplaceRules.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_optionsRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptionsRequest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_optionsRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_originTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originTimeout, allocator);
    }

    if (m_originRetryTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginRetryTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originRetryTimes, allocator);
    }

    if (m_cacheStatusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheStatusCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cacheStatusCode.begin(); itr != m_cacheStatusCode.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cache, allocator);
    }

    if (m_keepParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keepParam.begin(); itr != m_keepParam.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_httpHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_httpHeader.begin(); itr != m_httpHeader.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customizationCacheFollowOriginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomizationCacheFollowOrigin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customizationCacheFollowOrigin, allocator);
    }

    if (m_keepHttpHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeepHttpHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keepHttpHeader.begin(); itr != m_keepHttpHeader.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string OriginStreamCustomizationRule::GetMatchRule() const
{
    return m_matchRule;
}

void OriginStreamCustomizationRule::SetMatchRule(const string& _matchRule)
{
    m_matchRule = _matchRule;
    m_matchRuleHasBeenSet = true;
}

bool OriginStreamCustomizationRule::MatchRuleHasBeenSet() const
{
    return m_matchRuleHasBeenSet;
}

int64_t OriginStreamCustomizationRule::GetOriginAddressType() const
{
    return m_originAddressType;
}

void OriginStreamCustomizationRule::SetOriginAddressType(const int64_t& _originAddressType)
{
    m_originAddressType = _originAddressType;
    m_originAddressTypeHasBeenSet = true;
}

bool OriginStreamCustomizationRule::OriginAddressTypeHasBeenSet() const
{
    return m_originAddressTypeHasBeenSet;
}

string OriginStreamCustomizationRule::GetOriginHost() const
{
    return m_originHost;
}

void OriginStreamCustomizationRule::SetOriginHost(const string& _originHost)
{
    m_originHost = _originHost;
    m_originHostHasBeenSet = true;
}

bool OriginStreamCustomizationRule::OriginHostHasBeenSet() const
{
    return m_originHostHasBeenSet;
}

vector<string> OriginStreamCustomizationRule::GetOriginAddress() const
{
    return m_originAddress;
}

void OriginStreamCustomizationRule::SetOriginAddress(const vector<string>& _originAddress)
{
    m_originAddress = _originAddress;
    m_originAddressHasBeenSet = true;
}

bool OriginStreamCustomizationRule::OriginAddressHasBeenSet() const
{
    return m_originAddressHasBeenSet;
}

string OriginStreamCustomizationRule::GetPassThroughHttpHeader() const
{
    return m_passThroughHttpHeader;
}

void OriginStreamCustomizationRule::SetPassThroughHttpHeader(const string& _passThroughHttpHeader)
{
    m_passThroughHttpHeader = _passThroughHttpHeader;
    m_passThroughHttpHeaderHasBeenSet = true;
}

bool OriginStreamCustomizationRule::PassThroughHttpHeaderHasBeenSet() const
{
    return m_passThroughHttpHeaderHasBeenSet;
}

string OriginStreamCustomizationRule::GetPassThroughResponse() const
{
    return m_passThroughResponse;
}

void OriginStreamCustomizationRule::SetPassThroughResponse(const string& _passThroughResponse)
{
    m_passThroughResponse = _passThroughResponse;
    m_passThroughResponseHasBeenSet = true;
}

bool OriginStreamCustomizationRule::PassThroughResponseHasBeenSet() const
{
    return m_passThroughResponseHasBeenSet;
}

string OriginStreamCustomizationRule::GetPassThroughParam() const
{
    return m_passThroughParam;
}

void OriginStreamCustomizationRule::SetPassThroughParam(const string& _passThroughParam)
{
    m_passThroughParam = _passThroughParam;
    m_passThroughParamHasBeenSet = true;
}

bool OriginStreamCustomizationRule::PassThroughParamHasBeenSet() const
{
    return m_passThroughParamHasBeenSet;
}

vector<string> OriginStreamCustomizationRule::GetUrlReplaceRules() const
{
    return m_urlReplaceRules;
}

void OriginStreamCustomizationRule::SetUrlReplaceRules(const vector<string>& _urlReplaceRules)
{
    m_urlReplaceRules = _urlReplaceRules;
    m_urlReplaceRulesHasBeenSet = true;
}

bool OriginStreamCustomizationRule::UrlReplaceRulesHasBeenSet() const
{
    return m_urlReplaceRulesHasBeenSet;
}

string OriginStreamCustomizationRule::GetOptionsRequest() const
{
    return m_optionsRequest;
}

void OriginStreamCustomizationRule::SetOptionsRequest(const string& _optionsRequest)
{
    m_optionsRequest = _optionsRequest;
    m_optionsRequestHasBeenSet = true;
}

bool OriginStreamCustomizationRule::OptionsRequestHasBeenSet() const
{
    return m_optionsRequestHasBeenSet;
}

int64_t OriginStreamCustomizationRule::GetOriginTimeout() const
{
    return m_originTimeout;
}

void OriginStreamCustomizationRule::SetOriginTimeout(const int64_t& _originTimeout)
{
    m_originTimeout = _originTimeout;
    m_originTimeoutHasBeenSet = true;
}

bool OriginStreamCustomizationRule::OriginTimeoutHasBeenSet() const
{
    return m_originTimeoutHasBeenSet;
}

int64_t OriginStreamCustomizationRule::GetOriginRetryTimes() const
{
    return m_originRetryTimes;
}

void OriginStreamCustomizationRule::SetOriginRetryTimes(const int64_t& _originRetryTimes)
{
    m_originRetryTimes = _originRetryTimes;
    m_originRetryTimesHasBeenSet = true;
}

bool OriginStreamCustomizationRule::OriginRetryTimesHasBeenSet() const
{
    return m_originRetryTimesHasBeenSet;
}

vector<string> OriginStreamCustomizationRule::GetCacheStatusCode() const
{
    return m_cacheStatusCode;
}

void OriginStreamCustomizationRule::SetCacheStatusCode(const vector<string>& _cacheStatusCode)
{
    m_cacheStatusCode = _cacheStatusCode;
    m_cacheStatusCodeHasBeenSet = true;
}

bool OriginStreamCustomizationRule::CacheStatusCodeHasBeenSet() const
{
    return m_cacheStatusCodeHasBeenSet;
}

int64_t OriginStreamCustomizationRule::GetCache() const
{
    return m_cache;
}

void OriginStreamCustomizationRule::SetCache(const int64_t& _cache)
{
    m_cache = _cache;
    m_cacheHasBeenSet = true;
}

bool OriginStreamCustomizationRule::CacheHasBeenSet() const
{
    return m_cacheHasBeenSet;
}

vector<string> OriginStreamCustomizationRule::GetKeepParam() const
{
    return m_keepParam;
}

void OriginStreamCustomizationRule::SetKeepParam(const vector<string>& _keepParam)
{
    m_keepParam = _keepParam;
    m_keepParamHasBeenSet = true;
}

bool OriginStreamCustomizationRule::KeepParamHasBeenSet() const
{
    return m_keepParamHasBeenSet;
}

vector<string> OriginStreamCustomizationRule::GetHttpHeader() const
{
    return m_httpHeader;
}

void OriginStreamCustomizationRule::SetHttpHeader(const vector<string>& _httpHeader)
{
    m_httpHeader = _httpHeader;
    m_httpHeaderHasBeenSet = true;
}

bool OriginStreamCustomizationRule::HttpHeaderHasBeenSet() const
{
    return m_httpHeaderHasBeenSet;
}

int64_t OriginStreamCustomizationRule::GetCustomizationCacheFollowOrigin() const
{
    return m_customizationCacheFollowOrigin;
}

void OriginStreamCustomizationRule::SetCustomizationCacheFollowOrigin(const int64_t& _customizationCacheFollowOrigin)
{
    m_customizationCacheFollowOrigin = _customizationCacheFollowOrigin;
    m_customizationCacheFollowOriginHasBeenSet = true;
}

bool OriginStreamCustomizationRule::CustomizationCacheFollowOriginHasBeenSet() const
{
    return m_customizationCacheFollowOriginHasBeenSet;
}

vector<string> OriginStreamCustomizationRule::GetKeepHttpHeader() const
{
    return m_keepHttpHeader;
}

void OriginStreamCustomizationRule::SetKeepHttpHeader(const vector<string>& _keepHttpHeader)
{
    m_keepHttpHeader = _keepHttpHeader;
    m_keepHttpHeaderHasBeenSet = true;
}

bool OriginStreamCustomizationRule::KeepHttpHeaderHasBeenSet() const
{
    return m_keepHttpHeaderHasBeenSet;
}

