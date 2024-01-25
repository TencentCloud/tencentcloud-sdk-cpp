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

#include <tencentcloud/cfw/v20190904/model/AddEnterpriseSecurityGroupRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

AddEnterpriseSecurityGroupRulesRequest::AddEnterpriseSecurityGroupRulesRequest() :
    m_dataHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_isDelayHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_isUseIdHasBeenSet(false)
{
}

string AddEnterpriseSecurityGroupRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_data.begin(); itr != m_data.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_isDelayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDelay";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isDelay, allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_from.c_str(), allocator).Move(), allocator);
    }

    if (m_isUseIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUseId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isUseId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<SecurityGroupRule> AddEnterpriseSecurityGroupRulesRequest::GetData() const
{
    return m_data;
}

void AddEnterpriseSecurityGroupRulesRequest::SetData(const vector<SecurityGroupRule>& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool AddEnterpriseSecurityGroupRulesRequest::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

uint64_t AddEnterpriseSecurityGroupRulesRequest::GetType() const
{
    return m_type;
}

void AddEnterpriseSecurityGroupRulesRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool AddEnterpriseSecurityGroupRulesRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string AddEnterpriseSecurityGroupRulesRequest::GetClientToken() const
{
    return m_clientToken;
}

void AddEnterpriseSecurityGroupRulesRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool AddEnterpriseSecurityGroupRulesRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

uint64_t AddEnterpriseSecurityGroupRulesRequest::GetIsDelay() const
{
    return m_isDelay;
}

void AddEnterpriseSecurityGroupRulesRequest::SetIsDelay(const uint64_t& _isDelay)
{
    m_isDelay = _isDelay;
    m_isDelayHasBeenSet = true;
}

bool AddEnterpriseSecurityGroupRulesRequest::IsDelayHasBeenSet() const
{
    return m_isDelayHasBeenSet;
}

string AddEnterpriseSecurityGroupRulesRequest::GetFrom() const
{
    return m_from;
}

void AddEnterpriseSecurityGroupRulesRequest::SetFrom(const string& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool AddEnterpriseSecurityGroupRulesRequest::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

int64_t AddEnterpriseSecurityGroupRulesRequest::GetIsUseId() const
{
    return m_isUseId;
}

void AddEnterpriseSecurityGroupRulesRequest::SetIsUseId(const int64_t& _isUseId)
{
    m_isUseId = _isUseId;
    m_isUseIdHasBeenSet = true;
}

bool AddEnterpriseSecurityGroupRulesRequest::IsUseIdHasBeenSet() const
{
    return m_isUseIdHasBeenSet;
}


