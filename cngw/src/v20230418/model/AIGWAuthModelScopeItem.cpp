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

#include <tencentcloud/cngw/v20230418/model/AIGWAuthModelScopeItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWAuthModelScopeItem::AIGWAuthModelScopeItem() :
    m_principalIdHasBeenSet(false),
    m_principalNameHasBeenSet(false),
    m_modelScopeHasBeenSet(false),
    m_effectiveModelNamesHasBeenSet(false)
{
}

CoreInternalOutcome AIGWAuthModelScopeItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PrincipalId") && !value["PrincipalId"].IsNull())
    {
        if (!value["PrincipalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWAuthModelScopeItem.PrincipalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_principalId = string(value["PrincipalId"].GetString());
        m_principalIdHasBeenSet = true;
    }

    if (value.HasMember("PrincipalName") && !value["PrincipalName"].IsNull())
    {
        if (!value["PrincipalName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWAuthModelScopeItem.PrincipalName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_principalName = string(value["PrincipalName"].GetString());
        m_principalNameHasBeenSet = true;
    }

    if (value.HasMember("ModelScope") && !value["ModelScope"].IsNull())
    {
        if (!value["ModelScope"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWAuthModelScopeItem.ModelScope` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_modelScope.Deserialize(value["ModelScope"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_modelScopeHasBeenSet = true;
    }

    if (value.HasMember("EffectiveModelNames") && !value["EffectiveModelNames"].IsNull())
    {
        if (!value["EffectiveModelNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AIGWAuthModelScopeItem.EffectiveModelNames` is not array type"));

        const rapidjson::Value &tmpValue = value["EffectiveModelNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_effectiveModelNames.push_back((*itr).GetString());
        }
        m_effectiveModelNamesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWAuthModelScopeItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_principalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrincipalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_principalId.c_str(), allocator).Move(), allocator);
    }

    if (m_principalNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrincipalName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_principalName.c_str(), allocator).Move(), allocator);
    }

    if (m_modelScopeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelScope";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_modelScope.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_effectiveModelNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveModelNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_effectiveModelNames.begin(); itr != m_effectiveModelNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string AIGWAuthModelScopeItem::GetPrincipalId() const
{
    return m_principalId;
}

void AIGWAuthModelScopeItem::SetPrincipalId(const string& _principalId)
{
    m_principalId = _principalId;
    m_principalIdHasBeenSet = true;
}

bool AIGWAuthModelScopeItem::PrincipalIdHasBeenSet() const
{
    return m_principalIdHasBeenSet;
}

string AIGWAuthModelScopeItem::GetPrincipalName() const
{
    return m_principalName;
}

void AIGWAuthModelScopeItem::SetPrincipalName(const string& _principalName)
{
    m_principalName = _principalName;
    m_principalNameHasBeenSet = true;
}

bool AIGWAuthModelScopeItem::PrincipalNameHasBeenSet() const
{
    return m_principalNameHasBeenSet;
}

AIGWModelScope AIGWAuthModelScopeItem::GetModelScope() const
{
    return m_modelScope;
}

void AIGWAuthModelScopeItem::SetModelScope(const AIGWModelScope& _modelScope)
{
    m_modelScope = _modelScope;
    m_modelScopeHasBeenSet = true;
}

bool AIGWAuthModelScopeItem::ModelScopeHasBeenSet() const
{
    return m_modelScopeHasBeenSet;
}

vector<string> AIGWAuthModelScopeItem::GetEffectiveModelNames() const
{
    return m_effectiveModelNames;
}

void AIGWAuthModelScopeItem::SetEffectiveModelNames(const vector<string>& _effectiveModelNames)
{
    m_effectiveModelNames = _effectiveModelNames;
    m_effectiveModelNamesHasBeenSet = true;
}

bool AIGWAuthModelScopeItem::EffectiveModelNamesHasBeenSet() const
{
    return m_effectiveModelNamesHasBeenSet;
}

