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

#include <tencentcloud/tci/v20190318/model/TransmitAudioStreamResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

TransmitAudioStreamResponse::TransmitAudioStreamResponse() :
    m_asrStatHasBeenSet(false),
    m_textsHasBeenSet(false),
    m_vocabAnalysisDetailInfoHasBeenSet(false),
    m_vocabAnalysisStatInfoHasBeenSet(false),
    m_allTextsHasBeenSet(false),
    m_audioUrlHasBeenSet(false)
{
}

CoreInternalOutcome TransmitAudioStreamResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AsrStat") && !rsp["AsrStat"].IsNull())
    {
        if (!rsp["AsrStat"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AsrStat` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_asrStat.Deserialize(rsp["AsrStat"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_asrStatHasBeenSet = true;
    }

    if (rsp.HasMember("Texts") && !rsp["Texts"].IsNull())
    {
        if (!rsp["Texts"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Texts` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Texts"];
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

    if (rsp.HasMember("VocabAnalysisDetailInfo") && !rsp["VocabAnalysisDetailInfo"].IsNull())
    {
        if (!rsp["VocabAnalysisDetailInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VocabAnalysisDetailInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VocabAnalysisDetailInfo"];
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

    if (rsp.HasMember("VocabAnalysisStatInfo") && !rsp["VocabAnalysisStatInfo"].IsNull())
    {
        if (!rsp["VocabAnalysisStatInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VocabAnalysisStatInfo` is not array type"));

        const rapidjson::Value &tmpValue = rsp["VocabAnalysisStatInfo"];
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

    if (rsp.HasMember("AllTexts") && !rsp["AllTexts"].IsNull())
    {
        if (!rsp["AllTexts"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AllTexts` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_allTexts = string(rsp["AllTexts"].GetString());
        m_allTextsHasBeenSet = true;
    }

    if (rsp.HasMember("AudioUrl") && !rsp["AudioUrl"].IsNull())
    {
        if (!rsp["AudioUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AudioUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_audioUrl = string(rsp["AudioUrl"].GetString());
        m_audioUrlHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string TransmitAudioStreamResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_allTextsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllTexts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_allTexts.c_str(), allocator).Move(), allocator);
    }

    if (m_audioUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_audioUrl.c_str(), allocator).Move(), allocator);
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


ASRStat TransmitAudioStreamResponse::GetAsrStat() const
{
    return m_asrStat;
}

bool TransmitAudioStreamResponse::AsrStatHasBeenSet() const
{
    return m_asrStatHasBeenSet;
}

vector<WholeTextItem> TransmitAudioStreamResponse::GetTexts() const
{
    return m_texts;
}

bool TransmitAudioStreamResponse::TextsHasBeenSet() const
{
    return m_textsHasBeenSet;
}

vector<VocabDetailInfomation> TransmitAudioStreamResponse::GetVocabAnalysisDetailInfo() const
{
    return m_vocabAnalysisDetailInfo;
}

bool TransmitAudioStreamResponse::VocabAnalysisDetailInfoHasBeenSet() const
{
    return m_vocabAnalysisDetailInfoHasBeenSet;
}

vector<VocabStatInfomation> TransmitAudioStreamResponse::GetVocabAnalysisStatInfo() const
{
    return m_vocabAnalysisStatInfo;
}

bool TransmitAudioStreamResponse::VocabAnalysisStatInfoHasBeenSet() const
{
    return m_vocabAnalysisStatInfoHasBeenSet;
}

string TransmitAudioStreamResponse::GetAllTexts() const
{
    return m_allTexts;
}

bool TransmitAudioStreamResponse::AllTextsHasBeenSet() const
{
    return m_allTextsHasBeenSet;
}

string TransmitAudioStreamResponse::GetAudioUrl() const
{
    return m_audioUrl;
}

bool TransmitAudioStreamResponse::AudioUrlHasBeenSet() const
{
    return m_audioUrlHasBeenSet;
}


