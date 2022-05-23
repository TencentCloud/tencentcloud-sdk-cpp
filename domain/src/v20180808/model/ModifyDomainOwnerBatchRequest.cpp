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

#include <tencentcloud/domain/v20180808/model/ModifyDomainOwnerBatchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

ModifyDomainOwnerBatchRequest::ModifyDomainOwnerBatchRequest() :
    m_domainsHasBeenSet(false),
    m_newOwnerUinHasBeenSet(false),
    m_transferDnsHasBeenSet(false),
    m_newOwnerAppIdHasBeenSet(false)
{
}

string ModifyDomainOwnerBatchRequest::ToJsonString() const
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

    if (m_newOwnerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewOwnerUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newOwnerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_transferDnsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferDns";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_transferDns, allocator);
    }

    if (m_newOwnerAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NewOwnerAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_newOwnerAppId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ModifyDomainOwnerBatchRequest::GetDomains() const
{
    return m_domains;
}

void ModifyDomainOwnerBatchRequest::SetDomains(const vector<string>& _domains)
{
    m_domains = _domains;
    m_domainsHasBeenSet = true;
}

bool ModifyDomainOwnerBatchRequest::DomainsHasBeenSet() const
{
    return m_domainsHasBeenSet;
}

string ModifyDomainOwnerBatchRequest::GetNewOwnerUin() const
{
    return m_newOwnerUin;
}

void ModifyDomainOwnerBatchRequest::SetNewOwnerUin(const string& _newOwnerUin)
{
    m_newOwnerUin = _newOwnerUin;
    m_newOwnerUinHasBeenSet = true;
}

bool ModifyDomainOwnerBatchRequest::NewOwnerUinHasBeenSet() const
{
    return m_newOwnerUinHasBeenSet;
}

bool ModifyDomainOwnerBatchRequest::GetTransferDns() const
{
    return m_transferDns;
}

void ModifyDomainOwnerBatchRequest::SetTransferDns(const bool& _transferDns)
{
    m_transferDns = _transferDns;
    m_transferDnsHasBeenSet = true;
}

bool ModifyDomainOwnerBatchRequest::TransferDnsHasBeenSet() const
{
    return m_transferDnsHasBeenSet;
}

string ModifyDomainOwnerBatchRequest::GetNewOwnerAppId() const
{
    return m_newOwnerAppId;
}

void ModifyDomainOwnerBatchRequest::SetNewOwnerAppId(const string& _newOwnerAppId)
{
    m_newOwnerAppId = _newOwnerAppId;
    m_newOwnerAppIdHasBeenSet = true;
}

bool ModifyDomainOwnerBatchRequest::NewOwnerAppIdHasBeenSet() const
{
    return m_newOwnerAppIdHasBeenSet;
}


