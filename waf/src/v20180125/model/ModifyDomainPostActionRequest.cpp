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

#include <tencentcloud/waf/v20180125/model/ModifyDomainPostActionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyDomainPostActionRequest::ModifyDomainPostActionRequest() :
    m_domainHasBeenSet(false),
    m_postCLSActionHasBeenSet(false),
    m_postCKafkaActionHasBeenSet(false)
{
}

string ModifyDomainPostActionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_postCLSActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostCLSAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_postCLSAction, allocator);
    }

    if (m_postCKafkaActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PostCKafkaAction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_postCKafkaAction, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyDomainPostActionRequest::GetDomain() const
{
    return m_domain;
}

void ModifyDomainPostActionRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyDomainPostActionRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

int64_t ModifyDomainPostActionRequest::GetPostCLSAction() const
{
    return m_postCLSAction;
}

void ModifyDomainPostActionRequest::SetPostCLSAction(const int64_t& _postCLSAction)
{
    m_postCLSAction = _postCLSAction;
    m_postCLSActionHasBeenSet = true;
}

bool ModifyDomainPostActionRequest::PostCLSActionHasBeenSet() const
{
    return m_postCLSActionHasBeenSet;
}

int64_t ModifyDomainPostActionRequest::GetPostCKafkaAction() const
{
    return m_postCKafkaAction;
}

void ModifyDomainPostActionRequest::SetPostCKafkaAction(const int64_t& _postCKafkaAction)
{
    m_postCKafkaAction = _postCKafkaAction;
    m_postCKafkaActionHasBeenSet = true;
}

bool ModifyDomainPostActionRequest::PostCKafkaActionHasBeenSet() const
{
    return m_postCKafkaActionHasBeenSet;
}


