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

#include <tencentcloud/cfw/v20190904/model/RuleScopeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

RuleScopeInfo::RuleScopeInfo() :
    m_scopeHasBeenSet(false),
    m_scopeDescHasBeenSet(false)
{
}

CoreInternalOutcome RuleScopeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Scope") && !value["Scope"].IsNull())
    {
        if (!value["Scope"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleScopeInfo.Scope` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scope = string(value["Scope"].GetString());
        m_scopeHasBeenSet = true;
    }

    if (value.HasMember("ScopeDesc") && !value["ScopeDesc"].IsNull())
    {
        if (!value["ScopeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleScopeInfo.ScopeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scopeDesc = string(value["ScopeDesc"].GetString());
        m_scopeDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleScopeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_scopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scope.c_str(), allocator).Move(), allocator);
    }

    if (m_scopeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScopeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scopeDesc.c_str(), allocator).Move(), allocator);
    }

}


string RuleScopeInfo::GetScope() const
{
    return m_scope;
}

void RuleScopeInfo::SetScope(const string& _scope)
{
    m_scope = _scope;
    m_scopeHasBeenSet = true;
}

bool RuleScopeInfo::ScopeHasBeenSet() const
{
    return m_scopeHasBeenSet;
}

string RuleScopeInfo::GetScopeDesc() const
{
    return m_scopeDesc;
}

void RuleScopeInfo::SetScopeDesc(const string& _scopeDesc)
{
    m_scopeDesc = _scopeDesc;
    m_scopeDescHasBeenSet = true;
}

bool RuleScopeInfo::ScopeDescHasBeenSet() const
{
    return m_scopeDescHasBeenSet;
}

