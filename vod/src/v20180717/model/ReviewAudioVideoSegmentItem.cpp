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

#include <tencentcloud/vod/v20180717/model/ReviewAudioVideoSegmentItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ReviewAudioVideoSegmentItem::ReviewAudioVideoSegmentItem() :
    m_startTimeOffsetHasBeenSet(false),
    m_endTimeOffsetHasBeenSet(false),
    m_confidenceHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_subLabelHasBeenSet(false),
    m_formHasBeenSet(false),
    m_areaCoordSetHasBeenSet(false),
    m_textHasBeenSet(false),
    m_keywordSetHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_picUrlExpireTimeHasBeenSet(false)
{
}

CoreInternalOutcome ReviewAudioVideoSegmentItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StartTimeOffset") && !value["StartTimeOffset"].IsNull())
    {
        if (!value["StartTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReviewAudioVideoSegmentItem.StartTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_startTimeOffset = value["StartTimeOffset"].GetDouble();
        m_startTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("EndTimeOffset") && !value["EndTimeOffset"].IsNull())
    {
        if (!value["EndTimeOffset"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReviewAudioVideoSegmentItem.EndTimeOffset` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_endTimeOffset = value["EndTimeOffset"].GetDouble();
        m_endTimeOffsetHasBeenSet = true;
    }

    if (value.HasMember("Confidence") && !value["Confidence"].IsNull())
    {
        if (!value["Confidence"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReviewAudioVideoSegmentItem.Confidence` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_confidence = value["Confidence"].GetDouble();
        m_confidenceHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReviewAudioVideoSegmentItem.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReviewAudioVideoSegmentItem.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("SubLabel") && !value["SubLabel"].IsNull())
    {
        if (!value["SubLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReviewAudioVideoSegmentItem.SubLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subLabel = string(value["SubLabel"].GetString());
        m_subLabelHasBeenSet = true;
    }

    if (value.HasMember("Form") && !value["Form"].IsNull())
    {
        if (!value["Form"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReviewAudioVideoSegmentItem.Form` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_form = string(value["Form"].GetString());
        m_formHasBeenSet = true;
    }

    if (value.HasMember("AreaCoordSet") && !value["AreaCoordSet"].IsNull())
    {
        if (!value["AreaCoordSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReviewAudioVideoSegmentItem.AreaCoordSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AreaCoordSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_areaCoordSet.push_back((*itr).GetInt64());
        }
        m_areaCoordSetHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReviewAudioVideoSegmentItem.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("KeywordSet") && !value["KeywordSet"].IsNull())
    {
        if (!value["KeywordSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReviewAudioVideoSegmentItem.KeywordSet` is not array type"));

        const rapidjson::Value &tmpValue = value["KeywordSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywordSet.push_back((*itr).GetString());
        }
        m_keywordSetHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReviewAudioVideoSegmentItem.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("PicUrlExpireTime") && !value["PicUrlExpireTime"].IsNull())
    {
        if (!value["PicUrlExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReviewAudioVideoSegmentItem.PicUrlExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_picUrlExpireTime = string(value["PicUrlExpireTime"].GetString());
        m_picUrlExpireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReviewAudioVideoSegmentItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_startTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTimeOffset, allocator);
    }

    if (m_endTimeOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTimeOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTimeOffset, allocator);
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

    if (m_subLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subLabel.c_str(), allocator).Move(), allocator);
    }

    if (m_formHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Form";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_form.c_str(), allocator).Move(), allocator);
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

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeywordSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_keywordSet.begin(); itr != m_keywordSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


double ReviewAudioVideoSegmentItem::GetStartTimeOffset() const
{
    return m_startTimeOffset;
}

void ReviewAudioVideoSegmentItem::SetStartTimeOffset(const double& _startTimeOffset)
{
    m_startTimeOffset = _startTimeOffset;
    m_startTimeOffsetHasBeenSet = true;
}

bool ReviewAudioVideoSegmentItem::StartTimeOffsetHasBeenSet() const
{
    return m_startTimeOffsetHasBeenSet;
}

double ReviewAudioVideoSegmentItem::GetEndTimeOffset() const
{
    return m_endTimeOffset;
}

void ReviewAudioVideoSegmentItem::SetEndTimeOffset(const double& _endTimeOffset)
{
    m_endTimeOffset = _endTimeOffset;
    m_endTimeOffsetHasBeenSet = true;
}

bool ReviewAudioVideoSegmentItem::EndTimeOffsetHasBeenSet() const
{
    return m_endTimeOffsetHasBeenSet;
}

double ReviewAudioVideoSegmentItem::GetConfidence() const
{
    return m_confidence;
}

void ReviewAudioVideoSegmentItem::SetConfidence(const double& _confidence)
{
    m_confidence = _confidence;
    m_confidenceHasBeenSet = true;
}

bool ReviewAudioVideoSegmentItem::ConfidenceHasBeenSet() const
{
    return m_confidenceHasBeenSet;
}

string ReviewAudioVideoSegmentItem::GetSuggestion() const
{
    return m_suggestion;
}

void ReviewAudioVideoSegmentItem::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool ReviewAudioVideoSegmentItem::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string ReviewAudioVideoSegmentItem::GetLabel() const
{
    return m_label;
}

void ReviewAudioVideoSegmentItem::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool ReviewAudioVideoSegmentItem::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string ReviewAudioVideoSegmentItem::GetSubLabel() const
{
    return m_subLabel;
}

void ReviewAudioVideoSegmentItem::SetSubLabel(const string& _subLabel)
{
    m_subLabel = _subLabel;
    m_subLabelHasBeenSet = true;
}

bool ReviewAudioVideoSegmentItem::SubLabelHasBeenSet() const
{
    return m_subLabelHasBeenSet;
}

string ReviewAudioVideoSegmentItem::GetForm() const
{
    return m_form;
}

void ReviewAudioVideoSegmentItem::SetForm(const string& _form)
{
    m_form = _form;
    m_formHasBeenSet = true;
}

bool ReviewAudioVideoSegmentItem::FormHasBeenSet() const
{
    return m_formHasBeenSet;
}

vector<int64_t> ReviewAudioVideoSegmentItem::GetAreaCoordSet() const
{
    return m_areaCoordSet;
}

void ReviewAudioVideoSegmentItem::SetAreaCoordSet(const vector<int64_t>& _areaCoordSet)
{
    m_areaCoordSet = _areaCoordSet;
    m_areaCoordSetHasBeenSet = true;
}

bool ReviewAudioVideoSegmentItem::AreaCoordSetHasBeenSet() const
{
    return m_areaCoordSetHasBeenSet;
}

string ReviewAudioVideoSegmentItem::GetText() const
{
    return m_text;
}

void ReviewAudioVideoSegmentItem::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool ReviewAudioVideoSegmentItem::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

vector<string> ReviewAudioVideoSegmentItem::GetKeywordSet() const
{
    return m_keywordSet;
}

void ReviewAudioVideoSegmentItem::SetKeywordSet(const vector<string>& _keywordSet)
{
    m_keywordSet = _keywordSet;
    m_keywordSetHasBeenSet = true;
}

bool ReviewAudioVideoSegmentItem::KeywordSetHasBeenSet() const
{
    return m_keywordSetHasBeenSet;
}

string ReviewAudioVideoSegmentItem::GetUrl() const
{
    return m_url;
}

void ReviewAudioVideoSegmentItem::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool ReviewAudioVideoSegmentItem::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string ReviewAudioVideoSegmentItem::GetPicUrlExpireTime() const
{
    return m_picUrlExpireTime;
}

void ReviewAudioVideoSegmentItem::SetPicUrlExpireTime(const string& _picUrlExpireTime)
{
    m_picUrlExpireTime = _picUrlExpireTime;
    m_picUrlExpireTimeHasBeenSet = true;
}

bool ReviewAudioVideoSegmentItem::PicUrlExpireTimeHasBeenSet() const
{
    return m_picUrlExpireTimeHasBeenSet;
}

