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

#include <tencentcloud/cme/v20191029/model/StreamConnectProjectInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cme::V20191029::Model;
using namespace std;

StreamConnectProjectInput::StreamConnectProjectInput() :
    m_mainInputHasBeenSet(false),
    m_backupInputHasBeenSet(false),
    m_outputsHasBeenSet(false)
{
}

CoreInternalOutcome StreamConnectProjectInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MainInput") && !value["MainInput"].IsNull())
    {
        if (!value["MainInput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StreamConnectProjectInput.MainInput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_mainInput.Deserialize(value["MainInput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_mainInputHasBeenSet = true;
    }

    if (value.HasMember("BackupInput") && !value["BackupInput"].IsNull())
    {
        if (!value["BackupInput"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `StreamConnectProjectInput.BackupInput` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_backupInput.Deserialize(value["BackupInput"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_backupInputHasBeenSet = true;
    }

    if (value.HasMember("Outputs") && !value["Outputs"].IsNull())
    {
        if (!value["Outputs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StreamConnectProjectInput.Outputs` is not array type"));

        const rapidjson::Value &tmpValue = value["Outputs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            StreamConnectOutput item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_outputs.push_back(item);
        }
        m_outputsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StreamConnectProjectInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_mainInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mainInput.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_backupInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BackupInput";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_backupInput.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_outputsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Outputs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_outputs.begin(); itr != m_outputs.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


StreamInputInfo StreamConnectProjectInput::GetMainInput() const
{
    return m_mainInput;
}

void StreamConnectProjectInput::SetMainInput(const StreamInputInfo& _mainInput)
{
    m_mainInput = _mainInput;
    m_mainInputHasBeenSet = true;
}

bool StreamConnectProjectInput::MainInputHasBeenSet() const
{
    return m_mainInputHasBeenSet;
}

StreamInputInfo StreamConnectProjectInput::GetBackupInput() const
{
    return m_backupInput;
}

void StreamConnectProjectInput::SetBackupInput(const StreamInputInfo& _backupInput)
{
    m_backupInput = _backupInput;
    m_backupInputHasBeenSet = true;
}

bool StreamConnectProjectInput::BackupInputHasBeenSet() const
{
    return m_backupInputHasBeenSet;
}

vector<StreamConnectOutput> StreamConnectProjectInput::GetOutputs() const
{
    return m_outputs;
}

void StreamConnectProjectInput::SetOutputs(const vector<StreamConnectOutput>& _outputs)
{
    m_outputs = _outputs;
    m_outputsHasBeenSet = true;
}

bool StreamConnectProjectInput::OutputsHasBeenSet() const
{
    return m_outputsHasBeenSet;
}

