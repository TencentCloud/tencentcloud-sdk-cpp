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

#include <tencentcloud/trocket/v20230308/model/ImportSourceClusterTopicsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

ImportSourceClusterTopicsRequest::ImportSourceClusterTopicsRequest() :
    m_taskIdHasBeenSet(false),
    m_topicListHasBeenSet(false)
{
}

string ImportSourceClusterTopicsRequest::ToJsonString() const
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

    if (m_topicListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_topicList.begin(); itr != m_topicList.end(); ++itr, ++i)
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


string ImportSourceClusterTopicsRequest::GetTaskId() const
{
    return m_taskId;
}

void ImportSourceClusterTopicsRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool ImportSourceClusterTopicsRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<SourceClusterTopicConfig> ImportSourceClusterTopicsRequest::GetTopicList() const
{
    return m_topicList;
}

void ImportSourceClusterTopicsRequest::SetTopicList(const vector<SourceClusterTopicConfig>& _topicList)
{
    m_topicList = _topicList;
    m_topicListHasBeenSet = true;
}

bool ImportSourceClusterTopicsRequest::TopicListHasBeenSet() const
{
    return m_topicListHasBeenSet;
}


