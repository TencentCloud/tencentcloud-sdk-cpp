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

#include <tencentcloud/tbaas/v20180416/model/GetInvokeTxRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

GetInvokeTxRequest::GetInvokeTxRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_peerNameHasBeenSet(false),
    m_peerGroupHasBeenSet(false),
    m_txIdHasBeenSet(false),
    m_groupNameHasBeenSet(false)
{
}

string GetInvokeTxRequest::ToJsonString() const
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

    if (m_peerGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeerGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_peerGroup.c_str(), allocator).Move(), allocator);
    }

    if (m_txIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TxId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_txId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetInvokeTxRequest::GetModule() const
{
    return m_module;
}

void GetInvokeTxRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool GetInvokeTxRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string GetInvokeTxRequest::GetOperation() const
{
    return m_operation;
}

void GetInvokeTxRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool GetInvokeTxRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string GetInvokeTxRequest::GetClusterId() const
{
    return m_clusterId;
}

void GetInvokeTxRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool GetInvokeTxRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string GetInvokeTxRequest::GetChannelName() const
{
    return m_channelName;
}

void GetInvokeTxRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool GetInvokeTxRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string GetInvokeTxRequest::GetPeerName() const
{
    return m_peerName;
}

void GetInvokeTxRequest::SetPeerName(const string& _peerName)
{
    m_peerName = _peerName;
    m_peerNameHasBeenSet = true;
}

bool GetInvokeTxRequest::PeerNameHasBeenSet() const
{
    return m_peerNameHasBeenSet;
}

string GetInvokeTxRequest::GetPeerGroup() const
{
    return m_peerGroup;
}

void GetInvokeTxRequest::SetPeerGroup(const string& _peerGroup)
{
    m_peerGroup = _peerGroup;
    m_peerGroupHasBeenSet = true;
}

bool GetInvokeTxRequest::PeerGroupHasBeenSet() const
{
    return m_peerGroupHasBeenSet;
}

string GetInvokeTxRequest::GetTxId() const
{
    return m_txId;
}

void GetInvokeTxRequest::SetTxId(const string& _txId)
{
    m_txId = _txId;
    m_txIdHasBeenSet = true;
}

bool GetInvokeTxRequest::TxIdHasBeenSet() const
{
    return m_txIdHasBeenSet;
}

string GetInvokeTxRequest::GetGroupName() const
{
    return m_groupName;
}

void GetInvokeTxRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool GetInvokeTxRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}


