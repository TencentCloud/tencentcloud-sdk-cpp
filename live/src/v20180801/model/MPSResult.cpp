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

#include <tencentcloud/live/v20180801/model/MPSResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

MPSResult::MPSResult() :
    m_aiAsrResultsHasBeenSet(false),
    m_aiOcrResultsHasBeenSet(false),
    m_streamQuaCtrlResultsHasBeenSet(false)
{
}

CoreInternalOutcome MPSResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AiAsrResults") && !value["AiAsrResults"].IsNull())
    {
        if (!value["AiAsrResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MPSResult.AiAsrResults` is not array type"));

        const rapidjson::Value &tmpValue = value["AiAsrResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_aiAsrResults.push_back((*itr).GetString());
        }
        m_aiAsrResultsHasBeenSet = true;
    }

    if (value.HasMember("AiOcrResults") && !value["AiOcrResults"].IsNull())
    {
        if (!value["AiOcrResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MPSResult.AiOcrResults` is not array type"));

        const rapidjson::Value &tmpValue = value["AiOcrResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_aiOcrResults.push_back((*itr).GetString());
        }
        m_aiOcrResultsHasBeenSet = true;
    }

    if (value.HasMember("StreamQuaCtrlResults") && !value["StreamQuaCtrlResults"].IsNull())
    {
        if (!value["StreamQuaCtrlResults"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MPSResult.StreamQuaCtrlResults` is not array type"));

        const rapidjson::Value &tmpValue = value["StreamQuaCtrlResults"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_streamQuaCtrlResults.push_back((*itr).GetString());
        }
        m_streamQuaCtrlResultsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MPSResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_aiAsrResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiAsrResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aiAsrResults.begin(); itr != m_aiAsrResults.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_aiOcrResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiOcrResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_aiOcrResults.begin(); itr != m_aiOcrResults.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_streamQuaCtrlResultsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamQuaCtrlResults";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_streamQuaCtrlResults.begin(); itr != m_streamQuaCtrlResults.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> MPSResult::GetAiAsrResults() const
{
    return m_aiAsrResults;
}

void MPSResult::SetAiAsrResults(const vector<string>& _aiAsrResults)
{
    m_aiAsrResults = _aiAsrResults;
    m_aiAsrResultsHasBeenSet = true;
}

bool MPSResult::AiAsrResultsHasBeenSet() const
{
    return m_aiAsrResultsHasBeenSet;
}

vector<string> MPSResult::GetAiOcrResults() const
{
    return m_aiOcrResults;
}

void MPSResult::SetAiOcrResults(const vector<string>& _aiOcrResults)
{
    m_aiOcrResults = _aiOcrResults;
    m_aiOcrResultsHasBeenSet = true;
}

bool MPSResult::AiOcrResultsHasBeenSet() const
{
    return m_aiOcrResultsHasBeenSet;
}

vector<string> MPSResult::GetStreamQuaCtrlResults() const
{
    return m_streamQuaCtrlResults;
}

void MPSResult::SetStreamQuaCtrlResults(const vector<string>& _streamQuaCtrlResults)
{
    m_streamQuaCtrlResults = _streamQuaCtrlResults;
    m_streamQuaCtrlResultsHasBeenSet = true;
}

bool MPSResult::StreamQuaCtrlResultsHasBeenSet() const
{
    return m_streamQuaCtrlResultsHasBeenSet;
}

