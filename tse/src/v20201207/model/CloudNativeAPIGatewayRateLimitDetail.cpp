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

#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayRateLimitDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CloudNativeAPIGatewayRateLimitDetail::CloudNativeAPIGatewayRateLimitDetail() :
    m_enabledHasBeenSet(false),
    m_qpsThresholdsHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_headerHasBeenSet(false),
    m_limitByHasBeenSet(false),
    m_externalRedisHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_rateLimitResponseHasBeenSet(false),
    m_rateLimitResponseUrlHasBeenSet(false),
    m_responseTypeHasBeenSet(false),
    m_hideClientHeadersHasBeenSet(false),
    m_lineUpTimeHasBeenSet(false),
    m_isDelayHasBeenSet(false),
    m_basicLimitQpsThresholdsHasBeenSet(false),
    m_limitRulesHasBeenSet(false)
{
}

CoreInternalOutcome CloudNativeAPIGatewayRateLimitDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayRateLimitDetail.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("QpsThresholds") && !value["QpsThresholds"].IsNull())
    {
        if (!value["QpsThresholds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayRateLimitDetail.QpsThresholds` is not array type"));

        const rapidjson::Value &tmpValue = value["QpsThresholds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QpsThreshold item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_qpsThresholds.push_back(item);
        }
        m_qpsThresholdsHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayRateLimitDetail.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Header") && !value["Header"].IsNull())
    {
        if (!value["Header"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayRateLimitDetail.Header` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_header = string(value["Header"].GetString());
        m_headerHasBeenSet = true;
    }

    if (value.HasMember("LimitBy") && !value["LimitBy"].IsNull())
    {
        if (!value["LimitBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayRateLimitDetail.LimitBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_limitBy = string(value["LimitBy"].GetString());
        m_limitByHasBeenSet = true;
    }

    if (value.HasMember("ExternalRedis") && !value["ExternalRedis"].IsNull())
    {
        if (!value["ExternalRedis"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayRateLimitDetail.ExternalRedis` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_externalRedis.Deserialize(value["ExternalRedis"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_externalRedisHasBeenSet = true;
    }

    if (value.HasMember("Policy") && !value["Policy"].IsNull())
    {
        if (!value["Policy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayRateLimitDetail.Policy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_policy = string(value["Policy"].GetString());
        m_policyHasBeenSet = true;
    }

    if (value.HasMember("RateLimitResponse") && !value["RateLimitResponse"].IsNull())
    {
        if (!value["RateLimitResponse"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayRateLimitDetail.RateLimitResponse` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rateLimitResponse.Deserialize(value["RateLimitResponse"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rateLimitResponseHasBeenSet = true;
    }

    if (value.HasMember("RateLimitResponseUrl") && !value["RateLimitResponseUrl"].IsNull())
    {
        if (!value["RateLimitResponseUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayRateLimitDetail.RateLimitResponseUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rateLimitResponseUrl = string(value["RateLimitResponseUrl"].GetString());
        m_rateLimitResponseUrlHasBeenSet = true;
    }

    if (value.HasMember("ResponseType") && !value["ResponseType"].IsNull())
    {
        if (!value["ResponseType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayRateLimitDetail.ResponseType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responseType = string(value["ResponseType"].GetString());
        m_responseTypeHasBeenSet = true;
    }

    if (value.HasMember("HideClientHeaders") && !value["HideClientHeaders"].IsNull())
    {
        if (!value["HideClientHeaders"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayRateLimitDetail.HideClientHeaders` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_hideClientHeaders = value["HideClientHeaders"].GetBool();
        m_hideClientHeadersHasBeenSet = true;
    }

    if (value.HasMember("LineUpTime") && !value["LineUpTime"].IsNull())
    {
        if (!value["LineUpTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayRateLimitDetail.LineUpTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lineUpTime = value["LineUpTime"].GetInt64();
        m_lineUpTimeHasBeenSet = true;
    }

    if (value.HasMember("IsDelay") && !value["IsDelay"].IsNull())
    {
        if (!value["IsDelay"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayRateLimitDetail.IsDelay` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDelay = value["IsDelay"].GetBool();
        m_isDelayHasBeenSet = true;
    }

    if (value.HasMember("BasicLimitQpsThresholds") && !value["BasicLimitQpsThresholds"].IsNull())
    {
        if (!value["BasicLimitQpsThresholds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayRateLimitDetail.BasicLimitQpsThresholds` is not array type"));

        const rapidjson::Value &tmpValue = value["BasicLimitQpsThresholds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QpsThreshold item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_basicLimitQpsThresholds.push_back(item);
        }
        m_basicLimitQpsThresholdsHasBeenSet = true;
    }

    if (value.HasMember("LimitRules") && !value["LimitRules"].IsNull())
    {
        if (!value["LimitRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayRateLimitDetail.LimitRules` is not array type"));

        const rapidjson::Value &tmpValue = value["LimitRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LimitRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_limitRules.push_back(item);
        }
        m_limitRulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudNativeAPIGatewayRateLimitDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_qpsThresholdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QpsThresholds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_qpsThresholds.begin(); itr != m_qpsThresholds.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_headerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Header";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_header.c_str(), allocator).Move(), allocator);
    }

    if (m_limitByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_limitBy.c_str(), allocator).Move(), allocator);
    }

    if (m_externalRedisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalRedis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_externalRedis.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_policy.c_str(), allocator).Move(), allocator);
    }

    if (m_rateLimitResponseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateLimitResponse";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rateLimitResponse.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rateLimitResponseUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RateLimitResponseUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rateLimitResponseUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_responseTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_responseType.c_str(), allocator).Move(), allocator);
    }

    if (m_hideClientHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HideClientHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hideClientHeaders, allocator);
    }

    if (m_lineUpTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LineUpTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lineUpTime, allocator);
    }

    if (m_isDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDelay";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDelay, allocator);
    }

    if (m_basicLimitQpsThresholdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BasicLimitQpsThresholds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_basicLimitQpsThresholds.begin(); itr != m_basicLimitQpsThresholds.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_limitRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_limitRules.begin(); itr != m_limitRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


bool CloudNativeAPIGatewayRateLimitDetail::GetEnabled() const
{
    return m_enabled;
}

void CloudNativeAPIGatewayRateLimitDetail::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool CloudNativeAPIGatewayRateLimitDetail::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

vector<QpsThreshold> CloudNativeAPIGatewayRateLimitDetail::GetQpsThresholds() const
{
    return m_qpsThresholds;
}

void CloudNativeAPIGatewayRateLimitDetail::SetQpsThresholds(const vector<QpsThreshold>& _qpsThresholds)
{
    m_qpsThresholds = _qpsThresholds;
    m_qpsThresholdsHasBeenSet = true;
}

bool CloudNativeAPIGatewayRateLimitDetail::QpsThresholdsHasBeenSet() const
{
    return m_qpsThresholdsHasBeenSet;
}

string CloudNativeAPIGatewayRateLimitDetail::GetPath() const
{
    return m_path;
}

void CloudNativeAPIGatewayRateLimitDetail::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool CloudNativeAPIGatewayRateLimitDetail::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string CloudNativeAPIGatewayRateLimitDetail::GetHeader() const
{
    return m_header;
}

void CloudNativeAPIGatewayRateLimitDetail::SetHeader(const string& _header)
{
    m_header = _header;
    m_headerHasBeenSet = true;
}

bool CloudNativeAPIGatewayRateLimitDetail::HeaderHasBeenSet() const
{
    return m_headerHasBeenSet;
}

string CloudNativeAPIGatewayRateLimitDetail::GetLimitBy() const
{
    return m_limitBy;
}

void CloudNativeAPIGatewayRateLimitDetail::SetLimitBy(const string& _limitBy)
{
    m_limitBy = _limitBy;
    m_limitByHasBeenSet = true;
}

bool CloudNativeAPIGatewayRateLimitDetail::LimitByHasBeenSet() const
{
    return m_limitByHasBeenSet;
}

ExternalRedis CloudNativeAPIGatewayRateLimitDetail::GetExternalRedis() const
{
    return m_externalRedis;
}

void CloudNativeAPIGatewayRateLimitDetail::SetExternalRedis(const ExternalRedis& _externalRedis)
{
    m_externalRedis = _externalRedis;
    m_externalRedisHasBeenSet = true;
}

bool CloudNativeAPIGatewayRateLimitDetail::ExternalRedisHasBeenSet() const
{
    return m_externalRedisHasBeenSet;
}

string CloudNativeAPIGatewayRateLimitDetail::GetPolicy() const
{
    return m_policy;
}

void CloudNativeAPIGatewayRateLimitDetail::SetPolicy(const string& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool CloudNativeAPIGatewayRateLimitDetail::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

RateLimitResponse CloudNativeAPIGatewayRateLimitDetail::GetRateLimitResponse() const
{
    return m_rateLimitResponse;
}

void CloudNativeAPIGatewayRateLimitDetail::SetRateLimitResponse(const RateLimitResponse& _rateLimitResponse)
{
    m_rateLimitResponse = _rateLimitResponse;
    m_rateLimitResponseHasBeenSet = true;
}

bool CloudNativeAPIGatewayRateLimitDetail::RateLimitResponseHasBeenSet() const
{
    return m_rateLimitResponseHasBeenSet;
}

string CloudNativeAPIGatewayRateLimitDetail::GetRateLimitResponseUrl() const
{
    return m_rateLimitResponseUrl;
}

void CloudNativeAPIGatewayRateLimitDetail::SetRateLimitResponseUrl(const string& _rateLimitResponseUrl)
{
    m_rateLimitResponseUrl = _rateLimitResponseUrl;
    m_rateLimitResponseUrlHasBeenSet = true;
}

bool CloudNativeAPIGatewayRateLimitDetail::RateLimitResponseUrlHasBeenSet() const
{
    return m_rateLimitResponseUrlHasBeenSet;
}

string CloudNativeAPIGatewayRateLimitDetail::GetResponseType() const
{
    return m_responseType;
}

void CloudNativeAPIGatewayRateLimitDetail::SetResponseType(const string& _responseType)
{
    m_responseType = _responseType;
    m_responseTypeHasBeenSet = true;
}

bool CloudNativeAPIGatewayRateLimitDetail::ResponseTypeHasBeenSet() const
{
    return m_responseTypeHasBeenSet;
}

bool CloudNativeAPIGatewayRateLimitDetail::GetHideClientHeaders() const
{
    return m_hideClientHeaders;
}

void CloudNativeAPIGatewayRateLimitDetail::SetHideClientHeaders(const bool& _hideClientHeaders)
{
    m_hideClientHeaders = _hideClientHeaders;
    m_hideClientHeadersHasBeenSet = true;
}

bool CloudNativeAPIGatewayRateLimitDetail::HideClientHeadersHasBeenSet() const
{
    return m_hideClientHeadersHasBeenSet;
}

int64_t CloudNativeAPIGatewayRateLimitDetail::GetLineUpTime() const
{
    return m_lineUpTime;
}

void CloudNativeAPIGatewayRateLimitDetail::SetLineUpTime(const int64_t& _lineUpTime)
{
    m_lineUpTime = _lineUpTime;
    m_lineUpTimeHasBeenSet = true;
}

bool CloudNativeAPIGatewayRateLimitDetail::LineUpTimeHasBeenSet() const
{
    return m_lineUpTimeHasBeenSet;
}

bool CloudNativeAPIGatewayRateLimitDetail::GetIsDelay() const
{
    return m_isDelay;
}

void CloudNativeAPIGatewayRateLimitDetail::SetIsDelay(const bool& _isDelay)
{
    m_isDelay = _isDelay;
    m_isDelayHasBeenSet = true;
}

bool CloudNativeAPIGatewayRateLimitDetail::IsDelayHasBeenSet() const
{
    return m_isDelayHasBeenSet;
}

vector<QpsThreshold> CloudNativeAPIGatewayRateLimitDetail::GetBasicLimitQpsThresholds() const
{
    return m_basicLimitQpsThresholds;
}

void CloudNativeAPIGatewayRateLimitDetail::SetBasicLimitQpsThresholds(const vector<QpsThreshold>& _basicLimitQpsThresholds)
{
    m_basicLimitQpsThresholds = _basicLimitQpsThresholds;
    m_basicLimitQpsThresholdsHasBeenSet = true;
}

bool CloudNativeAPIGatewayRateLimitDetail::BasicLimitQpsThresholdsHasBeenSet() const
{
    return m_basicLimitQpsThresholdsHasBeenSet;
}

vector<LimitRule> CloudNativeAPIGatewayRateLimitDetail::GetLimitRules() const
{
    return m_limitRules;
}

void CloudNativeAPIGatewayRateLimitDetail::SetLimitRules(const vector<LimitRule>& _limitRules)
{
    m_limitRules = _limitRules;
    m_limitRulesHasBeenSet = true;
}

bool CloudNativeAPIGatewayRateLimitDetail::LimitRulesHasBeenSet() const
{
    return m_limitRulesHasBeenSet;
}

