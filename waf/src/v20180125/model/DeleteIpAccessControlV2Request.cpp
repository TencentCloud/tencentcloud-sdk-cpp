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

#include <tencentcloud/waf/v20180125/model/DeleteIpAccessControlV2Request.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DeleteIpAccessControlV2Request::DeleteIpAccessControlV2Request() :
    m_domainHasBeenSet(false),
    m_ruleIdsHasBeenSet(false),
    m_deleteAllHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_actionTypeHasBeenSet(false)
{
}

string DeleteIpAccessControlV2Request::ToJsonString() const
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

    if (m_ruleIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ruleIds.begin(); itr != m_ruleIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_deleteAllHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteAll";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deleteAll, allocator);
    }

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_actionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_actionType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteIpAccessControlV2Request::GetDomain() const
{
    return m_domain;
}

void DeleteIpAccessControlV2Request::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DeleteIpAccessControlV2Request::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

vector<uint64_t> DeleteIpAccessControlV2Request::GetRuleIds() const
{
    return m_ruleIds;
}

void DeleteIpAccessControlV2Request::SetRuleIds(const vector<uint64_t>& _ruleIds)
{
    m_ruleIds = _ruleIds;
    m_ruleIdsHasBeenSet = true;
}

bool DeleteIpAccessControlV2Request::RuleIdsHasBeenSet() const
{
    return m_ruleIdsHasBeenSet;
}

bool DeleteIpAccessControlV2Request::GetDeleteAll() const
{
    return m_deleteAll;
}

void DeleteIpAccessControlV2Request::SetDeleteAll(const bool& _deleteAll)
{
    m_deleteAll = _deleteAll;
    m_deleteAllHasBeenSet = true;
}

bool DeleteIpAccessControlV2Request::DeleteAllHasBeenSet() const
{
    return m_deleteAllHasBeenSet;
}

string DeleteIpAccessControlV2Request::GetSourceType() const
{
    return m_sourceType;
}

void DeleteIpAccessControlV2Request::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool DeleteIpAccessControlV2Request::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

uint64_t DeleteIpAccessControlV2Request::GetActionType() const
{
    return m_actionType;
}

void DeleteIpAccessControlV2Request::SetActionType(const uint64_t& _actionType)
{
    m_actionType = _actionType;
    m_actionTypeHasBeenSet = true;
}

bool DeleteIpAccessControlV2Request::ActionTypeHasBeenSet() const
{
    return m_actionTypeHasBeenSet;
}


