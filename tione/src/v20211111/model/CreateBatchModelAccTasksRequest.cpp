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

#include <tencentcloud/tione/v20211111/model/CreateBatchModelAccTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

CreateBatchModelAccTasksRequest::CreateBatchModelAccTasksRequest() :
    m_modelAccTaskNameHasBeenSet(false),
    m_batchModelAccTasksHasBeenSet(false),
    m_modelOutputPathHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_optimizationLevelHasBeenSet(false),
    m_gPUTypeHasBeenSet(false),
    m_hyperParameterHasBeenSet(false)
{
}

string CreateBatchModelAccTasksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_modelAccTaskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelAccTaskName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_modelAccTaskName.c_str(), allocator).Move(), allocator);
    }

    if (m_batchModelAccTasksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchModelAccTasks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_batchModelAccTasks.begin(); itr != m_batchModelAccTasks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_modelOutputPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelOutputPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelOutputPath.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_optimizationLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OptimizationLevel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_optimizationLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_gPUTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GPUType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gPUType.c_str(), allocator).Move(), allocator);
    }

    if (m_hyperParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HyperParameter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_hyperParameter.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateBatchModelAccTasksRequest::GetModelAccTaskName() const
{
    return m_modelAccTaskName;
}

void CreateBatchModelAccTasksRequest::SetModelAccTaskName(const string& _modelAccTaskName)
{
    m_modelAccTaskName = _modelAccTaskName;
    m_modelAccTaskNameHasBeenSet = true;
}

bool CreateBatchModelAccTasksRequest::ModelAccTaskNameHasBeenSet() const
{
    return m_modelAccTaskNameHasBeenSet;
}

vector<BatchModelAccTask> CreateBatchModelAccTasksRequest::GetBatchModelAccTasks() const
{
    return m_batchModelAccTasks;
}

void CreateBatchModelAccTasksRequest::SetBatchModelAccTasks(const vector<BatchModelAccTask>& _batchModelAccTasks)
{
    m_batchModelAccTasks = _batchModelAccTasks;
    m_batchModelAccTasksHasBeenSet = true;
}

bool CreateBatchModelAccTasksRequest::BatchModelAccTasksHasBeenSet() const
{
    return m_batchModelAccTasksHasBeenSet;
}

CosPathInfo CreateBatchModelAccTasksRequest::GetModelOutputPath() const
{
    return m_modelOutputPath;
}

void CreateBatchModelAccTasksRequest::SetModelOutputPath(const CosPathInfo& _modelOutputPath)
{
    m_modelOutputPath = _modelOutputPath;
    m_modelOutputPathHasBeenSet = true;
}

bool CreateBatchModelAccTasksRequest::ModelOutputPathHasBeenSet() const
{
    return m_modelOutputPathHasBeenSet;
}

vector<Tag> CreateBatchModelAccTasksRequest::GetTags() const
{
    return m_tags;
}

void CreateBatchModelAccTasksRequest::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateBatchModelAccTasksRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateBatchModelAccTasksRequest::GetOptimizationLevel() const
{
    return m_optimizationLevel;
}

void CreateBatchModelAccTasksRequest::SetOptimizationLevel(const string& _optimizationLevel)
{
    m_optimizationLevel = _optimizationLevel;
    m_optimizationLevelHasBeenSet = true;
}

bool CreateBatchModelAccTasksRequest::OptimizationLevelHasBeenSet() const
{
    return m_optimizationLevelHasBeenSet;
}

string CreateBatchModelAccTasksRequest::GetGPUType() const
{
    return m_gPUType;
}

void CreateBatchModelAccTasksRequest::SetGPUType(const string& _gPUType)
{
    m_gPUType = _gPUType;
    m_gPUTypeHasBeenSet = true;
}

bool CreateBatchModelAccTasksRequest::GPUTypeHasBeenSet() const
{
    return m_gPUTypeHasBeenSet;
}

HyperParameter CreateBatchModelAccTasksRequest::GetHyperParameter() const
{
    return m_hyperParameter;
}

void CreateBatchModelAccTasksRequest::SetHyperParameter(const HyperParameter& _hyperParameter)
{
    m_hyperParameter = _hyperParameter;
    m_hyperParameterHasBeenSet = true;
}

bool CreateBatchModelAccTasksRequest::HyperParameterHasBeenSet() const
{
    return m_hyperParameterHasBeenSet;
}


