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

#include <tencentcloud/tione/v20211111/model/AuthToken.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

AuthToken::AuthToken() :
    m_baseHasBeenSet(false),
    m_limitsHasBeenSet(false)
{
}

CoreInternalOutcome AuthToken::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Base") && !value["Base"].IsNull())
    {
        if (!value["Base"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AuthToken.Base` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_base.Deserialize(value["Base"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_baseHasBeenSet = true;
    }

    if (value.HasMember("Limits") && !value["Limits"].IsNull())
    {
        if (!value["Limits"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AuthToken.Limits` is not array type"));

        const rapidjson::Value &tmpValue = value["Limits"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AuthTokenLimit item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_limits.push_back(item);
        }
        m_limitsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AuthToken::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_baseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Base";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_base.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_limitsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_limits.begin(); itr != m_limits.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


AuthTokenBase AuthToken::GetBase() const
{
    return m_base;
}

void AuthToken::SetBase(const AuthTokenBase& _base)
{
    m_base = _base;
    m_baseHasBeenSet = true;
}

bool AuthToken::BaseHasBeenSet() const
{
    return m_baseHasBeenSet;
}

vector<AuthTokenLimit> AuthToken::GetLimits() const
{
    return m_limits;
}

void AuthToken::SetLimits(const vector<AuthTokenLimit>& _limits)
{
    m_limits = _limits;
    m_limitsHasBeenSet = true;
}

bool AuthToken::LimitsHasBeenSet() const
{
    return m_limitsHasBeenSet;
}

