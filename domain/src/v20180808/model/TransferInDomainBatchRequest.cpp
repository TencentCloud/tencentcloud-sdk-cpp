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

#include <tencentcloud/domain/v20180808/model/TransferInDomainBatchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

TransferInDomainBatchRequest::TransferInDomainBatchRequest() :
    m_domainsHasBeenSet(false),
    m_passWordsHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_lockTransferHasBeenSet(false),
    m_updateProhibitionHasBeenSet(false),
    m_transferProhibitionHasBeenSet(false),
    m_channelFromHasBeenSet(false),
    m_orderFromHasBeenSet(false),
    m_activityIdHasBeenSet(false)
{
}

string TransferInDomainBatchRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_passWordsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassWords";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_passWords.begin(); itr != m_passWords.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
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

    if (m_lockTransferHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LockTransfer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lockTransfer, allocator);
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


vector<string> TransferInDomainBatchRequest::GetDomains() const
{
    return m_domains;
}

void TransferInDomainBatchRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool TransferInDomainBatchRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

vector<string> TransferInDomainBatchRequest::GetPassWords() const
{
    return m_passWords;
}

void TransferInDomainBatchRequest::SetPassWords(const vector<string>& _passWords)
{
    m_passWords = _passWords;
    m_passWordsHasBeenSet = true;
}

bool TransferInDomainBatchRequest::PassWordsHasBeenSet() const
{
    return m_passWordsHasBeenSet;
}

string TransferInDomainBatchRequest::GetTemplateId() const
{
    return m_templateId;
}

void TransferInDomainBatchRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool TransferInDomainBatchRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

int64_t TransferInDomainBatchRequest::GetPayMode() const
{
    return m_payMode;
}

void TransferInDomainBatchRequest::SetPayMode(const int64_t& _payMode)
{
    m_payMode = _payMode;
    m_payModeHasBeenSet = true;
}

bool TransferInDomainBatchRequest::PayModeHasBeenSet() const
{
    return m_payModeHasBeenSet;
}

int64_t TransferInDomainBatchRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void TransferInDomainBatchRequest::SetAutoRenewFlag(const int64_t& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool TransferInDomainBatchRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

bool TransferInDomainBatchRequest::GetLockTransfer() const
{
    return m_lockTransfer;
}

void TransferInDomainBatchRequest::SetLockTransfer(const bool& _lockTransfer)
{
    m_lockTransfer = _lockTransfer;
    m_lockTransferHasBeenSet = true;
}

bool TransferInDomainBatchRequest::LockTransferHasBeenSet() const
{
    return m_lockTransferHasBeenSet;
}

int64_t TransferInDomainBatchRequest::GetUpdateProhibition() const
{
    return m_updateProhibition;
}

void TransferInDomainBatchRequest::SetUpdateProhibition(const int64_t& _updateProhibition)
{
    m_updateProhibition = _updateProhibition;
    m_updateProhibitionHasBeenSet = true;
}

bool TransferInDomainBatchRequest::UpdateProhibitionHasBeenSet() const
{
    return m_updateProhibitionHasBeenSet;
}

int64_t TransferInDomainBatchRequest::GetTransferProhibition() const
{
    return m_transferProhibition;
}

void TransferInDomainBatchRequest::SetTransferProhibition(const int64_t& _transferProhibition)
{
    m_transferProhibition = _transferProhibition;
    m_transferProhibitionHasBeenSet = true;
}

bool TransferInDomainBatchRequest::TransferProhibitionHasBeenSet() const
{
    return m_transferProhibitionHasBeenSet;
}

string TransferInDomainBatchRequest::GetChannelFrom() const
{
    return m_channelFrom;
}

void TransferInDomainBatchRequest::SetChannelFrom(const string& _channelFrom)
{
    m_channelFrom = _channelFrom;
    m_channelFromHasBeenSet = true;
}

bool TransferInDomainBatchRequest::ChannelFromHasBeenSet() const
{
    return m_channelFromHasBeenSet;
}

string TransferInDomainBatchRequest::GetOrderFrom() const
{
    return m_orderFrom;
}

void TransferInDomainBatchRequest::SetOrderFrom(const string& _orderFrom)
{
    m_orderFrom = _orderFrom;
    m_orderFromHasBeenSet = true;
}

bool TransferInDomainBatchRequest::OrderFromHasBeenSet() const
{
    return m_orderFromHasBeenSet;
}

string TransferInDomainBatchRequest::GetActivityId() const
{
    return m_activityId;
}

void TransferInDomainBatchRequest::SetActivityId(const string& _activityId)
{
    m_activityId = _activityId;
    m_activityIdHasBeenSet = true;
}

bool TransferInDomainBatchRequest::ActivityIdHasBeenSet() const
{
    return m_activityIdHasBeenSet;
}


