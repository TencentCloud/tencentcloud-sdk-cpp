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

#include <tencentcloud/cwp/v20180228/model/BaselineInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BaselineInfo::BaselineInfo() :
    m_nameHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_ruleCountHasBeenSet(false),
    m_hostCountHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_categoryIdHasBeenSet(false),
    m_lastScanTimeHasBeenSet(false),
    m_maxStatusHasBeenSet(false),
    m_baselineFailCountHasBeenSet(false)
{
}

CoreInternalOutcome BaselineInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInfo.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("RuleCount") && !value["RuleCount"].IsNull())
    {
        if (!value["RuleCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInfo.RuleCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleCount = value["RuleCount"].GetUint64();
        m_ruleCountHasBeenSet = true;
    }

    if (value.HasMember("HostCount") && !value["HostCount"].IsNull())
    {
        if (!value["HostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInfo.HostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCount = value["HostCount"].GetUint64();
        m_hostCountHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CategoryId") && !value["CategoryId"].IsNull())
    {
        if (!value["CategoryId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInfo.CategoryId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_categoryId = value["CategoryId"].GetUint64();
        m_categoryIdHasBeenSet = true;
    }

    if (value.HasMember("LastScanTime") && !value["LastScanTime"].IsNull())
    {
        if (!value["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInfo.LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(value["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }

    if (value.HasMember("MaxStatus") && !value["MaxStatus"].IsNull())
    {
        if (!value["MaxStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInfo.MaxStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStatus = value["MaxStatus"].GetUint64();
        m_maxStatusHasBeenSet = true;
    }

    if (value.HasMember("BaselineFailCount") && !value["BaselineFailCount"].IsNull())
    {
        if (!value["BaselineFailCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineInfo.BaselineFailCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_baselineFailCount = value["BaselineFailCount"].GetUint64();
        m_baselineFailCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_ruleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleCount, allocator);
    }

    if (m_hostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCount, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_categoryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CategoryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_categoryId, allocator);
    }

    if (m_lastScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_maxStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStatus, allocator);
    }

    if (m_baselineFailCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaselineFailCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_baselineFailCount, allocator);
    }

}


string BaselineInfo::GetName() const
{
    return m_name;
}

void BaselineInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool BaselineInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t BaselineInfo::GetLevel() const
{
    return m_level;
}

void BaselineInfo::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool BaselineInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

uint64_t BaselineInfo::GetRuleCount() const
{
    return m_ruleCount;
}

void BaselineInfo::SetRuleCount(const uint64_t& _ruleCount)
{
    m_ruleCount = _ruleCount;
    m_ruleCountHasBeenSet = true;
}

bool BaselineInfo::RuleCountHasBeenSet() const
{
    return m_ruleCountHasBeenSet;
}

uint64_t BaselineInfo::GetHostCount() const
{
    return m_hostCount;
}

void BaselineInfo::SetHostCount(const uint64_t& _hostCount)
{
    m_hostCount = _hostCount;
    m_hostCountHasBeenSet = true;
}

bool BaselineInfo::HostCountHasBeenSet() const
{
    return m_hostCountHasBeenSet;
}

uint64_t BaselineInfo::GetStatus() const
{
    return m_status;
}

void BaselineInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool BaselineInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t BaselineInfo::GetCategoryId() const
{
    return m_categoryId;
}

void BaselineInfo::SetCategoryId(const uint64_t& _categoryId)
{
    m_categoryId = _categoryId;
    m_categoryIdHasBeenSet = true;
}

bool BaselineInfo::CategoryIdHasBeenSet() const
{
    return m_categoryIdHasBeenSet;
}

string BaselineInfo::GetLastScanTime() const
{
    return m_lastScanTime;
}

void BaselineInfo::SetLastScanTime(const string& _lastScanTime)
{
    m_lastScanTime = _lastScanTime;
    m_lastScanTimeHasBeenSet = true;
}

bool BaselineInfo::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

uint64_t BaselineInfo::GetMaxStatus() const
{
    return m_maxStatus;
}

void BaselineInfo::SetMaxStatus(const uint64_t& _maxStatus)
{
    m_maxStatus = _maxStatus;
    m_maxStatusHasBeenSet = true;
}

bool BaselineInfo::MaxStatusHasBeenSet() const
{
    return m_maxStatusHasBeenSet;
}

uint64_t BaselineInfo::GetBaselineFailCount() const
{
    return m_baselineFailCount;
}

void BaselineInfo::SetBaselineFailCount(const uint64_t& _baselineFailCount)
{
    m_baselineFailCount = _baselineFailCount;
    m_baselineFailCountHasBeenSet = true;
}

bool BaselineInfo::BaselineFailCountHasBeenSet() const
{
    return m_baselineFailCountHasBeenSet;
}

