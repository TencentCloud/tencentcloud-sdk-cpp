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

#include <tencentcloud/workbuddyenterprise/v20260709/model/ExpertCounts.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

ExpertCounts::ExpertCounts() :
    m_builtinHasBeenSet(false),
    m_customHasBeenSet(false),
    m_totalHasBeenSet(false)
{
}

CoreInternalOutcome ExpertCounts::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Builtin") && !value["Builtin"].IsNull())
    {
        if (!value["Builtin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpertCounts.Builtin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_builtin = value["Builtin"].GetInt64();
        m_builtinHasBeenSet = true;
    }

    if (value.HasMember("Custom") && !value["Custom"].IsNull())
    {
        if (!value["Custom"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpertCounts.Custom` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_custom = value["Custom"].GetInt64();
        m_customHasBeenSet = true;
    }

    if (value.HasMember("Total") && !value["Total"].IsNull())
    {
        if (!value["Total"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ExpertCounts.Total` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_total = value["Total"].GetInt64();
        m_totalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExpertCounts::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_builtinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Builtin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_builtin, allocator);
    }

    if (m_customHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Custom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_custom, allocator);
    }

    if (m_totalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Total";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_total, allocator);
    }

}


int64_t ExpertCounts::GetBuiltin() const
{
    return m_builtin;
}

void ExpertCounts::SetBuiltin(const int64_t& _builtin)
{
    m_builtin = _builtin;
    m_builtinHasBeenSet = true;
}

bool ExpertCounts::BuiltinHasBeenSet() const
{
    return m_builtinHasBeenSet;
}

int64_t ExpertCounts::GetCustom() const
{
    return m_custom;
}

void ExpertCounts::SetCustom(const int64_t& _custom)
{
    m_custom = _custom;
    m_customHasBeenSet = true;
}

bool ExpertCounts::CustomHasBeenSet() const
{
    return m_customHasBeenSet;
}

int64_t ExpertCounts::GetTotal() const
{
    return m_total;
}

void ExpertCounts::SetTotal(const int64_t& _total)
{
    m_total = _total;
    m_totalHasBeenSet = true;
}

bool ExpertCounts::TotalHasBeenSet() const
{
    return m_totalHasBeenSet;
}

