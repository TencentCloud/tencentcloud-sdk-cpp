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

#include <tencentcloud/mps/v20190612/model/MediaAiAnalysisDescriptionItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

MediaAiAnalysisDescriptionItem::MediaAiAnalysisDescriptionItem() :
    m_descriptionHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_paragraphsHasBeenSet(false),
    m_mindMapUrlHasBeenSet(false),
    m_mindMapPathHasBeenSet(false),
    m_subtitlePathHasBeenSet(false),
    m_outputStorageHasBeenSet(false)
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

    if (value.HasMember("Title") && !value["Title"].IsNull())
    {
        if (!value["Title"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAiAnalysisDescriptionItem.Title` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_title = string(value["Title"].GetString());
        m_titleHasBeenSet = true;
    }

    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaAiAnalysisDescriptionItem.Keywords` is not array type"));

        const rapidjson::Value &tmpValue = value["Keywords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywords.push_back((*itr).GetString());
        }
        m_keywordsHasBeenSet = true;
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

    if (value.HasMember("MindMapUrl") && !value["MindMapUrl"].IsNull())
    {
        if (!value["MindMapUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAiAnalysisDescriptionItem.MindMapUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mindMapUrl = string(value["MindMapUrl"].GetString());
        m_mindMapUrlHasBeenSet = true;
    }

    if (value.HasMember("MindMapPath") && !value["MindMapPath"].IsNull())
    {
        if (!value["MindMapPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAiAnalysisDescriptionItem.MindMapPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mindMapPath = string(value["MindMapPath"].GetString());
        m_mindMapPathHasBeenSet = true;
    }

    if (value.HasMember("SubtitlePath") && !value["SubtitlePath"].IsNull())
    {
        if (!value["SubtitlePath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAiAnalysisDescriptionItem.SubtitlePath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subtitlePath = string(value["SubtitlePath"].GetString());
        m_subtitlePathHasBeenSet = true;
    }

    if (value.HasMember("OutputStorage") && !value["OutputStorage"].IsNull())
    {
        if (!value["OutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAiAnalysisDescriptionItem.OutputStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputStorage.Deserialize(value["OutputStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputStorageHasBeenSet = true;
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

    if (m_titleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Title";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_title.c_str(), allocator).Move(), allocator);
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

    if (m_mindMapUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MindMapUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mindMapUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_mindMapPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MindMapPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mindMapPath.c_str(), allocator).Move(), allocator);
    }

    if (m_subtitlePathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitlePath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subtitlePath.c_str(), allocator).Move(), allocator);
    }

    if (m_outputStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputStorage.ToJsonObject(value[key.c_str()], allocator);
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

string MediaAiAnalysisDescriptionItem::GetTitle() const
{
    return m_title;
}

void MediaAiAnalysisDescriptionItem::SetTitle(const string& _title)
{
    m_title = _title;
    m_titleHasBeenSet = true;
}

bool MediaAiAnalysisDescriptionItem::TitleHasBeenSet() const
{
    return m_titleHasBeenSet;
}

vector<string> MediaAiAnalysisDescriptionItem::GetKeywords() const
{
    return m_keywords;
}

void MediaAiAnalysisDescriptionItem::SetKeywords(const vector<string>& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool MediaAiAnalysisDescriptionItem::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
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

string MediaAiAnalysisDescriptionItem::GetMindMapUrl() const
{
    return m_mindMapUrl;
}

void MediaAiAnalysisDescriptionItem::SetMindMapUrl(const string& _mindMapUrl)
{
    m_mindMapUrl = _mindMapUrl;
    m_mindMapUrlHasBeenSet = true;
}

bool MediaAiAnalysisDescriptionItem::MindMapUrlHasBeenSet() const
{
    return m_mindMapUrlHasBeenSet;
}

string MediaAiAnalysisDescriptionItem::GetMindMapPath() const
{
    return m_mindMapPath;
}

void MediaAiAnalysisDescriptionItem::SetMindMapPath(const string& _mindMapPath)
{
    m_mindMapPath = _mindMapPath;
    m_mindMapPathHasBeenSet = true;
}

bool MediaAiAnalysisDescriptionItem::MindMapPathHasBeenSet() const
{
    return m_mindMapPathHasBeenSet;
}

string MediaAiAnalysisDescriptionItem::GetSubtitlePath() const
{
    return m_subtitlePath;
}

void MediaAiAnalysisDescriptionItem::SetSubtitlePath(const string& _subtitlePath)
{
    m_subtitlePath = _subtitlePath;
    m_subtitlePathHasBeenSet = true;
}

bool MediaAiAnalysisDescriptionItem::SubtitlePathHasBeenSet() const
{
    return m_subtitlePathHasBeenSet;
}

TaskOutputStorage MediaAiAnalysisDescriptionItem::GetOutputStorage() const
{
    return m_outputStorage;
}

void MediaAiAnalysisDescriptionItem::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool MediaAiAnalysisDescriptionItem::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

