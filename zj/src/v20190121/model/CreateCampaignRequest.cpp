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

#include <tencentcloud/zj/v20190121/model/CreateCampaignRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Zj::V20190121::Model;
using namespace std;

CreateCampaignRequest::CreateCampaignRequest() :
    m_licenseHasBeenSet(false),
    m_sendTimeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_strategiesHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_crowdIDHasBeenSet(false),
    m_smsTypeHasBeenSet(false)
{
}

string CreateCampaignRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_licenseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "License";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_license.c_str(), allocator).Move(), allocator);
    }

    if (m_sendTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sendTime, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_strategiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Strategies";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_strategies.begin(); itr != m_strategies.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_templateId, allocator);
    }

    if (m_crowdIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrowdID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_crowdID, allocator);
    }

    if (m_smsTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SmsType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_smsType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCampaignRequest::GetLicense() const
{
    return m_license;
}

void CreateCampaignRequest::SetLicense(const string& _license)
{
    m_license = _license;
    m_licenseHasBeenSet = true;
}

bool CreateCampaignRequest::LicenseHasBeenSet() const
{
    return m_licenseHasBeenSet;
}

int64_t CreateCampaignRequest::GetSendTime() const
{
    return m_sendTime;
}

void CreateCampaignRequest::SetSendTime(const int64_t& _sendTime)
{
    m_sendTime = _sendTime;
    m_sendTimeHasBeenSet = true;
}

bool CreateCampaignRequest::SendTimeHasBeenSet() const
{
    return m_sendTimeHasBeenSet;
}

string CreateCampaignRequest::GetName() const
{
    return m_name;
}

void CreateCampaignRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateCampaignRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<PaasStrategy> CreateCampaignRequest::GetStrategies() const
{
    return m_strategies;
}

void CreateCampaignRequest::SetStrategies(const vector<PaasStrategy>& _strategies)
{
    m_strategies = _strategies;
    m_strategiesHasBeenSet = true;
}

bool CreateCampaignRequest::StrategiesHasBeenSet() const
{
    return m_strategiesHasBeenSet;
}

int64_t CreateCampaignRequest::GetTemplateId() const
{
    return m_templateId;
}

void CreateCampaignRequest::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool CreateCampaignRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

int64_t CreateCampaignRequest::GetCrowdID() const
{
    return m_crowdID;
}

void CreateCampaignRequest::SetCrowdID(const int64_t& _crowdID)
{
    m_crowdID = _crowdID;
    m_crowdIDHasBeenSet = true;
}

bool CreateCampaignRequest::CrowdIDHasBeenSet() const
{
    return m_crowdIDHasBeenSet;
}

uint64_t CreateCampaignRequest::GetSmsType() const
{
    return m_smsType;
}

void CreateCampaignRequest::SetSmsType(const uint64_t& _smsType)
{
    m_smsType = _smsType;
    m_smsTypeHasBeenSet = true;
}

bool CreateCampaignRequest::SmsTypeHasBeenSet() const
{
    return m_smsTypeHasBeenSet;
}


