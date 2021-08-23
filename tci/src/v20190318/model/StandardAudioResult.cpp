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

#include <tencentcloud/tci/v20190318/model/StandardAudioResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

StandardAudioResult::StandardAudioResult() :
    m_asrStatHasBeenSet(false),
    m_textsHasBeenSet(false),
    m_vocabAnalysisDetailInfoHasBeenSet(false),
    m_vocabAnalysisStatInfoHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome StandardAudioResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AsrStat") && !value["AsrStat"].IsNull())
    {
        if (!value["AsrStat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StandardAudioResult.AsrStat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_asrStat.Deserialize(value["AsrStat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_asrStatHasBeenSet = true;
    }

    if (value.HasMember("Texts") && !value["Texts"].IsNull())
    {
        if (!value["Texts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StandardAudioResult.Texts` is not array type"));

        const rapidjson::Value &tmpValue = value["Texts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WholeTextItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_texts.push_back(item);
        }
        m_textsHasBeenSet = true;
    }

    if (value.HasMember("VocabAnalysisDetailInfo") && !value["VocabAnalysisDetailInfo"].IsNull())
    {
        if (!value["VocabAnalysisDetailInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StandardAudioResult.VocabAnalysisDetailInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["VocabAnalysisDetailInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VocabDetailInfomation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vocabAnalysisDetailInfo.push_back(item);
        }
        m_vocabAnalysisDetailInfoHasBeenSet = true;
    }

    if (value.HasMember("VocabAnalysisStatInfo") && !value["VocabAnalysisStatInfo"].IsNull())
    {
        if (!value["VocabAnalysisStatInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StandardAudioResult.VocabAnalysisStatInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["VocabAnalysisStatInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VocabStatInfomation item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vocabAnalysisStatInfo.push_back(item);
        }
        m_vocabAnalysisStatInfoHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardAudioResult.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StandardAudioResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StandardAudioResult.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StandardAudioResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_asrStatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AsrStat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_asrStat.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_textsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Texts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_texts.begin(); itr != m_texts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vocabAnalysisDetailInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VocabAnalysisDetailInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vocabAnalysisDetailInfo.begin(); itr != m_vocabAnalysisDetailInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_vocabAnalysisStatInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VocabAnalysisStatInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vocabAnalysisStatInfo.begin(); itr != m_vocabAnalysisStatInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

}


ASRStat StandardAudioResult::GetAsrStat() const
{
    return m_asrStat;
}

void StandardAudioResult::SetAsrStat(const ASRStat& _asrStat)
{
    m_asrStat = _asrStat;
    m_asrStatHasBeenSet = true;
}

bool StandardAudioResult::AsrStatHasBeenSet() const
{
    return m_asrStatHasBeenSet;
}

vector<WholeTextItem> StandardAudioResult::GetTexts() const
{
    return m_texts;
}

void StandardAudioResult::SetTexts(const vector<WholeTextItem>& _texts)
{
    m_texts = _texts;
    m_textsHasBeenSet = true;
}

bool StandardAudioResult::TextsHasBeenSet() const
{
    return m_textsHasBeenSet;
}

vector<VocabDetailInfomation> StandardAudioResult::GetVocabAnalysisDetailInfo() const
{
    return m_vocabAnalysisDetailInfo;
}

void StandardAudioResult::SetVocabAnalysisDetailInfo(const vector<VocabDetailInfomation>& _vocabAnalysisDetailInfo)
{
    m_vocabAnalysisDetailInfo = _vocabAnalysisDetailInfo;
    m_vocabAnalysisDetailInfoHasBeenSet = true;
}

bool StandardAudioResult::VocabAnalysisDetailInfoHasBeenSet() const
{
    return m_vocabAnalysisDetailInfoHasBeenSet;
}

vector<VocabStatInfomation> StandardAudioResult::GetVocabAnalysisStatInfo() const
{
    return m_vocabAnalysisStatInfo;
}

void StandardAudioResult::SetVocabAnalysisStatInfo(const vector<VocabStatInfomation>& _vocabAnalysisStatInfo)
{
    m_vocabAnalysisStatInfo = _vocabAnalysisStatInfo;
    m_vocabAnalysisStatInfoHasBeenSet = true;
}

bool StandardAudioResult::VocabAnalysisStatInfoHasBeenSet() const
{
    return m_vocabAnalysisStatInfoHasBeenSet;
}

string StandardAudioResult::GetMessage() const
{
    return m_message;
}

void StandardAudioResult::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool StandardAudioResult::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string StandardAudioResult::GetStatus() const
{
    return m_status;
}

void StandardAudioResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool StandardAudioResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t StandardAudioResult::GetTotalCount() const
{
    return m_totalCount;
}

void StandardAudioResult::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool StandardAudioResult::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

