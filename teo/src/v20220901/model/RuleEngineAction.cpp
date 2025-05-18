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

#include <tencentcloud/teo/v20220901/model/RuleEngineAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

RuleEngineAction::RuleEngineAction() :
    m_nameHasBeenSet(false),
    m_cacheParametersHasBeenSet(false),
    m_cacheKeyParametersHasBeenSet(false),
    m_cachePrefreshParametersHasBeenSet(false),
    m_accessURLRedirectParametersHasBeenSet(false),
    m_upstreamURLRewriteParametersHasBeenSet(false),
    m_qUICParametersHasBeenSet(false),
    m_webSocketParametersHasBeenSet(false),
    m_authenticationParametersHasBeenSet(false),
    m_maxAgeParametersHasBeenSet(false),
    m_statusCodeCacheParametersHasBeenSet(false),
    m_offlineCacheParametersHasBeenSet(false),
    m_smartRoutingParametersHasBeenSet(false),
    m_rangeOriginPullParametersHasBeenSet(false),
    m_upstreamHTTP2ParametersHasBeenSet(false),
    m_hostHeaderParametersHasBeenSet(false),
    m_forceRedirectHTTPSParametersHasBeenSet(false),
    m_compressionParametersHasBeenSet(false),
    m_hSTSParametersHasBeenSet(false),
    m_clientIPHeaderParametersHasBeenSet(false),
    m_oCSPStaplingParametersHasBeenSet(false),
    m_hTTP2ParametersHasBeenSet(false),
    m_postMaxSizeParametersHasBeenSet(false),
    m_clientIPCountryParametersHasBeenSet(false),
    m_upstreamFollowRedirectParametersHasBeenSet(false),
    m_upstreamRequestParametersHasBeenSet(false),
    m_tLSConfigParametersHasBeenSet(false),
    m_modifyOriginParametersHasBeenSet(false),
    m_hTTPUpstreamTimeoutParametersHasBeenSet(false),
    m_httpResponseParametersHasBeenSet(false),
    m_errorPageParametersHasBeenSet(false),
    m_modifyResponseHeaderParametersHasBeenSet(false),
    m_modifyRequestHeaderParametersHasBeenSet(false),
    m_responseSpeedLimitParametersHasBeenSet(false),
    m_setContentIdentifierParametersHasBeenSet(false),
    m_varyParametersHasBeenSet(false)
{
}

CoreInternalOutcome RuleEngineAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CacheParameters") && !value["CacheParameters"].IsNull())
    {
        if (!value["CacheParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.CacheParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cacheParameters.Deserialize(value["CacheParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cacheParametersHasBeenSet = true;
    }

    if (value.HasMember("CacheKeyParameters") && !value["CacheKeyParameters"].IsNull())
    {
        if (!value["CacheKeyParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.CacheKeyParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cacheKeyParameters.Deserialize(value["CacheKeyParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cacheKeyParametersHasBeenSet = true;
    }

    if (value.HasMember("CachePrefreshParameters") && !value["CachePrefreshParameters"].IsNull())
    {
        if (!value["CachePrefreshParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.CachePrefreshParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cachePrefreshParameters.Deserialize(value["CachePrefreshParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cachePrefreshParametersHasBeenSet = true;
    }

    if (value.HasMember("AccessURLRedirectParameters") && !value["AccessURLRedirectParameters"].IsNull())
    {
        if (!value["AccessURLRedirectParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.AccessURLRedirectParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_accessURLRedirectParameters.Deserialize(value["AccessURLRedirectParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_accessURLRedirectParametersHasBeenSet = true;
    }

    if (value.HasMember("UpstreamURLRewriteParameters") && !value["UpstreamURLRewriteParameters"].IsNull())
    {
        if (!value["UpstreamURLRewriteParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.UpstreamURLRewriteParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_upstreamURLRewriteParameters.Deserialize(value["UpstreamURLRewriteParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_upstreamURLRewriteParametersHasBeenSet = true;
    }

    if (value.HasMember("QUICParameters") && !value["QUICParameters"].IsNull())
    {
        if (!value["QUICParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.QUICParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_qUICParameters.Deserialize(value["QUICParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_qUICParametersHasBeenSet = true;
    }

    if (value.HasMember("WebSocketParameters") && !value["WebSocketParameters"].IsNull())
    {
        if (!value["WebSocketParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.WebSocketParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_webSocketParameters.Deserialize(value["WebSocketParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_webSocketParametersHasBeenSet = true;
    }

    if (value.HasMember("AuthenticationParameters") && !value["AuthenticationParameters"].IsNull())
    {
        if (!value["AuthenticationParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.AuthenticationParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_authenticationParameters.Deserialize(value["AuthenticationParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_authenticationParametersHasBeenSet = true;
    }

    if (value.HasMember("MaxAgeParameters") && !value["MaxAgeParameters"].IsNull())
    {
        if (!value["MaxAgeParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.MaxAgeParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_maxAgeParameters.Deserialize(value["MaxAgeParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_maxAgeParametersHasBeenSet = true;
    }

    if (value.HasMember("StatusCodeCacheParameters") && !value["StatusCodeCacheParameters"].IsNull())
    {
        if (!value["StatusCodeCacheParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.StatusCodeCacheParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_statusCodeCacheParameters.Deserialize(value["StatusCodeCacheParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statusCodeCacheParametersHasBeenSet = true;
    }

    if (value.HasMember("OfflineCacheParameters") && !value["OfflineCacheParameters"].IsNull())
    {
        if (!value["OfflineCacheParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.OfflineCacheParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_offlineCacheParameters.Deserialize(value["OfflineCacheParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_offlineCacheParametersHasBeenSet = true;
    }

    if (value.HasMember("SmartRoutingParameters") && !value["SmartRoutingParameters"].IsNull())
    {
        if (!value["SmartRoutingParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.SmartRoutingParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_smartRoutingParameters.Deserialize(value["SmartRoutingParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_smartRoutingParametersHasBeenSet = true;
    }

    if (value.HasMember("RangeOriginPullParameters") && !value["RangeOriginPullParameters"].IsNull())
    {
        if (!value["RangeOriginPullParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.RangeOriginPullParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rangeOriginPullParameters.Deserialize(value["RangeOriginPullParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rangeOriginPullParametersHasBeenSet = true;
    }

    if (value.HasMember("UpstreamHTTP2Parameters") && !value["UpstreamHTTP2Parameters"].IsNull())
    {
        if (!value["UpstreamHTTP2Parameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.UpstreamHTTP2Parameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_upstreamHTTP2Parameters.Deserialize(value["UpstreamHTTP2Parameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_upstreamHTTP2ParametersHasBeenSet = true;
    }

    if (value.HasMember("HostHeaderParameters") && !value["HostHeaderParameters"].IsNull())
    {
        if (!value["HostHeaderParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.HostHeaderParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hostHeaderParameters.Deserialize(value["HostHeaderParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hostHeaderParametersHasBeenSet = true;
    }

    if (value.HasMember("ForceRedirectHTTPSParameters") && !value["ForceRedirectHTTPSParameters"].IsNull())
    {
        if (!value["ForceRedirectHTTPSParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.ForceRedirectHTTPSParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_forceRedirectHTTPSParameters.Deserialize(value["ForceRedirectHTTPSParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_forceRedirectHTTPSParametersHasBeenSet = true;
    }

    if (value.HasMember("CompressionParameters") && !value["CompressionParameters"].IsNull())
    {
        if (!value["CompressionParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.CompressionParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_compressionParameters.Deserialize(value["CompressionParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_compressionParametersHasBeenSet = true;
    }

    if (value.HasMember("HSTSParameters") && !value["HSTSParameters"].IsNull())
    {
        if (!value["HSTSParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.HSTSParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hSTSParameters.Deserialize(value["HSTSParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hSTSParametersHasBeenSet = true;
    }

    if (value.HasMember("ClientIPHeaderParameters") && !value["ClientIPHeaderParameters"].IsNull())
    {
        if (!value["ClientIPHeaderParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.ClientIPHeaderParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clientIPHeaderParameters.Deserialize(value["ClientIPHeaderParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clientIPHeaderParametersHasBeenSet = true;
    }

    if (value.HasMember("OCSPStaplingParameters") && !value["OCSPStaplingParameters"].IsNull())
    {
        if (!value["OCSPStaplingParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.OCSPStaplingParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_oCSPStaplingParameters.Deserialize(value["OCSPStaplingParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_oCSPStaplingParametersHasBeenSet = true;
    }

    if (value.HasMember("HTTP2Parameters") && !value["HTTP2Parameters"].IsNull())
    {
        if (!value["HTTP2Parameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.HTTP2Parameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hTTP2Parameters.Deserialize(value["HTTP2Parameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hTTP2ParametersHasBeenSet = true;
    }

    if (value.HasMember("PostMaxSizeParameters") && !value["PostMaxSizeParameters"].IsNull())
    {
        if (!value["PostMaxSizeParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.PostMaxSizeParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_postMaxSizeParameters.Deserialize(value["PostMaxSizeParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_postMaxSizeParametersHasBeenSet = true;
    }

    if (value.HasMember("ClientIPCountryParameters") && !value["ClientIPCountryParameters"].IsNull())
    {
        if (!value["ClientIPCountryParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.ClientIPCountryParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_clientIPCountryParameters.Deserialize(value["ClientIPCountryParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_clientIPCountryParametersHasBeenSet = true;
    }

    if (value.HasMember("UpstreamFollowRedirectParameters") && !value["UpstreamFollowRedirectParameters"].IsNull())
    {
        if (!value["UpstreamFollowRedirectParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.UpstreamFollowRedirectParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_upstreamFollowRedirectParameters.Deserialize(value["UpstreamFollowRedirectParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_upstreamFollowRedirectParametersHasBeenSet = true;
    }

    if (value.HasMember("UpstreamRequestParameters") && !value["UpstreamRequestParameters"].IsNull())
    {
        if (!value["UpstreamRequestParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.UpstreamRequestParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_upstreamRequestParameters.Deserialize(value["UpstreamRequestParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_upstreamRequestParametersHasBeenSet = true;
    }

    if (value.HasMember("TLSConfigParameters") && !value["TLSConfigParameters"].IsNull())
    {
        if (!value["TLSConfigParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.TLSConfigParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tLSConfigParameters.Deserialize(value["TLSConfigParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tLSConfigParametersHasBeenSet = true;
    }

    if (value.HasMember("ModifyOriginParameters") && !value["ModifyOriginParameters"].IsNull())
    {
        if (!value["ModifyOriginParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.ModifyOriginParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modifyOriginParameters.Deserialize(value["ModifyOriginParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modifyOriginParametersHasBeenSet = true;
    }

    if (value.HasMember("HTTPUpstreamTimeoutParameters") && !value["HTTPUpstreamTimeoutParameters"].IsNull())
    {
        if (!value["HTTPUpstreamTimeoutParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.HTTPUpstreamTimeoutParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_hTTPUpstreamTimeoutParameters.Deserialize(value["HTTPUpstreamTimeoutParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_hTTPUpstreamTimeoutParametersHasBeenSet = true;
    }

    if (value.HasMember("HttpResponseParameters") && !value["HttpResponseParameters"].IsNull())
    {
        if (!value["HttpResponseParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.HttpResponseParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_httpResponseParameters.Deserialize(value["HttpResponseParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_httpResponseParametersHasBeenSet = true;
    }

    if (value.HasMember("ErrorPageParameters") && !value["ErrorPageParameters"].IsNull())
    {
        if (!value["ErrorPageParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.ErrorPageParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_errorPageParameters.Deserialize(value["ErrorPageParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_errorPageParametersHasBeenSet = true;
    }

    if (value.HasMember("ModifyResponseHeaderParameters") && !value["ModifyResponseHeaderParameters"].IsNull())
    {
        if (!value["ModifyResponseHeaderParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.ModifyResponseHeaderParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modifyResponseHeaderParameters.Deserialize(value["ModifyResponseHeaderParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modifyResponseHeaderParametersHasBeenSet = true;
    }

    if (value.HasMember("ModifyRequestHeaderParameters") && !value["ModifyRequestHeaderParameters"].IsNull())
    {
        if (!value["ModifyRequestHeaderParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.ModifyRequestHeaderParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modifyRequestHeaderParameters.Deserialize(value["ModifyRequestHeaderParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modifyRequestHeaderParametersHasBeenSet = true;
    }

    if (value.HasMember("ResponseSpeedLimitParameters") && !value["ResponseSpeedLimitParameters"].IsNull())
    {
        if (!value["ResponseSpeedLimitParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.ResponseSpeedLimitParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_responseSpeedLimitParameters.Deserialize(value["ResponseSpeedLimitParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_responseSpeedLimitParametersHasBeenSet = true;
    }

    if (value.HasMember("SetContentIdentifierParameters") && !value["SetContentIdentifierParameters"].IsNull())
    {
        if (!value["SetContentIdentifierParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.SetContentIdentifierParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_setContentIdentifierParameters.Deserialize(value["SetContentIdentifierParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_setContentIdentifierParametersHasBeenSet = true;
    }

    if (value.HasMember("VaryParameters") && !value["VaryParameters"].IsNull())
    {
        if (!value["VaryParameters"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleEngineAction.VaryParameters` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_varyParameters.Deserialize(value["VaryParameters"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_varyParametersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleEngineAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_cacheParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cacheParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cacheKeyParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CacheKeyParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cacheKeyParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cachePrefreshParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CachePrefreshParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cachePrefreshParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_accessURLRedirectParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessURLRedirectParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_accessURLRedirectParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_upstreamURLRewriteParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamURLRewriteParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_upstreamURLRewriteParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_qUICParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QUICParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_qUICParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_webSocketParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebSocketParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_webSocketParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_authenticationParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthenticationParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_authenticationParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_maxAgeParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAgeParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_maxAgeParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statusCodeCacheParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusCodeCacheParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_statusCodeCacheParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_offlineCacheParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OfflineCacheParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_offlineCacheParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_smartRoutingParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmartRoutingParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_smartRoutingParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rangeOriginPullParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangeOriginPullParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rangeOriginPullParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_upstreamHTTP2ParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamHTTP2Parameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_upstreamHTTP2Parameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hostHeaderParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostHeaderParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hostHeaderParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_forceRedirectHTTPSParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceRedirectHTTPSParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_forceRedirectHTTPSParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_compressionParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompressionParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_compressionParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hSTSParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HSTSParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hSTSParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clientIPHeaderParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIPHeaderParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clientIPHeaderParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_oCSPStaplingParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OCSPStaplingParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_oCSPStaplingParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hTTP2ParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HTTP2Parameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hTTP2Parameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_postMaxSizeParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostMaxSizeParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_postMaxSizeParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_clientIPCountryParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIPCountryParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_clientIPCountryParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_upstreamFollowRedirectParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamFollowRedirectParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_upstreamFollowRedirectParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_upstreamRequestParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamRequestParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_upstreamRequestParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tLSConfigParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TLSConfigParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tLSConfigParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modifyOriginParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyOriginParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modifyOriginParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hTTPUpstreamTimeoutParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HTTPUpstreamTimeoutParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hTTPUpstreamTimeoutParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_httpResponseParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpResponseParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_httpResponseParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_errorPageParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorPageParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_errorPageParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modifyResponseHeaderParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyResponseHeaderParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modifyResponseHeaderParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_modifyRequestHeaderParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyRequestHeaderParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modifyRequestHeaderParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_responseSpeedLimitParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseSpeedLimitParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_responseSpeedLimitParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_setContentIdentifierParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SetContentIdentifierParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_setContentIdentifierParameters.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_varyParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VaryParameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_varyParameters.ToJsonObject(value[key.c_str()], allocator);
    }

}


string RuleEngineAction::GetName() const
{
    return m_name;
}

void RuleEngineAction::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RuleEngineAction::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

CacheParameters RuleEngineAction::GetCacheParameters() const
{
    return m_cacheParameters;
}

void RuleEngineAction::SetCacheParameters(const CacheParameters& _cacheParameters)
{
    m_cacheParameters = _cacheParameters;
    m_cacheParametersHasBeenSet = true;
}

bool RuleEngineAction::CacheParametersHasBeenSet() const
{
    return m_cacheParametersHasBeenSet;
}

CacheKeyParameters RuleEngineAction::GetCacheKeyParameters() const
{
    return m_cacheKeyParameters;
}

void RuleEngineAction::SetCacheKeyParameters(const CacheKeyParameters& _cacheKeyParameters)
{
    m_cacheKeyParameters = _cacheKeyParameters;
    m_cacheKeyParametersHasBeenSet = true;
}

bool RuleEngineAction::CacheKeyParametersHasBeenSet() const
{
    return m_cacheKeyParametersHasBeenSet;
}

CachePrefreshParameters RuleEngineAction::GetCachePrefreshParameters() const
{
    return m_cachePrefreshParameters;
}

void RuleEngineAction::SetCachePrefreshParameters(const CachePrefreshParameters& _cachePrefreshParameters)
{
    m_cachePrefreshParameters = _cachePrefreshParameters;
    m_cachePrefreshParametersHasBeenSet = true;
}

bool RuleEngineAction::CachePrefreshParametersHasBeenSet() const
{
    return m_cachePrefreshParametersHasBeenSet;
}

AccessURLRedirectParameters RuleEngineAction::GetAccessURLRedirectParameters() const
{
    return m_accessURLRedirectParameters;
}

void RuleEngineAction::SetAccessURLRedirectParameters(const AccessURLRedirectParameters& _accessURLRedirectParameters)
{
    m_accessURLRedirectParameters = _accessURLRedirectParameters;
    m_accessURLRedirectParametersHasBeenSet = true;
}

bool RuleEngineAction::AccessURLRedirectParametersHasBeenSet() const
{
    return m_accessURLRedirectParametersHasBeenSet;
}

UpstreamURLRewriteParameters RuleEngineAction::GetUpstreamURLRewriteParameters() const
{
    return m_upstreamURLRewriteParameters;
}

void RuleEngineAction::SetUpstreamURLRewriteParameters(const UpstreamURLRewriteParameters& _upstreamURLRewriteParameters)
{
    m_upstreamURLRewriteParameters = _upstreamURLRewriteParameters;
    m_upstreamURLRewriteParametersHasBeenSet = true;
}

bool RuleEngineAction::UpstreamURLRewriteParametersHasBeenSet() const
{
    return m_upstreamURLRewriteParametersHasBeenSet;
}

QUICParameters RuleEngineAction::GetQUICParameters() const
{
    return m_qUICParameters;
}

void RuleEngineAction::SetQUICParameters(const QUICParameters& _qUICParameters)
{
    m_qUICParameters = _qUICParameters;
    m_qUICParametersHasBeenSet = true;
}

bool RuleEngineAction::QUICParametersHasBeenSet() const
{
    return m_qUICParametersHasBeenSet;
}

WebSocketParameters RuleEngineAction::GetWebSocketParameters() const
{
    return m_webSocketParameters;
}

void RuleEngineAction::SetWebSocketParameters(const WebSocketParameters& _webSocketParameters)
{
    m_webSocketParameters = _webSocketParameters;
    m_webSocketParametersHasBeenSet = true;
}

bool RuleEngineAction::WebSocketParametersHasBeenSet() const
{
    return m_webSocketParametersHasBeenSet;
}

AuthenticationParameters RuleEngineAction::GetAuthenticationParameters() const
{
    return m_authenticationParameters;
}

void RuleEngineAction::SetAuthenticationParameters(const AuthenticationParameters& _authenticationParameters)
{
    m_authenticationParameters = _authenticationParameters;
    m_authenticationParametersHasBeenSet = true;
}

bool RuleEngineAction::AuthenticationParametersHasBeenSet() const
{
    return m_authenticationParametersHasBeenSet;
}

MaxAgeParameters RuleEngineAction::GetMaxAgeParameters() const
{
    return m_maxAgeParameters;
}

void RuleEngineAction::SetMaxAgeParameters(const MaxAgeParameters& _maxAgeParameters)
{
    m_maxAgeParameters = _maxAgeParameters;
    m_maxAgeParametersHasBeenSet = true;
}

bool RuleEngineAction::MaxAgeParametersHasBeenSet() const
{
    return m_maxAgeParametersHasBeenSet;
}

StatusCodeCacheParameters RuleEngineAction::GetStatusCodeCacheParameters() const
{
    return m_statusCodeCacheParameters;
}

void RuleEngineAction::SetStatusCodeCacheParameters(const StatusCodeCacheParameters& _statusCodeCacheParameters)
{
    m_statusCodeCacheParameters = _statusCodeCacheParameters;
    m_statusCodeCacheParametersHasBeenSet = true;
}

bool RuleEngineAction::StatusCodeCacheParametersHasBeenSet() const
{
    return m_statusCodeCacheParametersHasBeenSet;
}

OfflineCacheParameters RuleEngineAction::GetOfflineCacheParameters() const
{
    return m_offlineCacheParameters;
}

void RuleEngineAction::SetOfflineCacheParameters(const OfflineCacheParameters& _offlineCacheParameters)
{
    m_offlineCacheParameters = _offlineCacheParameters;
    m_offlineCacheParametersHasBeenSet = true;
}

bool RuleEngineAction::OfflineCacheParametersHasBeenSet() const
{
    return m_offlineCacheParametersHasBeenSet;
}

SmartRoutingParameters RuleEngineAction::GetSmartRoutingParameters() const
{
    return m_smartRoutingParameters;
}

void RuleEngineAction::SetSmartRoutingParameters(const SmartRoutingParameters& _smartRoutingParameters)
{
    m_smartRoutingParameters = _smartRoutingParameters;
    m_smartRoutingParametersHasBeenSet = true;
}

bool RuleEngineAction::SmartRoutingParametersHasBeenSet() const
{
    return m_smartRoutingParametersHasBeenSet;
}

RangeOriginPullParameters RuleEngineAction::GetRangeOriginPullParameters() const
{
    return m_rangeOriginPullParameters;
}

void RuleEngineAction::SetRangeOriginPullParameters(const RangeOriginPullParameters& _rangeOriginPullParameters)
{
    m_rangeOriginPullParameters = _rangeOriginPullParameters;
    m_rangeOriginPullParametersHasBeenSet = true;
}

bool RuleEngineAction::RangeOriginPullParametersHasBeenSet() const
{
    return m_rangeOriginPullParametersHasBeenSet;
}

UpstreamHTTP2Parameters RuleEngineAction::GetUpstreamHTTP2Parameters() const
{
    return m_upstreamHTTP2Parameters;
}

void RuleEngineAction::SetUpstreamHTTP2Parameters(const UpstreamHTTP2Parameters& _upstreamHTTP2Parameters)
{
    m_upstreamHTTP2Parameters = _upstreamHTTP2Parameters;
    m_upstreamHTTP2ParametersHasBeenSet = true;
}

bool RuleEngineAction::UpstreamHTTP2ParametersHasBeenSet() const
{
    return m_upstreamHTTP2ParametersHasBeenSet;
}

HostHeaderParameters RuleEngineAction::GetHostHeaderParameters() const
{
    return m_hostHeaderParameters;
}

void RuleEngineAction::SetHostHeaderParameters(const HostHeaderParameters& _hostHeaderParameters)
{
    m_hostHeaderParameters = _hostHeaderParameters;
    m_hostHeaderParametersHasBeenSet = true;
}

bool RuleEngineAction::HostHeaderParametersHasBeenSet() const
{
    return m_hostHeaderParametersHasBeenSet;
}

ForceRedirectHTTPSParameters RuleEngineAction::GetForceRedirectHTTPSParameters() const
{
    return m_forceRedirectHTTPSParameters;
}

void RuleEngineAction::SetForceRedirectHTTPSParameters(const ForceRedirectHTTPSParameters& _forceRedirectHTTPSParameters)
{
    m_forceRedirectHTTPSParameters = _forceRedirectHTTPSParameters;
    m_forceRedirectHTTPSParametersHasBeenSet = true;
}

bool RuleEngineAction::ForceRedirectHTTPSParametersHasBeenSet() const
{
    return m_forceRedirectHTTPSParametersHasBeenSet;
}

CompressionParameters RuleEngineAction::GetCompressionParameters() const
{
    return m_compressionParameters;
}

void RuleEngineAction::SetCompressionParameters(const CompressionParameters& _compressionParameters)
{
    m_compressionParameters = _compressionParameters;
    m_compressionParametersHasBeenSet = true;
}

bool RuleEngineAction::CompressionParametersHasBeenSet() const
{
    return m_compressionParametersHasBeenSet;
}

HSTSParameters RuleEngineAction::GetHSTSParameters() const
{
    return m_hSTSParameters;
}

void RuleEngineAction::SetHSTSParameters(const HSTSParameters& _hSTSParameters)
{
    m_hSTSParameters = _hSTSParameters;
    m_hSTSParametersHasBeenSet = true;
}

bool RuleEngineAction::HSTSParametersHasBeenSet() const
{
    return m_hSTSParametersHasBeenSet;
}

ClientIPHeaderParameters RuleEngineAction::GetClientIPHeaderParameters() const
{
    return m_clientIPHeaderParameters;
}

void RuleEngineAction::SetClientIPHeaderParameters(const ClientIPHeaderParameters& _clientIPHeaderParameters)
{
    m_clientIPHeaderParameters = _clientIPHeaderParameters;
    m_clientIPHeaderParametersHasBeenSet = true;
}

bool RuleEngineAction::ClientIPHeaderParametersHasBeenSet() const
{
    return m_clientIPHeaderParametersHasBeenSet;
}

OCSPStaplingParameters RuleEngineAction::GetOCSPStaplingParameters() const
{
    return m_oCSPStaplingParameters;
}

void RuleEngineAction::SetOCSPStaplingParameters(const OCSPStaplingParameters& _oCSPStaplingParameters)
{
    m_oCSPStaplingParameters = _oCSPStaplingParameters;
    m_oCSPStaplingParametersHasBeenSet = true;
}

bool RuleEngineAction::OCSPStaplingParametersHasBeenSet() const
{
    return m_oCSPStaplingParametersHasBeenSet;
}

HTTP2Parameters RuleEngineAction::GetHTTP2Parameters() const
{
    return m_hTTP2Parameters;
}

void RuleEngineAction::SetHTTP2Parameters(const HTTP2Parameters& _hTTP2Parameters)
{
    m_hTTP2Parameters = _hTTP2Parameters;
    m_hTTP2ParametersHasBeenSet = true;
}

bool RuleEngineAction::HTTP2ParametersHasBeenSet() const
{
    return m_hTTP2ParametersHasBeenSet;
}

PostMaxSizeParameters RuleEngineAction::GetPostMaxSizeParameters() const
{
    return m_postMaxSizeParameters;
}

void RuleEngineAction::SetPostMaxSizeParameters(const PostMaxSizeParameters& _postMaxSizeParameters)
{
    m_postMaxSizeParameters = _postMaxSizeParameters;
    m_postMaxSizeParametersHasBeenSet = true;
}

bool RuleEngineAction::PostMaxSizeParametersHasBeenSet() const
{
    return m_postMaxSizeParametersHasBeenSet;
}

ClientIPCountryParameters RuleEngineAction::GetClientIPCountryParameters() const
{
    return m_clientIPCountryParameters;
}

void RuleEngineAction::SetClientIPCountryParameters(const ClientIPCountryParameters& _clientIPCountryParameters)
{
    m_clientIPCountryParameters = _clientIPCountryParameters;
    m_clientIPCountryParametersHasBeenSet = true;
}

bool RuleEngineAction::ClientIPCountryParametersHasBeenSet() const
{
    return m_clientIPCountryParametersHasBeenSet;
}

UpstreamFollowRedirectParameters RuleEngineAction::GetUpstreamFollowRedirectParameters() const
{
    return m_upstreamFollowRedirectParameters;
}

void RuleEngineAction::SetUpstreamFollowRedirectParameters(const UpstreamFollowRedirectParameters& _upstreamFollowRedirectParameters)
{
    m_upstreamFollowRedirectParameters = _upstreamFollowRedirectParameters;
    m_upstreamFollowRedirectParametersHasBeenSet = true;
}

bool RuleEngineAction::UpstreamFollowRedirectParametersHasBeenSet() const
{
    return m_upstreamFollowRedirectParametersHasBeenSet;
}

UpstreamRequestParameters RuleEngineAction::GetUpstreamRequestParameters() const
{
    return m_upstreamRequestParameters;
}

void RuleEngineAction::SetUpstreamRequestParameters(const UpstreamRequestParameters& _upstreamRequestParameters)
{
    m_upstreamRequestParameters = _upstreamRequestParameters;
    m_upstreamRequestParametersHasBeenSet = true;
}

bool RuleEngineAction::UpstreamRequestParametersHasBeenSet() const
{
    return m_upstreamRequestParametersHasBeenSet;
}

TLSConfigParameters RuleEngineAction::GetTLSConfigParameters() const
{
    return m_tLSConfigParameters;
}

void RuleEngineAction::SetTLSConfigParameters(const TLSConfigParameters& _tLSConfigParameters)
{
    m_tLSConfigParameters = _tLSConfigParameters;
    m_tLSConfigParametersHasBeenSet = true;
}

bool RuleEngineAction::TLSConfigParametersHasBeenSet() const
{
    return m_tLSConfigParametersHasBeenSet;
}

ModifyOriginParameters RuleEngineAction::GetModifyOriginParameters() const
{
    return m_modifyOriginParameters;
}

void RuleEngineAction::SetModifyOriginParameters(const ModifyOriginParameters& _modifyOriginParameters)
{
    m_modifyOriginParameters = _modifyOriginParameters;
    m_modifyOriginParametersHasBeenSet = true;
}

bool RuleEngineAction::ModifyOriginParametersHasBeenSet() const
{
    return m_modifyOriginParametersHasBeenSet;
}

HTTPUpstreamTimeoutParameters RuleEngineAction::GetHTTPUpstreamTimeoutParameters() const
{
    return m_hTTPUpstreamTimeoutParameters;
}

void RuleEngineAction::SetHTTPUpstreamTimeoutParameters(const HTTPUpstreamTimeoutParameters& _hTTPUpstreamTimeoutParameters)
{
    m_hTTPUpstreamTimeoutParameters = _hTTPUpstreamTimeoutParameters;
    m_hTTPUpstreamTimeoutParametersHasBeenSet = true;
}

bool RuleEngineAction::HTTPUpstreamTimeoutParametersHasBeenSet() const
{
    return m_hTTPUpstreamTimeoutParametersHasBeenSet;
}

HTTPResponseParameters RuleEngineAction::GetHttpResponseParameters() const
{
    return m_httpResponseParameters;
}

void RuleEngineAction::SetHttpResponseParameters(const HTTPResponseParameters& _httpResponseParameters)
{
    m_httpResponseParameters = _httpResponseParameters;
    m_httpResponseParametersHasBeenSet = true;
}

bool RuleEngineAction::HttpResponseParametersHasBeenSet() const
{
    return m_httpResponseParametersHasBeenSet;
}

ErrorPageParameters RuleEngineAction::GetErrorPageParameters() const
{
    return m_errorPageParameters;
}

void RuleEngineAction::SetErrorPageParameters(const ErrorPageParameters& _errorPageParameters)
{
    m_errorPageParameters = _errorPageParameters;
    m_errorPageParametersHasBeenSet = true;
}

bool RuleEngineAction::ErrorPageParametersHasBeenSet() const
{
    return m_errorPageParametersHasBeenSet;
}

ModifyResponseHeaderParameters RuleEngineAction::GetModifyResponseHeaderParameters() const
{
    return m_modifyResponseHeaderParameters;
}

void RuleEngineAction::SetModifyResponseHeaderParameters(const ModifyResponseHeaderParameters& _modifyResponseHeaderParameters)
{
    m_modifyResponseHeaderParameters = _modifyResponseHeaderParameters;
    m_modifyResponseHeaderParametersHasBeenSet = true;
}

bool RuleEngineAction::ModifyResponseHeaderParametersHasBeenSet() const
{
    return m_modifyResponseHeaderParametersHasBeenSet;
}

ModifyRequestHeaderParameters RuleEngineAction::GetModifyRequestHeaderParameters() const
{
    return m_modifyRequestHeaderParameters;
}

void RuleEngineAction::SetModifyRequestHeaderParameters(const ModifyRequestHeaderParameters& _modifyRequestHeaderParameters)
{
    m_modifyRequestHeaderParameters = _modifyRequestHeaderParameters;
    m_modifyRequestHeaderParametersHasBeenSet = true;
}

bool RuleEngineAction::ModifyRequestHeaderParametersHasBeenSet() const
{
    return m_modifyRequestHeaderParametersHasBeenSet;
}

ResponseSpeedLimitParameters RuleEngineAction::GetResponseSpeedLimitParameters() const
{
    return m_responseSpeedLimitParameters;
}

void RuleEngineAction::SetResponseSpeedLimitParameters(const ResponseSpeedLimitParameters& _responseSpeedLimitParameters)
{
    m_responseSpeedLimitParameters = _responseSpeedLimitParameters;
    m_responseSpeedLimitParametersHasBeenSet = true;
}

bool RuleEngineAction::ResponseSpeedLimitParametersHasBeenSet() const
{
    return m_responseSpeedLimitParametersHasBeenSet;
}

SetContentIdentifierParameters RuleEngineAction::GetSetContentIdentifierParameters() const
{
    return m_setContentIdentifierParameters;
}

void RuleEngineAction::SetSetContentIdentifierParameters(const SetContentIdentifierParameters& _setContentIdentifierParameters)
{
    m_setContentIdentifierParameters = _setContentIdentifierParameters;
    m_setContentIdentifierParametersHasBeenSet = true;
}

bool RuleEngineAction::SetContentIdentifierParametersHasBeenSet() const
{
    return m_setContentIdentifierParametersHasBeenSet;
}

VaryParameters RuleEngineAction::GetVaryParameters() const
{
    return m_varyParameters;
}

void RuleEngineAction::SetVaryParameters(const VaryParameters& _varyParameters)
{
    m_varyParameters = _varyParameters;
    m_varyParametersHasBeenSet = true;
}

bool RuleEngineAction::VaryParametersHasBeenSet() const
{
    return m_varyParametersHasBeenSet;
}

