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

#include <tencentcloud/tbaas/v20180416/model/QueryFabricChaincodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

QueryFabricChaincodeRequest::QueryFabricChaincodeRequest() :
    m_clusterIdHasBeenSet(false),
    m_channelIdHasBeenSet(false),
    m_chaincodeNameHasBeenSet(false),
    m_funcNameHasBeenSet(false),
    m_funcParamHasBeenSet(false)
{
}

string QueryFabricChaincodeRequest::ToJsonString() const
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

    if (m_channelIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelId.c_str(), allocator).Move(), allocator);
    }

    if (m_chaincodeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChaincodeName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_chaincodeName.c_str(), allocator).Move(), allocator);
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
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_funcParam.begin(); itr != m_funcParam.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryFabricChaincodeRequest::GetClusterId() const
{
    return m_clusterId;
}

void QueryFabricChaincodeRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool QueryFabricChaincodeRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string QueryFabricChaincodeRequest::GetChannelId() const
{
    return m_channelId;
}

void QueryFabricChaincodeRequest::SetChannelId(const string& _channelId)
{
    m_channelId = _channelId;
    m_channelIdHasBeenSet = true;
}

bool QueryFabricChaincodeRequest::ChannelIdHasBeenSet() const
{
    return m_channelIdHasBeenSet;
}

string QueryFabricChaincodeRequest::GetChaincodeName() const
{
    return m_chaincodeName;
}

void QueryFabricChaincodeRequest::SetChaincodeName(const string& _chaincodeName)
{
    m_chaincodeName = _chaincodeName;
    m_chaincodeNameHasBeenSet = true;
}

bool QueryFabricChaincodeRequest::ChaincodeNameHasBeenSet() const
{
    return m_chaincodeNameHasBeenSet;
}

string QueryFabricChaincodeRequest::GetFuncName() const
{
    return m_funcName;
}

void QueryFabricChaincodeRequest::SetFuncName(const string& _funcName)
{
    m_funcName = _funcName;
    m_funcNameHasBeenSet = true;
}

bool QueryFabricChaincodeRequest::FuncNameHasBeenSet() const
{
    return m_funcNameHasBeenSet;
}

vector<string> QueryFabricChaincodeRequest::GetFuncParam() const
{
    return m_funcParam;
}

void QueryFabricChaincodeRequest::SetFuncParam(const vector<string>& _funcParam)
{
    m_funcParam = _funcParam;
    m_funcParamHasBeenSet = true;
}

bool QueryFabricChaincodeRequest::FuncParamHasBeenSet() const
{
    return m_funcParamHasBeenSet;
}


