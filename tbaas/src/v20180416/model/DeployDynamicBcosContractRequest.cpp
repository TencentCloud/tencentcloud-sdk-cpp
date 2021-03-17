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

#include <tencentcloud/tbaas/v20180416/model/DeployDynamicBcosContractRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace rapidjson;
using namespace std;

DeployDynamicBcosContractRequest::DeployDynamicBcosContractRequest() :
    m_clusterIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_abiInfoHasBeenSet(false),
    m_byteCodeBinHasBeenSet(false),
    m_signUserIdHasBeenSet(false),
    m_constructorParamsHasBeenSet(false)
{
}

string DeployDynamicBcosContractRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_groupId, allocator);
    }

    if (m_abiInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AbiInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_abiInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_byteCodeBinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ByteCodeBin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_byteCodeBin.c_str(), allocator).Move(), allocator);
    }

    if (m_signUserIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SignUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_signUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_constructorParamsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ConstructorParams";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_constructorParams.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeployDynamicBcosContractRequest::GetClusterId() const
{
    return m_clusterId;
}

void DeployDynamicBcosContractRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DeployDynamicBcosContractRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t DeployDynamicBcosContractRequest::GetGroupId() const
{
    return m_groupId;
}

void DeployDynamicBcosContractRequest::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DeployDynamicBcosContractRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DeployDynamicBcosContractRequest::GetAbiInfo() const
{
    return m_abiInfo;
}

void DeployDynamicBcosContractRequest::SetAbiInfo(const string& _abiInfo)
{
    m_abiInfo = _abiInfo;
    m_abiInfoHasBeenSet = true;
}

bool DeployDynamicBcosContractRequest::AbiInfoHasBeenSet() const
{
    return m_abiInfoHasBeenSet;
}

string DeployDynamicBcosContractRequest::GetByteCodeBin() const
{
    return m_byteCodeBin;
}

void DeployDynamicBcosContractRequest::SetByteCodeBin(const string& _byteCodeBin)
{
    m_byteCodeBin = _byteCodeBin;
    m_byteCodeBinHasBeenSet = true;
}

bool DeployDynamicBcosContractRequest::ByteCodeBinHasBeenSet() const
{
    return m_byteCodeBinHasBeenSet;
}

string DeployDynamicBcosContractRequest::GetSignUserId() const
{
    return m_signUserId;
}

void DeployDynamicBcosContractRequest::SetSignUserId(const string& _signUserId)
{
    m_signUserId = _signUserId;
    m_signUserIdHasBeenSet = true;
}

bool DeployDynamicBcosContractRequest::SignUserIdHasBeenSet() const
{
    return m_signUserIdHasBeenSet;
}

string DeployDynamicBcosContractRequest::GetConstructorParams() const
{
    return m_constructorParams;
}

void DeployDynamicBcosContractRequest::SetConstructorParams(const string& _constructorParams)
{
    m_constructorParams = _constructorParams;
    m_constructorParamsHasBeenSet = true;
}

bool DeployDynamicBcosContractRequest::ConstructorParamsHasBeenSet() const
{
    return m_constructorParamsHasBeenSet;
}


