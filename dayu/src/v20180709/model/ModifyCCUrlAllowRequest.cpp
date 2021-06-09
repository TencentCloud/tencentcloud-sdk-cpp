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

#include <tencentcloud/dayu/v20180709/model/ModifyCCUrlAllowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

ModifyCCUrlAllowRequest::ModifyCCUrlAllowRequest() :
    m_businessHasBeenSet(false),
    m_idHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_urlListHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

string ModifyCCUrlAllowRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_urlListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_urlList.begin(); itr != m_urlList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCCUrlAllowRequest::GetBusiness() const
{
    return m_business;
}

void ModifyCCUrlAllowRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool ModifyCCUrlAllowRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

string ModifyCCUrlAllowRequest::GetId() const
{
    return m_id;
}

void ModifyCCUrlAllowRequest::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyCCUrlAllowRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyCCUrlAllowRequest::GetMethod() const
{
    return m_method;
}

void ModifyCCUrlAllowRequest::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool ModifyCCUrlAllowRequest::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string ModifyCCUrlAllowRequest::GetType() const
{
    return m_type;
}

void ModifyCCUrlAllowRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyCCUrlAllowRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<string> ModifyCCUrlAllowRequest::GetUrlList() const
{
    return m_urlList;
}

void ModifyCCUrlAllowRequest::SetUrlList(const vector<string>& _urlList)
{
    m_urlList = _urlList;
    m_urlListHasBeenSet = true;
}

bool ModifyCCUrlAllowRequest::UrlListHasBeenSet() const
{
    return m_urlListHasBeenSet;
}

string ModifyCCUrlAllowRequest::GetProtocol() const
{
    return m_protocol;
}

void ModifyCCUrlAllowRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool ModifyCCUrlAllowRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string ModifyCCUrlAllowRequest::GetDomain() const
{
    return m_domain;
}

void ModifyCCUrlAllowRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyCCUrlAllowRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ModifyCCUrlAllowRequest::GetRuleId() const
{
    return m_ruleId;
}

void ModifyCCUrlAllowRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ModifyCCUrlAllowRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}


