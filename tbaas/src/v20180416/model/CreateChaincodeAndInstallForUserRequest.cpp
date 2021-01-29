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

#include <tencentcloud/tbaas/v20180416/model/CreateChaincodeAndInstallForUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace rapidjson;
using namespace std;

CreateChaincodeAndInstallForUserRequest::CreateChaincodeAndInstallForUserRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_peerNameHasBeenSet(false),
    m_chaincodeNameHasBeenSet(false),
    m_chaincodeVersionHasBeenSet(false),
    m_chaincodeFileTypeHasBeenSet(false),
    m_chaincodeHasBeenSet(false)
{
}

string CreateChaincodeAndInstallForUserRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_moduleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_operationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_peerNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PeerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_peerName.c_str(), allocator).Move(), allocator);
    }

    if (m_chaincodeNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChaincodeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_chaincodeName.c_str(), allocator).Move(), allocator);
    }

    if (m_chaincodeVersionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChaincodeVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_chaincodeVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_chaincodeFileTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChaincodeFileType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_chaincodeFileType.c_str(), allocator).Move(), allocator);
    }

    if (m_chaincodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Chaincode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_chaincode.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateChaincodeAndInstallForUserRequest::GetModule() const
{
    return m_module;
}

void CreateChaincodeAndInstallForUserRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool CreateChaincodeAndInstallForUserRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string CreateChaincodeAndInstallForUserRequest::GetOperation() const
{
    return m_operation;
}

void CreateChaincodeAndInstallForUserRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool CreateChaincodeAndInstallForUserRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string CreateChaincodeAndInstallForUserRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateChaincodeAndInstallForUserRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateChaincodeAndInstallForUserRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateChaincodeAndInstallForUserRequest::GetGroupName() const
{
    return m_groupName;
}

void CreateChaincodeAndInstallForUserRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool CreateChaincodeAndInstallForUserRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string CreateChaincodeAndInstallForUserRequest::GetPeerName() const
{
    return m_peerName;
}

void CreateChaincodeAndInstallForUserRequest::SetPeerName(const string& _peerName)
{
    m_peerName = _peerName;
    m_peerNameHasBeenSet = true;
}

bool CreateChaincodeAndInstallForUserRequest::PeerNameHasBeenSet() const
{
    return m_peerNameHasBeenSet;
}

string CreateChaincodeAndInstallForUserRequest::GetChaincodeName() const
{
    return m_chaincodeName;
}

void CreateChaincodeAndInstallForUserRequest::SetChaincodeName(const string& _chaincodeName)
{
    m_chaincodeName = _chaincodeName;
    m_chaincodeNameHasBeenSet = true;
}

bool CreateChaincodeAndInstallForUserRequest::ChaincodeNameHasBeenSet() const
{
    return m_chaincodeNameHasBeenSet;
}

string CreateChaincodeAndInstallForUserRequest::GetChaincodeVersion() const
{
    return m_chaincodeVersion;
}

void CreateChaincodeAndInstallForUserRequest::SetChaincodeVersion(const string& _chaincodeVersion)
{
    m_chaincodeVersion = _chaincodeVersion;
    m_chaincodeVersionHasBeenSet = true;
}

bool CreateChaincodeAndInstallForUserRequest::ChaincodeVersionHasBeenSet() const
{
    return m_chaincodeVersionHasBeenSet;
}

string CreateChaincodeAndInstallForUserRequest::GetChaincodeFileType() const
{
    return m_chaincodeFileType;
}

void CreateChaincodeAndInstallForUserRequest::SetChaincodeFileType(const string& _chaincodeFileType)
{
    m_chaincodeFileType = _chaincodeFileType;
    m_chaincodeFileTypeHasBeenSet = true;
}

bool CreateChaincodeAndInstallForUserRequest::ChaincodeFileTypeHasBeenSet() const
{
    return m_chaincodeFileTypeHasBeenSet;
}

string CreateChaincodeAndInstallForUserRequest::GetChaincode() const
{
    return m_chaincode;
}

void CreateChaincodeAndInstallForUserRequest::SetChaincode(const string& _chaincode)
{
    m_chaincode = _chaincode;
    m_chaincodeHasBeenSet = true;
}

bool CreateChaincodeAndInstallForUserRequest::ChaincodeHasBeenSet() const
{
    return m_chaincodeHasBeenSet;
}


