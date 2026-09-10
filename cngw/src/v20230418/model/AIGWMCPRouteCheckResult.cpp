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

#include <tencentcloud/cngw/v20230418/model/AIGWMCPRouteCheckResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

AIGWMCPRouteCheckResult::AIGWMCPRouteCheckResult() :
    m_conflictRouteIdHasBeenSet(false),
    m_isConflictHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

CoreInternalOutcome AIGWMCPRouteCheckResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConflictRouteId") && !value["ConflictRouteId"].IsNull())
    {
        if (!value["ConflictRouteId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPRouteCheckResult.ConflictRouteId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_conflictRouteId = string(value["ConflictRouteId"].GetString());
        m_conflictRouteIdHasBeenSet = true;
    }

    if (value.HasMember("IsConflict") && !value["IsConflict"].IsNull())
    {
        if (!value["IsConflict"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPRouteCheckResult.IsConflict` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isConflict = value["IsConflict"].GetBool();
        m_isConflictHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AIGWMCPRouteCheckResult.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AIGWMCPRouteCheckResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_conflictRouteIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConflictRouteId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_conflictRouteId.c_str(), allocator).Move(), allocator);
    }

    if (m_isConflictHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsConflict";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isConflict, allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

}


string AIGWMCPRouteCheckResult::GetConflictRouteId() const
{
    return m_conflictRouteId;
}

void AIGWMCPRouteCheckResult::SetConflictRouteId(const string& _conflictRouteId)
{
    m_conflictRouteId = _conflictRouteId;
    m_conflictRouteIdHasBeenSet = true;
}

bool AIGWMCPRouteCheckResult::ConflictRouteIdHasBeenSet() const
{
    return m_conflictRouteIdHasBeenSet;
}

bool AIGWMCPRouteCheckResult::GetIsConflict() const
{
    return m_isConflict;
}

void AIGWMCPRouteCheckResult::SetIsConflict(const bool& _isConflict)
{
    m_isConflict = _isConflict;
    m_isConflictHasBeenSet = true;
}

bool AIGWMCPRouteCheckResult::IsConflictHasBeenSet() const
{
    return m_isConflictHasBeenSet;
}

string AIGWMCPRouteCheckResult::GetReason() const
{
    return m_reason;
}

void AIGWMCPRouteCheckResult::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool AIGWMCPRouteCheckResult::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

