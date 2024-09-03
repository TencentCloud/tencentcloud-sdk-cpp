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

#include <tencentcloud/ams/v20201229/model/CreateAudioModerationSyncTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ams::V20201229::Model;
using namespace std;

CreateAudioModerationSyncTaskResponse::CreateAudioModerationSyncTaskResponse() :
    m_dataIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_bizTypeHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_labelHasBeenSet(false),
    m_asrTextHasBeenSet(false),
    m_textResultsHasBeenSet(false),
    m_moanResultsHasBeenSet(false),
    m_subLabelHasBeenSet(false),
    m_languageResultsHasBeenSet(false),
    m_speakerResultsHasBeenSet(false),
    m_recognitionResultsHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_hitFlagHasBeenSet(false),
    m_scoreHasBeenSet(false)
{
}

CoreInternalOutcome CreateAudioModerationSyncTaskResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("DataId") && !rsp["DataId"].IsNull())
    {
        if (!rsp["DataId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataId = string(rsp["DataId"].GetString());
        m_dataIdHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("BizType") && !rsp["BizType"].IsNull())
    {
        if (!rsp["BizType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BizType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bizType = string(rsp["BizType"].GetString());
        m_bizTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Suggestion") && !rsp["Suggestion"].IsNull())
    {
        if (!rsp["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(rsp["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (rsp.HasMember("Label") && !rsp["Label"].IsNull())
    {
        if (!rsp["Label"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Label` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_label = string(rsp["Label"].GetString());
        m_labelHasBeenSet = true;
    }

    if (rsp.HasMember("AsrText") && !rsp["AsrText"].IsNull())
    {
        if (!rsp["AsrText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AsrText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_asrText = string(rsp["AsrText"].GetString());
        m_asrTextHasBeenSet = true;
    }

    if (rsp.HasMember("TextResults") && !rsp["TextResults"].IsNull())
    {
        if (!rsp["TextResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TextResults` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TextResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TextResult item;
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

    if (rsp.HasMember("MoanResults") && !rsp["MoanResults"].IsNull())
    {
        if (!rsp["MoanResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MoanResults` is not array type"));

        const rapidjson::Value &tmpValue = rsp["MoanResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MoanResult item;
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

    if (rsp.HasMember("SubLabel") && !rsp["SubLabel"].IsNull())
    {
        if (!rsp["SubLabel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubLabel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subLabel = string(rsp["SubLabel"].GetString());
        m_subLabelHasBeenSet = true;
    }

    if (rsp.HasMember("LanguageResults") && !rsp["LanguageResults"].IsNull())
    {
        if (!rsp["LanguageResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LanguageResults` is not array type"));

        const rapidjson::Value &tmpValue = rsp["LanguageResults"];
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

    if (rsp.HasMember("SpeakerResults") && !rsp["SpeakerResults"].IsNull())
    {
        if (!rsp["SpeakerResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SpeakerResults` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SpeakerResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AudioResultDetailSpeakerResult item;
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

    if (rsp.HasMember("RecognitionResults") && !rsp["RecognitionResults"].IsNull())
    {
        if (!rsp["RecognitionResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RecognitionResults` is not array type"));

        const rapidjson::Value &tmpValue = rsp["RecognitionResults"];
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

    if (rsp.HasMember("Duration") && !rsp["Duration"].IsNull())
    {
        if (!rsp["Duration"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Duration` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_duration = string(rsp["Duration"].GetString());
        m_durationHasBeenSet = true;
    }

    if (rsp.HasMember("HitFlag") && !rsp["HitFlag"].IsNull())
    {
        if (!rsp["HitFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HitFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hitFlag = rsp["HitFlag"].GetInt64();
        m_hitFlagHasBeenSet = true;
    }

    if (rsp.HasMember("Score") && !rsp["Score"].IsNull())
    {
        if (!rsp["Score"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Score` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_score = rsp["Score"].GetInt64();
        m_scoreHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateAudioModerationSyncTaskResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_dataIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_bizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bizType.c_str(), allocator).Move(), allocator);
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

    if (m_asrTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_asrText.c_str(), allocator).Move(), allocator);
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

    if (m_subLabelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubLabel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subLabel.c_str(), allocator).Move(), allocator);
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

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_duration.c_str(), allocator).Move(), allocator);
    }

    if (m_hitFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HitFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hitFlag, allocator);
    }

    if (m_scoreHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Score";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_score, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string CreateAudioModerationSyncTaskResponse::GetDataId() const
{
    return m_dataId;
}

bool CreateAudioModerationSyncTaskResponse::DataIdHasBeenSet() const
{
    return m_dataIdHasBeenSet;
}

string CreateAudioModerationSyncTaskResponse::GetName() const
{
    return m_name;
}

bool CreateAudioModerationSyncTaskResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateAudioModerationSyncTaskResponse::GetBizType() const
{
    return m_bizType;
}

bool CreateAudioModerationSyncTaskResponse::BizTypeHasBeenSet() const
{
    return m_bizTypeHasBeenSet;
}

string CreateAudioModerationSyncTaskResponse::GetSuggestion() const
{
    return m_suggestion;
}

bool CreateAudioModerationSyncTaskResponse::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string CreateAudioModerationSyncTaskResponse::GetLabel() const
{
    return m_label;
}

bool CreateAudioModerationSyncTaskResponse::LabelHasBeenSet() const
{
    return m_labelHasBeenSet;
}

string CreateAudioModerationSyncTaskResponse::GetAsrText() const
{
    return m_asrText;
}

bool CreateAudioModerationSyncTaskResponse::AsrTextHasBeenSet() const
{
    return m_asrTextHasBeenSet;
}

vector<TextResult> CreateAudioModerationSyncTaskResponse::GetTextResults() const
{
    return m_textResults;
}

bool CreateAudioModerationSyncTaskResponse::TextResultsHasBeenSet() const
{
    return m_textResultsHasBeenSet;
}

vector<MoanResult> CreateAudioModerationSyncTaskResponse::GetMoanResults() const
{
    return m_moanResults;
}

bool CreateAudioModerationSyncTaskResponse::MoanResultsHasBeenSet() const
{
    return m_moanResultsHasBeenSet;
}

string CreateAudioModerationSyncTaskResponse::GetSubLabel() const
{
    return m_subLabel;
}

bool CreateAudioModerationSyncTaskResponse::SubLabelHasBeenSet() const
{
    return m_subLabelHasBeenSet;
}

vector<AudioResultDetailLanguageResult> CreateAudioModerationSyncTaskResponse::GetLanguageResults() const
{
    return m_languageResults;
}

bool CreateAudioModerationSyncTaskResponse::LanguageResultsHasBeenSet() const
{
    return m_languageResultsHasBeenSet;
}

vector<AudioResultDetailSpeakerResult> CreateAudioModerationSyncTaskResponse::GetSpeakerResults() const
{
    return m_speakerResults;
}

bool CreateAudioModerationSyncTaskResponse::SpeakerResultsHasBeenSet() const
{
    return m_speakerResultsHasBeenSet;
}

vector<RecognitionResult> CreateAudioModerationSyncTaskResponse::GetRecognitionResults() const
{
    return m_recognitionResults;
}

bool CreateAudioModerationSyncTaskResponse::RecognitionResultsHasBeenSet() const
{
    return m_recognitionResultsHasBeenSet;
}

string CreateAudioModerationSyncTaskResponse::GetDuration() const
{
    return m_duration;
}

bool CreateAudioModerationSyncTaskResponse::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

int64_t CreateAudioModerationSyncTaskResponse::GetHitFlag() const
{
    return m_hitFlag;
}

bool CreateAudioModerationSyncTaskResponse::HitFlagHasBeenSet() const
{
    return m_hitFlagHasBeenSet;
}

int64_t CreateAudioModerationSyncTaskResponse::GetScore() const
{
    return m_score;
}

bool CreateAudioModerationSyncTaskResponse::ScoreHasBeenSet() const
{
    return m_scoreHasBeenSet;
}


