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

#include <tencentcloud/domain/v20180808/model/RenewDomainBatchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

RenewDomainBatchRequest::RenewDomainBatchRequest() :
    m_periodHasBeenSet(false),
    m_domainsHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_packageResourceIdHasBeenSet(false),
    m_channelFromHasBeenSet(false),
    m_orderFromHasBeenSet(false),
    m_activityIdHasBeenSet(false)
{
}

string RenewDomainBatchRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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


int64_t RenewDomainBatchRequest::GetPeriod() const
{
    return m_period;
}

void RenewDomainBatchRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool RenewDomainBatchRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

vector<string> RenewDomainBatchRequest::GetDomains() const
{
    return m_domains;
}

void RenewDomainBatchRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool RenewDomainBatchRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

int64_t RenewDomainBatchRequest::GetPayMode() const
{
    return m_payMode;
}

void RenewDomainBatchRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool RenewDomainBatchRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t RenewDomainBatchRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void RenewDomainBatchRequest::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool RenewDomainBatchRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

string RenewDomainBatchRequest::GetPackageResourceId() const
{
    return m_packageResourceId;
}

void RenewDomainBatchRequest::SetPackageResourceId(const string& _packageResourceId)
{
    m_packageResourceId = _packageResourceId;
    m_packageResourceIdHasBeenSet = true;
}

bool RenewDomainBatchRequest::PackageResourceIdHasBeenSet() const
{
    return m_packageResourceIdHasBeenSet;
}

string RenewDomainBatchRequest::GetChannelFrom() const
{
    return m_channelFrom;
}

void RenewDomainBatchRequest::SetChannelFrom(const string& _channelFrom)
{
    m_channelFrom = _channelFrom;
    m_channelFromHasBeenSet = true;
}

bool RenewDomainBatchRequest::ChannelFromHasBeenSet() const
{
    return m_channelFromHasBeenSet;
}

string RenewDomainBatchRequest::GetOrderFrom() const
{
    return m_orderFrom;
}

void RenewDomainBatchRequest::SetOrderFrom(const string& _orderFrom)
{
    m_orderFrom = _orderFrom;
    m_orderFromHasBeenSet = true;
}

bool RenewDomainBatchRequest::OrderFromHasBeenSet() const
{
    return m_orderFromHasBeenSet;
}

string RenewDomainBatchRequest::GetActivityId() const
{
    return m_activityId;
}

void RenewDomainBatchRequest::SetActivityId(const string& _activityId)
{
    m_activityId = _activityId;
    m_activityIdHasBeenSet = true;
}

bool RenewDomainBatchRequest::ActivityIdHasBeenSet() const
{
    return m_activityIdHasBeenSet;
}


