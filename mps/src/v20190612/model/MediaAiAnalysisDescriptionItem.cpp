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

#include <tencentcloud/mps/v20190612/model/MediaAiAnalysisDescriptionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

MediaAiAnalysisDescriptionItem::MediaAiAnalysisDescriptionItem() :
    m_descriptionHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_paragraphsHasBeenSet(false)
{
}

CoreInternalOutcome MediaAiAnalysisDescriptionItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAiAnalysisDescriptionItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAiAnalysisDescriptionItem.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Paragraphs") && !value["Paragraphs"].IsNull())
    {
        if (!value["Paragraphs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaAiAnalysisDescriptionItem.Paragraphs` is not array type"));

        const rapidjson::Value &tmpValue = value["Paragraphs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AiParagraphInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_paragraphs.push_back(item);
        }
        m_paragraphsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaAiAnalysisDescriptionItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_paragraphsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Paragraphs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paragraphs.begin(); itr != m_paragraphs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string MediaAiAnalysisDescriptionItem::GetDescription() const
{
    return m_description;
}

void MediaAiAnalysisDescriptionItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool MediaAiAnalysisDescriptionItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

double MediaAiAnalysisDescriptionItem::GetConfidence() const
{
    return m_confidence;
}

void MediaAiAnalysisDescriptionItem::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool MediaAiAnalysisDescriptionItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

vector<AiParagraphInfo> MediaAiAnalysisDescriptionItem::GetParagraphs() const
{
    return m_paragraphs;
}

void MediaAiAnalysisDescriptionItem::SetParagraphs(const vector<AiParagraphInfo>& _paragraphs)
{
    m_paragraphs = _paragraphs;
    m_paragraphsHasBeenSet = true;
}

bool MediaAiAnalysisDescriptionItem::ParagraphsHasBeenSet() const
{
    return m_paragraphsHasBeenSet;
}

