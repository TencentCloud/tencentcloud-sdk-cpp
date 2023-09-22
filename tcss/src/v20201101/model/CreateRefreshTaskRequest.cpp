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

#include <tencentcloud/tcss/v20201101/model/CreateRefreshTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

CreateRefreshTaskRequest::CreateRefreshTaskRequest() :
    m_clusterIDsHasBeenSet(false),
    m_isSyncListOnlyHasBeenSet(false)
{
}

string CreateRefreshTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_clusterIDs.begin(); itr != m_clusterIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isSyncListOnlyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsSyncListOnly";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isSyncListOnly, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> CreateRefreshTaskRequest::GetClusterIDs() const
{
    return m_clusterIDs;
}

void CreateRefreshTaskRequest::SetClusterIDs(const vector<string>& _clusterIDs)
{
    m_clusterIDs = _clusterIDs;
    m_clusterIDsHasBeenSet = true;
}

bool CreateRefreshTaskRequest::ClusterIDsHasBeenSet() const
{
    return m_clusterIDsHasBeenSet;
}

bool CreateRefreshTaskRequest::GetIsSyncListOnly() const
{
    return m_isSyncListOnly;
}

void CreateRefreshTaskRequest::SetIsSyncListOnly(const bool& _isSyncListOnly)
{
    m_isSyncListOnly = _isSyncListOnly;
    m_isSyncListOnlyHasBeenSet = true;
}

bool CreateRefreshTaskRequest::IsSyncListOnlyHasBeenSet() const
{
    return m_isSyncListOnlyHasBeenSet;
}


