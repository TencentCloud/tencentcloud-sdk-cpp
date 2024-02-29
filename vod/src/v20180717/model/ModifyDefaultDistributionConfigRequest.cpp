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

#include <tencentcloud/vod/v20180717/model/ModifyDefaultDistributionConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

ModifyDefaultDistributionConfigRequest::ModifyDefaultDistributionConfigRequest() :
    m_subAppIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_schemeHasBeenSet(false),
    m_playKeyHasBeenSet(false)
{
}

string ModifyDefaultDistributionConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_schemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheme";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scheme.c_str(), allocator).Move(), allocator);
    }

    if (m_playKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlayKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_playKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyDefaultDistributionConfigRequest::GetSubAppId() const
{
    return m_subAppId;
}

void ModifyDefaultDistributionConfigRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool ModifyDefaultDistributionConfigRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string ModifyDefaultDistributionConfigRequest::GetDomain() const
{
    return m_domain;
}

void ModifyDefaultDistributionConfigRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyDefaultDistributionConfigRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ModifyDefaultDistributionConfigRequest::GetScheme() const
{
    return m_scheme;
}

void ModifyDefaultDistributionConfigRequest::SetScheme(const string& _scheme)
{
    m_scheme = _scheme;
    m_schemeHasBeenSet = true;
}

bool ModifyDefaultDistributionConfigRequest::SchemeHasBeenSet() const
{
    return m_schemeHasBeenSet;
}

string ModifyDefaultDistributionConfigRequest::GetPlayKey() const
{
    return m_playKey;
}

void ModifyDefaultDistributionConfigRequest::SetPlayKey(const string& _playKey)
{
    m_playKey = _playKey;
    m_playKeyHasBeenSet = true;
}

bool ModifyDefaultDistributionConfigRequest::PlayKeyHasBeenSet() const
{
    return m_playKeyHasBeenSet;
}


