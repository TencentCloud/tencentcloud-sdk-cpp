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

#include <tencentcloud/mps/v20190612/model/EditMediaTaskOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace rapidjson;
using namespace std;

EditMediaTaskOutput::EditMediaTaskOutput() :
    m_outputStorageHasBeenSet(false),
    m_pathHasBeenSet(false)
{
}

CoreInternalOutcome EditMediaTaskOutput::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("OutputStorage") && !value["OutputStorage"].IsNull())
    {
        if (!value["OutputStorage"].IsObject())
        {
            return CoreInternalOutcome(Error("response `EditMediaTaskOutput.OutputStorage` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_outputStorage.Deserialize(value["OutputStorage"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_outputStorageHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Error("response `EditMediaTaskOutput.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EditMediaTaskOutput::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_outputStorageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OutputStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_outputStorage.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_pathHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_path.c_str(), allocator).Move(), allocator);
    }

}


TaskOutputStorage EditMediaTaskOutput::GetOutputStorage() const
{
    return m_outputStorage;
}

void EditMediaTaskOutput::SetOutputStorage(const TaskOutputStorage& _outputStorage)
{
    m_outputStorage = _outputStorage;
    m_outputStorageHasBeenSet = true;
}

bool EditMediaTaskOutput::OutputStorageHasBeenSet() const
{
    return m_outputStorageHasBeenSet;
}

string EditMediaTaskOutput::GetPath() const
{
    return m_path;
}

void EditMediaTaskOutput::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool EditMediaTaskOutput::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

