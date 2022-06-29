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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankRefundOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankRefundOrderRequest::QueryOpenBankRefundOrderRequest() :
    m_channelMerchantIdHasBeenSet(false),
    m_outRefundIdHasBeenSet(false),
    m_channelRefundIdHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string QueryOpenBankRefundOrderRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_outRefundIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutRefundId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outRefundId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelRefundIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelRefundId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelRefundId.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Environment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environment.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string QueryOpenBankRefundOrderRequest::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void QueryOpenBankRefundOrderRequest::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool QueryOpenBankRefundOrderRequest::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string QueryOpenBankRefundOrderRequest::GetOutRefundId() const
{
    return m_outRefundId;
}

void QueryOpenBankRefundOrderRequest::SetOutRefundId(const string& _outRefundId)
{
    m_outRefundId = _outRefundId;
    m_outRefundIdHasBeenSet = true;
}

bool QueryOpenBankRefundOrderRequest::OutRefundIdHasBeenSet() const
{
    return m_outRefundIdHasBeenSet;
}

string QueryOpenBankRefundOrderRequest::GetChannelRefundId() const
{
    return m_channelRefundId;
}

void QueryOpenBankRefundOrderRequest::SetChannelRefundId(const string& _channelRefundId)
{
    m_channelRefundId = _channelRefundId;
    m_channelRefundIdHasBeenSet = true;
}

bool QueryOpenBankRefundOrderRequest::ChannelRefundIdHasBeenSet() const
{
    return m_channelRefundIdHasBeenSet;
}

string QueryOpenBankRefundOrderRequest::GetEnvironment() const
{
    return m_environment;
}

void QueryOpenBankRefundOrderRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool QueryOpenBankRefundOrderRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


