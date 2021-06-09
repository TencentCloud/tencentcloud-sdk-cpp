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

#include <tencentcloud/tbaas/v20180416/model/GetBlockTransactionListForUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

GetBlockTransactionListForUserRequest::GetBlockTransactionListForUserRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_blockIdHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false)
{
}

string GetBlockTransactionListForUserRequest::ToJsonString() const
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

    if (m_blockIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_blockId, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetBlockTransactionListForUserRequest::GetModule() const
{
    return m_module;
}

void GetBlockTransactionListForUserRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool GetBlockTransactionListForUserRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string GetBlockTransactionListForUserRequest::GetOperation() const
{
    return m_operation;
}

void GetBlockTransactionListForUserRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool GetBlockTransactionListForUserRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string GetBlockTransactionListForUserRequest::GetClusterId() const
{
    return m_clusterId;
}

void GetBlockTransactionListForUserRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool GetBlockTransactionListForUserRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string GetBlockTransactionListForUserRequest::GetGroupName() const
{
    return m_groupName;
}

void GetBlockTransactionListForUserRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool GetBlockTransactionListForUserRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string GetBlockTransactionListForUserRequest::GetChannelName() const
{
    return m_channelName;
}

void GetBlockTransactionListForUserRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool GetBlockTransactionListForUserRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

uint64_t GetBlockTransactionListForUserRequest::GetBlockId() const
{
    return m_blockId;
}

void GetBlockTransactionListForUserRequest::SetBlockId(const uint64_t& _blockId)
{
    m_blockId = _blockId;
    m_blockIdHasBeenSet = true;
}

bool GetBlockTransactionListForUserRequest::BlockIdHasBeenSet() const
{
    return m_blockIdHasBeenSet;
}

uint64_t GetBlockTransactionListForUserRequest::GetOffset() const
{
    return m_offset;
}

void GetBlockTransactionListForUserRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool GetBlockTransactionListForUserRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t GetBlockTransactionListForUserRequest::GetLimit() const
{
    return m_limit;
}

void GetBlockTransactionListForUserRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool GetBlockTransactionListForUserRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}


