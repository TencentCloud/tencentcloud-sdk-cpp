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

#include <tencentcloud/ivld/v20210903/model/ShowInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

ShowInfo::ShowInfo() :
    m_dateHasBeenSet(false),
    m_logoHasBeenSet(false),
    m_columnHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_coverImageURLHasBeenSet(false),
    m_summarySetHasBeenSet(false),
    m_titleSetHasBeenSet(false),
    m_audioInfoSetHasBeenSet(false),
    m_textInfoSetHasBeenSet(false),
    m_classifiedPersonInfoSetHasBeenSet(false),
    m_textTagSetHasBeenSet(false),
    m_frameTagSetHasBeenSet(false),
    m_webMediaURLHasBeenSet(false),
    m_mediaClassifierSetHasBeenSet(false),
    m_summaryTagSetHasBeenSet(false),
    m_unknownPersonSetHasBeenSet(false),
    m_multiLevelPersonInfoSetHasBeenSet(false)
{
}

CoreInternalOutcome ShowInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Date") && !value["Date"].IsNull())
    {
        if (!value["Date"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShowInfo.Date` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_date = string(value["Date"].GetString());
        m_dateHasBeenSet = true;
    }

    if (value.HasMember("Logo") && !value["Logo"].IsNull())
    {
        if (!value["Logo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShowInfo.Logo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logo = string(value["Logo"].GetString());
        m_logoHasBeenSet = true;
    }

    if (value.HasMember("Column") && !value["Column"].IsNull())
    {
        if (!value["Column"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShowInfo.Column` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_column = string(value["Column"].GetString());
        m_columnHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShowInfo.Source` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_source = string(value["Source"].GetString());
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("CoverImageURL") && !value["CoverImageURL"].IsNull())
    {
        if (!value["CoverImageURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShowInfo.CoverImageURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_coverImageURL = string(value["CoverImageURL"].GetString());
        m_coverImageURLHasBeenSet = true;
    }

    if (value.HasMember("SummarySet") && !value["SummarySet"].IsNull())
    {
        if (!value["SummarySet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ShowInfo.SummarySet` is not array type"));

        const rapidjson::Value &tmpValue = value["SummarySet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_summarySet.push_back((*itr).GetString());
        }
        m_summarySetHasBeenSet = true;
    }

    if (value.HasMember("TitleSet") && !value["TitleSet"].IsNull())
    {
        if (!value["TitleSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ShowInfo.TitleSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TitleSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_titleSet.push_back((*itr).GetString());
        }
        m_titleSetHasBeenSet = true;
    }

    if (value.HasMember("AudioInfoSet") && !value["AudioInfoSet"].IsNull())
    {
        if (!value["AudioInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ShowInfo.AudioInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["AudioInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AudioInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_audioInfoSet.push_back(item);
        }
        m_audioInfoSetHasBeenSet = true;
    }

    if (value.HasMember("TextInfoSet") && !value["TextInfoSet"].IsNull())
    {
        if (!value["TextInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ShowInfo.TextInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TextInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TextInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_textInfoSet.push_back(item);
        }
        m_textInfoSetHasBeenSet = true;
    }

    if (value.HasMember("ClassifiedPersonInfoSet") && !value["ClassifiedPersonInfoSet"].IsNull())
    {
        if (!value["ClassifiedPersonInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ShowInfo.ClassifiedPersonInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["ClassifiedPersonInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ClassifiedPersonInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_classifiedPersonInfoSet.push_back(item);
        }
        m_classifiedPersonInfoSetHasBeenSet = true;
    }

    if (value.HasMember("TextTagSet") && !value["TextTagSet"].IsNull())
    {
        if (!value["TextTagSet"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ShowInfo.TextTagSet` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_textTagSet.Deserialize(value["TextTagSet"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_textTagSetHasBeenSet = true;
    }

    if (value.HasMember("FrameTagSet") && !value["FrameTagSet"].IsNull())
    {
        if (!value["FrameTagSet"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ShowInfo.FrameTagSet` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_frameTagSet.Deserialize(value["FrameTagSet"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_frameTagSetHasBeenSet = true;
    }

    if (value.HasMember("WebMediaURL") && !value["WebMediaURL"].IsNull())
    {
        if (!value["WebMediaURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShowInfo.WebMediaURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webMediaURL = string(value["WebMediaURL"].GetString());
        m_webMediaURLHasBeenSet = true;
    }

    if (value.HasMember("MediaClassifierSet") && !value["MediaClassifierSet"].IsNull())
    {
        if (!value["MediaClassifierSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ShowInfo.MediaClassifierSet` is not array type"));

        const rapidjson::Value &tmpValue = value["MediaClassifierSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_mediaClassifierSet.push_back((*itr).GetString());
        }
        m_mediaClassifierSetHasBeenSet = true;
    }

    if (value.HasMember("SummaryTagSet") && !value["SummaryTagSet"].IsNull())
    {
        if (!value["SummaryTagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ShowInfo.SummaryTagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SummaryTagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_summaryTagSet.push_back((*itr).GetString());
        }
        m_summaryTagSetHasBeenSet = true;
    }

    if (value.HasMember("UnknownPersonSet") && !value["UnknownPersonSet"].IsNull())
    {
        if (!value["UnknownPersonSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ShowInfo.UnknownPersonSet` is not array type"));

        const rapidjson::Value &tmpValue = value["UnknownPersonSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            UnknownPerson item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_unknownPersonSet.push_back(item);
        }
        m_unknownPersonSetHasBeenSet = true;
    }

    if (value.HasMember("MultiLevelPersonInfoSet") && !value["MultiLevelPersonInfoSet"].IsNull())
    {
        if (!value["MultiLevelPersonInfoSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ShowInfo.MultiLevelPersonInfoSet` is not array type"));

        const rapidjson::Value &tmpValue = value["MultiLevelPersonInfoSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MultiLevelPersonInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_multiLevelPersonInfoSet.push_back(item);
        }
        m_multiLevelPersonInfoSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ShowInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Date";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_date.c_str(), allocator).Move(), allocator);
    }

    if (m_logoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Logo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logo.c_str(), allocator).Move(), allocator);
    }

    if (m_columnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Column";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_column.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_coverImageURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CoverImageURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_coverImageURL.c_str(), allocator).Move(), allocator);
    }

    if (m_summarySetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SummarySet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_summarySet.begin(); itr != m_summarySet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_titleSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TitleSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_titleSet.begin(); itr != m_titleSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_audioInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audioInfoSet.begin(); itr != m_audioInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_textInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_textInfoSet.begin(); itr != m_textInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_classifiedPersonInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassifiedPersonInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_classifiedPersonInfoSet.begin(); itr != m_classifiedPersonInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_textTagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TextTagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_textTagSet.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_frameTagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FrameTagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_frameTagSet.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_webMediaURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebMediaURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webMediaURL.c_str(), allocator).Move(), allocator);
    }

    if (m_mediaClassifierSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaClassifierSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mediaClassifierSet.begin(); itr != m_mediaClassifierSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_summaryTagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SummaryTagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_summaryTagSet.begin(); itr != m_summaryTagSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_unknownPersonSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnknownPersonSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_unknownPersonSet.begin(); itr != m_unknownPersonSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_multiLevelPersonInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MultiLevelPersonInfoSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_multiLevelPersonInfoSet.begin(); itr != m_multiLevelPersonInfoSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ShowInfo::GetDate() const
{
    return m_date;
}

void ShowInfo::SetDate(const string& _date)
{
    m_date = _date;
    m_dateHasBeenSet = true;
}

bool ShowInfo::DateHasBeenSet() const
{
    return m_dateHasBeenSet;
}

string ShowInfo::GetLogo() const
{
    return m_logo;
}

void ShowInfo::SetLogo(const string& _logo)
{
    m_logo = _logo;
    m_logoHasBeenSet = true;
}

bool ShowInfo::LogoHasBeenSet() const
{
    return m_logoHasBeenSet;
}

string ShowInfo::GetColumn() const
{
    return m_column;
}

void ShowInfo::SetColumn(const string& _column)
{
    m_column = _column;
    m_columnHasBeenSet = true;
}

bool ShowInfo::ColumnHasBeenSet() const
{
    return m_columnHasBeenSet;
}

string ShowInfo::GetSource() const
{
    return m_source;
}

void ShowInfo::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool ShowInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string ShowInfo::GetCoverImageURL() const
{
    return m_coverImageURL;
}

void ShowInfo::SetCoverImageURL(const string& _coverImageURL)
{
    m_coverImageURL = _coverImageURL;
    m_coverImageURLHasBeenSet = true;
}

bool ShowInfo::CoverImageURLHasBeenSet() const
{
    return m_coverImageURLHasBeenSet;
}

vector<string> ShowInfo::GetSummarySet() const
{
    return m_summarySet;
}

void ShowInfo::SetSummarySet(const vector<string>& _summarySet)
{
    m_summarySet = _summarySet;
    m_summarySetHasBeenSet = true;
}

bool ShowInfo::SummarySetHasBeenSet() const
{
    return m_summarySetHasBeenSet;
}

vector<string> ShowInfo::GetTitleSet() const
{
    return m_titleSet;
}

void ShowInfo::SetTitleSet(const vector<string>& _titleSet)
{
    m_titleSet = _titleSet;
    m_titleSetHasBeenSet = true;
}

bool ShowInfo::TitleSetHasBeenSet() const
{
    return m_titleSetHasBeenSet;
}

vector<AudioInfo> ShowInfo::GetAudioInfoSet() const
{
    return m_audioInfoSet;
}

void ShowInfo::SetAudioInfoSet(const vector<AudioInfo>& _audioInfoSet)
{
    m_audioInfoSet = _audioInfoSet;
    m_audioInfoSetHasBeenSet = true;
}

bool ShowInfo::AudioInfoSetHasBeenSet() const
{
    return m_audioInfoSetHasBeenSet;
}

vector<TextInfo> ShowInfo::GetTextInfoSet() const
{
    return m_textInfoSet;
}

void ShowInfo::SetTextInfoSet(const vector<TextInfo>& _textInfoSet)
{
    m_textInfoSet = _textInfoSet;
    m_textInfoSetHasBeenSet = true;
}

bool ShowInfo::TextInfoSetHasBeenSet() const
{
    return m_textInfoSetHasBeenSet;
}

vector<ClassifiedPersonInfo> ShowInfo::GetClassifiedPersonInfoSet() const
{
    return m_classifiedPersonInfoSet;
}

void ShowInfo::SetClassifiedPersonInfoSet(const vector<ClassifiedPersonInfo>& _classifiedPersonInfoSet)
{
    m_classifiedPersonInfoSet = _classifiedPersonInfoSet;
    m_classifiedPersonInfoSetHasBeenSet = true;
}

bool ShowInfo::ClassifiedPersonInfoSetHasBeenSet() const
{
    return m_classifiedPersonInfoSetHasBeenSet;
}

MultiLevelTag ShowInfo::GetTextTagSet() const
{
    return m_textTagSet;
}

void ShowInfo::SetTextTagSet(const MultiLevelTag& _textTagSet)
{
    m_textTagSet = _textTagSet;
    m_textTagSetHasBeenSet = true;
}

bool ShowInfo::TextTagSetHasBeenSet() const
{
    return m_textTagSetHasBeenSet;
}

MultiLevelTag ShowInfo::GetFrameTagSet() const
{
    return m_frameTagSet;
}

void ShowInfo::SetFrameTagSet(const MultiLevelTag& _frameTagSet)
{
    m_frameTagSet = _frameTagSet;
    m_frameTagSetHasBeenSet = true;
}

bool ShowInfo::FrameTagSetHasBeenSet() const
{
    return m_frameTagSetHasBeenSet;
}

string ShowInfo::GetWebMediaURL() const
{
    return m_webMediaURL;
}

void ShowInfo::SetWebMediaURL(const string& _webMediaURL)
{
    m_webMediaURL = _webMediaURL;
    m_webMediaURLHasBeenSet = true;
}

bool ShowInfo::WebMediaURLHasBeenSet() const
{
    return m_webMediaURLHasBeenSet;
}

vector<string> ShowInfo::GetMediaClassifierSet() const
{
    return m_mediaClassifierSet;
}

void ShowInfo::SetMediaClassifierSet(const vector<string>& _mediaClassifierSet)
{
    m_mediaClassifierSet = _mediaClassifierSet;
    m_mediaClassifierSetHasBeenSet = true;
}

bool ShowInfo::MediaClassifierSetHasBeenSet() const
{
    return m_mediaClassifierSetHasBeenSet;
}

vector<string> ShowInfo::GetSummaryTagSet() const
{
    return m_summaryTagSet;
}

void ShowInfo::SetSummaryTagSet(const vector<string>& _summaryTagSet)
{
    m_summaryTagSet = _summaryTagSet;
    m_summaryTagSetHasBeenSet = true;
}

bool ShowInfo::SummaryTagSetHasBeenSet() const
{
    return m_summaryTagSetHasBeenSet;
}

vector<UnknownPerson> ShowInfo::GetUnknownPersonSet() const
{
    return m_unknownPersonSet;
}

void ShowInfo::SetUnknownPersonSet(const vector<UnknownPerson>& _unknownPersonSet)
{
    m_unknownPersonSet = _unknownPersonSet;
    m_unknownPersonSetHasBeenSet = true;
}

bool ShowInfo::UnknownPersonSetHasBeenSet() const
{
    return m_unknownPersonSetHasBeenSet;
}

vector<MultiLevelPersonInfo> ShowInfo::GetMultiLevelPersonInfoSet() const
{
    return m_multiLevelPersonInfoSet;
}

void ShowInfo::SetMultiLevelPersonInfoSet(const vector<MultiLevelPersonInfo>& _multiLevelPersonInfoSet)
{
    m_multiLevelPersonInfoSet = _multiLevelPersonInfoSet;
    m_multiLevelPersonInfoSetHasBeenSet = true;
}

bool ShowInfo::MultiLevelPersonInfoSetHasBeenSet() const
{
    return m_multiLevelPersonInfoSetHasBeenSet;
}

