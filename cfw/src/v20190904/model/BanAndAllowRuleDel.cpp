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

#include <tencentcloud/cfw/v20190904/model/BanAndAllowRuleDel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

BanAndAllowRuleDel::BanAndAllowRuleDel() :
    m_iocHasBeenSet(false),
    m_directionListHasBeenSet(false),
    m_ruleTypeHasBeenSet(false)
{
}

CoreInternalOutcome BanAndAllowRuleDel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Ioc") && !value["Ioc"].IsNull())
    {
        if (!value["Ioc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BanAndAllowRuleDel.Ioc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ioc = string(value["Ioc"].GetString());
        m_iocHasBeenSet = true;
    }

    if (value.HasMember("DirectionList") && !value["DirectionList"].IsNull())
    {
        if (!value["DirectionList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BanAndAllowRuleDel.DirectionList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_directionList = string(value["DirectionList"].GetString());
        m_directionListHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BanAndAllowRuleDel.RuleType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = value["RuleType"].GetInt64();
        m_ruleTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BanAndAllowRuleDel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iocHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ioc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ioc.c_str(), allocator).Move(), allocator);
    }

    if (m_directionListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DirectionList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_directionList.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleType, allocator);
    }

}


string BanAndAllowRuleDel::GetIoc() const
{
    return m_ioc;
}

void BanAndAllowRuleDel::SetIoc(const string& _ioc)
{
    m_ioc = _ioc;
    m_iocHasBeenSet = true;
}

bool BanAndAllowRuleDel::IocHasBeenSet() const
{
    return m_iocHasBeenSet;
}

string BanAndAllowRuleDel::GetDirectionList() const
{
    return m_directionList;
}

void BanAndAllowRuleDel::SetDirectionList(const string& _directionList)
{
    m_directionList = _directionList;
    m_directionListHasBeenSet = true;
}

bool BanAndAllowRuleDel::DirectionListHasBeenSet() const
{
    return m_directionListHasBeenSet;
}

int64_t BanAndAllowRuleDel::GetRuleType() const
{
    return m_ruleType;
}

void BanAndAllowRuleDel::SetRuleType(const int64_t& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool BanAndAllowRuleDel::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

