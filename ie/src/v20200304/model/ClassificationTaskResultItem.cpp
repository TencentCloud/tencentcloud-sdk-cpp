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

#include <tencentcloud/ie/v20200304/model/ClassificationTaskResultItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

ClassificationTaskResultItem::ClassificationTaskResultItem() :
    m_classificationHasBeenSet(false),
    m_confidenceHasBeenSet(false)
{
}

CoreInternalOutcome ClassificationTaskResultItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Classification") && !value["Classification"].IsNull())
    {
        if (!value["Classification"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClassificationTaskResultItem.Classification` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classification = string(value["Classification"].GetString());
        m_classificationHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ClassificationTaskResultItem.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClassificationTaskResultItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_classificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Classification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classification.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

}


string ClassificationTaskResultItem::GetClassification() const
{
    return m_classification;
}

void ClassificationTaskResultItem::SetClassification(const string& _classification)
{
    m_classification = _classification;
    m_classificationHasBeenSet = true;
}

bool ClassificationTaskResultItem::ClassificationHasBeenSet() const
{
    return m_classificationHasBeenSet;
}

double ClassificationTaskResultItem::GetConfidence() const
{
    return m_confidence;
}

void ClassificationTaskResultItem::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool ClassificationTaskResultItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

