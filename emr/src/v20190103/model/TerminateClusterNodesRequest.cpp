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

#include <tencentcloud/emr/v20190103/model/TerminateClusterNodesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

TerminateClusterNodesRequest::TerminateClusterNodesRequest() :
    m_instanceIdHasBeenSet(false),
    m_cvmInstanceIdsHasBeenSet(false),
    m_nodeFlagHasBeenSet(false),
    m_graceDownFlagHasBeenSet(false),
    m_graceDownTimeHasBeenSet(false)
{
}

string TerminateClusterNodesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_cvmInstanceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CvmInstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cvmInstanceIds.begin(); itr != m_cvmInstanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nodeFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_nodeFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_graceDownFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GraceDownFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_graceDownFlag, allocator);
    }

    if (m_graceDownTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GraceDownTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_graceDownTime, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TerminateClusterNodesRequest::GetInstanceId() const
{
    return m_instanceId;
}

void TerminateClusterNodesRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TerminateClusterNodesRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> TerminateClusterNodesRequest::GetCvmInstanceIds() const
{
    return m_cvmInstanceIds;
}

void TerminateClusterNodesRequest::SetCvmInstanceIds(const vector<string>& _cvmInstanceIds)
{
    m_cvmInstanceIds = _cvmInstanceIds;
    m_cvmInstanceIdsHasBeenSet = true;
}

bool TerminateClusterNodesRequest::CvmInstanceIdsHasBeenSet() const
{
    return m_cvmInstanceIdsHasBeenSet;
}

string TerminateClusterNodesRequest::GetNodeFlag() const
{
    return m_nodeFlag;
}

void TerminateClusterNodesRequest::SetNodeFlag(const string& _nodeFlag)
{
    m_nodeFlag = _nodeFlag;
    m_nodeFlagHasBeenSet = true;
}

bool TerminateClusterNodesRequest::NodeFlagHasBeenSet() const
{
    return m_nodeFlagHasBeenSet;
}

bool TerminateClusterNodesRequest::GetGraceDownFlag() const
{
    return m_graceDownFlag;
}

void TerminateClusterNodesRequest::SetGraceDownFlag(const bool& _graceDownFlag)
{
    m_graceDownFlag = _graceDownFlag;
    m_graceDownFlagHasBeenSet = true;
}

bool TerminateClusterNodesRequest::GraceDownFlagHasBeenSet() const
{
    return m_graceDownFlagHasBeenSet;
}

int64_t TerminateClusterNodesRequest::GetGraceDownTime() const
{
    return m_graceDownTime;
}

void TerminateClusterNodesRequest::SetGraceDownTime(const int64_t& _graceDownTime)
{
    m_graceDownTime = _graceDownTime;
    m_graceDownTimeHasBeenSet = true;
}

bool TerminateClusterNodesRequest::GraceDownTimeHasBeenSet() const
{
    return m_graceDownTimeHasBeenSet;
}


