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

#include <tencentcloud/cpdp/v20190820/model/CreateAgentTaxPaymentInfosRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateAgentTaxPaymentInfosRequest::CreateAgentTaxPaymentInfosRequest() :
    m_agentIdHasBeenSet(false),
    m_channelHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_rawElectronicCertUrlHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_agentTaxPaymentInfosHasBeenSet(false),
    m_profileHasBeenSet(false)
{
}

string CreateAgentTaxPaymentInfosRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_agentId.c_str(), allocator).Move(), allocator);
    }

    if (m_channelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Channel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_channel, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_rawElectronicCertUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RawElectronicCertUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_rawElectronicCertUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_agentTaxPaymentInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AgentTaxPaymentInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_agentTaxPaymentInfos.begin(); itr != m_agentTaxPaymentInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_profile.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAgentTaxPaymentInfosRequest::GetAgentId() const
{
    return m_agentId;
}

void CreateAgentTaxPaymentInfosRequest::SetAgentId(const string& _agentId)
{
    m_agentId = _agentId;
    m_agentIdHasBeenSet = true;
}

bool CreateAgentTaxPaymentInfosRequest::AgentIdHasBeenSet() const
{
    return m_agentIdHasBeenSet;
}

int64_t CreateAgentTaxPaymentInfosRequest::GetChannel() const
{
    return m_channel;
}

void CreateAgentTaxPaymentInfosRequest::SetChannel(const int64_t& _channel)
{
    m_channel = _channel;
    m_channelHasBeenSet = true;
}

bool CreateAgentTaxPaymentInfosRequest::ChannelHasBeenSet() const
{
    return m_channelHasBeenSet;
}

int64_t CreateAgentTaxPaymentInfosRequest::GetType() const
{
    return m_type;
}

void CreateAgentTaxPaymentInfosRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateAgentTaxPaymentInfosRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateAgentTaxPaymentInfosRequest::GetRawElectronicCertUrl() const
{
    return m_rawElectronicCertUrl;
}

void CreateAgentTaxPaymentInfosRequest::SetRawElectronicCertUrl(const string& _rawElectronicCertUrl)
{
    m_rawElectronicCertUrl = _rawElectronicCertUrl;
    m_rawElectronicCertUrlHasBeenSet = true;
}

bool CreateAgentTaxPaymentInfosRequest::RawElectronicCertUrlHasBeenSet() const
{
    return m_rawElectronicCertUrlHasBeenSet;
}

string CreateAgentTaxPaymentInfosRequest::GetFileName() const
{
    return m_fileName;
}

void CreateAgentTaxPaymentInfosRequest::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool CreateAgentTaxPaymentInfosRequest::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

vector<AgentTaxPayment> CreateAgentTaxPaymentInfosRequest::GetAgentTaxPaymentInfos() const
{
    return m_agentTaxPaymentInfos;
}

void CreateAgentTaxPaymentInfosRequest::SetAgentTaxPaymentInfos(const vector<AgentTaxPayment>& _agentTaxPaymentInfos)
{
    m_agentTaxPaymentInfos = _agentTaxPaymentInfos;
    m_agentTaxPaymentInfosHasBeenSet = true;
}

bool CreateAgentTaxPaymentInfosRequest::AgentTaxPaymentInfosHasBeenSet() const
{
    return m_agentTaxPaymentInfosHasBeenSet;
}

string CreateAgentTaxPaymentInfosRequest::GetProfile() const
{
    return m_profile;
}

void CreateAgentTaxPaymentInfosRequest::SetProfile(const string& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool CreateAgentTaxPaymentInfosRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}


