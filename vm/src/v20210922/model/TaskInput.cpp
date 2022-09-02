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

#include <tencentcloud/vm/v20210922/model/TaskInput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vm::V20210922::Model;
using namespace std;

TaskInput::TaskInput() :
    m_dataIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_inputHasBeenSet(false)
{
}

CoreInternalOutcome TaskInput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataId") && !value["DataId"].IsNull())
    {
        if (!value["DataId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInput.DataId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataId = string(value["DataId"].GetString());
        m_dataIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInput.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Input") && !value["Input"].IsNull())
    {
        if (!value["Input"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TaskInput.Input` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_input.Deserialize(value["Input"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_inputHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TaskInput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_input.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TaskInput::GetDataId() const
{
    return m_dataId;
}

void TaskInput::SetDataId(const string& _dataId)
{
    m_dataId = _dataId;
    m_dataIdHasBeenSet = true;
}

bool TaskInput::DataIdHasBeenSet() const
{
    return m_dataIdHasBeenSet;
}

string TaskInput::GetName() const
{
    return m_name;
}

void TaskInput::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TaskInput::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

StorageInfo TaskInput::GetInput() const
{
    return m_input;
}

void TaskInput::SetInput(const StorageInfo& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool TaskInput::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

