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

#include <tencentcloud/tbaas/v20180416/model/GetChaincodeInitializeResultForUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

GetChaincodeInitializeResultForUserRequest::GetChaincodeInitializeResultForUserRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_chaincodeNameHasBeenSet(false),
    m_chaincodeVersionHasBeenSet(false),
    m_taskIdHasBeenSet(false)
{
}

string GetChaincodeInitializeResultForUserRequest::ToJsonString() const
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

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_chaincodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChaincodeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chaincodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_chaincodeVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChaincodeVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chaincodeVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_taskId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetChaincodeInitializeResultForUserRequest::GetModule() const
{
    return m_module;
}

void GetChaincodeInitializeResultForUserRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool GetChaincodeInitializeResultForUserRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string GetChaincodeInitializeResultForUserRequest::GetOperation() const
{
    return m_operation;
}

void GetChaincodeInitializeResultForUserRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool GetChaincodeInitializeResultForUserRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string GetChaincodeInitializeResultForUserRequest::GetClusterId() const
{
    return m_clusterId;
}

void GetChaincodeInitializeResultForUserRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool GetChaincodeInitializeResultForUserRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string GetChaincodeInitializeResultForUserRequest::GetGroupName() const
{
    return m_groupName;
}

void GetChaincodeInitializeResultForUserRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool GetChaincodeInitializeResultForUserRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string GetChaincodeInitializeResultForUserRequest::GetChannelName() const
{
    return m_channelName;
}

void GetChaincodeInitializeResultForUserRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool GetChaincodeInitializeResultForUserRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string GetChaincodeInitializeResultForUserRequest::GetChaincodeName() const
{
    return m_chaincodeName;
}

void GetChaincodeInitializeResultForUserRequest::SetChaincodeName(const string& _chaincodeName)
{
    m_chaincodeName = _chaincodeName;
    m_chaincodeNameHasBeenSet = true;
}

bool GetChaincodeInitializeResultForUserRequest::ChaincodeNameHasBeenSet() const
{
    return m_chaincodeNameHasBeenSet;
}

string GetChaincodeInitializeResultForUserRequest::GetChaincodeVersion() const
{
    return m_chaincodeVersion;
}

void GetChaincodeInitializeResultForUserRequest::SetChaincodeVersion(const string& _chaincodeVersion)
{
    m_chaincodeVersion = _chaincodeVersion;
    m_chaincodeVersionHasBeenSet = true;
}

bool GetChaincodeInitializeResultForUserRequest::ChaincodeVersionHasBeenSet() const
{
    return m_chaincodeVersionHasBeenSet;
}

uint64_t GetChaincodeInitializeResultForUserRequest::GetTaskId() const
{
    return m_taskId;
}

void GetChaincodeInitializeResultForUserRequest::SetTaskId(const uint64_t& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool GetChaincodeInitializeResultForUserRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}


