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

#include <tencentcloud/tbaas/v20180416/model/InitializeChaincodeForUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

InitializeChaincodeForUserRequest::InitializeChaincodeForUserRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_chaincodeNameHasBeenSet(false),
    m_chaincodeVersionHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_peerNameHasBeenSet(false),
    m_argsHasBeenSet(false)
{
}

string InitializeChaincodeForUserRequest::ToJsonString() const
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

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_peerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_peerName.c_str(), allocator).Move(), allocator);
    }

    if (m_argsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Args";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_args.begin(); itr != m_args.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InitializeChaincodeForUserRequest::GetModule() const
{
    return m_module;
}

void InitializeChaincodeForUserRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool InitializeChaincodeForUserRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string InitializeChaincodeForUserRequest::GetOperation() const
{
    return m_operation;
}

void InitializeChaincodeForUserRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool InitializeChaincodeForUserRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string InitializeChaincodeForUserRequest::GetClusterId() const
{
    return m_clusterId;
}

void InitializeChaincodeForUserRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool InitializeChaincodeForUserRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string InitializeChaincodeForUserRequest::GetGroupName() const
{
    return m_groupName;
}

void InitializeChaincodeForUserRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool InitializeChaincodeForUserRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string InitializeChaincodeForUserRequest::GetChaincodeName() const
{
    return m_chaincodeName;
}

void InitializeChaincodeForUserRequest::SetChaincodeName(const string& _chaincodeName)
{
    m_chaincodeName = _chaincodeName;
    m_chaincodeNameHasBeenSet = true;
}

bool InitializeChaincodeForUserRequest::ChaincodeNameHasBeenSet() const
{
    return m_chaincodeNameHasBeenSet;
}

string InitializeChaincodeForUserRequest::GetChaincodeVersion() const
{
    return m_chaincodeVersion;
}

void InitializeChaincodeForUserRequest::SetChaincodeVersion(const string& _chaincodeVersion)
{
    m_chaincodeVersion = _chaincodeVersion;
    m_chaincodeVersionHasBeenSet = true;
}

bool InitializeChaincodeForUserRequest::ChaincodeVersionHasBeenSet() const
{
    return m_chaincodeVersionHasBeenSet;
}

string InitializeChaincodeForUserRequest::GetChannelName() const
{
    return m_channelName;
}

void InitializeChaincodeForUserRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool InitializeChaincodeForUserRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string InitializeChaincodeForUserRequest::GetPeerName() const
{
    return m_peerName;
}

void InitializeChaincodeForUserRequest::SetPeerName(const string& _peerName)
{
    m_peerName = _peerName;
    m_peerNameHasBeenSet = true;
}

bool InitializeChaincodeForUserRequest::PeerNameHasBeenSet() const
{
    return m_peerNameHasBeenSet;
}

vector<string> InitializeChaincodeForUserRequest::GetArgs() const
{
    return m_args;
}

void InitializeChaincodeForUserRequest::SetArgs(const vector<string>& _args)
{
    m_args = _args;
    m_argsHasBeenSet = true;
}

bool InitializeChaincodeForUserRequest::ArgsHasBeenSet() const
{
    return m_argsHasBeenSet;
}


