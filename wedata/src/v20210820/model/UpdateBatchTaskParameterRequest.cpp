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

#include <tencentcloud/wedata/v20210820/model/UpdateBatchTaskParameterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

UpdateBatchTaskParameterRequest::UpdateBatchTaskParameterRequest() :
    m_taskIdsHasBeenSet(false),
    m_dlcParameterInfoHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_tCHouseXTaskParameterHasBeenSet(false),
    m_sparkParameterInfoHasBeenSet(false)
{
}

string UpdateBatchTaskParameterRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskIds.begin(); itr != m_taskIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_dlcParameterInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DlcParameterInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dlcParameterInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_tCHouseXTaskParameterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TCHouseXTaskParameter";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tCHouseXTaskParameter.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sparkParameterInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkParameterInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sparkParameterInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> UpdateBatchTaskParameterRequest::GetTaskIds() const
{
    return m_taskIds;
}

void UpdateBatchTaskParameterRequest::SetTaskIds(const vector<string>& _taskIds)
{
    m_taskIds = _taskIds;
    m_taskIdsHasBeenSet = true;
}

bool UpdateBatchTaskParameterRequest::TaskIdsHasBeenSet() const
{
    return m_taskIdsHasBeenSet;
}

UpdateBatchTaskParameterDTO UpdateBatchTaskParameterRequest::GetDlcParameterInfo() const
{
    return m_dlcParameterInfo;
}

void UpdateBatchTaskParameterRequest::SetDlcParameterInfo(const UpdateBatchTaskParameterDTO& _dlcParameterInfo)
{
    m_dlcParameterInfo = _dlcParameterInfo;
    m_dlcParameterInfoHasBeenSet = true;
}

bool UpdateBatchTaskParameterRequest::DlcParameterInfoHasBeenSet() const
{
    return m_dlcParameterInfoHasBeenSet;
}

string UpdateBatchTaskParameterRequest::GetProjectId() const
{
    return m_projectId;
}

void UpdateBatchTaskParameterRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool UpdateBatchTaskParameterRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

TCHouseXTaskParameter UpdateBatchTaskParameterRequest::GetTCHouseXTaskParameter() const
{
    return m_tCHouseXTaskParameter;
}

void UpdateBatchTaskParameterRequest::SetTCHouseXTaskParameter(const TCHouseXTaskParameter& _tCHouseXTaskParameter)
{
    m_tCHouseXTaskParameter = _tCHouseXTaskParameter;
    m_tCHouseXTaskParameterHasBeenSet = true;
}

bool UpdateBatchTaskParameterRequest::TCHouseXTaskParameterHasBeenSet() const
{
    return m_tCHouseXTaskParameterHasBeenSet;
}

SparkParameterDTO UpdateBatchTaskParameterRequest::GetSparkParameterInfo() const
{
    return m_sparkParameterInfo;
}

void UpdateBatchTaskParameterRequest::SetSparkParameterInfo(const SparkParameterDTO& _sparkParameterInfo)
{
    m_sparkParameterInfo = _sparkParameterInfo;
    m_sparkParameterInfoHasBeenSet = true;
}

bool UpdateBatchTaskParameterRequest::SparkParameterInfoHasBeenSet() const
{
    return m_sparkParameterInfoHasBeenSet;
}


