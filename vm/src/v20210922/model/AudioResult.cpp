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

#include <tencentcloud/vm/v20210922/model/AudioResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vm::V20210922::Model;
using namespace std;

AudioResult::AudioResult() :
    m_hitFlagHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_textHasBeenSet(false),
    m_urlHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_extraHasBeenSet(false),
    m_textResultsHasBeenSet(false),
    m_moanResultsHasBeenSet(false),
    m_languageResultsHasBeenSet(false),
    m_subLabelHasBeenSet(false),
    m_recognitionResultsHasBeenSet(false),
    m_speakerResultsHasBeenSet(false),
    m_travelResultsHasBeenSet(false),
    m_subTagHasBeenSet(false),
    m_subTagCodeHasBeenSet(false),
    m_labelResultsHasBeenSet(false)
{
}

CoreInternalOutcome AudioResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HitFlag") && !value["HitFlag"].IsNull())
    {
        if (!value["HitFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioResult.HitFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hitFlag = value["HitFlag"].GetInt64();
        m_hitFlagHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioResult.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioResult.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AudioResult.Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Text") && !value["Text"].IsNull())
    {
        if (!value["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioResult.Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(value["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (value.HasMember("Url") && !value["Url"].IsNull())
    {
        if (!value["Url"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioResult.Url` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_url = string(value["Url"].GetString());
        m_urlHasBeenSet = true;
    }

    if (value.HasMember("Duration") && !value["Duration"].IsNull())
    {
        if (!value["Duration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioResult.Duration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duration = string(value["Duration"].GetString());
        m_durationHasBeenSet = true;
    }

    if (value.HasMember("Extra") && !value["Extra"].IsNull())
    {
        if (!value["Extra"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioResult.Extra` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_extra = string(value["Extra"].GetString());
        m_extraHasBeenSet = true;
    }

    if (value.HasMember("TextResults") && !value["TextResults"].IsNull())
    {
        if (!value["TextResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AudioResult.TextResults` is not array type"));

        const rapidjson::Value &tmpValue = value["TextResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AudioResultDetailTextResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_textResults.push_back(item);
        }
        m_textResultsHasBeenSet = true;
    }

    if (value.HasMember("MoanResults") && !value["MoanResults"].IsNull())
    {
        if (!value["MoanResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AudioResult.MoanResults` is not array type"));

        const rapidjson::Value &tmpValue = value["MoanResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AudioResultDetailMoanResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_moanResults.push_back(item);
        }
        m_moanResultsHasBeenSet = true;
    }

    if (value.HasMember("LanguageResults") && !value["LanguageResults"].IsNull())
    {
        if (!value["LanguageResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AudioResult.LanguageResults` is not array type"));

        const rapidjson::Value &tmpValue = value["LanguageResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AudioResultDetailLanguageResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_languageResults.push_back(item);
        }
        m_languageResultsHasBeenSet = true;
    }

    if (value.HasMember("SubLabel") && !value["SubLabel"].IsNull())
    {
        if (!value["SubLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioResult.SubLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subLabel = string(value["SubLabel"].GetString());
        m_subLabelHasBeenSet = true;
    }

    if (value.HasMember("RecognitionResults") && !value["RecognitionResults"].IsNull())
    {
        if (!value["RecognitionResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AudioResult.RecognitionResults` is not array type"));

        const rapidjson::Value &tmpValue = value["RecognitionResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecognitionResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_recognitionResults.push_back(item);
        }
        m_recognitionResultsHasBeenSet = true;
    }

    if (value.HasMember("SpeakerResults") && !value["SpeakerResults"].IsNull())
    {
        if (!value["SpeakerResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AudioResult.SpeakerResults` is not array type"));

        const rapidjson::Value &tmpValue = value["SpeakerResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SpeakerResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_speakerResults.push_back(item);
        }
        m_speakerResultsHasBeenSet = true;
    }

    if (value.HasMember("TravelResults") && !value["TravelResults"].IsNull())
    {
        if (!value["TravelResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AudioResult.TravelResults` is not array type"));

        const rapidjson::Value &tmpValue = value["TravelResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TravelResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_travelResults.push_back(item);
        }
        m_travelResultsHasBeenSet = true;
    }

    if (value.HasMember("SubTag") && !value["SubTag"].IsNull())
    {
        if (!value["SubTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioResult.SubTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subTag = string(value["SubTag"].GetString());
        m_subTagHasBeenSet = true;
    }

    if (value.HasMember("SubTagCode") && !value["SubTagCode"].IsNull())
    {
        if (!value["SubTagCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioResult.SubTagCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subTagCode = string(value["SubTagCode"].GetString());
        m_subTagCodeHasBeenSet = true;
    }

    if (value.HasMember("LabelResults") && !value["LabelResults"].IsNull())
    {
        if (!value["LabelResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AudioResult.LabelResults` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LabelResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_labelResults.push_back(item);
        }
        m_labelResultsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AudioResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_hitFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hitFlag, allocator);
    }

    if (m_labelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Label";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_label.c_str(), allocator).Move(), allocator);
    }

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_urlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Url";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_url.c_str(), allocator).Move(), allocator);
    }

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_duration.c_str(), allocator).Move(), allocator);
    }

    if (m_extraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_extra.c_str(), allocator).Move(), allocator);
    }

    if (m_textResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_textResults.begin(); itr != m_textResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_moanResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MoanResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_moanResults.begin(); itr != m_moanResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_languageResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LanguageResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_languageResults.begin(); itr != m_languageResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_subLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subLabel.c_str(), allocator).Move(), allocator);
    }

    if (m_recognitionResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecognitionResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_recognitionResults.begin(); itr != m_recognitionResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_speakerResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpeakerResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_speakerResults.begin(); itr != m_speakerResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_travelResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TravelResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_travelResults.begin(); itr != m_travelResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_subTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subTag.c_str(), allocator).Move(), allocator);
    }

    if (m_subTagCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubTagCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subTagCode.c_str(), allocator).Move(), allocator);
    }

    if (m_labelResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_labelResults.begin(); itr != m_labelResults.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t AudioResult::GetHitFlag() const
{
    return m_hitFlag;
}

void AudioResult::SetHitFlag(const int64_t& _hitFlag)
{
    m_hitFlag = _hitFlag;
    m_hitFlagHasBeenSet = true;
}

bool AudioResult::HitFlagHasBeenSet() const
{
    return m_hitFlagHasBeenSet;
}

string AudioResult::GetLabel() const
{
    return m_label;
}

void AudioResult::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool AudioResult::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string AudioResult::GetSuggestion() const
{
    return m_suggestion;
}

void AudioResult::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool AudioResult::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

int64_t AudioResult::GetScore() const
{
    return m_score;
}

void AudioResult::SetScore(const int64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool AudioResult::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

string AudioResult::GetText() const
{
    return m_text;
}

void AudioResult::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool AudioResult::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

string AudioResult::GetUrl() const
{
    return m_url;
}

void AudioResult::SetUrl(const string& _url)
{
    m_url = _url;
    m_urlHasBeenSet = true;
}

bool AudioResult::UrlHasBeenSet() const
{
    return m_urlHasBeenSet;
}

string AudioResult::GetDuration() const
{
    return m_duration;
}

void AudioResult::SetDuration(const string& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool AudioResult::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string AudioResult::GetExtra() const
{
    return m_extra;
}

void AudioResult::SetExtra(const string& _extra)
{
    m_extra = _extra;
    m_extraHasBeenSet = true;
}

bool AudioResult::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}

vector<AudioResultDetailTextResult> AudioResult::GetTextResults() const
{
    return m_textResults;
}

void AudioResult::SetTextResults(const vector<AudioResultDetailTextResult>& _textResults)
{
    m_textResults = _textResults;
    m_textResultsHasBeenSet = true;
}

bool AudioResult::TextResultsHasBeenSet() const
{
    return m_textResultsHasBeenSet;
}

vector<AudioResultDetailMoanResult> AudioResult::GetMoanResults() const
{
    return m_moanResults;
}

void AudioResult::SetMoanResults(const vector<AudioResultDetailMoanResult>& _moanResults)
{
    m_moanResults = _moanResults;
    m_moanResultsHasBeenSet = true;
}

bool AudioResult::MoanResultsHasBeenSet() const
{
    return m_moanResultsHasBeenSet;
}

vector<AudioResultDetailLanguageResult> AudioResult::GetLanguageResults() const
{
    return m_languageResults;
}

void AudioResult::SetLanguageResults(const vector<AudioResultDetailLanguageResult>& _languageResults)
{
    m_languageResults = _languageResults;
    m_languageResultsHasBeenSet = true;
}

bool AudioResult::LanguageResultsHasBeenSet() const
{
    return m_languageResultsHasBeenSet;
}

string AudioResult::GetSubLabel() const
{
    return m_subLabel;
}

void AudioResult::SetSubLabel(const string& _subLabel)
{
    m_subLabel = _subLabel;
    m_subLabelHasBeenSet = true;
}

bool AudioResult::SubLabelHasBeenSet() const
{
    return m_subLabelHasBeenSet;
}

vector<RecognitionResult> AudioResult::GetRecognitionResults() const
{
    return m_recognitionResults;
}

void AudioResult::SetRecognitionResults(const vector<RecognitionResult>& _recognitionResults)
{
    m_recognitionResults = _recognitionResults;
    m_recognitionResultsHasBeenSet = true;
}

bool AudioResult::RecognitionResultsHasBeenSet() const
{
    return m_recognitionResultsHasBeenSet;
}

vector<SpeakerResult> AudioResult::GetSpeakerResults() const
{
    return m_speakerResults;
}

void AudioResult::SetSpeakerResults(const vector<SpeakerResult>& _speakerResults)
{
    m_speakerResults = _speakerResults;
    m_speakerResultsHasBeenSet = true;
}

bool AudioResult::SpeakerResultsHasBeenSet() const
{
    return m_speakerResultsHasBeenSet;
}

vector<TravelResult> AudioResult::GetTravelResults() const
{
    return m_travelResults;
}

void AudioResult::SetTravelResults(const vector<TravelResult>& _travelResults)
{
    m_travelResults = _travelResults;
    m_travelResultsHasBeenSet = true;
}

bool AudioResult::TravelResultsHasBeenSet() const
{
    return m_travelResultsHasBeenSet;
}

string AudioResult::GetSubTag() const
{
    return m_subTag;
}

void AudioResult::SetSubTag(const string& _subTag)
{
    m_subTag = _subTag;
    m_subTagHasBeenSet = true;
}

bool AudioResult::SubTagHasBeenSet() const
{
    return m_subTagHasBeenSet;
}

string AudioResult::GetSubTagCode() const
{
    return m_subTagCode;
}

void AudioResult::SetSubTagCode(const string& _subTagCode)
{
    m_subTagCode = _subTagCode;
    m_subTagCodeHasBeenSet = true;
}

bool AudioResult::SubTagCodeHasBeenSet() const
{
    return m_subTagCodeHasBeenSet;
}

vector<LabelResult> AudioResult::GetLabelResults() const
{
    return m_labelResults;
}

void AudioResult::SetLabelResults(const vector<LabelResult>& _labelResults)
{
    m_labelResults = _labelResults;
    m_labelResultsHasBeenSet = true;
}

bool AudioResult::LabelResultsHasBeenSet() const
{
    return m_labelResultsHasBeenSet;
}

