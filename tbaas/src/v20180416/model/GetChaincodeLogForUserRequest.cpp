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

#include <tencentcloud/tbaas/v20180416/model/GetChaincodeLogForUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

GetChaincodeLogForUserRequest::GetChaincodeLogForUserRequest() :
    m_moduleHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_chaincodeNameHasBeenSet(false),
    m_chaincodeVersionHasBeenSet(false),
    m_peerNameHasBeenSet(false),
    m_beginTimeHasBeenSet(false),
    m_rowNumHasBeenSet(false)
{
}

string GetChaincodeLogForUserRequest::ToJsonString() const
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


string GetChaincodeLogForUserRequest::GetModule() const
{
    return m_module;
}

void GetChaincodeLogForUserRequest::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool GetChaincodeLogForUserRequest::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string GetChaincodeLogForUserRequest::GetOperation() const
{
    return m_operation;
}

void GetChaincodeLogForUserRequest::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool GetChaincodeLogForUserRequest::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string GetChaincodeLogForUserRequest::GetClusterId() const
{
    return m_clusterId;
}

void GetChaincodeLogForUserRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool GetChaincodeLogForUserRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string GetChaincodeLogForUserRequest::GetGroupName() const
{
    return m_groupName;
}

void GetChaincodeLogForUserRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool GetChaincodeLogForUserRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string GetChaincodeLogForUserRequest::GetChaincodeName() const
{
    return m_chaincodeName;
}

void GetChaincodeLogForUserRequest::SetChaincodeName(const string& _chaincodeName)
{
    m_chaincodeName = _chaincodeName;
    m_chaincodeNameHasBeenSet = true;
}

bool GetChaincodeLogForUserRequest::ChaincodeNameHasBeenSet() const
{
    return m_chaincodeNameHasBeenSet;
}

string GetChaincodeLogForUserRequest::GetChaincodeVersion() const
{
    return m_chaincodeVersion;
}

void GetChaincodeLogForUserRequest::SetChaincodeVersion(const string& _chaincodeVersion)
{
    m_chaincodeVersion = _chaincodeVersion;
    m_chaincodeVersionHasBeenSet = true;
}

bool GetChaincodeLogForUserRequest::ChaincodeVersionHasBeenSet() const
{
    return m_chaincodeVersionHasBeenSet;
}

string GetChaincodeLogForUserRequest::GetPeerName() const
{
    return m_peerName;
}

void GetChaincodeLogForUserRequest::SetPeerName(const string& _peerName)
{
    m_peerName = _peerName;
    m_peerNameHasBeenSet = true;
}

bool GetChaincodeLogForUserRequest::PeerNameHasBeenSet() const
{
    return m_peerNameHasBeenSet;
}

string GetChaincodeLogForUserRequest::GetBeginTime() const
{
    return m_beginTime;
}

void GetChaincodeLogForUserRequest::SetBeginTime(const string& _beginTime)
{
    m_beginTime = _beginTime;
    m_beginTimeHasBeenSet = true;
}

bool GetChaincodeLogForUserRequest::BeginTimeHasBeenSet() const
{
    return m_beginTimeHasBeenSet;
}

int64_t GetChaincodeLogForUserRequest::GetRowNum() const
{
    return m_rowNum;
}

void GetChaincodeLogForUserRequest::SetRowNum(const int64_t& _rowNum)
{
    m_rowNum = _rowNum;
    m_rowNumHasBeenSet = true;
}

bool GetChaincodeLogForUserRequest::RowNumHasBeenSet() const
{
    return m_rowNumHasBeenSet;
}


