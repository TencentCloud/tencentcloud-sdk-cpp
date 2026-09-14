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

#include <tencentcloud/adp/v20260520/model/QARetrievalConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

QARetrievalConfig::QARetrievalConfig() :
    m_confidenceHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_topNHasBeenSet(false)
{
}

CoreInternalOutcome QARetrievalConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `QARetrievalConfig.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `QARetrievalConfig.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("TopN") && !value["TopN"].IsNull())
    {
        if (!value["TopN"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `QARetrievalConfig.TopN` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_topN = value["TopN"].GetUint64();
        m_topNHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QARetrievalConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_topNHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topN, allocator);
    }

}


double QARetrievalConfig::GetConfidence() const
{
    return m_confidence;
}

void QARetrievalConfig::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool QARetrievalConfig::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

bool QARetrievalConfig::GetEnabled() const
{
    return m_enabled;
}

void QARetrievalConfig::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool QARetrievalConfig::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

uint64_t QARetrievalConfig::GetTopN() const
{
    return m_topN;
}

void QARetrievalConfig::SetTopN(const uint64_t& _topN)
{
    m_topN = _topN;
    m_topNHasBeenSet = true;
}

bool QARetrievalConfig::TopNHasBeenSet() const
{
    return m_topNHasBeenSet;
}

