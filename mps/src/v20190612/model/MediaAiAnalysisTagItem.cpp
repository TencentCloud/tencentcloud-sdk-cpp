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

#include <tencentcloud/mps/v20190612/model/MediaAiAnalysisTagItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

MediaAiAnalysisTagItem::MediaAiAnalysisTagItem() :
    m_tagHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_specialInfoHasBeenSet(false)
{
}

CoreInternalOutcome MediaAiAnalysisTagItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAiAnalysisTagItem.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAiAnalysisTagItem.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("SpecialInfo") && !value["SpecialInfo"].IsNull())
    {
        if (!value["SpecialInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAiAnalysisTagItem.SpecialInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specialInfo = string(value["SpecialInfo"].GetString());
        m_specialInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaAiAnalysisTagItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_specialInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecialInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specialInfo.c_str(), allocator).Move(), allocator);
    }

}


string MediaAiAnalysisTagItem::GetTag() const
{
    return m_tag;
}

void MediaAiAnalysisTagItem::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool MediaAiAnalysisTagItem::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

double MediaAiAnalysisTagItem::GetConfidence() const
{
    return m_confidence;
}

void MediaAiAnalysisTagItem::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool MediaAiAnalysisTagItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

string MediaAiAnalysisTagItem::GetSpecialInfo() const
{
    return m_specialInfo;
}

void MediaAiAnalysisTagItem::SetSpecialInfo(const string& _specialInfo)
{
    m_specialInfo = _specialInfo;
    m_specialInfoHasBeenSet = true;
}

bool MediaAiAnalysisTagItem::SpecialInfoHasBeenSet() const
{
    return m_specialInfoHasBeenSet;
}

