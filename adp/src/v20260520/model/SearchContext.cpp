/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/adp/v20260520/model/SearchContext.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

SearchContext::SearchContext() :
    m_callSourceHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_visitorIdHasBeenSet(false)
{
}

CoreInternalOutcome SearchContext::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CallSource") && !value["CallSource"].IsNull())
    {
        if (!value["CallSource"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchContext.CallSource` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_callSource = value["CallSource"].GetInt64();
        m_callSourceHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SearchContext.Domain` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_domain = value["Domain"].GetInt64();
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("VisitorId") && !value["VisitorId"].IsNull())
    {
        if (!value["VisitorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SearchContext.VisitorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_visitorId = string(value["VisitorId"].GetString());
        m_visitorIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SearchContext::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_callSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_callSource, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_domain, allocator);
    }

    if (m_visitorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VisitorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_visitorId.c_str(), allocator).Move(), allocator);
    }

}


int64_t SearchContext::GetCallSource() const
{
    return m_callSource;
}

void SearchContext::SetCallSource(const int64_t& _callSource)
{
    m_callSource = _callSource;
    m_callSourceHasBeenSet = true;
}

bool SearchContext::CallSourceHasBeenSet() const
{
    return m_callSourceHasBeenSet;
}

int64_t SearchContext::GetDomain() const
{
    return m_domain;
}

void SearchContext::SetDomain(const int64_t& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool SearchContext::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string SearchContext::GetVisitorId() const
{
    return m_visitorId;
}

void SearchContext::SetVisitorId(const string& _visitorId)
{
    m_visitorId = _visitorId;
    m_visitorIdHasBeenSet = true;
}

bool SearchContext::VisitorIdHasBeenSet() const
{
    return m_visitorIdHasBeenSet;
}

