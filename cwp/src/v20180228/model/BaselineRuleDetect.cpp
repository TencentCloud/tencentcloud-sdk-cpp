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

#include <tencentcloud/cwp/v20180228/model/BaselineRuleDetect.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

BaselineRuleDetect::BaselineRuleDetect() :
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleDescHasBeenSet(false),
    m_itemCountHasBeenSet(false),
    m_hostCountHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_lastTimeHasBeenSet(false),
    m_detectStatusHasBeenSet(false),
    m_itemIdsHasBeenSet(false)
{
}

CoreInternalOutcome BaselineRuleDetect::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRuleDetect.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRuleDetect.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleDesc") && !value["RuleDesc"].IsNull())
    {
        if (!value["RuleDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRuleDetect.RuleDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleDesc = string(value["RuleDesc"].GetString());
        m_ruleDescHasBeenSet = true;
    }

    if (value.HasMember("ItemCount") && !value["ItemCount"].IsNull())
    {
        if (!value["ItemCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRuleDetect.ItemCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_itemCount = value["ItemCount"].GetInt64();
        m_itemCountHasBeenSet = true;
    }

    if (value.HasMember("HostCount") && !value["HostCount"].IsNull())
    {
        if (!value["HostCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRuleDetect.HostCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCount = value["HostCount"].GetInt64();
        m_hostCountHasBeenSet = true;
    }

    if (value.HasMember("FirstTime") && !value["FirstTime"].IsNull())
    {
        if (!value["FirstTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRuleDetect.FirstTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstTime = string(value["FirstTime"].GetString());
        m_firstTimeHasBeenSet = true;
    }

    if (value.HasMember("LastTime") && !value["LastTime"].IsNull())
    {
        if (!value["LastTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRuleDetect.LastTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTime = string(value["LastTime"].GetString());
        m_lastTimeHasBeenSet = true;
    }

    if (value.HasMember("DetectStatus") && !value["DetectStatus"].IsNull())
    {
        if (!value["DetectStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineRuleDetect.DetectStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_detectStatus = value["DetectStatus"].GetInt64();
        m_detectStatusHasBeenSet = true;
    }

    if (value.HasMember("ItemIds") && !value["ItemIds"].IsNull())
    {
        if (!value["ItemIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineRuleDetect.ItemIds` is not array type"));

        const rapidjson::Value &tmpValue = value["ItemIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_itemIds.push_back((*itr).GetInt64());
        }
        m_itemIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineRuleDetect::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_itemCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_itemCount, allocator);
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

    if (m_detectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetectStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_detectStatus, allocator);
    }

    if (m_itemIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_itemIds.begin(); itr != m_itemIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

}


int64_t BaselineRuleDetect::GetRuleId() const
{
    return m_ruleId;
}

void BaselineRuleDetect::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool BaselineRuleDetect::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string BaselineRuleDetect::GetRuleName() const
{
    return m_ruleName;
}

void BaselineRuleDetect::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool BaselineRuleDetect::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string BaselineRuleDetect::GetRuleDesc() const
{
    return m_ruleDesc;
}

void BaselineRuleDetect::SetRuleDesc(const string& _ruleDesc)
{
    m_ruleDesc = _ruleDesc;
    m_ruleDescHasBeenSet = true;
}

bool BaselineRuleDetect::RuleDescHasBeenSet() const
{
    return m_ruleDescHasBeenSet;
}

int64_t BaselineRuleDetect::GetItemCount() const
{
    return m_itemCount;
}

void BaselineRuleDetect::SetItemCount(const int64_t& _itemCount)
{
    m_itemCount = _itemCount;
    m_itemCountHasBeenSet = true;
}

bool BaselineRuleDetect::ItemCountHasBeenSet() const
{
    return m_itemCountHasBeenSet;
}

int64_t BaselineRuleDetect::GetHostCount() const
{
    return m_hostCount;
}

void BaselineRuleDetect::SetHostCount(const int64_t& _hostCount)
{
    m_hostCount = _hostCount;
    m_hostCountHasBeenSet = true;
}

bool BaselineRuleDetect::HostCountHasBeenSet() const
{
    return m_hostCountHasBeenSet;
}

string BaselineRuleDetect::GetFirstTime() const
{
    return m_firstTime;
}

void BaselineRuleDetect::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool BaselineRuleDetect::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

string BaselineRuleDetect::GetLastTime() const
{
    return m_lastTime;
}

void BaselineRuleDetect::SetLastTime(const string& _lastTime)
{
    m_lastTime = _lastTime;
    m_lastTimeHasBeenSet = true;
}

bool BaselineRuleDetect::LastTimeHasBeenSet() const
{
    return m_lastTimeHasBeenSet;
}

int64_t BaselineRuleDetect::GetDetectStatus() const
{
    return m_detectStatus;
}

void BaselineRuleDetect::SetDetectStatus(const int64_t& _detectStatus)
{
    m_detectStatus = _detectStatus;
    m_detectStatusHasBeenSet = true;
}

bool BaselineRuleDetect::DetectStatusHasBeenSet() const
{
    return m_detectStatusHasBeenSet;
}

vector<int64_t> BaselineRuleDetect::GetItemIds() const
{
    return m_itemIds;
}

void BaselineRuleDetect::SetItemIds(const vector<int64_t>& _itemIds)
{
    m_itemIds = _itemIds;
    m_itemIdsHasBeenSet = true;
}

bool BaselineRuleDetect::ItemIdsHasBeenSet() const
{
    return m_itemIdsHasBeenSet;
}

