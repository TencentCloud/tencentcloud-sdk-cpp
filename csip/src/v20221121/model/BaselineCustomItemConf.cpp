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

#include <tencentcloud/csip/v20221121/model/BaselineCustomItemConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

BaselineCustomItemConf::BaselineCustomItemConf() :
    m_ruleIDHasBeenSet(false),
    m_customValueListHasBeenSet(false),
    m_customItemIDHasBeenSet(false)
{
}

CoreInternalOutcome BaselineCustomItemConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineCustomItemConf.RuleID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = value["RuleID"].GetUint64();
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("CustomValueList") && !value["CustomValueList"].IsNull())
    {
        if (!value["CustomValueList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BaselineCustomItemConf.CustomValueList` is not array type"));

        const rapidjson::Value &tmpValue = value["CustomValueList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_customValueList.push_back((*itr).GetString());
        }
        m_customValueListHasBeenSet = true;
    }

    if (value.HasMember("CustomItemID") && !value["CustomItemID"].IsNull())
    {
        if (!value["CustomItemID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BaselineCustomItemConf.CustomItemID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_customItemID = value["CustomItemID"].GetUint64();
        m_customItemIDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BaselineCustomItemConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleID, allocator);
    }

    if (m_customValueListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomValueList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_customValueList.begin(); itr != m_customValueList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_customItemIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomItemID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_customItemID, allocator);
    }

}


uint64_t BaselineCustomItemConf::GetRuleID() const
{
    return m_ruleID;
}

void BaselineCustomItemConf::SetRuleID(const uint64_t& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool BaselineCustomItemConf::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

vector<string> BaselineCustomItemConf::GetCustomValueList() const
{
    return m_customValueList;
}

void BaselineCustomItemConf::SetCustomValueList(const vector<string>& _customValueList)
{
    m_customValueList = _customValueList;
    m_customValueListHasBeenSet = true;
}

bool BaselineCustomItemConf::CustomValueListHasBeenSet() const
{
    return m_customValueListHasBeenSet;
}

uint64_t BaselineCustomItemConf::GetCustomItemID() const
{
    return m_customItemID;
}

void BaselineCustomItemConf::SetCustomItemID(const uint64_t& _customItemID)
{
    m_customItemID = _customItemID;
    m_customItemIDHasBeenSet = true;
}

bool BaselineCustomItemConf::CustomItemIDHasBeenSet() const
{
    return m_customItemIDHasBeenSet;
}

