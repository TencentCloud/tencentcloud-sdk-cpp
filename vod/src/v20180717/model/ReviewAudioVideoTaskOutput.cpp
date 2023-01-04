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

#include <tencentcloud/vod/v20180717/model/ReviewAudioVideoTaskOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ReviewAudioVideoTaskOutput::ReviewAudioVideoTaskOutput() :
    m_suggestionHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_formHasBeenSet(false),
    m_segmentSetHasBeenSet(false),
    m_segmentSetFileUrlHasBeenSet(false),
    m_segmentSetFileUrlExpireTimeHasBeenSet(false),
    m_coverReviewResultHasBeenSet(false)
{
}

CoreInternalOutcome ReviewAudioVideoTaskOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReviewAudioVideoTaskOutput.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReviewAudioVideoTaskOutput.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Form") && !value["Form"].IsNull())
    {
        if (!value["Form"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReviewAudioVideoTaskOutput.Form` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_form = string(value["Form"].GetString());
        m_formHasBeenSet = true;
    }

    if (value.HasMember("SegmentSet") && !value["SegmentSet"].IsNull())
    {
        if (!value["SegmentSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ReviewAudioVideoTaskOutput.SegmentSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SegmentSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReviewAudioVideoSegmentItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_segmentSet.push_back(item);
        }
        m_segmentSetHasBeenSet = true;
    }

    if (value.HasMember("SegmentSetFileUrl") && !value["SegmentSetFileUrl"].IsNull())
    {
        if (!value["SegmentSetFileUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReviewAudioVideoTaskOutput.SegmentSetFileUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_segmentSetFileUrl = string(value["SegmentSetFileUrl"].GetString());
        m_segmentSetFileUrlHasBeenSet = true;
    }

    if (value.HasMember("SegmentSetFileUrlExpireTime") && !value["SegmentSetFileUrlExpireTime"].IsNull())
    {
        if (!value["SegmentSetFileUrlExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ReviewAudioVideoTaskOutput.SegmentSetFileUrlExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_segmentSetFileUrlExpireTime = string(value["SegmentSetFileUrlExpireTime"].GetString());
        m_segmentSetFileUrlExpireTimeHasBeenSet = true;
    }

    if (value.HasMember("CoverReviewResult") && !value["CoverReviewResult"].IsNull())
    {
        if (!value["CoverReviewResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ReviewAudioVideoTaskOutput.CoverReviewResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_coverReviewResult.Deserialize(value["CoverReviewResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_coverReviewResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ReviewAudioVideoTaskOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_formHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Form";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_form.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_segmentSet.begin(); itr != m_segmentSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_segmentSetFileUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentSetFileUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_segmentSetFileUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentSetFileUrlExpireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentSetFileUrlExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_segmentSetFileUrlExpireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_coverReviewResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverReviewResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_coverReviewResult.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ReviewAudioVideoTaskOutput::GetSuggestion() const
{
    return m_suggestion;
}

void ReviewAudioVideoTaskOutput::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool ReviewAudioVideoTaskOutput::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string ReviewAudioVideoTaskOutput::GetLabel() const
{
    return m_label;
}

void ReviewAudioVideoTaskOutput::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool ReviewAudioVideoTaskOutput::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string ReviewAudioVideoTaskOutput::GetForm() const
{
    return m_form;
}

void ReviewAudioVideoTaskOutput::SetForm(const string& _form)
{
    m_form = _form;
    m_formHasBeenSet = true;
}

bool ReviewAudioVideoTaskOutput::FormHasBeenSet() const
{
    return m_formHasBeenSet;
}

vector<ReviewAudioVideoSegmentItem> ReviewAudioVideoTaskOutput::GetSegmentSet() const
{
    return m_segmentSet;
}

void ReviewAudioVideoTaskOutput::SetSegmentSet(const vector<ReviewAudioVideoSegmentItem>& _segmentSet)
{
    m_segmentSet = _segmentSet;
    m_segmentSetHasBeenSet = true;
}

bool ReviewAudioVideoTaskOutput::SegmentSetHasBeenSet() const
{
    return m_segmentSetHasBeenSet;
}

string ReviewAudioVideoTaskOutput::GetSegmentSetFileUrl() const
{
    return m_segmentSetFileUrl;
}

void ReviewAudioVideoTaskOutput::SetSegmentSetFileUrl(const string& _segmentSetFileUrl)
{
    m_segmentSetFileUrl = _segmentSetFileUrl;
    m_segmentSetFileUrlHasBeenSet = true;
}

bool ReviewAudioVideoTaskOutput::SegmentSetFileUrlHasBeenSet() const
{
    return m_segmentSetFileUrlHasBeenSet;
}

string ReviewAudioVideoTaskOutput::GetSegmentSetFileUrlExpireTime() const
{
    return m_segmentSetFileUrlExpireTime;
}

void ReviewAudioVideoTaskOutput::SetSegmentSetFileUrlExpireTime(const string& _segmentSetFileUrlExpireTime)
{
    m_segmentSetFileUrlExpireTime = _segmentSetFileUrlExpireTime;
    m_segmentSetFileUrlExpireTimeHasBeenSet = true;
}

bool ReviewAudioVideoTaskOutput::SegmentSetFileUrlExpireTimeHasBeenSet() const
{
    return m_segmentSetFileUrlExpireTimeHasBeenSet;
}

ReviewImageResult ReviewAudioVideoTaskOutput::GetCoverReviewResult() const
{
    return m_coverReviewResult;
}

void ReviewAudioVideoTaskOutput::SetCoverReviewResult(const ReviewImageResult& _coverReviewResult)
{
    m_coverReviewResult = _coverReviewResult;
    m_coverReviewResultHasBeenSet = true;
}

bool ReviewAudioVideoTaskOutput::CoverReviewResultHasBeenSet() const
{
    return m_coverReviewResultHasBeenSet;
}

