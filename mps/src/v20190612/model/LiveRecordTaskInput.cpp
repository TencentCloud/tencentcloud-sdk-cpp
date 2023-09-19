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

#include <tencentcloud/mps/v20190612/model/LiveRecordTaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

LiveRecordTaskInput::LiveRecordTaskInput() :
    m_definitionHasBeenSet(false),
    m_outputStorageHasBeenSet(false),
    m_outputObjectPathHasBeenSet(false)
{
}

CoreInternalOutcome LiveRecordTaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Definition") && !value["Definition"].IsNull())
    {
        if (!value["Definition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordTaskInput.Definition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_definition = value["Definition"].GetInt64();
        m_definitionHasBeenSet = true;
    }

    if (value.HasMember("OutputStorage") && !value["OutputStorage"].IsNull())
    {
        if (!value["OutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordTaskInput.OutputStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputStorage.Deserialize(value["OutputStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputStorageHasBeenSet = true;
    }

    if (value.HasMember("OutputObjectPath") && !value["OutputObjectPath"].IsNull())
    {
        if (!value["OutputObjectPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LiveRecordTaskInput.OutputObjectPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_outputObjectPath = string(value["OutputObjectPath"].GetString());
        m_outputObjectPathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LiveRecordTaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_definitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Definition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_definition, allocator);
    }

    if (m_outputStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_outputStorage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputObjectPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputObjectPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_outputObjectPath.c_str(), allocator).Move(), allocator);
    }

}


int64_t LiveRecordTaskInput::GetDefinition() const
{
    return m_definition;
}

void LiveRecordTaskInput::SetDefinition(const int64_t& _definition)
{
    m_definition = _definition;
    m_definitionHasBeenSet = true;
}

bool LiveRecordTaskInput::DefinitionHasBeenSet() const
{
    return m_definitionHasBeenSet;
}

TaskOutputStorage LiveRecordTaskInput::GetOutputStorage() const
{
    return m_outputStorage;
}

void LiveRecordTaskInput::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool LiveRecordTaskInput::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

string LiveRecordTaskInput::GetOutputObjectPath() const
{
    return m_outputObjectPath;
}

void LiveRecordTaskInput::SetOutputObjectPath(const string& _outputObjectPath)
{
    m_outputObjectPath = _outputObjectPath;
    m_outputObjectPathHasBeenSet = true;
}

bool LiveRecordTaskInput::OutputObjectPathHasBeenSet() const
{
    return m_outputObjectPathHasBeenSet;
}

