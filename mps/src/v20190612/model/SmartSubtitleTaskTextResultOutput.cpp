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

#include <tencentcloud/mps/v20190612/model/SmartSubtitleTaskTextResultOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SmartSubtitleTaskTextResultOutput::SmartSubtitleTaskTextResultOutput() :
    m_recognizeSubtitleResultHasBeenSet(false),
    m_transSubtitleResultHasBeenSet(false),
    m_outputStorageHasBeenSet(false)
{
}

CoreInternalOutcome SmartSubtitleTaskTextResultOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecognizeSubtitleResult") && !value["RecognizeSubtitleResult"].IsNull())
    {
        if (!value["RecognizeSubtitleResult"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskTextResultOutput.RecognizeSubtitleResult` is not array type"));

        const rapidjson::Value &tmpValue = value["RecognizeSubtitleResult"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SubtitleResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_recognizeSubtitleResult.push_back(item);
        }
        m_recognizeSubtitleResultHasBeenSet = true;
    }

    if (value.HasMember("TransSubtitleResult") && !value["TransSubtitleResult"].IsNull())
    {
        if (!value["TransSubtitleResult"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskTextResultOutput.TransSubtitleResult` is not array type"));

        const rapidjson::Value &tmpValue = value["TransSubtitleResult"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SubtitleResult item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_transSubtitleResult.push_back(item);
        }
        m_transSubtitleResultHasBeenSet = true;
    }

    if (value.HasMember("OutputStorage") && !value["OutputStorage"].IsNull())
    {
        if (!value["OutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SmartSubtitleTaskTextResultOutput.OutputStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputStorage.Deserialize(value["OutputStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputStorageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SmartSubtitleTaskTextResultOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recognizeSubtitleResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecognizeSubtitleResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_recognizeSubtitleResult.begin(); itr != m_recognizeSubtitleResult.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_transSubtitleResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransSubtitleResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_transSubtitleResult.begin(); itr != m_transSubtitleResult.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_outputStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputStorage.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<SubtitleResult> SmartSubtitleTaskTextResultOutput::GetRecognizeSubtitleResult() const
{
    return m_recognizeSubtitleResult;
}

void SmartSubtitleTaskTextResultOutput::SetRecognizeSubtitleResult(const vector<SubtitleResult>& _recognizeSubtitleResult)
{
    m_recognizeSubtitleResult = _recognizeSubtitleResult;
    m_recognizeSubtitleResultHasBeenSet = true;
}

bool SmartSubtitleTaskTextResultOutput::RecognizeSubtitleResultHasBeenSet() const
{
    return m_recognizeSubtitleResultHasBeenSet;
}

vector<SubtitleResult> SmartSubtitleTaskTextResultOutput::GetTransSubtitleResult() const
{
    return m_transSubtitleResult;
}

void SmartSubtitleTaskTextResultOutput::SetTransSubtitleResult(const vector<SubtitleResult>& _transSubtitleResult)
{
    m_transSubtitleResult = _transSubtitleResult;
    m_transSubtitleResultHasBeenSet = true;
}

bool SmartSubtitleTaskTextResultOutput::TransSubtitleResultHasBeenSet() const
{
    return m_transSubtitleResultHasBeenSet;
}

TaskOutputStorage SmartSubtitleTaskTextResultOutput::GetOutputStorage() const
{
    return m_outputStorage;
}

void SmartSubtitleTaskTextResultOutput::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool SmartSubtitleTaskTextResultOutput::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

