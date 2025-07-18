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

#include <tencentcloud/waf/v20180125/model/UpdateProtectionModesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

UpdateProtectionModesRequest::UpdateProtectionModesRequest() :
    m_domainHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_typeIDsHasBeenSet(false),
    m_modeHasBeenSet(false)
{
}

string UpdateProtectionModesRequest::ToJsonString() const
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

    if (m_typeIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TypeIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_typeIDs.begin(); itr != m_typeIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mode, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateProtectionModesRequest::GetDomain() const
{
    return m_domain;
}

void UpdateProtectionModesRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool UpdateProtectionModesRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string UpdateProtectionModesRequest::GetEdition() const
{
    return m_edition;
}

void UpdateProtectionModesRequest::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool UpdateProtectionModesRequest::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

vector<string> UpdateProtectionModesRequest::GetTypeIDs() const
{
    return m_typeIDs;
}

void UpdateProtectionModesRequest::SetTypeIDs(const vector<string>& _typeIDs)
{
    m_typeIDs = _typeIDs;
    m_typeIDsHasBeenSet = true;
}

bool UpdateProtectionModesRequest::TypeIDsHasBeenSet() const
{
    return m_typeIDsHasBeenSet;
}

int64_t UpdateProtectionModesRequest::GetMode() const
{
    return m_mode;
}

void UpdateProtectionModesRequest::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool UpdateProtectionModesRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}


