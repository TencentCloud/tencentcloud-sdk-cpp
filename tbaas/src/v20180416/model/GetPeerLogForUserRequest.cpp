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

#include <tencentcloud/tbaas/v20180416/model/GetPeerLogForUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

GetPeerLogForUserRequest::GetPeerLogForUserRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_peerNameHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_rowNumHasBeenSet(false)
{
}

string GetPeerLogForUserRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_peerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_peerName.c_str(), allocator).Move(), allocator);
    }

    if (m_beginTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BeginTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_beginTime.c_str(), allocator).Move(), allocator);
    }

    if (m_rowNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RowNum";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rowNum, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetPeerLogForUserRequest::GetModule() const
{
    return m_module;
}

void GetPeerLogForUserRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool GetPeerLogForUserRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string GetPeerLogForUserRequest::GetOperation() const
{
    return m_operation;
}

void GetPeerLogForUserRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool GetPeerLogForUserRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string GetPeerLogForUserRequest::GetClusterId() const
{
    return m_clusterId;
}

void GetPeerLogForUserRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool GetPeerLogForUserRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string GetPeerLogForUserRequest::GetGroupName() const
{
    return m_groupName;
}

void GetPeerLogForUserRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool GetPeerLogForUserRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string GetPeerLogForUserRequest::GetPeerName() const
{
    return m_peerName;
}

void GetPeerLogForUserRequest::SetPeerName(const string& _peerName)
{
    m_peerName = _peerName;
    m_peerNameHasBeenSet = true;
}

bool GetPeerLogForUserRequest::PeerNameHasBeenSet() const
{
    return m_peerNameHasBeenSet;
}

string GetPeerLogForUserRequest::GetBeginTime() const
{
    return m_beginTime;
}

void GetPeerLogForUserRequest::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool GetPeerLogForUserRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

int64_t GetPeerLogForUserRequest::GetRowNum() const
{
    return m_rowNum;
}

void GetPeerLogForUserRequest::SetRowNum(const int64_t& _rowNum)
{
    m_rowNum = _rowNum;
    m_rowNumHasBeenSet = true;
}

bool GetPeerLogForUserRequest::RowNumHasBeenSet() const
{
    return m_rowNumHasBeenSet;
}


