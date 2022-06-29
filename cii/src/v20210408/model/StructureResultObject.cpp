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
    m_structureResultHasBeenSet(false),
    m_subTaskIdHasBeenSet(false),
    m_taskFilesHasBeenSet(false),
    m_resultFieldsHasBeenSet(false)
{
}

CoreInternalOutcome StructureResultObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StructureResultObject.Code` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetUint64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StructureResultObject.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("StructureResult") && !value["StructureResult"].IsNull())
    {
        if (!value["StructureResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StructureResultObject.StructureResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_structureResult = string(value["StructureResult"].GetString());
        m_structureResultHasBeenSet = true;
    }

    if (value.HasMember("SubTaskId") && !value["SubTaskId"].IsNull())
    {
        if (!value["SubTaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `StructureResultObject.SubTaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subTaskId = string(value["SubTaskId"].GetString());
        m_subTaskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskFiles") && !value["TaskFiles"].IsNull())
    {
        if (!value["TaskFiles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StructureResultObject.TaskFiles` is not array type"));

        const rapidjson::Value &tmpValue = value["TaskFiles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_taskFiles.push_back((*itr).GetString());
        }
        m_taskFilesHasBeenSet = true;
    }

    if (value.HasMember("ResultFields") && !value["ResultFields"].IsNull())
    {
        if (!value["ResultFields"].IsArray())
            return CoreInternalOutcome(Core::Error("response `StructureResultObject.ResultFields` is not array type"));

        const rapidjson::Value &tmpValue = value["ResultFields"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OcrRecognise item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_resultFields.push_back(item);
        }
        m_resultFieldsHasBeenSet = true;
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

    if (m_subTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubTaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskFiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskFiles.begin(); itr != m_taskFiles.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_resultFieldsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultFields";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_resultFields.begin(); itr != m_resultFields.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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

string StructureResultObject::GetSubTaskId() const
{
    return m_subTaskId;
}

void StructureResultObject::SetSubTaskId(const string& _subTaskId)
{
    m_subTaskId = _subTaskId;
    m_subTaskIdHasBeenSet = true;
}

bool StructureResultObject::SubTaskIdHasBeenSet() const
{
    return m_subTaskIdHasBeenSet;
}

vector<string> StructureResultObject::GetTaskFiles() const
{
    return m_taskFiles;
}

void StructureResultObject::SetTaskFiles(const vector<string>& _taskFiles)
{
    m_taskFiles = _taskFiles;
    m_taskFilesHasBeenSet = true;
}

bool StructureResultObject::TaskFilesHasBeenSet() const
{
    return m_taskFilesHasBeenSet;
}

vector<OcrRecognise> StructureResultObject::GetResultFields() const
{
    return m_resultFields;
}

void StructureResultObject::SetResultFields(const vector<OcrRecognise>& _resultFields)
{
    m_resultFields = _resultFields;
    m_resultFieldsHasBeenSet = true;
}

bool StructureResultObject::ResultFieldsHasBeenSet() const
{
    return m_resultFieldsHasBeenSet;
}

