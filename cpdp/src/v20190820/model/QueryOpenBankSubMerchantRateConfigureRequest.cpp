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

#include <tencentcloud/cpdp/v20190820/model/QueryOpenBankSubMerchantRateConfigureRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryOpenBankSubMerchantRateConfigureRequest::QueryOpenBankSubMerchantRateConfigureRequest() :
    m_channelRegistrationNoHasBeenSet(false),
    m_channelMerchantIdHasBeenSet(false),
    m_channelSubMerchantIdHasBeenSet(false),
    m_channelNameHasBeenSet(false),
    m_channelProductFeeNoHasBeenSet(false),
    m_outProductFeeNoHasBeenSet(false),
    m_environmentHasBeenSet(false)
{
}

string QueryOpenBankSubMerchantRateConfigureRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_channelRegistrationNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelRegistrationNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelRegistrationNo.c_str(), allocator).Move(), allocator);
    }

    if (m_channelMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelSubMerchantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelSubMerchantId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelSubMerchantId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelName.c_str(), allocator).Move(), allocator);
    }

    if (m_channelProductFeeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelProductFeeNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelProductFeeNo.c_str(), allocator).Move(), allocator);
    }

    if (m_outProductFeeNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutProductFeeNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_outProductFeeNo.c_str(), allocator).Move(), allocator);
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


string QueryOpenBankSubMerchantRateConfigureRequest::GetChannelRegistrationNo() const
{
    return m_channelRegistrationNo;
}

void QueryOpenBankSubMerchantRateConfigureRequest::SetChannelRegistrationNo(const string& _channelRegistrationNo)
{
    m_channelRegistrationNo = _channelRegistrationNo;
    m_channelRegistrationNoHasBeenSet = true;
}

bool QueryOpenBankSubMerchantRateConfigureRequest::ChannelRegistrationNoHasBeenSet() const
{
    return m_channelRegistrationNoHasBeenSet;
}

string QueryOpenBankSubMerchantRateConfigureRequest::GetChannelMerchantId() const
{
    return m_channelMerchantId;
}

void QueryOpenBankSubMerchantRateConfigureRequest::SetChannelMerchantId(const string& _channelMerchantId)
{
    m_channelMerchantId = _channelMerchantId;
    m_channelMerchantIdHasBeenSet = true;
}

bool QueryOpenBankSubMerchantRateConfigureRequest::ChannelMerchantIdHasBeenSet() const
{
    return m_channelMerchantIdHasBeenSet;
}

string QueryOpenBankSubMerchantRateConfigureRequest::GetChannelSubMerchantId() const
{
    return m_channelSubMerchantId;
}

void QueryOpenBankSubMerchantRateConfigureRequest::SetChannelSubMerchantId(const string& _channelSubMerchantId)
{
    m_channelSubMerchantId = _channelSubMerchantId;
    m_channelSubMerchantIdHasBeenSet = true;
}

bool QueryOpenBankSubMerchantRateConfigureRequest::ChannelSubMerchantIdHasBeenSet() const
{
    return m_channelSubMerchantIdHasBeenSet;
}

string QueryOpenBankSubMerchantRateConfigureRequest::GetChannelName() const
{
    return m_channelName;
}

void QueryOpenBankSubMerchantRateConfigureRequest::SetChannelName(const string& _channelName)
{
    m_channelName = _channelName;
    m_channelNameHasBeenSet = true;
}

bool QueryOpenBankSubMerchantRateConfigureRequest::ChannelNameHasBeenSet() const
{
    return m_channelNameHasBeenSet;
}

string QueryOpenBankSubMerchantRateConfigureRequest::GetChannelProductFeeNo() const
{
    return m_channelProductFeeNo;
}

void QueryOpenBankSubMerchantRateConfigureRequest::SetChannelProductFeeNo(const string& _channelProductFeeNo)
{
    m_channelProductFeeNo = _channelProductFeeNo;
    m_channelProductFeeNoHasBeenSet = true;
}

bool QueryOpenBankSubMerchantRateConfigureRequest::ChannelProductFeeNoHasBeenSet() const
{
    return m_channelProductFeeNoHasBeenSet;
}

string QueryOpenBankSubMerchantRateConfigureRequest::GetOutProductFeeNo() const
{
    return m_outProductFeeNo;
}

void QueryOpenBankSubMerchantRateConfigureRequest::SetOutProductFeeNo(const string& _outProductFeeNo)
{
    m_outProductFeeNo = _outProductFeeNo;
    m_outProductFeeNoHasBeenSet = true;
}

bool QueryOpenBankSubMerchantRateConfigureRequest::OutProductFeeNoHasBeenSet() const
{
    return m_outProductFeeNoHasBeenSet;
}

string QueryOpenBankSubMerchantRateConfigureRequest::GetEnvironment() const
{
    return m_environment;
}

void QueryOpenBankSubMerchantRateConfigureRequest::SetEnvironment(const string& _environment)
{
    m_environment = _environment;
    m_environmentHasBeenSet = true;
}

bool QueryOpenBankSubMerchantRateConfigureRequest::EnvironmentHasBeenSet() const
{
    return m_environmentHasBeenSet;
}


