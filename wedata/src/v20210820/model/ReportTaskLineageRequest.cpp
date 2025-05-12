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

#include <tencentcloud/wedata/v20210820/model/ReportTaskLineageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

ReportTaskLineageRequest::ReportTaskLineageRequest() :
    m_channelTypeHasBeenSet(false),
    m_taskHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_tableLineagesHasBeenSet(false),
    m_columnLineagesHasBeenSet(false)
{
}

string ReportTaskLineageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelType.c_str(), allocator).Move(), allocator);
    }

    if (m_taskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Task";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_task.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_tableLineagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableLineages";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tableLineages.begin(); itr != m_tableLineages.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_columnLineagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColumnLineages";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_columnLineages.begin(); itr != m_columnLineages.end(); ++itr, ++i)
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


string ReportTaskLineageRequest::GetChannelType() const
{
    return m_channelType;
}

void ReportTaskLineageRequest::SetChannelType(const string& _channelType)
{
    m_channelType = _channelType;
    m_channelTypeHasBeenSet = true;
}

bool ReportTaskLineageRequest::ChannelTypeHasBeenSet() const
{
    return m_channelTypeHasBeenSet;
}

LineageTask ReportTaskLineageRequest::GetTask() const
{
    return m_task;
}

void ReportTaskLineageRequest::SetTask(const LineageTask& _task)
{
    m_task = _task;
    m_taskHasBeenSet = true;
}

bool ReportTaskLineageRequest::TaskHasBeenSet() const
{
    return m_taskHasBeenSet;
}

string ReportTaskLineageRequest::GetProjectId() const
{
    return m_projectId;
}

void ReportTaskLineageRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool ReportTaskLineageRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<TableLineagePair> ReportTaskLineageRequest::GetTableLineages() const
{
    return m_tableLineages;
}

void ReportTaskLineageRequest::SetTableLineages(const vector<TableLineagePair>& _tableLineages)
{
    m_tableLineages = _tableLineages;
    m_tableLineagesHasBeenSet = true;
}

bool ReportTaskLineageRequest::TableLineagesHasBeenSet() const
{
    return m_tableLineagesHasBeenSet;
}

vector<ColumnLineagePair> ReportTaskLineageRequest::GetColumnLineages() const
{
    return m_columnLineages;
}

void ReportTaskLineageRequest::SetColumnLineages(const vector<ColumnLineagePair>& _columnLineages)
{
    m_columnLineages = _columnLineages;
    m_columnLineagesHasBeenSet = true;
}

bool ReportTaskLineageRequest::ColumnLineagesHasBeenSet() const
{
    return m_columnLineagesHasBeenSet;
}


