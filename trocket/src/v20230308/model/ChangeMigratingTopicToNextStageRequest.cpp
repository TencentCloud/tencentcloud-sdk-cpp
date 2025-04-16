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

#include <tencentcloud/trocket/v20230308/model/ChangeMigratingTopicToNextStageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

ChangeMigratingTopicToNextStageRequest::ChangeMigratingTopicToNextStageRequest() :
    m_taskIdHasBeenSet(false),
    m_topicNameListHasBeenSet(false),
    m_namespaceListHasBeenSet(false)
{
}

string ChangeMigratingTopicToNextStageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_topicNameList.begin(); itr != m_topicNameList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_namespaceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_namespaceList.begin(); itr != m_namespaceList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ChangeMigratingTopicToNextStageRequest::GetTaskId() const
{
    return m_taskId;
}

void ChangeMigratingTopicToNextStageRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ChangeMigratingTopicToNextStageRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<string> ChangeMigratingTopicToNextStageRequest::GetTopicNameList() const
{
    return m_topicNameList;
}

void ChangeMigratingTopicToNextStageRequest::SetTopicNameList(const vector<string>& _topicNameList)
{
    m_topicNameList = _topicNameList;
    m_topicNameListHasBeenSet = true;
}

bool ChangeMigratingTopicToNextStageRequest::TopicNameListHasBeenSet() const
{
    return m_topicNameListHasBeenSet;
}

vector<string> ChangeMigratingTopicToNextStageRequest::GetNamespaceList() const
{
    return m_namespaceList;
}

void ChangeMigratingTopicToNextStageRequest::SetNamespaceList(const vector<string>& _namespaceList)
{
    m_namespaceList = _namespaceList;
    m_namespaceListHasBeenSet = true;
}

bool ChangeMigratingTopicToNextStageRequest::NamespaceListHasBeenSet() const
{
    return m_namespaceListHasBeenSet;
}


