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

#include <tencentcloud/live/v20180801/model/ModifyOriginStreamInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

ModifyOriginStreamInfoRequest::ModifyOriginStreamInfoRequest() :
    m_domainNameHasBeenSet(false),
    m_originStreamPlayTypeHasBeenSet(false),
    m_cdnStreamPlayTypeHasBeenSet(false),
    m_originStreamTypeHasBeenSet(false),
    m_originAddressHasBeenSet(false),
    m_originAddressTypeHasBeenSet(false),
    m_customerNameHasBeenSet(false),
    m_originHostHasBeenSet(false),
    m_originTimeoutHasBeenSet(false),
    m_originRetryTimesHasBeenSet(false),
    m_passThroughHttpHeaderHasBeenSet(false),
    m_passThroughResponseHasBeenSet(false),
    m_passThroughParamHasBeenSet(false),
    m_indexerCacheHasBeenSet(false),
    m_fragmentCacheHasBeenSet(false),
    m_hlsPlayFragmentCountHasBeenSet(false),
    m_hlsPlayFragmentDurationHasBeenSet(false),
    m_timeJitterHasBeenSet(false),
    m_usingHttpsHasBeenSet(false),
    m_cacheFollowOriginHasBeenSet(false),
    m_cacheStatusCodeHasBeenSet(false),
    m_urlReplaceRulesHasBeenSet(false),
    m_optionsRequestHasBeenSet(false),
    m_followRedirectHasBeenSet(false),
    m_indexerKeepParamHasBeenSet(false),
    m_fragmentKeepParamHasBeenSet(false),
    m_mediaPackageTypeHasBeenSet(false),
    m_mediaPackageChannelTypesHasBeenSet(false),
    m_indexerHeaderHasBeenSet(false),
    m_fragmentHeaderHasBeenSet(false),
    m_customizationRulesHasBeenSet(false),
    m_cacheFormatRuleHasBeenSet(false)
{
}

string ModifyOriginStreamInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_originStreamPlayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginStreamPlayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originStreamPlayType.c_str(), allocator).Move(), allocator);
    }

    if (m_cdnStreamPlayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdnStreamPlayType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cdnStreamPlayType.begin(); itr != m_cdnStreamPlayType.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_originStreamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginStreamType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_originStreamType, allocator);
    }

    if (m_originAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_originAddress.begin(); itr != m_originAddress.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_originAddressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginAddressType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_originAddressType, allocator);
    }

    if (m_customerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_customerName.c_str(), allocator).Move(), allocator);
    }

    if (m_originHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginHost";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_originHost.c_str(), allocator).Move(), allocator);
    }

    if (m_originTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginTimeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_originTimeout, allocator);
    }

    if (m_originRetryTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginRetryTimes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_originRetryTimes, allocator);
    }

    if (m_passThroughHttpHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassThroughHttpHeader";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_passThroughHttpHeader.c_str(), allocator).Move(), allocator);
    }

    if (m_passThroughResponseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassThroughResponse";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_passThroughResponse.c_str(), allocator).Move(), allocator);
    }

    if (m_passThroughParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassThroughParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_passThroughParam.c_str(), allocator).Move(), allocator);
    }

    if (m_indexerCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexerCache";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_indexerCache, allocator);
    }

    if (m_fragmentCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FragmentCache";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_fragmentCache, allocator);
    }

    if (m_hlsPlayFragmentCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HlsPlayFragmentCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hlsPlayFragmentCount, allocator);
    }

    if (m_hlsPlayFragmentDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HlsPlayFragmentDuration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hlsPlayFragmentDuration, allocator);
    }

    if (m_timeJitterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeJitter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_timeJitter.c_str(), allocator).Move(), allocator);
    }

    if (m_usingHttpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsingHttps";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_usingHttps.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheFollowOriginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheFollowOrigin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cacheFollowOrigin.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheStatusCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheStatusCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cacheStatusCode.begin(); itr != m_cacheStatusCode.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_urlReplaceRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlReplaceRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_urlReplaceRules.begin(); itr != m_urlReplaceRules.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_optionsRequestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptionsRequest";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_optionsRequest.c_str(), allocator).Move(), allocator);
    }

    if (m_followRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowRedirect";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_followRedirect.c_str(), allocator).Move(), allocator);
    }

    if (m_indexerKeepParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexerKeepParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_indexerKeepParam.begin(); itr != m_indexerKeepParam.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fragmentKeepParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FragmentKeepParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fragmentKeepParam.begin(); itr != m_fragmentKeepParam.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_mediaPackageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaPackageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mediaPackageType.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaPackageChannelTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaPackageChannelTypes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mediaPackageChannelTypes.begin(); itr != m_mediaPackageChannelTypes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_indexerHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexerHeader";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_indexerHeader.begin(); itr != m_indexerHeader.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fragmentHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FragmentHeader";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fragmentHeader.begin(); itr != m_fragmentHeader.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customizationRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomizationRules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customizationRules.begin(); itr != m_customizationRules.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_cacheFormatRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheFormatRule";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cacheFormatRule, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyOriginStreamInfoRequest::GetDomainName() const
{
    return m_domainName;
}

void ModifyOriginStreamInfoRequest::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string ModifyOriginStreamInfoRequest::GetOriginStreamPlayType() const
{
    return m_originStreamPlayType;
}

void ModifyOriginStreamInfoRequest::SetOriginStreamPlayType(const string& _originStreamPlayType)
{
    m_originStreamPlayType = _originStreamPlayType;
    m_originStreamPlayTypeHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::OriginStreamPlayTypeHasBeenSet() const
{
    return m_originStreamPlayTypeHasBeenSet;
}

vector<string> ModifyOriginStreamInfoRequest::GetCdnStreamPlayType() const
{
    return m_cdnStreamPlayType;
}

void ModifyOriginStreamInfoRequest::SetCdnStreamPlayType(const vector<string>& _cdnStreamPlayType)
{
    m_cdnStreamPlayType = _cdnStreamPlayType;
    m_cdnStreamPlayTypeHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::CdnStreamPlayTypeHasBeenSet() const
{
    return m_cdnStreamPlayTypeHasBeenSet;
}

int64_t ModifyOriginStreamInfoRequest::GetOriginStreamType() const
{
    return m_originStreamType;
}

void ModifyOriginStreamInfoRequest::SetOriginStreamType(const int64_t& _originStreamType)
{
    m_originStreamType = _originStreamType;
    m_originStreamTypeHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::OriginStreamTypeHasBeenSet() const
{
    return m_originStreamTypeHasBeenSet;
}

vector<string> ModifyOriginStreamInfoRequest::GetOriginAddress() const
{
    return m_originAddress;
}

void ModifyOriginStreamInfoRequest::SetOriginAddress(const vector<string>& _originAddress)
{
    m_originAddress = _originAddress;
    m_originAddressHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::OriginAddressHasBeenSet() const
{
    return m_originAddressHasBeenSet;
}

int64_t ModifyOriginStreamInfoRequest::GetOriginAddressType() const
{
    return m_originAddressType;
}

void ModifyOriginStreamInfoRequest::SetOriginAddressType(const int64_t& _originAddressType)
{
    m_originAddressType = _originAddressType;
    m_originAddressTypeHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::OriginAddressTypeHasBeenSet() const
{
    return m_originAddressTypeHasBeenSet;
}

string ModifyOriginStreamInfoRequest::GetCustomerName() const
{
    return m_customerName;
}

void ModifyOriginStreamInfoRequest::SetCustomerName(const string& _customerName)
{
    m_customerName = _customerName;
    m_customerNameHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::CustomerNameHasBeenSet() const
{
    return m_customerNameHasBeenSet;
}

string ModifyOriginStreamInfoRequest::GetOriginHost() const
{
    return m_originHost;
}

void ModifyOriginStreamInfoRequest::SetOriginHost(const string& _originHost)
{
    m_originHost = _originHost;
    m_originHostHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::OriginHostHasBeenSet() const
{
    return m_originHostHasBeenSet;
}

int64_t ModifyOriginStreamInfoRequest::GetOriginTimeout() const
{
    return m_originTimeout;
}

void ModifyOriginStreamInfoRequest::SetOriginTimeout(const int64_t& _originTimeout)
{
    m_originTimeout = _originTimeout;
    m_originTimeoutHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::OriginTimeoutHasBeenSet() const
{
    return m_originTimeoutHasBeenSet;
}

int64_t ModifyOriginStreamInfoRequest::GetOriginRetryTimes() const
{
    return m_originRetryTimes;
}

void ModifyOriginStreamInfoRequest::SetOriginRetryTimes(const int64_t& _originRetryTimes)
{
    m_originRetryTimes = _originRetryTimes;
    m_originRetryTimesHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::OriginRetryTimesHasBeenSet() const
{
    return m_originRetryTimesHasBeenSet;
}

string ModifyOriginStreamInfoRequest::GetPassThroughHttpHeader() const
{
    return m_passThroughHttpHeader;
}

void ModifyOriginStreamInfoRequest::SetPassThroughHttpHeader(const string& _passThroughHttpHeader)
{
    m_passThroughHttpHeader = _passThroughHttpHeader;
    m_passThroughHttpHeaderHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::PassThroughHttpHeaderHasBeenSet() const
{
    return m_passThroughHttpHeaderHasBeenSet;
}

string ModifyOriginStreamInfoRequest::GetPassThroughResponse() const
{
    return m_passThroughResponse;
}

void ModifyOriginStreamInfoRequest::SetPassThroughResponse(const string& _passThroughResponse)
{
    m_passThroughResponse = _passThroughResponse;
    m_passThroughResponseHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::PassThroughResponseHasBeenSet() const
{
    return m_passThroughResponseHasBeenSet;
}

string ModifyOriginStreamInfoRequest::GetPassThroughParam() const
{
    return m_passThroughParam;
}

void ModifyOriginStreamInfoRequest::SetPassThroughParam(const string& _passThroughParam)
{
    m_passThroughParam = _passThroughParam;
    m_passThroughParamHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::PassThroughParamHasBeenSet() const
{
    return m_passThroughParamHasBeenSet;
}

int64_t ModifyOriginStreamInfoRequest::GetIndexerCache() const
{
    return m_indexerCache;
}

void ModifyOriginStreamInfoRequest::SetIndexerCache(const int64_t& _indexerCache)
{
    m_indexerCache = _indexerCache;
    m_indexerCacheHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::IndexerCacheHasBeenSet() const
{
    return m_indexerCacheHasBeenSet;
}

int64_t ModifyOriginStreamInfoRequest::GetFragmentCache() const
{
    return m_fragmentCache;
}

void ModifyOriginStreamInfoRequest::SetFragmentCache(const int64_t& _fragmentCache)
{
    m_fragmentCache = _fragmentCache;
    m_fragmentCacheHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::FragmentCacheHasBeenSet() const
{
    return m_fragmentCacheHasBeenSet;
}

int64_t ModifyOriginStreamInfoRequest::GetHlsPlayFragmentCount() const
{
    return m_hlsPlayFragmentCount;
}

void ModifyOriginStreamInfoRequest::SetHlsPlayFragmentCount(const int64_t& _hlsPlayFragmentCount)
{
    m_hlsPlayFragmentCount = _hlsPlayFragmentCount;
    m_hlsPlayFragmentCountHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::HlsPlayFragmentCountHasBeenSet() const
{
    return m_hlsPlayFragmentCountHasBeenSet;
}

int64_t ModifyOriginStreamInfoRequest::GetHlsPlayFragmentDuration() const
{
    return m_hlsPlayFragmentDuration;
}

void ModifyOriginStreamInfoRequest::SetHlsPlayFragmentDuration(const int64_t& _hlsPlayFragmentDuration)
{
    m_hlsPlayFragmentDuration = _hlsPlayFragmentDuration;
    m_hlsPlayFragmentDurationHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::HlsPlayFragmentDurationHasBeenSet() const
{
    return m_hlsPlayFragmentDurationHasBeenSet;
}

string ModifyOriginStreamInfoRequest::GetTimeJitter() const
{
    return m_timeJitter;
}

void ModifyOriginStreamInfoRequest::SetTimeJitter(const string& _timeJitter)
{
    m_timeJitter = _timeJitter;
    m_timeJitterHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::TimeJitterHasBeenSet() const
{
    return m_timeJitterHasBeenSet;
}

string ModifyOriginStreamInfoRequest::GetUsingHttps() const
{
    return m_usingHttps;
}

void ModifyOriginStreamInfoRequest::SetUsingHttps(const string& _usingHttps)
{
    m_usingHttps = _usingHttps;
    m_usingHttpsHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::UsingHttpsHasBeenSet() const
{
    return m_usingHttpsHasBeenSet;
}

string ModifyOriginStreamInfoRequest::GetCacheFollowOrigin() const
{
    return m_cacheFollowOrigin;
}

void ModifyOriginStreamInfoRequest::SetCacheFollowOrigin(const string& _cacheFollowOrigin)
{
    m_cacheFollowOrigin = _cacheFollowOrigin;
    m_cacheFollowOriginHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::CacheFollowOriginHasBeenSet() const
{
    return m_cacheFollowOriginHasBeenSet;
}

vector<string> ModifyOriginStreamInfoRequest::GetCacheStatusCode() const
{
    return m_cacheStatusCode;
}

void ModifyOriginStreamInfoRequest::SetCacheStatusCode(const vector<string>& _cacheStatusCode)
{
    m_cacheStatusCode = _cacheStatusCode;
    m_cacheStatusCodeHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::CacheStatusCodeHasBeenSet() const
{
    return m_cacheStatusCodeHasBeenSet;
}

vector<string> ModifyOriginStreamInfoRequest::GetUrlReplaceRules() const
{
    return m_urlReplaceRules;
}

void ModifyOriginStreamInfoRequest::SetUrlReplaceRules(const vector<string>& _urlReplaceRules)
{
    m_urlReplaceRules = _urlReplaceRules;
    m_urlReplaceRulesHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::UrlReplaceRulesHasBeenSet() const
{
    return m_urlReplaceRulesHasBeenSet;
}

string ModifyOriginStreamInfoRequest::GetOptionsRequest() const
{
    return m_optionsRequest;
}

void ModifyOriginStreamInfoRequest::SetOptionsRequest(const string& _optionsRequest)
{
    m_optionsRequest = _optionsRequest;
    m_optionsRequestHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::OptionsRequestHasBeenSet() const
{
    return m_optionsRequestHasBeenSet;
}

string ModifyOriginStreamInfoRequest::GetFollowRedirect() const
{
    return m_followRedirect;
}

void ModifyOriginStreamInfoRequest::SetFollowRedirect(const string& _followRedirect)
{
    m_followRedirect = _followRedirect;
    m_followRedirectHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::FollowRedirectHasBeenSet() const
{
    return m_followRedirectHasBeenSet;
}

vector<string> ModifyOriginStreamInfoRequest::GetIndexerKeepParam() const
{
    return m_indexerKeepParam;
}

void ModifyOriginStreamInfoRequest::SetIndexerKeepParam(const vector<string>& _indexerKeepParam)
{
    m_indexerKeepParam = _indexerKeepParam;
    m_indexerKeepParamHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::IndexerKeepParamHasBeenSet() const
{
    return m_indexerKeepParamHasBeenSet;
}

vector<string> ModifyOriginStreamInfoRequest::GetFragmentKeepParam() const
{
    return m_fragmentKeepParam;
}

void ModifyOriginStreamInfoRequest::SetFragmentKeepParam(const vector<string>& _fragmentKeepParam)
{
    m_fragmentKeepParam = _fragmentKeepParam;
    m_fragmentKeepParamHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::FragmentKeepParamHasBeenSet() const
{
    return m_fragmentKeepParamHasBeenSet;
}

string ModifyOriginStreamInfoRequest::GetMediaPackageType() const
{
    return m_mediaPackageType;
}

void ModifyOriginStreamInfoRequest::SetMediaPackageType(const string& _mediaPackageType)
{
    m_mediaPackageType = _mediaPackageType;
    m_mediaPackageTypeHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::MediaPackageTypeHasBeenSet() const
{
    return m_mediaPackageTypeHasBeenSet;
}

vector<string> ModifyOriginStreamInfoRequest::GetMediaPackageChannelTypes() const
{
    return m_mediaPackageChannelTypes;
}

void ModifyOriginStreamInfoRequest::SetMediaPackageChannelTypes(const vector<string>& _mediaPackageChannelTypes)
{
    m_mediaPackageChannelTypes = _mediaPackageChannelTypes;
    m_mediaPackageChannelTypesHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::MediaPackageChannelTypesHasBeenSet() const
{
    return m_mediaPackageChannelTypesHasBeenSet;
}

vector<string> ModifyOriginStreamInfoRequest::GetIndexerHeader() const
{
    return m_indexerHeader;
}

void ModifyOriginStreamInfoRequest::SetIndexerHeader(const vector<string>& _indexerHeader)
{
    m_indexerHeader = _indexerHeader;
    m_indexerHeaderHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::IndexerHeaderHasBeenSet() const
{
    return m_indexerHeaderHasBeenSet;
}

vector<string> ModifyOriginStreamInfoRequest::GetFragmentHeader() const
{
    return m_fragmentHeader;
}

void ModifyOriginStreamInfoRequest::SetFragmentHeader(const vector<string>& _fragmentHeader)
{
    m_fragmentHeader = _fragmentHeader;
    m_fragmentHeaderHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::FragmentHeaderHasBeenSet() const
{
    return m_fragmentHeaderHasBeenSet;
}

vector<OriginStreamCustomizationRule> ModifyOriginStreamInfoRequest::GetCustomizationRules() const
{
    return m_customizationRules;
}

void ModifyOriginStreamInfoRequest::SetCustomizationRules(const vector<OriginStreamCustomizationRule>& _customizationRules)
{
    m_customizationRules = _customizationRules;
    m_customizationRulesHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::CustomizationRulesHasBeenSet() const
{
    return m_customizationRulesHasBeenSet;
}

int64_t ModifyOriginStreamInfoRequest::GetCacheFormatRule() const
{
    return m_cacheFormatRule;
}

void ModifyOriginStreamInfoRequest::SetCacheFormatRule(const int64_t& _cacheFormatRule)
{
    m_cacheFormatRule = _cacheFormatRule;
    m_cacheFormatRuleHasBeenSet = true;
}

bool ModifyOriginStreamInfoRequest::CacheFormatRuleHasBeenSet() const
{
    return m_cacheFormatRuleHasBeenSet;
}


