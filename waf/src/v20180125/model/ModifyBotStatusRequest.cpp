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

#include <tencentcloud/waf/v20180125/model/ModifyBotStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

ModifyBotStatusRequest::ModifyBotStatusRequest() :
    m_categoryHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_instanceIDHasBeenSet(false),
    m_isVersionFourHasBeenSet(false),
    m_botVersionHasBeenSet(false),
    m_domainListHasBeenSet(false)
{
}

string ModifyBotStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_isVersionFourHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsVersionFour";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isVersionFour, allocator);
    }

    if (m_botVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_botVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_domainListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_domainList.begin(); itr != m_domainList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyBotStatusRequest::GetCategory() const
{
    return m_category;
}

void ModifyBotStatusRequest::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool ModifyBotStatusRequest::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string ModifyBotStatusRequest::GetStatus() const
{
    return m_status;
}

void ModifyBotStatusRequest::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ModifyBotStatusRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ModifyBotStatusRequest::GetDomain() const
{
    return m_domain;
}

void ModifyBotStatusRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool ModifyBotStatusRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string ModifyBotStatusRequest::GetInstanceID() const
{
    return m_instanceID;
}

void ModifyBotStatusRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool ModifyBotStatusRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

bool ModifyBotStatusRequest::GetIsVersionFour() const
{
    return m_isVersionFour;
}

void ModifyBotStatusRequest::SetIsVersionFour(const bool& _isVersionFour)
{
    m_isVersionFour = _isVersionFour;
    m_isVersionFourHasBeenSet = true;
}

bool ModifyBotStatusRequest::IsVersionFourHasBeenSet() const
{
    return m_isVersionFourHasBeenSet;
}

string ModifyBotStatusRequest::GetBotVersion() const
{
    return m_botVersion;
}

void ModifyBotStatusRequest::SetBotVersion(const string& _botVersion)
{
    m_botVersion = _botVersion;
    m_botVersionHasBeenSet = true;
}

bool ModifyBotStatusRequest::BotVersionHasBeenSet() const
{
    return m_botVersionHasBeenSet;
}

vector<string> ModifyBotStatusRequest::GetDomainList() const
{
    return m_domainList;
}

void ModifyBotStatusRequest::SetDomainList(const vector<string>& _domainList)
{
    m_domainList = _domainList;
    m_domainListHasBeenSet = true;
}

bool ModifyBotStatusRequest::DomainListHasBeenSet() const
{
    return m_domainListHasBeenSet;
}


