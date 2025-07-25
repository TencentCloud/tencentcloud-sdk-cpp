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

#include <tencentcloud/dayu/v20180709/model/CreateNewL4RulesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

CreateNewL4RulesRequest::CreateNewL4RulesRequest() :
    m_businessHasBeenSet(false),
    m_idListHasBeenSet(false),
    m_vipListHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
}

string CreateNewL4RulesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_idListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_idList.begin(); itr != m_idList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_vipListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vipList.begin(); itr != m_vipList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rules.begin(); itr != m_rules.end(); ++itr, ++i)
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


string CreateNewL4RulesRequest::GetBusiness() const
{
    return m_business;
}

void CreateNewL4RulesRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool CreateNewL4RulesRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

vector<string> CreateNewL4RulesRequest::GetIdList() const
{
    return m_idList;
}

void CreateNewL4RulesRequest::SetIdList(const vector<string>& _idList)
{
    m_idList = _idList;
    m_idListHasBeenSet = true;
}

bool CreateNewL4RulesRequest::IdListHasBeenSet() const
{
    return m_idListHasBeenSet;
}

vector<string> CreateNewL4RulesRequest::GetVipList() const
{
    return m_vipList;
}

void CreateNewL4RulesRequest::SetVipList(const vector<string>& _vipList)
{
    m_vipList = _vipList;
    m_vipListHasBeenSet = true;
}

bool CreateNewL4RulesRequest::VipListHasBeenSet() const
{
    return m_vipListHasBeenSet;
}

vector<L4RuleEntry> CreateNewL4RulesRequest::GetRules() const
{
    return m_rules;
}

void CreateNewL4RulesRequest::SetRules(const vector<L4RuleEntry>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool CreateNewL4RulesRequest::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}


