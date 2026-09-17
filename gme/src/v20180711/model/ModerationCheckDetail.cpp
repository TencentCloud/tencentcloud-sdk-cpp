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

#include <tencentcloud/gme/v20180711/model/ModerationCheckDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

ModerationCheckDetail::ModerationCheckDetail() :
    m_sceneHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_subLabelHasBeenSet(false),
    m_suggestHasBeenSet(false),
    m_libNameHasBeenSet(false),
    m_keywordsHasBeenSet(false),
    m_descHasBeenSet(false),
    m_scoreHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_severityDescHasBeenSet(false),
    m_audioSegmentsHasBeenSet(false),
    m_imageLocationHasBeenSet(false)
{
}

CoreInternalOutcome ModerationCheckDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Scene") && !value["Scene"].IsNull())
    {
        if (!value["Scene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationCheckDetail.Scene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scene = string(value["Scene"].GetString());
        m_sceneHasBeenSet = true;
    }

    if (value.HasMember("Label") && !value["Label"].IsNull())
    {
        if (!value["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationCheckDetail.Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(value["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (value.HasMember("SubLabel") && !value["SubLabel"].IsNull())
    {
        if (!value["SubLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationCheckDetail.SubLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subLabel = string(value["SubLabel"].GetString());
        m_subLabelHasBeenSet = true;
    }

    if (value.HasMember("Suggest") && !value["Suggest"].IsNull())
    {
        if (!value["Suggest"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationCheckDetail.Suggest` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_suggest = value["Suggest"].GetInt64();
        m_suggestHasBeenSet = true;
    }

    if (value.HasMember("LibName") && !value["LibName"].IsNull())
    {
        if (!value["LibName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationCheckDetail.LibName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libName = string(value["LibName"].GetString());
        m_libNameHasBeenSet = true;
    }

    if (value.HasMember("Keywords") && !value["Keywords"].IsNull())
    {
        if (!value["Keywords"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ModerationCheckDetail.Keywords` is not array type"));

        const rapidjson::Value &tmpValue = value["Keywords"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keywords.push_back((*itr).GetString());
        }
        m_keywordsHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationCheckDetail.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Score") && !value["Score"].IsNull())
    {
        if (!value["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationCheckDetail.Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = value["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }

    if (value.HasMember("Severity") && !value["Severity"].IsNull())
    {
        if (!value["Severity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationCheckDetail.Severity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_severity = value["Severity"].GetInt64();
        m_severityHasBeenSet = true;
    }

    if (value.HasMember("SeverityDesc") && !value["SeverityDesc"].IsNull())
    {
        if (!value["SeverityDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationCheckDetail.SeverityDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_severityDesc = string(value["SeverityDesc"].GetString());
        m_severityDescHasBeenSet = true;
    }

    if (value.HasMember("AudioSegments") && !value["AudioSegments"].IsNull())
    {
        if (!value["AudioSegments"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationCheckDetail.AudioSegments` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audioSegments.Deserialize(value["AudioSegments"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_audioSegmentsHasBeenSet = true;
    }

    if (value.HasMember("ImageLocation") && !value["ImageLocation"].IsNull())
    {
        if (!value["ImageLocation"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModerationCheckDetail.ImageLocation` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_imageLocation.Deserialize(value["ImageLocation"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_imageLocationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModerationCheckDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scene.c_str(), allocator).Move(), allocator);
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

    if (m_suggestHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggest";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_suggest, allocator);
    }

    if (m_libNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_libName.c_str(), allocator).Move(), allocator);
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

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    if (m_severityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Severity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_severity, allocator);
    }

    if (m_severityDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeverityDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_severityDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_audioSegmentsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioSegments";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audioSegments.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_imageLocation.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ModerationCheckDetail::GetScene() const
{
    return m_scene;
}

void ModerationCheckDetail::SetScene(const string& _scene)
{
    m_scene = _scene;
    m_sceneHasBeenSet = true;
}

bool ModerationCheckDetail::SceneHasBeenSet() const
{
    return m_sceneHasBeenSet;
}

string ModerationCheckDetail::GetLabel() const
{
    return m_label;
}

void ModerationCheckDetail::SetLabel(const string& _label)
{
    m_label = _label;
    m_labelHasBeenSet = true;
}

bool ModerationCheckDetail::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string ModerationCheckDetail::GetSubLabel() const
{
    return m_subLabel;
}

void ModerationCheckDetail::SetSubLabel(const string& _subLabel)
{
    m_subLabel = _subLabel;
    m_subLabelHasBeenSet = true;
}

bool ModerationCheckDetail::SubLabelHasBeenSet() const
{
    return m_subLabelHasBeenSet;
}

int64_t ModerationCheckDetail::GetSuggest() const
{
    return m_suggest;
}

void ModerationCheckDetail::SetSuggest(const int64_t& _suggest)
{
    m_suggest = _suggest;
    m_suggestHasBeenSet = true;
}

bool ModerationCheckDetail::SuggestHasBeenSet() const
{
    return m_suggestHasBeenSet;
}

string ModerationCheckDetail::GetLibName() const
{
    return m_libName;
}

void ModerationCheckDetail::SetLibName(const string& _libName)
{
    m_libName = _libName;
    m_libNameHasBeenSet = true;
}

bool ModerationCheckDetail::LibNameHasBeenSet() const
{
    return m_libNameHasBeenSet;
}

vector<string> ModerationCheckDetail::GetKeywords() const
{
    return m_keywords;
}

void ModerationCheckDetail::SetKeywords(const vector<string>& _keywords)
{
    m_keywords = _keywords;
    m_keywordsHasBeenSet = true;
}

bool ModerationCheckDetail::KeywordsHasBeenSet() const
{
    return m_keywordsHasBeenSet;
}

string ModerationCheckDetail::GetDesc() const
{
    return m_desc;
}

void ModerationCheckDetail::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool ModerationCheckDetail::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

int64_t ModerationCheckDetail::GetScore() const
{
    return m_score;
}

void ModerationCheckDetail::SetScore(const int64_t& _score)
{
    m_score = _score;
    m_scoreHasBeenSet = true;
}

bool ModerationCheckDetail::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}

int64_t ModerationCheckDetail::GetSeverity() const
{
    return m_severity;
}

void ModerationCheckDetail::SetSeverity(const int64_t& _severity)
{
    m_severity = _severity;
    m_severityHasBeenSet = true;
}

bool ModerationCheckDetail::SeverityHasBeenSet() const
{
    return m_severityHasBeenSet;
}

string ModerationCheckDetail::GetSeverityDesc() const
{
    return m_severityDesc;
}

void ModerationCheckDetail::SetSeverityDesc(const string& _severityDesc)
{
    m_severityDesc = _severityDesc;
    m_severityDescHasBeenSet = true;
}

bool ModerationCheckDetail::SeverityDescHasBeenSet() const
{
    return m_severityDescHasBeenSet;
}

AudioSegments ModerationCheckDetail::GetAudioSegments() const
{
    return m_audioSegments;
}

void ModerationCheckDetail::SetAudioSegments(const AudioSegments& _audioSegments)
{
    m_audioSegments = _audioSegments;
    m_audioSegmentsHasBeenSet = true;
}

bool ModerationCheckDetail::AudioSegmentsHasBeenSet() const
{
    return m_audioSegmentsHasBeenSet;
}

ImageLocation ModerationCheckDetail::GetImageLocation() const
{
    return m_imageLocation;
}

void ModerationCheckDetail::SetImageLocation(const ImageLocation& _imageLocation)
{
    m_imageLocation = _imageLocation;
    m_imageLocationHasBeenSet = true;
}

bool ModerationCheckDetail::ImageLocationHasBeenSet() const
{
    return m_imageLocationHasBeenSet;
}

