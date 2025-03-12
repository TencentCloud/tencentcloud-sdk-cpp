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

#include <tencentcloud/waf/v20180125/model/ModifyUserSignatureClassRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyUserSignatureClassRequest::ModifyUserSignatureClassRequest() :
    m_domainHasBeenSet(false),
    m_typeIDHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

string ModifyUserSignatureClassRequest::ToJsonString() const
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

    if (m_typeIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_typeID.c_str(), allocator).Move(), allocator);
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


string ModifyUserSignatureClassRequest::GetDomain() const
{
    return m_domain;
}

void ModifyUserSignatureClassRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyUserSignatureClassRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ModifyUserSignatureClassRequest::GetTypeID() const
{
    return m_typeID;
}

void ModifyUserSignatureClassRequest::SetTypeID(const string& _typeID)
{
    m_typeID = _typeID;
    m_typeIDHasBeenSet = true;
}

bool ModifyUserSignatureClassRequest::TypeIDHasBeenSet() const
{
    return m_typeIDHasBeenSet;
}

int64_t ModifyUserSignatureClassRequest::GetStatus() const
{
    return m_status;
}

void ModifyUserSignatureClassRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyUserSignatureClassRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}


