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

#include <tencentcloud/waf/v20180125/model/DeleteSessionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DeleteSessionRequest::DeleteSessionRequest() :
    m_domainHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_sessionIDHasBeenSet(false)
{
}

string DeleteSessionRequest::ToJsonString() const
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

    if (m_editionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_edition.c_str(), allocator).Move(), allocator);
    }

    if (m_sessionIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sessionID, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteSessionRequest::GetDomain() const
{
    return m_domain;
}

void DeleteSessionRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DeleteSessionRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DeleteSessionRequest::GetEdition() const
{
    return m_edition;
}

void DeleteSessionRequest::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool DeleteSessionRequest::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

int64_t DeleteSessionRequest::GetSessionID() const
{
    return m_sessionID;
}

void DeleteSessionRequest::SetSessionID(const int64_t& _sessionID)
{
    m_sessionID = _sessionID;
    m_sessionIDHasBeenSet = true;
}

bool DeleteSessionRequest::SessionIDHasBeenSet() const
{
    return m_sessionIDHasBeenSet;
}


