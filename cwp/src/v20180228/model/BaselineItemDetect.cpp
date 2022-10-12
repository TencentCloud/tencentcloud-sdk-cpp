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

#include <tencentcloud/cwp/v20180228/model/BaselineItemDetect.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BaselineItemDetect::BaselineItemDetect() :
    m_itemIdHasBeenSet(false),
    m_itemNameHasBeenSet(false),
    m_itemDescHasBeenSet(false),
    m_fixMethodHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_detectStatusHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_hostCountHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_lastTimeHasBeenSet(false),
    m_detectResultHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_passedHostCountHasBeenSet(false),
    m_notPassedHostCountHasBeenSet(false)
{
}

CoreInternalOutcome BaselineItemDetect::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemId") && !value["ItemId"].IsNull())
    {
        if (!value["ItemId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemDetect.ItemId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_itemId = value["ItemId"].GetInt64();
        m_itemIdHasBeenSet = true;
    }

    if (value.HasMember("ItemName") && !value["ItemName"].IsNull())
    {
        if (!value["ItemName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemDetect.ItemName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemName = string(value["ItemName"].GetString());
        m_itemNameHasBeenSet = true;
    }

    if (value.HasMember("ItemDesc") && !value["ItemDesc"].IsNull())
    {
        if (!value["ItemDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemDetect.ItemDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemDesc = string(value["ItemDesc"].GetString());
        m_itemDescHasBeenSet = true;
    }

    if (value.HasMember("FixMethod") && !value["FixMethod"].IsNull())
    {
        if (!value["FixMethod"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemDetect.FixMethod` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixMethod = string(value["FixMethod"].GetString());
        m_fixMethodHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemDetect.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("DetectStatus") && !value["DetectStatus"].IsNull())
    {
        if (!value["DetectStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemDetect.DetectStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_detectStatus = value["DetectStatus"].GetInt64();
        m_detectStatusHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemDetect.Level` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetInt64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("HostCount") && !value["HostCount"].IsNull())
    {
        if (!value["HostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemDetect.HostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCount = value["HostCount"].GetInt64();
        m_hostCountHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemDetect.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("LastTime") && !value["LastTime"].IsNull())
    {
        if (!value["LastTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemDetect.LastTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTime = string(value["LastTime"].GetString());
        m_lastTimeHasBeenSet = true;
    }

    if (value.HasMember("DetectResult") && !value["DetectResult"].IsNull())
    {
        if (!value["DetectResult"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemDetect.DetectResult` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_detectResult = string(value["DetectResult"].GetString());
        m_detectResultHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemDetect.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("PassedHostCount") && !value["PassedHostCount"].IsNull())
    {
        if (!value["PassedHostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemDetect.PassedHostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_passedHostCount = value["PassedHostCount"].GetInt64();
        m_passedHostCountHasBeenSet = true;
    }

    if (value.HasMember("NotPassedHostCount") && !value["NotPassedHostCount"].IsNull())
    {
        if (!value["NotPassedHostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineItemDetect.NotPassedHostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_notPassedHostCount = value["NotPassedHostCount"].GetInt64();
        m_notPassedHostCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineItemDetect::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_itemId, allocator);
    }

    if (m_itemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemName.c_str(), allocator).Move(), allocator);
    }

    if (m_itemDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_fixMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixMethod.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_detectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detectStatus, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_hostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCount, allocator);
    }

    if (m_firstTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTime.c_str(), allocator).Move(), allocator);
    }

    if (m_detectResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_detectResult.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_passedHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PassedHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_passedHostCount, allocator);
    }

    if (m_notPassedHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotPassedHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notPassedHostCount, allocator);
    }

}


int64_t BaselineItemDetect::GetItemId() const
{
    return m_itemId;
}

void BaselineItemDetect::SetItemId(const int64_t& _itemId)
{
    m_itemId = _itemId;
    m_itemIdHasBeenSet = true;
}

bool BaselineItemDetect::ItemIdHasBeenSet() const
{
    return m_itemIdHasBeenSet;
}

string BaselineItemDetect::GetItemName() const
{
    return m_itemName;
}

void BaselineItemDetect::SetItemName(const string& _itemName)
{
    m_itemName = _itemName;
    m_itemNameHasBeenSet = true;
}

bool BaselineItemDetect::ItemNameHasBeenSet() const
{
    return m_itemNameHasBeenSet;
}

string BaselineItemDetect::GetItemDesc() const
{
    return m_itemDesc;
}

void BaselineItemDetect::SetItemDesc(const string& _itemDesc)
{
    m_itemDesc = _itemDesc;
    m_itemDescHasBeenSet = true;
}

bool BaselineItemDetect::ItemDescHasBeenSet() const
{
    return m_itemDescHasBeenSet;
}

string BaselineItemDetect::GetFixMethod() const
{
    return m_fixMethod;
}

void BaselineItemDetect::SetFixMethod(const string& _fixMethod)
{
    m_fixMethod = _fixMethod;
    m_fixMethodHasBeenSet = true;
}

bool BaselineItemDetect::FixMethodHasBeenSet() const
{
    return m_fixMethodHasBeenSet;
}

string BaselineItemDetect::GetRuleName() const
{
    return m_ruleName;
}

void BaselineItemDetect::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool BaselineItemDetect::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

int64_t BaselineItemDetect::GetDetectStatus() const
{
    return m_detectStatus;
}

void BaselineItemDetect::SetDetectStatus(const int64_t& _detectStatus)
{
    m_detectStatus = _detectStatus;
    m_detectStatusHasBeenSet = true;
}

bool BaselineItemDetect::DetectStatusHasBeenSet() const
{
    return m_detectStatusHasBeenSet;
}

int64_t BaselineItemDetect::GetLevel() const
{
    return m_level;
}

void BaselineItemDetect::SetLevel(const int64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool BaselineItemDetect::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

int64_t BaselineItemDetect::GetHostCount() const
{
    return m_hostCount;
}

void BaselineItemDetect::SetHostCount(const int64_t& _hostCount)
{
    m_hostCount = _hostCount;
    m_hostCountHasBeenSet = true;
}

bool BaselineItemDetect::HostCountHasBeenSet() const
{
    return m_hostCountHasBeenSet;
}

string BaselineItemDetect::GetFirstTime() const
{
    return m_firstTime;
}

void BaselineItemDetect::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool BaselineItemDetect::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

string BaselineItemDetect::GetLastTime() const
{
    return m_lastTime;
}

void BaselineItemDetect::SetLastTime(const string& _lastTime)
{
    m_lastTime = _lastTime;
    m_lastTimeHasBeenSet = true;
}

bool BaselineItemDetect::LastTimeHasBeenSet() const
{
    return m_lastTimeHasBeenSet;
}

string BaselineItemDetect::GetDetectResult() const
{
    return m_detectResult;
}

void BaselineItemDetect::SetDetectResult(const string& _detectResult)
{
    m_detectResult = _detectResult;
    m_detectResultHasBeenSet = true;
}

bool BaselineItemDetect::DetectResultHasBeenSet() const
{
    return m_detectResultHasBeenSet;
}

int64_t BaselineItemDetect::GetRuleId() const
{
    return m_ruleId;
}

void BaselineItemDetect::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool BaselineItemDetect::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

int64_t BaselineItemDetect::GetPassedHostCount() const
{
    return m_passedHostCount;
}

void BaselineItemDetect::SetPassedHostCount(const int64_t& _passedHostCount)
{
    m_passedHostCount = _passedHostCount;
    m_passedHostCountHasBeenSet = true;
}

bool BaselineItemDetect::PassedHostCountHasBeenSet() const
{
    return m_passedHostCountHasBeenSet;
}

int64_t BaselineItemDetect::GetNotPassedHostCount() const
{
    return m_notPassedHostCount;
}

void BaselineItemDetect::SetNotPassedHostCount(const int64_t& _notPassedHostCount)
{
    m_notPassedHostCount = _notPassedHostCount;
    m_notPassedHostCountHasBeenSet = true;
}

bool BaselineItemDetect::NotPassedHostCountHasBeenSet() const
{
    return m_notPassedHostCountHasBeenSet;
}

