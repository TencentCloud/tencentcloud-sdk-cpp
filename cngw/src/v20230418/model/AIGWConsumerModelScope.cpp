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

#include <tencentcloud/cngw/v20230418/model/AIGWConsumerModelScope.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWConsumerModelScope::AIGWConsumerModelScope() :
    m_scopeTypeHasBeenSet(false),
    m_allowListHasBeenSet(false)
{
}

CoreInternalOutcome AIGWConsumerModelScope::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ScopeType") && !value["ScopeType"].IsNull())
    {
        if (!value["ScopeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWConsumerModelScope.ScopeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scopeType = string(value["ScopeType"].GetString());
        m_scopeTypeHasBeenSet = true;
    }

    if (value.HasMember("AllowList") && !value["AllowList"].IsNull())
    {
        if (!value["AllowList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWConsumerModelScope.AllowList` is not array type"));

        const rapidjson::Value &tmpValue = value["AllowList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_allowList.push_back((*itr).GetString());
        }
        m_allowListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWConsumerModelScope::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scopeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScopeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scopeType.c_str(), allocator).Move(), allocator);
    }

    if (m_allowListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_allowList.begin(); itr != m_allowList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AIGWConsumerModelScope::GetScopeType() const
{
    return m_scopeType;
}

void AIGWConsumerModelScope::SetScopeType(const string& _scopeType)
{
    m_scopeType = _scopeType;
    m_scopeTypeHasBeenSet = true;
}

bool AIGWConsumerModelScope::ScopeTypeHasBeenSet() const
{
    return m_scopeTypeHasBeenSet;
}

vector<string> AIGWConsumerModelScope::GetAllowList() const
{
    return m_allowList;
}

void AIGWConsumerModelScope::SetAllowList(const vector<string>& _allowList)
{
    m_allowList = _allowList;
    m_allowListHasBeenSet = true;
}

bool AIGWConsumerModelScope::AllowListHasBeenSet() const
{
    return m_allowListHasBeenSet;
}

