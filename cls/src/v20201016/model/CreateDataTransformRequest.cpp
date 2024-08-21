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

#include <tencentcloud/cls/v20201016/model/CreateDataTransformRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

CreateDataTransformRequest::CreateDataTransformRequest() :
    m_funcTypeHasBeenSet(false),
    m_srcTopicIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_etlContentHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_dstResourcesHasBeenSet(false),
    m_enableFlagHasBeenSet(false),
    m_previewLogStatisticsHasBeenSet(false),
    m_dataTransformTypeHasBeenSet(false)
{
}

string CreateDataTransformRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_funcTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FuncType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_funcType, allocator);
    }

    if (m_srcTopicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcTopicId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcTopicId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_etlContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EtlContent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_etlContent.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskType, allocator);
    }

    if (m_dstResourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstResources";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dstResources.begin(); itr != m_dstResources.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_enableFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableFlag, allocator);
    }

    if (m_previewLogStatisticsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreviewLogStatistics";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_previewLogStatistics.begin(); itr != m_previewLogStatistics.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_dataTransformTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataTransformType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_dataTransformType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateDataTransformRequest::GetFuncType() const
{
    return m_funcType;
}

void CreateDataTransformRequest::SetFuncType(const int64_t& _funcType)
{
    m_funcType = _funcType;
    m_funcTypeHasBeenSet = true;
}

bool CreateDataTransformRequest::FuncTypeHasBeenSet() const
{
    return m_funcTypeHasBeenSet;
}

string CreateDataTransformRequest::GetSrcTopicId() const
{
    return m_srcTopicId;
}

void CreateDataTransformRequest::SetSrcTopicId(const string& _srcTopicId)
{
    m_srcTopicId = _srcTopicId;
    m_srcTopicIdHasBeenSet = true;
}

bool CreateDataTransformRequest::SrcTopicIdHasBeenSet() const
{
    return m_srcTopicIdHasBeenSet;
}

string CreateDataTransformRequest::GetName() const
{
    return m_name;
}

void CreateDataTransformRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateDataTransformRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateDataTransformRequest::GetEtlContent() const
{
    return m_etlContent;
}

void CreateDataTransformRequest::SetEtlContent(const string& _etlContent)
{
    m_etlContent = _etlContent;
    m_etlContentHasBeenSet = true;
}

bool CreateDataTransformRequest::EtlContentHasBeenSet() const
{
    return m_etlContentHasBeenSet;
}

int64_t CreateDataTransformRequest::GetTaskType() const
{
    return m_taskType;
}

void CreateDataTransformRequest::SetTaskType(const int64_t& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool CreateDataTransformRequest::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

vector<DataTransformResouceInfo> CreateDataTransformRequest::GetDstResources() const
{
    return m_dstResources;
}

void CreateDataTransformRequest::SetDstResources(const vector<DataTransformResouceInfo>& _dstResources)
{
    m_dstResources = _dstResources;
    m_dstResourcesHasBeenSet = true;
}

bool CreateDataTransformRequest::DstResourcesHasBeenSet() const
{
    return m_dstResourcesHasBeenSet;
}

int64_t CreateDataTransformRequest::GetEnableFlag() const
{
    return m_enableFlag;
}

void CreateDataTransformRequest::SetEnableFlag(const int64_t& _enableFlag)
{
    m_enableFlag = _enableFlag;
    m_enableFlagHasBeenSet = true;
}

bool CreateDataTransformRequest::EnableFlagHasBeenSet() const
{
    return m_enableFlagHasBeenSet;
}

vector<PreviewLogStatistic> CreateDataTransformRequest::GetPreviewLogStatistics() const
{
    return m_previewLogStatistics;
}

void CreateDataTransformRequest::SetPreviewLogStatistics(const vector<PreviewLogStatistic>& _previewLogStatistics)
{
    m_previewLogStatistics = _previewLogStatistics;
    m_previewLogStatisticsHasBeenSet = true;
}

bool CreateDataTransformRequest::PreviewLogStatisticsHasBeenSet() const
{
    return m_previewLogStatisticsHasBeenSet;
}

uint64_t CreateDataTransformRequest::GetDataTransformType() const
{
    return m_dataTransformType;
}

void CreateDataTransformRequest::SetDataTransformType(const uint64_t& _dataTransformType)
{
    m_dataTransformType = _dataTransformType;
    m_dataTransformTypeHasBeenSet = true;
}

bool CreateDataTransformRequest::DataTransformTypeHasBeenSet() const
{
    return m_dataTransformTypeHasBeenSet;
}


