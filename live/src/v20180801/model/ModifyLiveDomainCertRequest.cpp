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

#include <tencentcloud/live/v20180801/model/ModifyLiveDomainCertRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

ModifyLiveDomainCertRequest::ModifyLiveDomainCertRequest() :
    m_domainNameHasBeenSet(false),
    m_certIdHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string ModifyLiveDomainCertRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domainName.c_str(), allocator).Move(), allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_certId, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLiveDomainCertRequest::GetDomainName() const
{
    return m_domainName;
}

void ModifyLiveDomainCertRequest::SetDomainName(const string& _domainName)
{
    m_domainName = _domainName;
    m_domainNameHasBeenSet = true;
}

bool ModifyLiveDomainCertRequest::DomainNameHasBeenSet() const
{
    return m_domainNameHasBeenSet;
}

int64_t ModifyLiveDomainCertRequest::GetCertId() const
{
    return m_certId;
}

void ModifyLiveDomainCertRequest::SetCertId(const int64_t& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool ModifyLiveDomainCertRequest::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}

int64_t ModifyLiveDomainCertRequest::GetStatus() const
{
    return m_status;
}

void ModifyLiveDomainCertRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyLiveDomainCertRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


