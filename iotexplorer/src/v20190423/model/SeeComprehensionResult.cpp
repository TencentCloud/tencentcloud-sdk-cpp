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

#include <tencentcloud/iotexplorer/v20190423/model/SeeComprehensionResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

SeeComprehensionResult::SeeComprehensionResult() :
    m_detectedClassificationsHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_alternativeSummaryHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMsgHasBeenSet(false),
    m_keywordsHasBeenSet(false)
{
}

CoreInternalOutcome SeeComprehensionResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DetectedClassifications") && !value["DetectedClassifications"].IsNull())
    {
        if (!value["DetectedClassifications"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SeeComprehensionResult.DetectedClassifications` is not array type"));

        const rapidjson::Value &tmpValue = value["DetectedClassifications"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_detectedClassifications.push_back((*itr).GetString());
        }
        m_detectedClassificationsHasBeenSet = true;
    }

    if (value.HasMember("Summary") && !value["Summary"].IsNull())
    {
        if (!value["Summary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeComprehensionResult.Summary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_summary = string(value["Summary"].GetString());
        m_summaryHasBeenSet = true;
    }

    if (value.HasMember("AlternativeSummary") && !value["AlternativeSummary"].IsNull())
    {
        if (!value["AlternativeSummary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeComprehensionResult.AlternativeSummary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alternativeSummary = string(value["AlternativeSummary"].GetString());
        m_alternativeSummaryHasBeenSet = true;
    }

    if (value.HasMember("ErrorCode") && !value["ErrorCode"].IsNull())
    {
        if (!value["ErrorCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeComprehensionResult.ErrorCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorCode = string(value["ErrorCode"].GetString());
        m_errorCodeHasBeenSet = true;
    }

    if (value.HasMember("ErrorMsg") && !value["ErrorMsg"].IsNull())
    {
        if (!value["ErrorMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeComprehensionResult.ErrorMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMsg = string(value["ErrorMsg"].GetString());
        m_errorMsgHasBeenSet = true;
    }

    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SeeComprehensionResult.Keywords` is not array type"));

        const rapidjson::Value &tmpValue = value["Keywords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywords.push_back((*itr).GetString());
        }
        m_keywordsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SeeComprehensionResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_detectedClassificationsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectedClassifications";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_detectedClassifications.begin(); itr != m_detectedClassifications.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_summaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Summary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_summary.c_str(), allocator).Move(), allocator);
    }

    if (m_alternativeSummaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlternativeSummary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alternativeSummary.c_str(), allocator).Move(), allocator);
    }

    if (m_errorCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorCode.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keywords";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keywords.begin(); itr != m_keywords.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> SeeComprehensionResult::GetDetectedClassifications() const
{
    return m_detectedClassifications;
}

void SeeComprehensionResult::SetDetectedClassifications(const vector<string>& _detectedClassifications)
{
    m_detectedClassifications = _detectedClassifications;
    m_detectedClassificationsHasBeenSet = true;
}

bool SeeComprehensionResult::DetectedClassificationsHasBeenSet() const
{
    return m_detectedClassificationsHasBeenSet;
}

string SeeComprehensionResult::GetSummary() const
{
    return m_summary;
}

void SeeComprehensionResult::SetSummary(const string& _summary)
{
    m_summary = _summary;
    m_summaryHasBeenSet = true;
}

bool SeeComprehensionResult::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}

string SeeComprehensionResult::GetAlternativeSummary() const
{
    return m_alternativeSummary;
}

void SeeComprehensionResult::SetAlternativeSummary(const string& _alternativeSummary)
{
    m_alternativeSummary = _alternativeSummary;
    m_alternativeSummaryHasBeenSet = true;
}

bool SeeComprehensionResult::AlternativeSummaryHasBeenSet() const
{
    return m_alternativeSummaryHasBeenSet;
}

string SeeComprehensionResult::GetErrorCode() const
{
    return m_errorCode;
}

void SeeComprehensionResult::SetErrorCode(const string& _errorCode)
{
    m_errorCode = _errorCode;
    m_errorCodeHasBeenSet = true;
}

bool SeeComprehensionResult::ErrorCodeHasBeenSet() const
{
    return m_errorCodeHasBeenSet;
}

string SeeComprehensionResult::GetErrorMsg() const
{
    return m_errorMsg;
}

void SeeComprehensionResult::SetErrorMsg(const string& _errorMsg)
{
    m_errorMsg = _errorMsg;
    m_errorMsgHasBeenSet = true;
}

bool SeeComprehensionResult::ErrorMsgHasBeenSet() const
{
    return m_errorMsgHasBeenSet;
}

vector<string> SeeComprehensionResult::GetKeywords() const
{
    return m_keywords;
}

void SeeComprehensionResult::SetKeywords(const vector<string>& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool SeeComprehensionResult::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

