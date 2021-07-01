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

#include <tencentcloud/cii/v20210408/model/StructureResultObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cii::V20210408::Model;
using namespace std;

StructureResultObject::StructureResultObject() :
    m_codeHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_structureResultHasBeenSet(false)
{
}

CoreInternalOutcome StructureResultObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `StructureResultObject.Code` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetUint64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Error("response `StructureResultObject.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("StructureResult") && !value["StructureResult"].IsNull())
    {
        if (!value["StructureResult"].IsString())
        {
            return CoreInternalOutcome(Error("response `StructureResultObject.StructureResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_structureResult = string(value["StructureResult"].GetString());
        m_structureResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void StructureResultObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_structureResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StructureResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_structureResult.c_str(), allocator).Move(), allocator);
    }

}


uint64_t StructureResultObject::GetCode() const
{
    return m_code;
}

void StructureResultObject::SetCode(const uint64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool StructureResultObject::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string StructureResultObject::GetTaskType() const
{
    return m_taskType;
}

void StructureResultObject::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool StructureResultObject::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

string StructureResultObject::GetStructureResult() const
{
    return m_structureResult;
}

void StructureResultObject::SetStructureResult(const string& _structureResult)
{
    m_structureResult = _structureResult;
    m_structureResultHasBeenSet = true;
}

bool StructureResultObject::StructureResultHasBeenSet() const
{
    return m_structureResultHasBeenSet;
}

