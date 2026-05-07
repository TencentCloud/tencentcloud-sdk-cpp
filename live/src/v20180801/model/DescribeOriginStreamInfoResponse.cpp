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

#include <tencentcloud/live/v20180801/model/DescribeOriginStreamInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

DescribeOriginStreamInfoResponse::DescribeOriginStreamInfoResponse() :
    m_statusHasBeenSet(false),
    m_cdnStreamPlayTypeHasBeenSet(false),
    m_originStreamTypeHasBeenSet(false),
    m_originStreamPlayTypeHasBeenSet(false),
    m_originAddressTypeHasBeenSet(false),
    m_originAddressHasBeenSet(false),
    m_originTimeoutHasBeenSet(false),
    m_originRetryTimesHasBeenSet(false),
    m_timeJitterHasBeenSet(false),
    m_hlsPlayFragmentCountHasBeenSet(false),
    m_hlsPlayFragmentDurationHasBeenSet(false),
    m_passThroughHttpHeaderHasBeenSet(false),
    m_passThroughResponseHasBeenSet(false),
    m_passThroughParamHasBeenSet(false),
    m_originHostHasBeenSet(false),
    m_indexerCacheHasBeenSet(false),
    m_fragmentCacheHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_usingHttpsHasBeenSet(false),
    m_cacheFollowOriginHasBeenSet(false),
    m_cacheStatusCodeHasBeenSet(false),
    m_urlReplaceRulesHasBeenSet(false),
    m_optionsRequestHasBeenSet(false),
    m_followRedirectHasBeenSet(false),
    m_streamPackageRegionHasBeenSet(false),
    m_customerNameHasBeenSet(false),
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

CoreInternalOutcome DescribeOriginStreamInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("CdnStreamPlayType") && !rsp["CdnStreamPlayType"].IsNull())
    {
        if (!rsp["CdnStreamPlayType"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CdnStreamPlayType` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CdnStreamPlayType"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cdnStreamPlayType.push_back((*itr).GetString());
        }
        m_cdnStreamPlayTypeHasBeenSet = true;
    }

    if (rsp.HasMember("OriginStreamType") && !rsp["OriginStreamType"].IsNull())
    {
        if (!rsp["OriginStreamType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OriginStreamType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originStreamType = rsp["OriginStreamType"].GetInt64();
        m_originStreamTypeHasBeenSet = true;
    }

    if (rsp.HasMember("OriginStreamPlayType") && !rsp["OriginStreamPlayType"].IsNull())
    {
        if (!rsp["OriginStreamPlayType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginStreamPlayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originStreamPlayType = string(rsp["OriginStreamPlayType"].GetString());
        m_originStreamPlayTypeHasBeenSet = true;
    }

    if (rsp.HasMember("OriginAddressType") && !rsp["OriginAddressType"].IsNull())
    {
        if (!rsp["OriginAddressType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OriginAddressType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originAddressType = rsp["OriginAddressType"].GetInt64();
        m_originAddressTypeHasBeenSet = true;
    }

    if (rsp.HasMember("OriginAddress") && !rsp["OriginAddress"].IsNull())
    {
        if (!rsp["OriginAddress"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OriginAddress` is not array type"));

        const rapidjson::Value &tmpValue = rsp["OriginAddress"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_originAddress.push_back((*itr).GetString());
        }
        m_originAddressHasBeenSet = true;
    }

    if (rsp.HasMember("OriginTimeout") && !rsp["OriginTimeout"].IsNull())
    {
        if (!rsp["OriginTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OriginTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originTimeout = rsp["OriginTimeout"].GetInt64();
        m_originTimeoutHasBeenSet = true;
    }

    if (rsp.HasMember("OriginRetryTimes") && !rsp["OriginRetryTimes"].IsNull())
    {
        if (!rsp["OriginRetryTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OriginRetryTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_originRetryTimes = rsp["OriginRetryTimes"].GetInt64();
        m_originRetryTimesHasBeenSet = true;
    }

    if (rsp.HasMember("TimeJitter") && !rsp["TimeJitter"].IsNull())
    {
        if (!rsp["TimeJitter"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TimeJitter` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_timeJitter = string(rsp["TimeJitter"].GetString());
        m_timeJitterHasBeenSet = true;
    }

    if (rsp.HasMember("HlsPlayFragmentCount") && !rsp["HlsPlayFragmentCount"].IsNull())
    {
        if (!rsp["HlsPlayFragmentCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HlsPlayFragmentCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hlsPlayFragmentCount = rsp["HlsPlayFragmentCount"].GetInt64();
        m_hlsPlayFragmentCountHasBeenSet = true;
    }

    if (rsp.HasMember("HlsPlayFragmentDuration") && !rsp["HlsPlayFragmentDuration"].IsNull())
    {
        if (!rsp["HlsPlayFragmentDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HlsPlayFragmentDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hlsPlayFragmentDuration = rsp["HlsPlayFragmentDuration"].GetInt64();
        m_hlsPlayFragmentDurationHasBeenSet = true;
    }

    if (rsp.HasMember("PassThroughHttpHeader") && !rsp["PassThroughHttpHeader"].IsNull())
    {
        if (!rsp["PassThroughHttpHeader"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassThroughHttpHeader` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passThroughHttpHeader = string(rsp["PassThroughHttpHeader"].GetString());
        m_passThroughHttpHeaderHasBeenSet = true;
    }

    if (rsp.HasMember("PassThroughResponse") && !rsp["PassThroughResponse"].IsNull())
    {
        if (!rsp["PassThroughResponse"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassThroughResponse` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passThroughResponse = string(rsp["PassThroughResponse"].GetString());
        m_passThroughResponseHasBeenSet = true;
    }

    if (rsp.HasMember("PassThroughParam") && !rsp["PassThroughParam"].IsNull())
    {
        if (!rsp["PassThroughParam"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PassThroughParam` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_passThroughParam = string(rsp["PassThroughParam"].GetString());
        m_passThroughParamHasBeenSet = true;
    }

    if (rsp.HasMember("OriginHost") && !rsp["OriginHost"].IsNull())
    {
        if (!rsp["OriginHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriginHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originHost = string(rsp["OriginHost"].GetString());
        m_originHostHasBeenSet = true;
    }

    if (rsp.HasMember("IndexerCache") && !rsp["IndexerCache"].IsNull())
    {
        if (!rsp["IndexerCache"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IndexerCache` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_indexerCache = rsp["IndexerCache"].GetInt64();
        m_indexerCacheHasBeenSet = true;
    }

    if (rsp.HasMember("FragmentCache") && !rsp["FragmentCache"].IsNull())
    {
        if (!rsp["FragmentCache"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FragmentCache` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fragmentCache = rsp["FragmentCache"].GetInt64();
        m_fragmentCacheHasBeenSet = true;
    }

    if (rsp.HasMember("DomainName") && !rsp["DomainName"].IsNull())
    {
        if (!rsp["DomainName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainName = string(rsp["DomainName"].GetString());
        m_domainNameHasBeenSet = true;
    }

    if (rsp.HasMember("UsingHttps") && !rsp["UsingHttps"].IsNull())
    {
        if (!rsp["UsingHttps"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UsingHttps` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usingHttps = string(rsp["UsingHttps"].GetString());
        m_usingHttpsHasBeenSet = true;
    }

    if (rsp.HasMember("CacheFollowOrigin") && !rsp["CacheFollowOrigin"].IsNull())
    {
        if (!rsp["CacheFollowOrigin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CacheFollowOrigin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cacheFollowOrigin = string(rsp["CacheFollowOrigin"].GetString());
        m_cacheFollowOriginHasBeenSet = true;
    }

    if (rsp.HasMember("CacheStatusCode") && !rsp["CacheStatusCode"].IsNull())
    {
        if (!rsp["CacheStatusCode"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CacheStatusCode` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CacheStatusCode"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cacheStatusCode.push_back((*itr).GetString());
        }
        m_cacheStatusCodeHasBeenSet = true;
    }

    if (rsp.HasMember("UrlReplaceRules") && !rsp["UrlReplaceRules"].IsNull())
    {
        if (!rsp["UrlReplaceRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UrlReplaceRules` is not array type"));

        const rapidjson::Value &tmpValue = rsp["UrlReplaceRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_urlReplaceRules.push_back((*itr).GetString());
        }
        m_urlReplaceRulesHasBeenSet = true;
    }

    if (rsp.HasMember("OptionsRequest") && !rsp["OptionsRequest"].IsNull())
    {
        if (!rsp["OptionsRequest"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OptionsRequest` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_optionsRequest = string(rsp["OptionsRequest"].GetString());
        m_optionsRequestHasBeenSet = true;
    }

    if (rsp.HasMember("FollowRedirect") && !rsp["FollowRedirect"].IsNull())
    {
        if (!rsp["FollowRedirect"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FollowRedirect` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_followRedirect = string(rsp["FollowRedirect"].GetString());
        m_followRedirectHasBeenSet = true;
    }

    if (rsp.HasMember("StreamPackageRegion") && !rsp["StreamPackageRegion"].IsNull())
    {
        if (!rsp["StreamPackageRegion"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StreamPackageRegion` is not array type"));

        const rapidjson::Value &tmpValue = rsp["StreamPackageRegion"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_streamPackageRegion.push_back((*itr).GetString());
        }
        m_streamPackageRegionHasBeenSet = true;
    }

    if (rsp.HasMember("CustomerName") && !rsp["CustomerName"].IsNull())
    {
        if (!rsp["CustomerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerName = string(rsp["CustomerName"].GetString());
        m_customerNameHasBeenSet = true;
    }

    if (rsp.HasMember("IndexerKeepParam") && !rsp["IndexerKeepParam"].IsNull())
    {
        if (!rsp["IndexerKeepParam"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IndexerKeepParam` is not array type"));

        const rapidjson::Value &tmpValue = rsp["IndexerKeepParam"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_indexerKeepParam.push_back((*itr).GetString());
        }
        m_indexerKeepParamHasBeenSet = true;
    }

    if (rsp.HasMember("FragmentKeepParam") && !rsp["FragmentKeepParam"].IsNull())
    {
        if (!rsp["FragmentKeepParam"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FragmentKeepParam` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FragmentKeepParam"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fragmentKeepParam.push_back((*itr).GetString());
        }
        m_fragmentKeepParamHasBeenSet = true;
    }

    if (rsp.HasMember("MediaPackageType") && !rsp["MediaPackageType"].IsNull())
    {
        if (!rsp["MediaPackageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaPackageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mediaPackageType = string(rsp["MediaPackageType"].GetString());
        m_mediaPackageTypeHasBeenSet = true;
    }

    if (rsp.HasMember("MediaPackageChannelTypes") && !rsp["MediaPackageChannelTypes"].IsNull())
    {
        if (!rsp["MediaPackageChannelTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaPackageChannelTypes` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MediaPackageChannelTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_mediaPackageChannelTypes.push_back((*itr).GetString());
        }
        m_mediaPackageChannelTypesHasBeenSet = true;
    }

    if (rsp.HasMember("IndexerHeader") && !rsp["IndexerHeader"].IsNull())
    {
        if (!rsp["IndexerHeader"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IndexerHeader` is not array type"));

        const rapidjson::Value &tmpValue = rsp["IndexerHeader"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_indexerHeader.push_back((*itr).GetString());
        }
        m_indexerHeaderHasBeenSet = true;
    }

    if (rsp.HasMember("FragmentHeader") && !rsp["FragmentHeader"].IsNull())
    {
        if (!rsp["FragmentHeader"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FragmentHeader` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FragmentHeader"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_fragmentHeader.push_back((*itr).GetString());
        }
        m_fragmentHeaderHasBeenSet = true;
    }

    if (rsp.HasMember("CustomizationRules") && !rsp["CustomizationRules"].IsNull())
    {
        if (!rsp["CustomizationRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomizationRules` is not array type"));

        const rapidjson::Value &tmpValue = rsp["CustomizationRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OriginStreamCustomizationRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_customizationRules.push_back(item);
        }
        m_customizationRulesHasBeenSet = true;
    }

    if (rsp.HasMember("CacheFormatRule") && !rsp["CacheFormatRule"].IsNull())
    {
        if (!rsp["CacheFormatRule"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CacheFormatRule` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cacheFormatRule = rsp["CacheFormatRule"].GetInt64();
        m_cacheFormatRuleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeOriginStreamInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_cdnStreamPlayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdnStreamPlayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cdnStreamPlayType.begin(); itr != m_cdnStreamPlayType.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_originStreamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginStreamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originStreamType, allocator);
    }

    if (m_originStreamPlayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginStreamPlayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originStreamPlayType.c_str(), allocator).Move(), allocator);
    }

    if (m_originAddressTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginAddressType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_originAddressType, allocator);
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

    if (m_timeJitterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeJitter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_timeJitter.c_str(), allocator).Move(), allocator);
    }

    if (m_hlsPlayFragmentCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HlsPlayFragmentCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hlsPlayFragmentCount, allocator);
    }

    if (m_hlsPlayFragmentDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HlsPlayFragmentDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hlsPlayFragmentDuration, allocator);
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

    if (m_originHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originHost.c_str(), allocator).Move(), allocator);
    }

    if (m_indexerCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexerCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_indexerCache, allocator);
    }

    if (m_fragmentCacheHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FragmentCache";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fragmentCache, allocator);
    }

    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_usingHttpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsingHttps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usingHttps.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheFollowOriginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheFollowOrigin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cacheFollowOrigin.c_str(), allocator).Move(), allocator);
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

    if (m_followRedirectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FollowRedirect";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_followRedirect.c_str(), allocator).Move(), allocator);
    }

    if (m_streamPackageRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamPackageRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_streamPackageRegion.begin(); itr != m_streamPackageRegion.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerName.c_str(), allocator).Move(), allocator);
    }

    if (m_indexerKeepParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexerKeepParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_indexerKeepParam.begin(); itr != m_indexerKeepParam.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fragmentKeepParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FragmentKeepParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fragmentKeepParam.begin(); itr != m_fragmentKeepParam.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_mediaPackageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaPackageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mediaPackageType.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaPackageChannelTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaPackageChannelTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mediaPackageChannelTypes.begin(); itr != m_mediaPackageChannelTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_indexerHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexerHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_indexerHeader.begin(); itr != m_indexerHeader.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_fragmentHeaderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FragmentHeader";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_fragmentHeader.begin(); itr != m_fragmentHeader.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customizationRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomizationRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_customizationRules.begin(); itr != m_customizationRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cacheFormatRuleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheFormatRule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cacheFormatRule, allocator);
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


int64_t DescribeOriginStreamInfoResponse::GetStatus() const
{
    return m_status;
}

bool DescribeOriginStreamInfoResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> DescribeOriginStreamInfoResponse::GetCdnStreamPlayType() const
{
    return m_cdnStreamPlayType;
}

bool DescribeOriginStreamInfoResponse::CdnStreamPlayTypeHasBeenSet() const
{
    return m_cdnStreamPlayTypeHasBeenSet;
}

int64_t DescribeOriginStreamInfoResponse::GetOriginStreamType() const
{
    return m_originStreamType;
}

bool DescribeOriginStreamInfoResponse::OriginStreamTypeHasBeenSet() const
{
    return m_originStreamTypeHasBeenSet;
}

string DescribeOriginStreamInfoResponse::GetOriginStreamPlayType() const
{
    return m_originStreamPlayType;
}

bool DescribeOriginStreamInfoResponse::OriginStreamPlayTypeHasBeenSet() const
{
    return m_originStreamPlayTypeHasBeenSet;
}

int64_t DescribeOriginStreamInfoResponse::GetOriginAddressType() const
{
    return m_originAddressType;
}

bool DescribeOriginStreamInfoResponse::OriginAddressTypeHasBeenSet() const
{
    return m_originAddressTypeHasBeenSet;
}

vector<string> DescribeOriginStreamInfoResponse::GetOriginAddress() const
{
    return m_originAddress;
}

bool DescribeOriginStreamInfoResponse::OriginAddressHasBeenSet() const
{
    return m_originAddressHasBeenSet;
}

int64_t DescribeOriginStreamInfoResponse::GetOriginTimeout() const
{
    return m_originTimeout;
}

bool DescribeOriginStreamInfoResponse::OriginTimeoutHasBeenSet() const
{
    return m_originTimeoutHasBeenSet;
}

int64_t DescribeOriginStreamInfoResponse::GetOriginRetryTimes() const
{
    return m_originRetryTimes;
}

bool DescribeOriginStreamInfoResponse::OriginRetryTimesHasBeenSet() const
{
    return m_originRetryTimesHasBeenSet;
}

string DescribeOriginStreamInfoResponse::GetTimeJitter() const
{
    return m_timeJitter;
}

bool DescribeOriginStreamInfoResponse::TimeJitterHasBeenSet() const
{
    return m_timeJitterHasBeenSet;
}

int64_t DescribeOriginStreamInfoResponse::GetHlsPlayFragmentCount() const
{
    return m_hlsPlayFragmentCount;
}

bool DescribeOriginStreamInfoResponse::HlsPlayFragmentCountHasBeenSet() const
{
    return m_hlsPlayFragmentCountHasBeenSet;
}

int64_t DescribeOriginStreamInfoResponse::GetHlsPlayFragmentDuration() const
{
    return m_hlsPlayFragmentDuration;
}

bool DescribeOriginStreamInfoResponse::HlsPlayFragmentDurationHasBeenSet() const
{
    return m_hlsPlayFragmentDurationHasBeenSet;
}

string DescribeOriginStreamInfoResponse::GetPassThroughHttpHeader() const
{
    return m_passThroughHttpHeader;
}

bool DescribeOriginStreamInfoResponse::PassThroughHttpHeaderHasBeenSet() const
{
    return m_passThroughHttpHeaderHasBeenSet;
}

string DescribeOriginStreamInfoResponse::GetPassThroughResponse() const
{
    return m_passThroughResponse;
}

bool DescribeOriginStreamInfoResponse::PassThroughResponseHasBeenSet() const
{
    return m_passThroughResponseHasBeenSet;
}

string DescribeOriginStreamInfoResponse::GetPassThroughParam() const
{
    return m_passThroughParam;
}

bool DescribeOriginStreamInfoResponse::PassThroughParamHasBeenSet() const
{
    return m_passThroughParamHasBeenSet;
}

string DescribeOriginStreamInfoResponse::GetOriginHost() const
{
    return m_originHost;
}

bool DescribeOriginStreamInfoResponse::OriginHostHasBeenSet() const
{
    return m_originHostHasBeenSet;
}

int64_t DescribeOriginStreamInfoResponse::GetIndexerCache() const
{
    return m_indexerCache;
}

bool DescribeOriginStreamInfoResponse::IndexerCacheHasBeenSet() const
{
    return m_indexerCacheHasBeenSet;
}

int64_t DescribeOriginStreamInfoResponse::GetFragmentCache() const
{
    return m_fragmentCache;
}

bool DescribeOriginStreamInfoResponse::FragmentCacheHasBeenSet() const
{
    return m_fragmentCacheHasBeenSet;
}

string DescribeOriginStreamInfoResponse::GetDomainName() const
{
    return m_domainName;
}

bool DescribeOriginStreamInfoResponse::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

string DescribeOriginStreamInfoResponse::GetUsingHttps() const
{
    return m_usingHttps;
}

bool DescribeOriginStreamInfoResponse::UsingHttpsHasBeenSet() const
{
    return m_usingHttpsHasBeenSet;
}

string DescribeOriginStreamInfoResponse::GetCacheFollowOrigin() const
{
    return m_cacheFollowOrigin;
}

bool DescribeOriginStreamInfoResponse::CacheFollowOriginHasBeenSet() const
{
    return m_cacheFollowOriginHasBeenSet;
}

vector<string> DescribeOriginStreamInfoResponse::GetCacheStatusCode() const
{
    return m_cacheStatusCode;
}

bool DescribeOriginStreamInfoResponse::CacheStatusCodeHasBeenSet() const
{
    return m_cacheStatusCodeHasBeenSet;
}

vector<string> DescribeOriginStreamInfoResponse::GetUrlReplaceRules() const
{
    return m_urlReplaceRules;
}

bool DescribeOriginStreamInfoResponse::UrlReplaceRulesHasBeenSet() const
{
    return m_urlReplaceRulesHasBeenSet;
}

string DescribeOriginStreamInfoResponse::GetOptionsRequest() const
{
    return m_optionsRequest;
}

bool DescribeOriginStreamInfoResponse::OptionsRequestHasBeenSet() const
{
    return m_optionsRequestHasBeenSet;
}

string DescribeOriginStreamInfoResponse::GetFollowRedirect() const
{
    return m_followRedirect;
}

bool DescribeOriginStreamInfoResponse::FollowRedirectHasBeenSet() const
{
    return m_followRedirectHasBeenSet;
}

vector<string> DescribeOriginStreamInfoResponse::GetStreamPackageRegion() const
{
    return m_streamPackageRegion;
}

bool DescribeOriginStreamInfoResponse::StreamPackageRegionHasBeenSet() const
{
    return m_streamPackageRegionHasBeenSet;
}

string DescribeOriginStreamInfoResponse::GetCustomerName() const
{
    return m_customerName;
}

bool DescribeOriginStreamInfoResponse::CustomerNameHasBeenSet() const
{
    return m_customerNameHasBeenSet;
}

vector<string> DescribeOriginStreamInfoResponse::GetIndexerKeepParam() const
{
    return m_indexerKeepParam;
}

bool DescribeOriginStreamInfoResponse::IndexerKeepParamHasBeenSet() const
{
    return m_indexerKeepParamHasBeenSet;
}

vector<string> DescribeOriginStreamInfoResponse::GetFragmentKeepParam() const
{
    return m_fragmentKeepParam;
}

bool DescribeOriginStreamInfoResponse::FragmentKeepParamHasBeenSet() const
{
    return m_fragmentKeepParamHasBeenSet;
}

string DescribeOriginStreamInfoResponse::GetMediaPackageType() const
{
    return m_mediaPackageType;
}

bool DescribeOriginStreamInfoResponse::MediaPackageTypeHasBeenSet() const
{
    return m_mediaPackageTypeHasBeenSet;
}

vector<string> DescribeOriginStreamInfoResponse::GetMediaPackageChannelTypes() const
{
    return m_mediaPackageChannelTypes;
}

bool DescribeOriginStreamInfoResponse::MediaPackageChannelTypesHasBeenSet() const
{
    return m_mediaPackageChannelTypesHasBeenSet;
}

vector<string> DescribeOriginStreamInfoResponse::GetIndexerHeader() const
{
    return m_indexerHeader;
}

bool DescribeOriginStreamInfoResponse::IndexerHeaderHasBeenSet() const
{
    return m_indexerHeaderHasBeenSet;
}

vector<string> DescribeOriginStreamInfoResponse::GetFragmentHeader() const
{
    return m_fragmentHeader;
}

bool DescribeOriginStreamInfoResponse::FragmentHeaderHasBeenSet() const
{
    return m_fragmentHeaderHasBeenSet;
}

vector<OriginStreamCustomizationRule> DescribeOriginStreamInfoResponse::GetCustomizationRules() const
{
    return m_customizationRules;
}

bool DescribeOriginStreamInfoResponse::CustomizationRulesHasBeenSet() const
{
    return m_customizationRulesHasBeenSet;
}

int64_t DescribeOriginStreamInfoResponse::GetCacheFormatRule() const
{
    return m_cacheFormatRule;
}

bool DescribeOriginStreamInfoResponse::CacheFormatRuleHasBeenSet() const
{
    return m_cacheFormatRuleHasBeenSet;
}


