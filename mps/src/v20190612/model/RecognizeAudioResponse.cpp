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

#include <tencentcloud/mps/v20190612/model/RecognizeAudioResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

RecognizeAudioResponse::RecognizeAudioResponse() :
    m_textHasBeenSet(false),
    m_audioLengthHasBeenSet(false),
    m_sentenceHasBeenSet(false)
{
}

CoreInternalOutcome RecognizeAudioResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Text") && !rsp["Text"].IsNull())
    {
        if (!rsp["Text"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Text` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_text = string(rsp["Text"].GetString());
        m_textHasBeenSet = true;
    }

    if (rsp.HasMember("AudioLength") && !rsp["AudioLength"].IsNull())
    {
        if (!rsp["AudioLength"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AudioLength` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_audioLength = rsp["AudioLength"].GetDouble();
        m_audioLengthHasBeenSet = true;
    }

    if (rsp.HasMember("Sentence") && !rsp["Sentence"].IsNull())
    {
        if (!rsp["Sentence"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Sentence` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Sentence"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecognizeAudioSentence item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sentence.push_back(item);
        }
        m_sentenceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string RecognizeAudioResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_audioLengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioLength";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_audioLength, allocator);
    }

    if (m_sentenceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sentence";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sentence.begin(); itr != m_sentence.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string RecognizeAudioResponse::GetText() const
{
    return m_text;
}

bool RecognizeAudioResponse::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

double RecognizeAudioResponse::GetAudioLength() const
{
    return m_audioLength;
}

bool RecognizeAudioResponse::AudioLengthHasBeenSet() const
{
    return m_audioLengthHasBeenSet;
}

vector<RecognizeAudioSentence> RecognizeAudioResponse::GetSentence() const
{
    return m_sentence;
}

bool RecognizeAudioResponse::SentenceHasBeenSet() const
{
    return m_sentenceHasBeenSet;
}


