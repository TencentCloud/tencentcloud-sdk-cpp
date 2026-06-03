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

#include <tencentcloud/ckafka/v20190819/model/CreateMetaSyncDatahubTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

CreateMetaSyncDatahubTaskRequest::CreateMetaSyncDatahubTaskRequest() :
    m_taskNameHasBeenSet(false),
    m_sourceResourceIdHasBeenSet(false),
    m_targetResourceIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

string CreateMetaSyncDatahubTaskRequest::ToJsonString() const
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

    if (m_sourceResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMetaSyncDatahubTaskRequest::GetTaskName() const
{
    return m_taskName;
}

void CreateMetaSyncDatahubTaskRequest::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool CreateMetaSyncDatahubTaskRequest::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string CreateMetaSyncDatahubTaskRequest::GetSourceResourceId() const
{
    return m_sourceResourceId;
}

void CreateMetaSyncDatahubTaskRequest::SetSourceResourceId(const string& _sourceResourceId)
{
    m_sourceResourceId = _sourceResourceId;
    m_sourceResourceIdHasBeenSet = true;
}

bool CreateMetaSyncDatahubTaskRequest::SourceResourceIdHasBeenSet() const
{
    return m_sourceResourceIdHasBeenSet;
}

string CreateMetaSyncDatahubTaskRequest::GetTargetResourceId() const
{
    return m_targetResourceId;
}

void CreateMetaSyncDatahubTaskRequest::SetTargetResourceId(const string& _targetResourceId)
{
    m_targetResourceId = _targetResourceId;
    m_targetResourceIdHasBeenSet = true;
}

bool CreateMetaSyncDatahubTaskRequest::TargetResourceIdHasBeenSet() const
{
    return m_targetResourceIdHasBeenSet;
}

string CreateMetaSyncDatahubTaskRequest::GetDescription() const
{
    return m_description;
}

void CreateMetaSyncDatahubTaskRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateMetaSyncDatahubTaskRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<Tag> CreateMetaSyncDatahubTaskRequest::GetTags() const
{
    return m_tags;
}

void CreateMetaSyncDatahubTaskRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateMetaSyncDatahubTaskRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}


