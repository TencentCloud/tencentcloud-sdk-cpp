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

#include <tencentcloud/nlp/v20190408/model/TestingTextGenerationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Nlp::V20190408::Model;
using namespace std;

TestingTextGenerationRequest::TestingTextGenerationRequest() :
    m_messagesHasBeenSet(false),
    m_modelHasBeenSet(false),
    m_queryIdHasBeenSet(false),
    m_temperatureHasBeenSet(false),
    m_topPHasBeenSet(false),
    m_topKHasBeenSet(false),
    m_repetitionPenaltyHasBeenSet(false),
    m_outputSeqLenHasBeenSet(false),
    m_maxInputSeqLenHasBeenSet(false)
{
}

string TestingTextGenerationRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_messagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Messages";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_messages.begin(); itr != m_messages.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_queryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryId.c_str(), allocator).Move(), allocator);
    }

    if (m_temperatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Temperature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_temperature, allocator);
    }

    if (m_topPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopP";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_topP, allocator);
    }

    if (m_topKHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopK";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_topK, allocator);
    }

    if (m_repetitionPenaltyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepetitionPenalty";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_repetitionPenalty, allocator);
    }

    if (m_outputSeqLenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputSeqLen";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_outputSeqLen, allocator);
    }

    if (m_maxInputSeqLenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxInputSeqLen";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_maxInputSeqLen, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<TextGenerationMessage> TestingTextGenerationRequest::GetMessages() const
{
    return m_messages;
}

void TestingTextGenerationRequest::SetMessages(const vector<TextGenerationMessage>& _messages)
{
    m_messages = _messages;
    m_messagesHasBeenSet = true;
}

bool TestingTextGenerationRequest::MessagesHasBeenSet() const
{
    return m_messagesHasBeenSet;
}

string TestingTextGenerationRequest::GetModel() const
{
    return m_model;
}

void TestingTextGenerationRequest::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool TestingTextGenerationRequest::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string TestingTextGenerationRequest::GetQueryId() const
{
    return m_queryId;
}

void TestingTextGenerationRequest::SetQueryId(const string& _queryId)
{
    m_queryId = _queryId;
    m_queryIdHasBeenSet = true;
}

bool TestingTextGenerationRequest::QueryIdHasBeenSet() const
{
    return m_queryIdHasBeenSet;
}

double TestingTextGenerationRequest::GetTemperature() const
{
    return m_temperature;
}

void TestingTextGenerationRequest::SetTemperature(const double& _temperature)
{
    m_temperature = _temperature;
    m_temperatureHasBeenSet = true;
}

bool TestingTextGenerationRequest::TemperatureHasBeenSet() const
{
    return m_temperatureHasBeenSet;
}

double TestingTextGenerationRequest::GetTopP() const
{
    return m_topP;
}

void TestingTextGenerationRequest::SetTopP(const double& _topP)
{
    m_topP = _topP;
    m_topPHasBeenSet = true;
}

bool TestingTextGenerationRequest::TopPHasBeenSet() const
{
    return m_topPHasBeenSet;
}

double TestingTextGenerationRequest::GetTopK() const
{
    return m_topK;
}

void TestingTextGenerationRequest::SetTopK(const double& _topK)
{
    m_topK = _topK;
    m_topKHasBeenSet = true;
}

bool TestingTextGenerationRequest::TopKHasBeenSet() const
{
    return m_topKHasBeenSet;
}

double TestingTextGenerationRequest::GetRepetitionPenalty() const
{
    return m_repetitionPenalty;
}

void TestingTextGenerationRequest::SetRepetitionPenalty(const double& _repetitionPenalty)
{
    m_repetitionPenalty = _repetitionPenalty;
    m_repetitionPenaltyHasBeenSet = true;
}

bool TestingTextGenerationRequest::RepetitionPenaltyHasBeenSet() const
{
    return m_repetitionPenaltyHasBeenSet;
}

int64_t TestingTextGenerationRequest::GetOutputSeqLen() const
{
    return m_outputSeqLen;
}

void TestingTextGenerationRequest::SetOutputSeqLen(const int64_t& _outputSeqLen)
{
    m_outputSeqLen = _outputSeqLen;
    m_outputSeqLenHasBeenSet = true;
}

bool TestingTextGenerationRequest::OutputSeqLenHasBeenSet() const
{
    return m_outputSeqLenHasBeenSet;
}

int64_t TestingTextGenerationRequest::GetMaxInputSeqLen() const
{
    return m_maxInputSeqLen;
}

void TestingTextGenerationRequest::SetMaxInputSeqLen(const int64_t& _maxInputSeqLen)
{
    m_maxInputSeqLen = _maxInputSeqLen;
    m_maxInputSeqLenHasBeenSet = true;
}

bool TestingTextGenerationRequest::MaxInputSeqLenHasBeenSet() const
{
    return m_maxInputSeqLenHasBeenSet;
}


