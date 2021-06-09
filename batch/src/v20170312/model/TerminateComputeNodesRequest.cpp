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

#include <tencentcloud/batch/v20170312/model/TerminateComputeNodesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Batch::V20170312::Model;
using namespace std;

TerminateComputeNodesRequest::TerminateComputeNodesRequest() :
    m_envIdHasBeenSet(false),
    m_computeNodeIdsHasBeenSet(false)
{
}

string TerminateComputeNodesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_computeNodeIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComputeNodeIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_computeNodeIds.begin(); itr != m_computeNodeIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TerminateComputeNodesRequest::GetEnvId() const
{
    return m_envId;
}

void TerminateComputeNodesRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool TerminateComputeNodesRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

vector<string> TerminateComputeNodesRequest::GetComputeNodeIds() const
{
    return m_computeNodeIds;
}

void TerminateComputeNodesRequest::SetComputeNodeIds(const vector<string>& _computeNodeIds)
{
    m_computeNodeIds = _computeNodeIds;
    m_computeNodeIdsHasBeenSet = true;
}

bool TerminateComputeNodesRequest::ComputeNodeIdsHasBeenSet() const
{
    return m_computeNodeIdsHasBeenSet;
}


