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

#include <tencentcloud/tcss/v20201101/model/CreateClusterCheckTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

CreateClusterCheckTaskRequest::CreateClusterCheckTaskRequest() :
    m_clusterCheckTaskListHasBeenSet(false)
{
}

string CreateClusterCheckTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterCheckTaskListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterCheckTaskList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_clusterCheckTaskList.begin(); itr != m_clusterCheckTaskList.end(); ++itr, ++i)
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


vector<ClusterCheckTaskItem> CreateClusterCheckTaskRequest::GetClusterCheckTaskList() const
{
    return m_clusterCheckTaskList;
}

void CreateClusterCheckTaskRequest::SetClusterCheckTaskList(const vector<ClusterCheckTaskItem>& _clusterCheckTaskList)
{
    m_clusterCheckTaskList = _clusterCheckTaskList;
    m_clusterCheckTaskListHasBeenSet = true;
}

bool CreateClusterCheckTaskRequest::ClusterCheckTaskListHasBeenSet() const
{
    return m_clusterCheckTaskListHasBeenSet;
}


