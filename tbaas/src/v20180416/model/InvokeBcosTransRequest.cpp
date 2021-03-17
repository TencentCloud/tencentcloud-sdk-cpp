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

#include <tencentcloud/tbaas/v20180416/model/InvokeBcosTransRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace rapidjson;
using namespace std;

InvokeBcosTransRequest::InvokeBcosTransRequest() :
    m_clusterIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_contractAddressHasBeenSet(false),
    m_abiInfoHasBeenSet(false),
    m_funcNameHasBeenSet(false),
    m_signUserIdHasBeenSet(false),
    m_funcParamHasBeenSet(false)
{
}

string InvokeBcosTransRequest::ToJsonString() const
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

    if (m_contractAddressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ContractAddress";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_contractAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_abiInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AbiInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_abiInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_funcNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FuncName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_funcName.c_str(), allocator).Move(), allocator);
    }

    if (m_signUserIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SignUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_signUserId.c_str(), allocator).Move(), allocator);
    }

    if (m_funcParamHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FuncParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_funcParam.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InvokeBcosTransRequest::GetClusterId() const
{
    return m_clusterId;
}

void InvokeBcosTransRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool InvokeBcosTransRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

int64_t InvokeBcosTransRequest::GetGroupId() const
{
    return m_groupId;
}

void InvokeBcosTransRequest::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool InvokeBcosTransRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string InvokeBcosTransRequest::GetContractAddress() const
{
    return m_contractAddress;
}

void InvokeBcosTransRequest::SetContractAddress(const string& _contractAddress)
{
    m_contractAddress = _contractAddress;
    m_contractAddressHasBeenSet = true;
}

bool InvokeBcosTransRequest::ContractAddressHasBeenSet() const
{
    return m_contractAddressHasBeenSet;
}

string InvokeBcosTransRequest::GetAbiInfo() const
{
    return m_abiInfo;
}

void InvokeBcosTransRequest::SetAbiInfo(const string& _abiInfo)
{
    m_abiInfo = _abiInfo;
    m_abiInfoHasBeenSet = true;
}

bool InvokeBcosTransRequest::AbiInfoHasBeenSet() const
{
    return m_abiInfoHasBeenSet;
}

string InvokeBcosTransRequest::GetFuncName() const
{
    return m_funcName;
}

void InvokeBcosTransRequest::SetFuncName(const string& _funcName)
{
    m_funcName = _funcName;
    m_funcNameHasBeenSet = true;
}

bool InvokeBcosTransRequest::FuncNameHasBeenSet() const
{
    return m_funcNameHasBeenSet;
}

string InvokeBcosTransRequest::GetSignUserId() const
{
    return m_signUserId;
}

void InvokeBcosTransRequest::SetSignUserId(const string& _signUserId)
{
    m_signUserId = _signUserId;
    m_signUserIdHasBeenSet = true;
}

bool InvokeBcosTransRequest::SignUserIdHasBeenSet() const
{
    return m_signUserIdHasBeenSet;
}

string InvokeBcosTransRequest::GetFuncParam() const
{
    return m_funcParam;
}

void InvokeBcosTransRequest::SetFuncParam(const string& _funcParam)
{
    m_funcParam = _funcParam;
    m_funcParamHasBeenSet = true;
}

bool InvokeBcosTransRequest::FuncParamHasBeenSet() const
{
    return m_funcParamHasBeenSet;
}


