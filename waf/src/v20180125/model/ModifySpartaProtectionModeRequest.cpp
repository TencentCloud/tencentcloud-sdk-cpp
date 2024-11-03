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

#include <tencentcloud/waf/v20180125/model/ModifySpartaProtectionModeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifySpartaProtectionModeRequest::ModifySpartaProtectionModeRequest() :
    m_domainHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_instanceIDHasBeenSet(false)
{
}

string ModifySpartaProtectionModeRequest::ToJsonString() const
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

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mode, allocator);
    }

    if (m_editionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edition";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_edition.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySpartaProtectionModeRequest::GetDomain() const
{
    return m_domain;
}

void ModifySpartaProtectionModeRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifySpartaProtectionModeRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t ModifySpartaProtectionModeRequest::GetMode() const
{
    return m_mode;
}

void ModifySpartaProtectionModeRequest::SetMode(const uint64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool ModifySpartaProtectionModeRequest::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string ModifySpartaProtectionModeRequest::GetEdition() const
{
    return m_edition;
}

void ModifySpartaProtectionModeRequest::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool ModifySpartaProtectionModeRequest::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

uint64_t ModifySpartaProtectionModeRequest::GetType() const
{
    return m_type;
}

void ModifySpartaProtectionModeRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifySpartaProtectionModeRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ModifySpartaProtectionModeRequest::GetInstanceID() const
{
    return m_instanceID;
}

void ModifySpartaProtectionModeRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool ModifySpartaProtectionModeRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}


