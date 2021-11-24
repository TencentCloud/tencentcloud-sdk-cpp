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

#include <tencentcloud/tdmq/v20200217/model/ModifyAMQPExchangeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

ModifyAMQPExchangeRequest::ModifyAMQPExchangeRequest() :
    m_clusterIdHasBeenSet(false),
    m_vHostIdHasBeenSet(false),
    m_exchangeHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string ModifyAMQPExchangeRequest::ToJsonString() const
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

    if (m_vHostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VHostId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vHostId.c_str(), allocator).Move(), allocator);
    }

    if (m_exchangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exchange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_exchange.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAMQPExchangeRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyAMQPExchangeRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyAMQPExchangeRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ModifyAMQPExchangeRequest::GetVHostId() const
{
    return m_vHostId;
}

void ModifyAMQPExchangeRequest::SetVHostId(const string& _vHostId)
{
    m_vHostId = _vHostId;
    m_vHostIdHasBeenSet = true;
}

bool ModifyAMQPExchangeRequest::VHostIdHasBeenSet() const
{
    return m_vHostIdHasBeenSet;
}

string ModifyAMQPExchangeRequest::GetExchange() const
{
    return m_exchange;
}

void ModifyAMQPExchangeRequest::SetExchange(const string& _exchange)
{
    m_exchange = _exchange;
    m_exchangeHasBeenSet = true;
}

bool ModifyAMQPExchangeRequest::ExchangeHasBeenSet() const
{
    return m_exchangeHasBeenSet;
}

string ModifyAMQPExchangeRequest::GetRemark() const
{
    return m_remark;
}

void ModifyAMQPExchangeRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyAMQPExchangeRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


