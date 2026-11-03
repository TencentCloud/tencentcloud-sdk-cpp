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

#include <tencentcloud/cngw/v20230418/model/CustomGuardrailFilterConfigInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CustomGuardrailFilterConfigInput::CustomGuardrailFilterConfigInput() :
    m_requestStreamModeHasBeenSet(false),
    m_responseStreamModeHasBeenSet(false),
    m_requestKeywordsHasBeenSet(false),
    m_responseKeywordsHasBeenSet(false),
    m_keywordMatchModeHasBeenSet(false),
    m_keywordCaseSensitiveHasBeenSet(false),
    m_samplingEnabledHasBeenSet(false),
    m_requestSamplingRateHasBeenSet(false),
    m_responseSamplingRateHasBeenSet(false)
{
}

CoreInternalOutcome CustomGuardrailFilterConfigInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RequestStreamMode") && !value["RequestStreamMode"].IsNull())
    {
        if (!value["RequestStreamMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailFilterConfigInput.RequestStreamMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_requestStreamMode = string(value["RequestStreamMode"].GetString());
        m_requestStreamModeHasBeenSet = true;
    }

    if (value.HasMember("ResponseStreamMode") && !value["ResponseStreamMode"].IsNull())
    {
        if (!value["ResponseStreamMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailFilterConfigInput.ResponseStreamMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_responseStreamMode = string(value["ResponseStreamMode"].GetString());
        m_responseStreamModeHasBeenSet = true;
    }

    if (value.HasMember("RequestKeywords") && !value["RequestKeywords"].IsNull())
    {
        if (!value["RequestKeywords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailFilterConfigInput.RequestKeywords` is not array type"));

        const rapidjson::Value &tmpValue = value["RequestKeywords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_requestKeywords.push_back((*itr).GetString());
        }
        m_requestKeywordsHasBeenSet = true;
    }

    if (value.HasMember("ResponseKeywords") && !value["ResponseKeywords"].IsNull())
    {
        if (!value["ResponseKeywords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailFilterConfigInput.ResponseKeywords` is not array type"));

        const rapidjson::Value &tmpValue = value["ResponseKeywords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_responseKeywords.push_back((*itr).GetString());
        }
        m_responseKeywordsHasBeenSet = true;
    }

    if (value.HasMember("KeywordMatchMode") && !value["KeywordMatchMode"].IsNull())
    {
        if (!value["KeywordMatchMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailFilterConfigInput.KeywordMatchMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keywordMatchMode = string(value["KeywordMatchMode"].GetString());
        m_keywordMatchModeHasBeenSet = true;
    }

    if (value.HasMember("KeywordCaseSensitive") && !value["KeywordCaseSensitive"].IsNull())
    {
        if (!value["KeywordCaseSensitive"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailFilterConfigInput.KeywordCaseSensitive` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_keywordCaseSensitive = value["KeywordCaseSensitive"].GetBool();
        m_keywordCaseSensitiveHasBeenSet = true;
    }

    if (value.HasMember("SamplingEnabled") && !value["SamplingEnabled"].IsNull())
    {
        if (!value["SamplingEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailFilterConfigInput.SamplingEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_samplingEnabled = value["SamplingEnabled"].GetBool();
        m_samplingEnabledHasBeenSet = true;
    }

    if (value.HasMember("RequestSamplingRate") && !value["RequestSamplingRate"].IsNull())
    {
        if (!value["RequestSamplingRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailFilterConfigInput.RequestSamplingRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_requestSamplingRate = value["RequestSamplingRate"].GetDouble();
        m_requestSamplingRateHasBeenSet = true;
    }

    if (value.HasMember("ResponseSamplingRate") && !value["ResponseSamplingRate"].IsNull())
    {
        if (!value["ResponseSamplingRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailFilterConfigInput.ResponseSamplingRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_responseSamplingRate = value["ResponseSamplingRate"].GetDouble();
        m_responseSamplingRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomGuardrailFilterConfigInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_requestStreamModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestStreamMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_requestStreamMode.c_str(), allocator).Move(), allocator);
    }

    if (m_responseStreamModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseStreamMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_responseStreamMode.c_str(), allocator).Move(), allocator);
    }

    if (m_requestKeywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestKeywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_requestKeywords.begin(); itr != m_requestKeywords.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_responseKeywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseKeywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_responseKeywords.begin(); itr != m_responseKeywords.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_keywordMatchModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeywordMatchMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keywordMatchMode.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordCaseSensitiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeywordCaseSensitive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_keywordCaseSensitive, allocator);
    }

    if (m_samplingEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SamplingEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_samplingEnabled, allocator);
    }

    if (m_requestSamplingRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestSamplingRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestSamplingRate, allocator);
    }

    if (m_responseSamplingRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResponseSamplingRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_responseSamplingRate, allocator);
    }

}


string CustomGuardrailFilterConfigInput::GetRequestStreamMode() const
{
    return m_requestStreamMode;
}

void CustomGuardrailFilterConfigInput::SetRequestStreamMode(const string& _requestStreamMode)
{
    m_requestStreamMode = _requestStreamMode;
    m_requestStreamModeHasBeenSet = true;
}

bool CustomGuardrailFilterConfigInput::RequestStreamModeHasBeenSet() const
{
    return m_requestStreamModeHasBeenSet;
}

string CustomGuardrailFilterConfigInput::GetResponseStreamMode() const
{
    return m_responseStreamMode;
}

void CustomGuardrailFilterConfigInput::SetResponseStreamMode(const string& _responseStreamMode)
{
    m_responseStreamMode = _responseStreamMode;
    m_responseStreamModeHasBeenSet = true;
}

bool CustomGuardrailFilterConfigInput::ResponseStreamModeHasBeenSet() const
{
    return m_responseStreamModeHasBeenSet;
}

vector<string> CustomGuardrailFilterConfigInput::GetRequestKeywords() const
{
    return m_requestKeywords;
}

void CustomGuardrailFilterConfigInput::SetRequestKeywords(const vector<string>& _requestKeywords)
{
    m_requestKeywords = _requestKeywords;
    m_requestKeywordsHasBeenSet = true;
}

bool CustomGuardrailFilterConfigInput::RequestKeywordsHasBeenSet() const
{
    return m_requestKeywordsHasBeenSet;
}

vector<string> CustomGuardrailFilterConfigInput::GetResponseKeywords() const
{
    return m_responseKeywords;
}

void CustomGuardrailFilterConfigInput::SetResponseKeywords(const vector<string>& _responseKeywords)
{
    m_responseKeywords = _responseKeywords;
    m_responseKeywordsHasBeenSet = true;
}

bool CustomGuardrailFilterConfigInput::ResponseKeywordsHasBeenSet() const
{
    return m_responseKeywordsHasBeenSet;
}

string CustomGuardrailFilterConfigInput::GetKeywordMatchMode() const
{
    return m_keywordMatchMode;
}

void CustomGuardrailFilterConfigInput::SetKeywordMatchMode(const string& _keywordMatchMode)
{
    m_keywordMatchMode = _keywordMatchMode;
    m_keywordMatchModeHasBeenSet = true;
}

bool CustomGuardrailFilterConfigInput::KeywordMatchModeHasBeenSet() const
{
    return m_keywordMatchModeHasBeenSet;
}

bool CustomGuardrailFilterConfigInput::GetKeywordCaseSensitive() const
{
    return m_keywordCaseSensitive;
}

void CustomGuardrailFilterConfigInput::SetKeywordCaseSensitive(const bool& _keywordCaseSensitive)
{
    m_keywordCaseSensitive = _keywordCaseSensitive;
    m_keywordCaseSensitiveHasBeenSet = true;
}

bool CustomGuardrailFilterConfigInput::KeywordCaseSensitiveHasBeenSet() const
{
    return m_keywordCaseSensitiveHasBeenSet;
}

bool CustomGuardrailFilterConfigInput::GetSamplingEnabled() const
{
    return m_samplingEnabled;
}

void CustomGuardrailFilterConfigInput::SetSamplingEnabled(const bool& _samplingEnabled)
{
    m_samplingEnabled = _samplingEnabled;
    m_samplingEnabledHasBeenSet = true;
}

bool CustomGuardrailFilterConfigInput::SamplingEnabledHasBeenSet() const
{
    return m_samplingEnabledHasBeenSet;
}

double CustomGuardrailFilterConfigInput::GetRequestSamplingRate() const
{
    return m_requestSamplingRate;
}

void CustomGuardrailFilterConfigInput::SetRequestSamplingRate(const double& _requestSamplingRate)
{
    m_requestSamplingRate = _requestSamplingRate;
    m_requestSamplingRateHasBeenSet = true;
}

bool CustomGuardrailFilterConfigInput::RequestSamplingRateHasBeenSet() const
{
    return m_requestSamplingRateHasBeenSet;
}

double CustomGuardrailFilterConfigInput::GetResponseSamplingRate() const
{
    return m_responseSamplingRate;
}

void CustomGuardrailFilterConfigInput::SetResponseSamplingRate(const double& _responseSamplingRate)
{
    m_responseSamplingRate = _responseSamplingRate;
    m_responseSamplingRateHasBeenSet = true;
}

bool CustomGuardrailFilterConfigInput::ResponseSamplingRateHasBeenSet() const
{
    return m_responseSamplingRateHasBeenSet;
}

