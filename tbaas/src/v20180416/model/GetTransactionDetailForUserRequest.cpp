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

#include <tencentcloud/tbaas/v20180416/model/GetTransactionDetailForUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace rapidjson;
using namespace std;

GetTransactionDetailForUserRequest::GetTransactionDetailForUserRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_blockIdHasBeenSet(false),
    m_transactionIdHasBeenSet(false)
{
}

string GetTransactionDetailForUserRequest::ToJsonString() const
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

    if (m_channelNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_blockIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BlockId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_blockId, allocator);
    }

    if (m_transactionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TransactionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_transactionId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetTransactionDetailForUserRequest::GetModule() const
{
    return m_module;
}

void GetTransactionDetailForUserRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool GetTransactionDetailForUserRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string GetTransactionDetailForUserRequest::GetOperation() const
{
    return m_operation;
}

void GetTransactionDetailForUserRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool GetTransactionDetailForUserRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string GetTransactionDetailForUserRequest::GetClusterId() const
{
    return m_clusterId;
}

void GetTransactionDetailForUserRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool GetTransactionDetailForUserRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string GetTransactionDetailForUserRequest::GetGroupName() const
{
    return m_groupName;
}

void GetTransactionDetailForUserRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool GetTransactionDetailForUserRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string GetTransactionDetailForUserRequest::GetChannelName() const
{
    return m_channelName;
}

void GetTransactionDetailForUserRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool GetTransactionDetailForUserRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

uint64_t GetTransactionDetailForUserRequest::GetBlockId() const
{
    return m_blockId;
}

void GetTransactionDetailForUserRequest::SetBlockId(const uint64_t& _blockId)
{
    m_blockId = _blockId;
    m_blockIdHasBeenSet = true;
}

bool GetTransactionDetailForUserRequest::BlockIdHasBeenSet() const
{
    return m_blockIdHasBeenSet;
}

string GetTransactionDetailForUserRequest::GetTransactionId() const
{
    return m_transactionId;
}

void GetTransactionDetailForUserRequest::SetTransactionId(const string& _transactionId)
{
    m_transactionId = _transactionId;
    m_transactionIdHasBeenSet = true;
}

bool GetTransactionDetailForUserRequest::TransactionIdHasBeenSet() const
{
    return m_transactionIdHasBeenSet;
}


