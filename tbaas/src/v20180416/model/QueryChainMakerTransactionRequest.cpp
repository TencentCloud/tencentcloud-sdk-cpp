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

#include <tencentcloud/tbaas/v20180416/model/QueryChainMakerTransactionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

QueryChainMakerTransactionRequest::QueryChainMakerTransactionRequest() :
    m_clusterIdHasBeenSet(false),
    m_chainIdHasBeenSet(false),
    m_txIDHasBeenSet(false)
{
}

string QueryChainMakerTransactionRequest::ToJsonString() const
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

    if (m_txIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TxID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_txID.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryChainMakerTransactionRequest::GetClusterId() const
{
    return m_clusterId;
}

void QueryChainMakerTransactionRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool QueryChainMakerTransactionRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string QueryChainMakerTransactionRequest::GetChainId() const
{
    return m_chainId;
}

void QueryChainMakerTransactionRequest::SetChainId(const string& _chainId)
{
    m_chainId = _chainId;
    m_chainIdHasBeenSet = true;
}

bool QueryChainMakerTransactionRequest::ChainIdHasBeenSet() const
{
    return m_chainIdHasBeenSet;
}

string QueryChainMakerTransactionRequest::GetTxID() const
{
    return m_txID;
}

void QueryChainMakerTransactionRequest::SetTxID(const string& _txID)
{
    m_txID = _txID;
    m_txIDHasBeenSet = true;
}

bool QueryChainMakerTransactionRequest::TxIDHasBeenSet() const
{
    return m_txIDHasBeenSet;
}


