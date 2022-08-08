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

#include <tencentcloud/wedata/v20210820/model/BatchModifyOwnersNewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

BatchModifyOwnersNewRequest::BatchModifyOwnersNewRequest() :
    m_taskIdListHasBeenSet(false),
    m_ownersHasBeenSet(false),
    m_projectIdHasBeenSet(false)
{
}

string BatchModifyOwnersNewRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskIdList.begin(); itr != m_taskIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ownersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owners";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_owners.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> BatchModifyOwnersNewRequest::GetTaskIdList() const
{
    return m_taskIdList;
}

void BatchModifyOwnersNewRequest::SetTaskIdList(const vector<string>& _taskIdList)
{
    m_taskIdList = _taskIdList;
    m_taskIdListHasBeenSet = true;
}

bool BatchModifyOwnersNewRequest::TaskIdListHasBeenSet() const
{
    return m_taskIdListHasBeenSet;
}

string BatchModifyOwnersNewRequest::GetOwners() const
{
    return m_owners;
}

void BatchModifyOwnersNewRequest::SetOwners(const string& _owners)
{
    m_owners = _owners;
    m_ownersHasBeenSet = true;
}

bool BatchModifyOwnersNewRequest::OwnersHasBeenSet() const
{
    return m_ownersHasBeenSet;
}

string BatchModifyOwnersNewRequest::GetProjectId() const
{
    return m_projectId;
}

void BatchModifyOwnersNewRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool BatchModifyOwnersNewRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}


