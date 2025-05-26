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

#include <tencentcloud/ckafka/v20190819/model/CreateDatahubTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

CreateDatahubTaskRequest::CreateDatahubTaskRequest() :
    m_taskNameHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_sourceResourceHasBeenSet(false),
    m_targetResourceHasBeenSet(false),
    m_transformParamHasBeenSet(false),
    m_privateLinkParamHasBeenSet(false),
    m_schemaIdHasBeenSet(false),
    m_transformsParamHasBeenSet(false),
    m_taskIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

string CreateDatahubTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceResource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceResource.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_targetResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetResource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetResource.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_transformParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransformParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transformParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_privateLinkParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateLinkParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_privateLinkParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_schemaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_schemaId.c_str(), allocator).Move(), allocator);
    }

    if (m_transformsParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransformsParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transformsParam.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDatahubTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void CreateDatahubTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CreateDatahubTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string CreateDatahubTaskRequest::GetTaskType() const
{
    return m_taskType;
}

void CreateDatahubTaskRequest::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CreateDatahubTaskRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

DatahubResource CreateDatahubTaskRequest::GetSourceResource() const
{
    return m_sourceResource;
}

void CreateDatahubTaskRequest::SetSourceResource(const DatahubResource& _sourceResource)
{
    m_sourceResource = _sourceResource;
    m_sourceResourceHasBeenSet = true;
}

bool CreateDatahubTaskRequest::SourceResourceHasBeenSet() const
{
    return m_sourceResourceHasBeenSet;
}

DatahubResource CreateDatahubTaskRequest::GetTargetResource() const
{
    return m_targetResource;
}

void CreateDatahubTaskRequest::SetTargetResource(const DatahubResource& _targetResource)
{
    m_targetResource = _targetResource;
    m_targetResourceHasBeenSet = true;
}

bool CreateDatahubTaskRequest::TargetResourceHasBeenSet() const
{
    return m_targetResourceHasBeenSet;
}

TransformParam CreateDatahubTaskRequest::GetTransformParam() const
{
    return m_transformParam;
}

void CreateDatahubTaskRequest::SetTransformParam(const TransformParam& _transformParam)
{
    m_transformParam = _transformParam;
    m_transformParamHasBeenSet = true;
}

bool CreateDatahubTaskRequest::TransformParamHasBeenSet() const
{
    return m_transformParamHasBeenSet;
}

PrivateLinkParam CreateDatahubTaskRequest::GetPrivateLinkParam() const
{
    return m_privateLinkParam;
}

void CreateDatahubTaskRequest::SetPrivateLinkParam(const PrivateLinkParam& _privateLinkParam)
{
    m_privateLinkParam = _privateLinkParam;
    m_privateLinkParamHasBeenSet = true;
}

bool CreateDatahubTaskRequest::PrivateLinkParamHasBeenSet() const
{
    return m_privateLinkParamHasBeenSet;
}

string CreateDatahubTaskRequest::GetSchemaId() const
{
    return m_schemaId;
}

void CreateDatahubTaskRequest::SetSchemaId(const string& _schemaId)
{
    m_schemaId = _schemaId;
    m_schemaIdHasBeenSet = true;
}

bool CreateDatahubTaskRequest::SchemaIdHasBeenSet() const
{
    return m_schemaIdHasBeenSet;
}

TransformsParam CreateDatahubTaskRequest::GetTransformsParam() const
{
    return m_transformsParam;
}

void CreateDatahubTaskRequest::SetTransformsParam(const TransformsParam& _transformsParam)
{
    m_transformsParam = _transformsParam;
    m_transformsParamHasBeenSet = true;
}

bool CreateDatahubTaskRequest::TransformsParamHasBeenSet() const
{
    return m_transformsParamHasBeenSet;
}

string CreateDatahubTaskRequest::GetTaskId() const
{
    return m_taskId;
}

void CreateDatahubTaskRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool CreateDatahubTaskRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<Tag> CreateDatahubTaskRequest::GetTags() const
{
    return m_tags;
}

void CreateDatahubTaskRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateDatahubTaskRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateDatahubTaskRequest::GetDescription() const
{
    return m_description;
}

void CreateDatahubTaskRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateDatahubTaskRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


