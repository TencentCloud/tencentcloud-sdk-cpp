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

#include <tencentcloud/tbaas/v20180416/model/QueryChainMakerContractRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

QueryChainMakerContractRequest::QueryChainMakerContractRequest() :
    m_clusterIdHasBeenSet(false),
    m_chainIdHasBeenSet(false),
    m_contractNameHasBeenSet(false),
    m_funcNameHasBeenSet(false),
    m_funcParamHasBeenSet(false)
{
}

string QueryChainMakerContractRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_chainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chainId.c_str(), allocator).Move(), allocator);
    }

    if (m_contractNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contractName.c_str(), allocator).Move(), allocator);
    }

    if (m_funcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FuncName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_funcName.c_str(), allocator).Move(), allocator);
    }

    if (m_funcParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FuncParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_funcParam.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryChainMakerContractRequest::GetClusterId() const
{
    return m_clusterId;
}

void QueryChainMakerContractRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool QueryChainMakerContractRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string QueryChainMakerContractRequest::GetChainId() const
{
    return m_chainId;
}

void QueryChainMakerContractRequest::SetChainId(const string& _chainId)
{
    m_chainId = _chainId;
    m_chainIdHasBeenSet = true;
}

bool QueryChainMakerContractRequest::ChainIdHasBeenSet() const
{
    return m_chainIdHasBeenSet;
}

string QueryChainMakerContractRequest::GetContractName() const
{
    return m_contractName;
}

void QueryChainMakerContractRequest::SetContractName(const string& _contractName)
{
    m_contractName = _contractName;
    m_contractNameHasBeenSet = true;
}

bool QueryChainMakerContractRequest::ContractNameHasBeenSet() const
{
    return m_contractNameHasBeenSet;
}

string QueryChainMakerContractRequest::GetFuncName() const
{
    return m_funcName;
}

void QueryChainMakerContractRequest::SetFuncName(const string& _funcName)
{
    m_funcName = _funcName;
    m_funcNameHasBeenSet = true;
}

bool QueryChainMakerContractRequest::FuncNameHasBeenSet() const
{
    return m_funcNameHasBeenSet;
}

string QueryChainMakerContractRequest::GetFuncParam() const
{
    return m_funcParam;
}

void QueryChainMakerContractRequest::SetFuncParam(const string& _funcParam)
{
    m_funcParam = _funcParam;
    m_funcParamHasBeenSet = true;
}

bool QueryChainMakerContractRequest::FuncParamHasBeenSet() const
{
    return m_funcParamHasBeenSet;
}


