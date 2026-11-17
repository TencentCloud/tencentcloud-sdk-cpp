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

#include <tencentcloud/databuddy/v20260715/model/CreateExperimentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

CreateExperimentRequest::CreateExperimentRequest() :
    m_workspaceIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_studioIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_autoMlConfHasBeenSet(false),
    m_trainingDataHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false)
{
}

string CreateExperimentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workspaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_studioIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StudioId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_studioId.c_str(), allocator).Move(), allocator);
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

    if (m_autoMlConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoMlConf";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_autoMlConf.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_trainingDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainingData";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_trainingData.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateExperimentRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void CreateExperimentRequest::SetWorkspaceId(const string& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool CreateExperimentRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string CreateExperimentRequest::GetName() const
{
    return m_name;
}

void CreateExperimentRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateExperimentRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateExperimentRequest::GetType() const
{
    return m_type;
}

void CreateExperimentRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateExperimentRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateExperimentRequest::GetDescription() const
{
    return m_description;
}

void CreateExperimentRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateExperimentRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateExperimentRequest::GetStudioId() const
{
    return m_studioId;
}

void CreateExperimentRequest::SetStudioId(const string& _studioId)
{
    m_studioId = _studioId;
    m_studioIdHasBeenSet = true;
}

bool CreateExperimentRequest::StudioIdHasBeenSet() const
{
    return m_studioIdHasBeenSet;
}

vector<ExperimentTag> CreateExperimentRequest::GetTags() const
{
    return m_tags;
}

void CreateExperimentRequest::SetTags(const vector<ExperimentTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateExperimentRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

AutoMlConf CreateExperimentRequest::GetAutoMlConf() const
{
    return m_autoMlConf;
}

void CreateExperimentRequest::SetAutoMlConf(const AutoMlConf& _autoMlConf)
{
    m_autoMlConf = _autoMlConf;
    m_autoMlConfHasBeenSet = true;
}

bool CreateExperimentRequest::AutoMlConfHasBeenSet() const
{
    return m_autoMlConfHasBeenSet;
}

TrainingData CreateExperimentRequest::GetTrainingData() const
{
    return m_trainingData;
}

void CreateExperimentRequest::SetTrainingData(const TrainingData& _trainingData)
{
    m_trainingData = _trainingData;
    m_trainingDataHasBeenSet = true;
}

bool CreateExperimentRequest::TrainingDataHasBeenSet() const
{
    return m_trainingDataHasBeenSet;
}

string CreateExperimentRequest::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void CreateExperimentRequest::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool CreateExperimentRequest::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}


