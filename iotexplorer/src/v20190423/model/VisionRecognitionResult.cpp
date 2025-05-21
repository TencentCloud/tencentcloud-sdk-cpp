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

#include <tencentcloud/iotexplorer/v20190423/model/VisionRecognitionResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

VisionRecognitionResult::VisionRecognitionResult() :
    m_statusHasBeenSet(false),
    m_detectedClassificationsHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_alternativeSummaryHasBeenSet(false)
{
}

CoreInternalOutcome VisionRecognitionResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VisionRecognitionResult.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("DetectedClassifications") && !value["DetectedClassifications"].IsNull())
    {
        if (!value["DetectedClassifications"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VisionRecognitionResult.DetectedClassifications` is not array type"));

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
            return CoreInternalOutcome(Core::Error("response `VisionRecognitionResult.Summary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_summary = string(value["Summary"].GetString());
        m_summaryHasBeenSet = true;
    }

    if (value.HasMember("AlternativeSummary") && !value["AlternativeSummary"].IsNull())
    {
        if (!value["AlternativeSummary"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VisionRecognitionResult.AlternativeSummary` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alternativeSummary = string(value["AlternativeSummary"].GetString());
        m_alternativeSummaryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VisionRecognitionResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

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

}


int64_t VisionRecognitionResult::GetStatus() const
{
    return m_status;
}

void VisionRecognitionResult::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool VisionRecognitionResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<string> VisionRecognitionResult::GetDetectedClassifications() const
{
    return m_detectedClassifications;
}

void VisionRecognitionResult::SetDetectedClassifications(const vector<string>& _detectedClassifications)
{
    m_detectedClassifications = _detectedClassifications;
    m_detectedClassificationsHasBeenSet = true;
}

bool VisionRecognitionResult::DetectedClassificationsHasBeenSet() const
{
    return m_detectedClassificationsHasBeenSet;
}

string VisionRecognitionResult::GetSummary() const
{
    return m_summary;
}

void VisionRecognitionResult::SetSummary(const string& _summary)
{
    m_summary = _summary;
    m_summaryHasBeenSet = true;
}

bool VisionRecognitionResult::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}

string VisionRecognitionResult::GetAlternativeSummary() const
{
    return m_alternativeSummary;
}

void VisionRecognitionResult::SetAlternativeSummary(const string& _alternativeSummary)
{
    m_alternativeSummary = _alternativeSummary;
    m_alternativeSummaryHasBeenSet = true;
}

bool VisionRecognitionResult::AlternativeSummaryHasBeenSet() const
{
    return m_alternativeSummaryHasBeenSet;
}

