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

#include <tencentcloud/cwp/v20180228/model/DeleteScanTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DeleteScanTaskRequest::DeleteScanTaskRequest() :
    m_taskIdHasBeenSet(false),
    m_moduleTypeHasBeenSet(false),
    m_quuidListHasBeenSet(false)
{
}

string DeleteScanTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskId, allocator);
    }

    if (m_moduleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModuleType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_moduleType.c_str(), allocator).Move(), allocator);
    }

    if (m_quuidListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuuidList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_quuidList.begin(); itr != m_quuidList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DeleteScanTaskRequest::GetTaskId() const
{
    return m_taskId;
}

void DeleteScanTaskRequest::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DeleteScanTaskRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DeleteScanTaskRequest::GetModuleType() const
{
    return m_moduleType;
}

void DeleteScanTaskRequest::SetModuleType(const string& _moduleType)
{
    m_moduleType = _moduleType;
    m_moduleTypeHasBeenSet = true;
}

bool DeleteScanTaskRequest::ModuleTypeHasBeenSet() const
{
    return m_moduleTypeHasBeenSet;
}

vector<string> DeleteScanTaskRequest::GetQuuidList() const
{
    return m_quuidList;
}

void DeleteScanTaskRequest::SetQuuidList(const vector<string>& _quuidList)
{
    m_quuidList = _quuidList;
    m_quuidListHasBeenSet = true;
}

bool DeleteScanTaskRequest::QuuidListHasBeenSet() const
{
    return m_quuidListHasBeenSet;
}


