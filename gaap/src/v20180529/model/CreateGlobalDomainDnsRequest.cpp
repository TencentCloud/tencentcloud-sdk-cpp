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

#include <tencentcloud/gaap/v20180529/model/CreateGlobalDomainDnsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

CreateGlobalDomainDnsRequest::CreateGlobalDomainDnsRequest() :
    m_domainIdHasBeenSet(false),
    m_proxyIdListHasBeenSet(false),
    m_nationCountryInnerCodesHasBeenSet(false)
{
}

string CreateGlobalDomainDnsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainId.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_proxyIdList.begin(); itr != m_proxyIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_nationCountryInnerCodesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NationCountryInnerCodes";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_nationCountryInnerCodes.begin(); itr != m_nationCountryInnerCodes.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateGlobalDomainDnsRequest::GetDomainId() const
{
    return m_domainId;
}

void CreateGlobalDomainDnsRequest::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool CreateGlobalDomainDnsRequest::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

vector<string> CreateGlobalDomainDnsRequest::GetProxyIdList() const
{
    return m_proxyIdList;
}

void CreateGlobalDomainDnsRequest::SetProxyIdList(const vector<string>& _proxyIdList)
{
    m_proxyIdList = _proxyIdList;
    m_proxyIdListHasBeenSet = true;
}

bool CreateGlobalDomainDnsRequest::ProxyIdListHasBeenSet() const
{
    return m_proxyIdListHasBeenSet;
}

vector<string> CreateGlobalDomainDnsRequest::GetNationCountryInnerCodes() const
{
    return m_nationCountryInnerCodes;
}

void CreateGlobalDomainDnsRequest::SetNationCountryInnerCodes(const vector<string>& _nationCountryInnerCodes)
{
    m_nationCountryInnerCodes = _nationCountryInnerCodes;
    m_nationCountryInnerCodesHasBeenSet = true;
}

bool CreateGlobalDomainDnsRequest::NationCountryInnerCodesHasBeenSet() const
{
    return m_nationCountryInnerCodesHasBeenSet;
}


