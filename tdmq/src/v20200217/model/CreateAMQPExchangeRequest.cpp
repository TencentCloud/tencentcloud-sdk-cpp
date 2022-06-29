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

#include <tencentcloud/tdmq/v20200217/model/CreateAMQPExchangeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

CreateAMQPExchangeRequest::CreateAMQPExchangeRequest() :
    m_exchangeHasBeenSet(false),
    m_vHostsHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_alternateExchangeHasBeenSet(false),
    m_delayedTypeHasBeenSet(false)
{
}

string CreateAMQPExchangeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_exchangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exchange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_exchange.c_str(), allocator).Move(), allocator);
    }

    if (m_vHostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VHosts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vHosts.begin(); itr != m_vHosts.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_alternateExchangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlternateExchange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_alternateExchange.c_str(), allocator).Move(), allocator);
    }

    if (m_delayedTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelayedType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_delayedType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAMQPExchangeRequest::GetExchange() const
{
    return m_exchange;
}

void CreateAMQPExchangeRequest::SetExchange(const string& _exchange)
{
    m_exchange = _exchange;
    m_exchangeHasBeenSet = true;
}

bool CreateAMQPExchangeRequest::ExchangeHasBeenSet() const
{
    return m_exchangeHasBeenSet;
}

vector<string> CreateAMQPExchangeRequest::GetVHosts() const
{
    return m_vHosts;
}

void CreateAMQPExchangeRequest::SetVHosts(const vector<string>& _vHosts)
{
    m_vHosts = _vHosts;
    m_vHostsHasBeenSet = true;
}

bool CreateAMQPExchangeRequest::VHostsHasBeenSet() const
{
    return m_vHostsHasBeenSet;
}

string CreateAMQPExchangeRequest::GetType() const
{
    return m_type;
}

void CreateAMQPExchangeRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateAMQPExchangeRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateAMQPExchangeRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateAMQPExchangeRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateAMQPExchangeRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateAMQPExchangeRequest::GetRemark() const
{
    return m_remark;
}

void CreateAMQPExchangeRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateAMQPExchangeRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateAMQPExchangeRequest::GetAlternateExchange() const
{
    return m_alternateExchange;
}

void CreateAMQPExchangeRequest::SetAlternateExchange(const string& _alternateExchange)
{
    m_alternateExchange = _alternateExchange;
    m_alternateExchangeHasBeenSet = true;
}

bool CreateAMQPExchangeRequest::AlternateExchangeHasBeenSet() const
{
    return m_alternateExchangeHasBeenSet;
}

string CreateAMQPExchangeRequest::GetDelayedType() const
{
    return m_delayedType;
}

void CreateAMQPExchangeRequest::SetDelayedType(const string& _delayedType)
{
    m_delayedType = _delayedType;
    m_delayedTypeHasBeenSet = true;
}

bool CreateAMQPExchangeRequest::DelayedTypeHasBeenSet() const
{
    return m_delayedTypeHasBeenSet;
}


