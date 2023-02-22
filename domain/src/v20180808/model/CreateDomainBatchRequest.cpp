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

#include <tencentcloud/domain/v20180808/model/CreateDomainBatchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

CreateDomainBatchRequest::CreateDomainBatchRequest() :
    m_templateIdHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_packageResourceIdHasBeenSet(false),
    m_updateProhibitionHasBeenSet(false),
    m_transferProhibitionHasBeenSet(false),
    m_channelFromHasBeenSet(false),
    m_orderFromHasBeenSet(false),
    m_activityIdHasBeenSet(false)
{
}

string CreateDomainBatchRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_domainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domains.begin(); itr != m_domains.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_payModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_packageResourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageResourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_updateProhibitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateProhibition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_updateProhibition, allocator);
    }

    if (m_transferProhibitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferProhibition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transferProhibition, allocator);
    }

    if (m_channelFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChannelFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_channelFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_orderFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_activityIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivityId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_activityId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateDomainBatchRequest::GetTemplateId() const
{
    return m_templateId;
}

void CreateDomainBatchRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool CreateDomainBatchRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

int64_t CreateDomainBatchRequest::GetPeriod() const
{
    return m_period;
}

void CreateDomainBatchRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateDomainBatchRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

vector<string> CreateDomainBatchRequest::GetDomains() const
{
    return m_domains;
}

void CreateDomainBatchRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool CreateDomainBatchRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

int64_t CreateDomainBatchRequest::GetPayMode() const
{
    return m_payMode;
}

void CreateDomainBatchRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool CreateDomainBatchRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t CreateDomainBatchRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void CreateDomainBatchRequest::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool CreateDomainBatchRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string CreateDomainBatchRequest::GetPackageResourceId() const
{
    return m_packageResourceId;
}

void CreateDomainBatchRequest::SetPackageResourceId(const string& _packageResourceId)
{
    m_packageResourceId = _packageResourceId;
    m_packageResourceIdHasBeenSet = true;
}

bool CreateDomainBatchRequest::PackageResourceIdHasBeenSet() const
{
    return m_packageResourceIdHasBeenSet;
}

int64_t CreateDomainBatchRequest::GetUpdateProhibition() const
{
    return m_updateProhibition;
}

void CreateDomainBatchRequest::SetUpdateProhibition(const int64_t& _updateProhibition)
{
    m_updateProhibition = _updateProhibition;
    m_updateProhibitionHasBeenSet = true;
}

bool CreateDomainBatchRequest::UpdateProhibitionHasBeenSet() const
{
    return m_updateProhibitionHasBeenSet;
}

int64_t CreateDomainBatchRequest::GetTransferProhibition() const
{
    return m_transferProhibition;
}

void CreateDomainBatchRequest::SetTransferProhibition(const int64_t& _transferProhibition)
{
    m_transferProhibition = _transferProhibition;
    m_transferProhibitionHasBeenSet = true;
}

bool CreateDomainBatchRequest::TransferProhibitionHasBeenSet() const
{
    return m_transferProhibitionHasBeenSet;
}

string CreateDomainBatchRequest::GetChannelFrom() const
{
    return m_channelFrom;
}

void CreateDomainBatchRequest::SetChannelFrom(const string& _channelFrom)
{
    m_channelFrom = _channelFrom;
    m_channelFromHasBeenSet = true;
}

bool CreateDomainBatchRequest::ChannelFromHasBeenSet() const
{
    return m_channelFromHasBeenSet;
}

string CreateDomainBatchRequest::GetOrderFrom() const
{
    return m_orderFrom;
}

void CreateDomainBatchRequest::SetOrderFrom(const string& _orderFrom)
{
    m_orderFrom = _orderFrom;
    m_orderFromHasBeenSet = true;
}

bool CreateDomainBatchRequest::OrderFromHasBeenSet() const
{
    return m_orderFromHasBeenSet;
}

string CreateDomainBatchRequest::GetActivityId() const
{
    return m_activityId;
}

void CreateDomainBatchRequest::SetActivityId(const string& _activityId)
{
    m_activityId = _activityId;
    m_activityIdHasBeenSet = true;
}

bool CreateDomainBatchRequest::ActivityIdHasBeenSet() const
{
    return m_activityIdHasBeenSet;
}


