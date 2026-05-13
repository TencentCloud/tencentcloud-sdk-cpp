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

#include <tencentcloud/cfs/v20190719/model/OverrideCfsRulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

OverrideCfsRulesRequest::OverrideCfsRulesRequest() :
    m_permissionGroupIdHasBeenSet(false),
    m_ruleListHasBeenSet(false)
{
}

string OverrideCfsRulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_permissionGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PermissionGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_permissionGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ruleList.begin(); itr != m_ruleList.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string OverrideCfsRulesRequest::GetPermissionGroupId() const
{
    return m_permissionGroupId;
}

void OverrideCfsRulesRequest::SetPermissionGroupId(const string& _permissionGroupId)
{
    m_permissionGroupId = _permissionGroupId;
    m_permissionGroupIdHasBeenSet = true;
}

bool OverrideCfsRulesRequest::PermissionGroupIdHasBeenSet() const
{
    return m_permissionGroupIdHasBeenSet;
}

vector<InputPermissionGroupRules> OverrideCfsRulesRequest::GetRuleList() const
{
    return m_ruleList;
}

void OverrideCfsRulesRequest::SetRuleList(const vector<InputPermissionGroupRules>& _ruleList)
{
    m_ruleList = _ruleList;
    m_ruleListHasBeenSet = true;
}

bool OverrideCfsRulesRequest::RuleListHasBeenSet() const
{
    return m_ruleListHasBeenSet;
}


