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

#include <tencentcloud/domain/v20180808/model/ReservedPreDomainsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

ReservedPreDomainsRequest::ReservedPreDomainsRequest() :
    m_domainListHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_isAutoPayHasBeenSet(false),
    m_isBidAutoPayHasBeenSet(false)
{
}

string ReservedPreDomainsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domainList.begin(); itr != m_domainList.end(); ++itr)
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

    if (m_isAutoPayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAutoPay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isAutoPay, allocator);
    }

    if (m_isBidAutoPayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsBidAutoPay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isBidAutoPay, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> ReservedPreDomainsRequest::GetDomainList() const
{
    return m_domainList;
}

void ReservedPreDomainsRequest::SetDomainList(const vector<string>& _domainList)
{
    m_domainList = _domainList;
    m_domainListHasBeenSet = true;
}

bool ReservedPreDomainsRequest::DomainListHasBeenSet() const
{
    return m_domainListHasBeenSet;
}

string ReservedPreDomainsRequest::GetTemplateId() const
{
    return m_templateId;
}

void ReservedPreDomainsRequest::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ReservedPreDomainsRequest::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

int64_t ReservedPreDomainsRequest::GetIsAutoPay() const
{
    return m_isAutoPay;
}

void ReservedPreDomainsRequest::SetIsAutoPay(const int64_t& _isAutoPay)
{
    m_isAutoPay = _isAutoPay;
    m_isAutoPayHasBeenSet = true;
}

bool ReservedPreDomainsRequest::IsAutoPayHasBeenSet() const
{
    return m_isAutoPayHasBeenSet;
}

int64_t ReservedPreDomainsRequest::GetIsBidAutoPay() const
{
    return m_isBidAutoPay;
}

void ReservedPreDomainsRequest::SetIsBidAutoPay(const int64_t& _isBidAutoPay)
{
    m_isBidAutoPay = _isBidAutoPay;
    m_isBidAutoPayHasBeenSet = true;
}

bool ReservedPreDomainsRequest::IsBidAutoPayHasBeenSet() const
{
    return m_isBidAutoPayHasBeenSet;
}


