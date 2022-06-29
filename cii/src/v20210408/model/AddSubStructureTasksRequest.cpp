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

#include <tencentcloud/cii/v20210408/model/AddSubStructureTasksRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cii::V20210408::Model;
using namespace std;

AddSubStructureTasksRequest::AddSubStructureTasksRequest() :
    m_mainTaskIdHasBeenSet(false),
    m_taskInfosHasBeenSet(false)
{
}

string AddSubStructureTasksRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mainTaskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MainTaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mainTaskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taskInfos.begin(); itr != m_taskInfos.end(); ++itr, ++i)
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


string AddSubStructureTasksRequest::GetMainTaskId() const
{
    return m_mainTaskId;
}

void AddSubStructureTasksRequest::SetMainTaskId(const string& _mainTaskId)
{
    m_mainTaskId = _mainTaskId;
    m_mainTaskIdHasBeenSet = true;
}

bool AddSubStructureTasksRequest::MainTaskIdHasBeenSet() const
{
    return m_mainTaskIdHasBeenSet;
}

vector<CreateStructureTaskInfo> AddSubStructureTasksRequest::GetTaskInfos() const
{
    return m_taskInfos;
}

void AddSubStructureTasksRequest::SetTaskInfos(const vector<CreateStructureTaskInfo>& _taskInfos)
{
    m_taskInfos = _taskInfos;
    m_taskInfosHasBeenSet = true;
}

bool AddSubStructureTasksRequest::TaskInfosHasBeenSet() const
{
    return m_taskInfosHasBeenSet;
}


