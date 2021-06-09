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

#include <tencentcloud/tbaas/v20180416/model/GetChaincodeCompileLogForUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

GetChaincodeCompileLogForUserRequest::GetChaincodeCompileLogForUserRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_chaincodeNameHasBeenSet(false),
    m_chaincodeVersionHasBeenSet(false),
    m_peerNameHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string GetChaincodeCompileLogForUserRequest::ToJsonString() const
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

    if (m_peerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_peerName.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetChaincodeCompileLogForUserRequest::GetModule() const
{
    return m_module;
}

void GetChaincodeCompileLogForUserRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool GetChaincodeCompileLogForUserRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string GetChaincodeCompileLogForUserRequest::GetOperation() const
{
    return m_operation;
}

void GetChaincodeCompileLogForUserRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool GetChaincodeCompileLogForUserRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string GetChaincodeCompileLogForUserRequest::GetClusterId() const
{
    return m_clusterId;
}

void GetChaincodeCompileLogForUserRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool GetChaincodeCompileLogForUserRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string GetChaincodeCompileLogForUserRequest::GetGroupName() const
{
    return m_groupName;
}

void GetChaincodeCompileLogForUserRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool GetChaincodeCompileLogForUserRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string GetChaincodeCompileLogForUserRequest::GetChaincodeName() const
{
    return m_chaincodeName;
}

void GetChaincodeCompileLogForUserRequest::SetChaincodeName(const string& _chaincodeName)
{
    m_chaincodeName = _chaincodeName;
    m_chaincodeNameHasBeenSet = true;
}

bool GetChaincodeCompileLogForUserRequest::ChaincodeNameHasBeenSet() const
{
    return m_chaincodeNameHasBeenSet;
}

string GetChaincodeCompileLogForUserRequest::GetChaincodeVersion() const
{
    return m_chaincodeVersion;
}

void GetChaincodeCompileLogForUserRequest::SetChaincodeVersion(const string& _chaincodeVersion)
{
    m_chaincodeVersion = _chaincodeVersion;
    m_chaincodeVersionHasBeenSet = true;
}

bool GetChaincodeCompileLogForUserRequest::ChaincodeVersionHasBeenSet() const
{
    return m_chaincodeVersionHasBeenSet;
}

string GetChaincodeCompileLogForUserRequest::GetPeerName() const
{
    return m_peerName;
}

void GetChaincodeCompileLogForUserRequest::SetPeerName(const string& _peerName)
{
    m_peerName = _peerName;
    m_peerNameHasBeenSet = true;
}

bool GetChaincodeCompileLogForUserRequest::PeerNameHasBeenSet() const
{
    return m_peerNameHasBeenSet;
}

uint64_t GetChaincodeCompileLogForUserRequest::GetLimit() const
{
    return m_limit;
}

void GetChaincodeCompileLogForUserRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool GetChaincodeCompileLogForUserRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t GetChaincodeCompileLogForUserRequest::GetOffset() const
{
    return m_offset;
}

void GetChaincodeCompileLogForUserRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool GetChaincodeCompileLogForUserRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


