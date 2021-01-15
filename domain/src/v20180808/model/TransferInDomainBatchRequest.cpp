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
using namespace rapidjson;
using namespace std;

TransferInDomainBatchRequest::TransferInDomainBatchRequest() :
    m_domainsHasBeenSet(false),
    m_passWordsHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_payModeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_lockTransferHasBeenSet(false)
{
}

string TransferInDomainBatchRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domains";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_domains.begin(); itr != m_domains.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_passWordsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PassWords";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_passWords.begin(); itr != m_passWords.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_templateIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_payModeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PayMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_payMode, allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_lockTransferHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LockTransfer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_lockTransfer, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
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


