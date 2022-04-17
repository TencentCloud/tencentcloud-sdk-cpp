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

#include <tencentcloud/waf/v20180125/model/AutoDenyDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

AutoDenyDetail::AutoDenyDetail() :
    m_attackTagsHasBeenSet(false),
    m_attackThresholdHasBeenSet(false),
    m_defenseStatusHasBeenSet(false),
    m_timeThresholdHasBeenSet(false),
    m_denyTimeThresholdHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false)
{
}

CoreInternalOutcome AutoDenyDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AttackTags") && !value["AttackTags"].IsNull())
    {
        if (!value["AttackTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AutoDenyDetail.AttackTags` is not array type"));

        const rapidjson::Value &tmpValue = value["AttackTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_attackTags.push_back((*itr).GetString());
        }
        m_attackTagsHasBeenSet = true;
    }

    if (value.HasMember("AttackThreshold") && !value["AttackThreshold"].IsNull())
    {
        if (!value["AttackThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoDenyDetail.AttackThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_attackThreshold = value["AttackThreshold"].GetInt64();
        m_attackThresholdHasBeenSet = true;
    }

    if (value.HasMember("DefenseStatus") && !value["DefenseStatus"].IsNull())
    {
        if (!value["DefenseStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoDenyDetail.DefenseStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defenseStatus = value["DefenseStatus"].GetInt64();
        m_defenseStatusHasBeenSet = true;
    }

    if (value.HasMember("TimeThreshold") && !value["TimeThreshold"].IsNull())
    {
        if (!value["TimeThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoDenyDetail.TimeThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timeThreshold = value["TimeThreshold"].GetInt64();
        m_timeThresholdHasBeenSet = true;
    }

    if (value.HasMember("DenyTimeThreshold") && !value["DenyTimeThreshold"].IsNull())
    {
        if (!value["DenyTimeThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoDenyDetail.DenyTimeThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_denyTimeThreshold = value["DenyTimeThreshold"].GetInt64();
        m_denyTimeThresholdHasBeenSet = true;
    }

    if (value.HasMember("LastUpdateTime") && !value["LastUpdateTime"].IsNull())
    {
        if (!value["LastUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoDenyDetail.LastUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastUpdateTime = string(value["LastUpdateTime"].GetString());
        m_lastUpdateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoDenyDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_attackTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_attackTags.begin(); itr != m_attackTags.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_attackThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_attackThreshold, allocator);
    }

    if (m_defenseStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefenseStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defenseStatus, allocator);
    }

    if (m_timeThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeThreshold, allocator);
    }

    if (m_denyTimeThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DenyTimeThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_denyTimeThreshold, allocator);
    }

    if (m_lastUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastUpdateTime.c_str(), allocator).Move(), allocator);
    }

}


vector<string> AutoDenyDetail::GetAttackTags() const
{
    return m_attackTags;
}

void AutoDenyDetail::SetAttackTags(const vector<string>& _attackTags)
{
    m_attackTags = _attackTags;
    m_attackTagsHasBeenSet = true;
}

bool AutoDenyDetail::AttackTagsHasBeenSet() const
{
    return m_attackTagsHasBeenSet;
}

int64_t AutoDenyDetail::GetAttackThreshold() const
{
    return m_attackThreshold;
}

void AutoDenyDetail::SetAttackThreshold(const int64_t& _attackThreshold)
{
    m_attackThreshold = _attackThreshold;
    m_attackThresholdHasBeenSet = true;
}

bool AutoDenyDetail::AttackThresholdHasBeenSet() const
{
    return m_attackThresholdHasBeenSet;
}

int64_t AutoDenyDetail::GetDefenseStatus() const
{
    return m_defenseStatus;
}

void AutoDenyDetail::SetDefenseStatus(const int64_t& _defenseStatus)
{
    m_defenseStatus = _defenseStatus;
    m_defenseStatusHasBeenSet = true;
}

bool AutoDenyDetail::DefenseStatusHasBeenSet() const
{
    return m_defenseStatusHasBeenSet;
}

int64_t AutoDenyDetail::GetTimeThreshold() const
{
    return m_timeThreshold;
}

void AutoDenyDetail::SetTimeThreshold(const int64_t& _timeThreshold)
{
    m_timeThreshold = _timeThreshold;
    m_timeThresholdHasBeenSet = true;
}

bool AutoDenyDetail::TimeThresholdHasBeenSet() const
{
    return m_timeThresholdHasBeenSet;
}

int64_t AutoDenyDetail::GetDenyTimeThreshold() const
{
    return m_denyTimeThreshold;
}

void AutoDenyDetail::SetDenyTimeThreshold(const int64_t& _denyTimeThreshold)
{
    m_denyTimeThreshold = _denyTimeThreshold;
    m_denyTimeThresholdHasBeenSet = true;
}

bool AutoDenyDetail::DenyTimeThresholdHasBeenSet() const
{
    return m_denyTimeThresholdHasBeenSet;
}

string AutoDenyDetail::GetLastUpdateTime() const
{
    return m_lastUpdateTime;
}

void AutoDenyDetail::SetLastUpdateTime(const string& _lastUpdateTime)
{
    m_lastUpdateTime = _lastUpdateTime;
    m_lastUpdateTimeHasBeenSet = true;
}

bool AutoDenyDetail::LastUpdateTimeHasBeenSet() const
{
    return m_lastUpdateTimeHasBeenSet;
}

