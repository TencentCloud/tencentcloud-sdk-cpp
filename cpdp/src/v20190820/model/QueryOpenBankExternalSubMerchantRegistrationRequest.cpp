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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankExternalSubMerchantRegistrationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankExternalSubMerchantRegistrationRequest::QueryOpenBankExternalSubMerchantRegistrationRequest() :
    m_channelMerchantIdHasBeenSet(false),
    m_channelRegistrationNoHasBeenSet(false),
    m_outRegistrationNoHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string QueryOpenBankExternalSubMerchantRegistrationRequest::ToJsonString() const
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

    if (m_channelRegistrationNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelRegistrationNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelRegistrationNo.c_str(), allocator).Move(), allocator);
    }

    if (m_outRegistrationNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutRegistrationNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outRegistrationNo.c_str(), allocator).Move(), allocator);
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


string QueryOpenBankExternalSubMerchantRegistrationRequest::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void QueryOpenBankExternalSubMerchantRegistrationRequest::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantRegistrationRequest::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string QueryOpenBankExternalSubMerchantRegistrationRequest::GetChannelRegistrationNo() const
{
    return m_channelRegistrationNo;
}

void QueryOpenBankExternalSubMerchantRegistrationRequest::SetChannelRegistrationNo(const string& _channelRegistrationNo)
{
    m_channelRegistrationNo = _channelRegistrationNo;
    m_channelRegistrationNoHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantRegistrationRequest::ChannelRegistrationNoHasBeenSet() const
{
    return m_channelRegistrationNoHasBeenSet;
}

string QueryOpenBankExternalSubMerchantRegistrationRequest::GetOutRegistrationNo() const
{
    return m_outRegistrationNo;
}

void QueryOpenBankExternalSubMerchantRegistrationRequest::SetOutRegistrationNo(const string& _outRegistrationNo)
{
    m_outRegistrationNo = _outRegistrationNo;
    m_outRegistrationNoHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantRegistrationRequest::OutRegistrationNoHasBeenSet() const
{
    return m_outRegistrationNoHasBeenSet;
}

string QueryOpenBankExternalSubMerchantRegistrationRequest::GetEnvironment() const
{
    return m_environment;
}

void QueryOpenBankExternalSubMerchantRegistrationRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool QueryOpenBankExternalSubMerchantRegistrationRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


