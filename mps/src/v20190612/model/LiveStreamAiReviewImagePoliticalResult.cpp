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

#include <tencentcloud/mps/v20190612/model/LiveStreamAiReviewImagePoliticalResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

LiveStreamAiReviewImagePoliticalResult::LiveStreamAiReviewImagePoliticalResult() :
    m_startPtsTimeHasBeenSet(false),
    m_endPtsTimeHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_areaCoordSetHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_picUrlExpireTimeHasBeenSet(false)
{
}

CoreInternalOutcome LiveStreamAiReviewImagePoliticalResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartPtsTime") && !value["StartPtsTime"].IsNull())
    {
        if (!value["StartPtsTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewImagePoliticalResult.StartPtsTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startPtsTime = value["StartPtsTime"].GetDouble();
        m_startPtsTimeHasBeenSet = true;
    }

    if (value.HasMember("EndPtsTime") && !value["EndPtsTime"].IsNull())
    {
        if (!value["EndPtsTime"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewImagePoliticalResult.EndPtsTime` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endPtsTime = value["EndPtsTime"].GetDouble();
        m_endPtsTimeHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewImagePoliticalResult.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewImagePoliticalResult.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewImagePoliticalResult.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewImagePoliticalResult.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("AreaCoordSet") && !value["AreaCoordSet"].IsNull())
    {
        if (!value["AreaCoordSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewImagePoliticalResult.AreaCoordSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AreaCoordSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_areaCoordSet.push_back((*itr).GetInt64());
        }
        m_areaCoordSetHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewImagePoliticalResult.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("PicUrlExpireTime") && !value["PicUrlExpireTime"].IsNull())
    {
        if (!value["PicUrlExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveStreamAiReviewImagePoliticalResult.PicUrlExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_picUrlExpireTime = string(value["PicUrlExpireTime"].GetString());
        m_picUrlExpireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveStreamAiReviewImagePoliticalResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startPtsTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartPtsTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startPtsTime, allocator);
    }

    if (m_endPtsTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPtsTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endPtsTime, allocator);
    }

    if (m_confidenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Confidence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_confidence, allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_areaCoordSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AreaCoordSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_areaCoordSet.begin(); itr != m_areaCoordSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_picUrlExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PicUrlExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_picUrlExpireTime.c_str(), allocator).Move(), allocator);
    }

}


double LiveStreamAiReviewImagePoliticalResult::GetStartPtsTime() const
{
    return m_startPtsTime;
}

void LiveStreamAiReviewImagePoliticalResult::SetStartPtsTime(const double& _startPtsTime)
{
    m_startPtsTime = _startPtsTime;
    m_startPtsTimeHasBeenSet = true;
}

bool LiveStreamAiReviewImagePoliticalResult::StartPtsTimeHasBeenSet() const
{
    return m_startPtsTimeHasBeenSet;
}

double LiveStreamAiReviewImagePoliticalResult::GetEndPtsTime() const
{
    return m_endPtsTime;
}

void LiveStreamAiReviewImagePoliticalResult::SetEndPtsTime(const double& _endPtsTime)
{
    m_endPtsTime = _endPtsTime;
    m_endPtsTimeHasBeenSet = true;
}

bool LiveStreamAiReviewImagePoliticalResult::EndPtsTimeHasBeenSet() const
{
    return m_endPtsTimeHasBeenSet;
}

double LiveStreamAiReviewImagePoliticalResult::GetConfidence() const
{
    return m_confidence;
}

void LiveStreamAiReviewImagePoliticalResult::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool LiveStreamAiReviewImagePoliticalResult::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

string LiveStreamAiReviewImagePoliticalResult::GetSuggestion() const
{
    return m_suggestion;
}

void LiveStreamAiReviewImagePoliticalResult::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool LiveStreamAiReviewImagePoliticalResult::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string LiveStreamAiReviewImagePoliticalResult::GetLabel() const
{
    return m_label;
}

void LiveStreamAiReviewImagePoliticalResult::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool LiveStreamAiReviewImagePoliticalResult::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string LiveStreamAiReviewImagePoliticalResult::GetName() const
{
    return m_name;
}

void LiveStreamAiReviewImagePoliticalResult::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LiveStreamAiReviewImagePoliticalResult::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<int64_t> LiveStreamAiReviewImagePoliticalResult::GetAreaCoordSet() const
{
    return m_areaCoordSet;
}

void LiveStreamAiReviewImagePoliticalResult::SetAreaCoordSet(const vector<int64_t>& _areaCoordSet)
{
    m_areaCoordSet = _areaCoordSet;
    m_areaCoordSetHasBeenSet = true;
}

bool LiveStreamAiReviewImagePoliticalResult::AreaCoordSetHasBeenSet() const
{
    return m_areaCoordSetHasBeenSet;
}

string LiveStreamAiReviewImagePoliticalResult::GetUrl() const
{
    return m_url;
}

void LiveStreamAiReviewImagePoliticalResult::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool LiveStreamAiReviewImagePoliticalResult::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string LiveStreamAiReviewImagePoliticalResult::GetPicUrlExpireTime() const
{
    return m_picUrlExpireTime;
}

void LiveStreamAiReviewImagePoliticalResult::SetPicUrlExpireTime(const string& _picUrlExpireTime)
{
    m_picUrlExpireTime = _picUrlExpireTime;
    m_picUrlExpireTimeHasBeenSet = true;
}

bool LiveStreamAiReviewImagePoliticalResult::PicUrlExpireTimeHasBeenSet() const
{
    return m_picUrlExpireTimeHasBeenSet;
}

