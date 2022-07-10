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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankVerificationOrderRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankVerificationOrderRequest::QueryOpenBankVerificationOrderRequest() :
    m_channelMerchantIdHasBeenSet(false),
    m_channelVerificationIdHasBeenSet(false),
    m_outVerificationIdHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string QueryOpenBankVerificationOrderRequest::ToJsonString() const
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

    if (m_channelVerificationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelVerificationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelVerificationId.c_str(), allocator).Move(), allocator);
    }

    if (m_outVerificationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutVerificationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outVerificationId.c_str(), allocator).Move(), allocator);
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


string QueryOpenBankVerificationOrderRequest::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void QueryOpenBankVerificationOrderRequest::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool QueryOpenBankVerificationOrderRequest::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string QueryOpenBankVerificationOrderRequest::GetChannelVerificationId() const
{
    return m_channelVerificationId;
}

void QueryOpenBankVerificationOrderRequest::SetChannelVerificationId(const string& _channelVerificationId)
{
    m_channelVerificationId = _channelVerificationId;
    m_channelVerificationIdHasBeenSet = true;
}

bool QueryOpenBankVerificationOrderRequest::ChannelVerificationIdHasBeenSet() const
{
    return m_channelVerificationIdHasBeenSet;
}

string QueryOpenBankVerificationOrderRequest::GetOutVerificationId() const
{
    return m_outVerificationId;
}

void QueryOpenBankVerificationOrderRequest::SetOutVerificationId(const string& _outVerificationId)
{
    m_outVerificationId = _outVerificationId;
    m_outVerificationIdHasBeenSet = true;
}

bool QueryOpenBankVerificationOrderRequest::OutVerificationIdHasBeenSet() const
{
    return m_outVerificationIdHasBeenSet;
}

string QueryOpenBankVerificationOrderRequest::GetEnvironment() const
{
    return m_environment;
}

void QueryOpenBankVerificationOrderRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool QueryOpenBankVerificationOrderRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


