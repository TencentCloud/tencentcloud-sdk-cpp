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

#include <tencentcloud/tbaas/v20180416/model/GetBcosTransByHashRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace rapidjson;
using namespace std;

GetBcosTransByHashRequest::GetBcosTransByHashRequest() :
    m_clusterIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_transHashHasBeenSet(false)
{
}

string GetBcosTransByHashRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_groupId, allocator);
    }

    if (m_transHashHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TransHash";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_transHash.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetBcosTransByHashRequest::GetClusterId() const
{
    return m_clusterId;
}

void GetBcosTransByHashRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool GetBcosTransByHashRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t GetBcosTransByHashRequest::GetGroupId() const
{
    return m_groupId;
}

void GetBcosTransByHashRequest::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool GetBcosTransByHashRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string GetBcosTransByHashRequest::GetTransHash() const
{
    return m_transHash;
}

void GetBcosTransByHashRequest::SetTransHash(const string& _transHash)
{
    m_transHash = _transHash;
    m_transHashHasBeenSet = true;
}

bool GetBcosTransByHashRequest::TransHashHasBeenSet() const
{
    return m_transHashHasBeenSet;
}


