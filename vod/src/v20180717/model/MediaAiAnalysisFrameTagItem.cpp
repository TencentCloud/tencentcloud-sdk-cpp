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

#include <tencentcloud/vod/v20180717/model/MediaAiAnalysisFrameTagItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

MediaAiAnalysisFrameTagItem::MediaAiAnalysisFrameTagItem() :
    m_tagHasBeenSet(false),
    m_categorySetHasBeenSet(false),
    m_confidenceHasBeenSet(false)
{
}

CoreInternalOutcome MediaAiAnalysisFrameTagItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Tag") && !value["Tag"].IsNull())
    {
        if (!value["Tag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAiAnalysisFrameTagItem.Tag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tag = string(value["Tag"].GetString());
        m_tagHasBeenSet = true;
    }

    if (value.HasMember("CategorySet") && !value["CategorySet"].IsNull())
    {
        if (!value["CategorySet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MediaAiAnalysisFrameTagItem.CategorySet` is not array type"));

        const rapidjson::Value &tmpValue = value["CategorySet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_categorySet.push_back((*itr).GetString());
        }
        m_categorySetHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MediaAiAnalysisFrameTagItem.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MediaAiAnalysisFrameTagItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_categorySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategorySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_categorySet.begin(); itr != m_categorySet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

}


string MediaAiAnalysisFrameTagItem::GetTag() const
{
    return m_tag;
}

void MediaAiAnalysisFrameTagItem::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool MediaAiAnalysisFrameTagItem::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

vector<string> MediaAiAnalysisFrameTagItem::GetCategorySet() const
{
    return m_categorySet;
}

void MediaAiAnalysisFrameTagItem::SetCategorySet(const vector<string>& _categorySet)
{
    m_categorySet = _categorySet;
    m_categorySetHasBeenSet = true;
}

bool MediaAiAnalysisFrameTagItem::CategorySetHasBeenSet() const
{
    return m_categorySetHasBeenSet;
}

double MediaAiAnalysisFrameTagItem::GetConfidence() const
{
    return m_confidence;
}

void MediaAiAnalysisFrameTagItem::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool MediaAiAnalysisFrameTagItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

