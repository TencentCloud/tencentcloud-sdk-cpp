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

#include <tencentcloud/waf/v20180125/model/DescribeBotSceneUCBRuleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DescribeBotSceneUCBRuleRequest::DescribeBotSceneUCBRuleRequest() :
    m_domainHasBeenSet(false),
    m_skipHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_sceneIdHasBeenSet(false),
    m_operateHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_versionFlagHasBeenSet(false),
    m_timerTypeHasBeenSet(false),
    m_validStatusHasBeenSet(false),
    m_ruleIdHasBeenSet(false)
{
}

string DescribeBotSceneUCBRuleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_skipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Skip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_skip, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_sortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Sort";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sort.c_str(), allocator).Move(), allocator);
    }

    if (m_sceneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SceneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sceneId.c_str(), allocator).Move(), allocator);
    }

    if (m_operateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operate";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_operate.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_versionFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_versionFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_timerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimerType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timerType, allocator);
    }

    if (m_validStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValidStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_validStatus, allocator);
    }

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBotSceneUCBRuleRequest::GetDomain() const
{
    return m_domain;
}

void DescribeBotSceneUCBRuleRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DescribeBotSceneUCBRuleRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t DescribeBotSceneUCBRuleRequest::GetSkip() const
{
    return m_skip;
}

void DescribeBotSceneUCBRuleRequest::SetSkip(const uint64_t& _skip)
{
    m_skip = _skip;
    m_skipHasBeenSet = true;
}

bool DescribeBotSceneUCBRuleRequest::SkipHasBeenSet() const
{
    return m_skipHasBeenSet;
}

uint64_t DescribeBotSceneUCBRuleRequest::GetLimit() const
{
    return m_limit;
}

void DescribeBotSceneUCBRuleRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeBotSceneUCBRuleRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeBotSceneUCBRuleRequest::GetSort() const
{
    return m_sort;
}

void DescribeBotSceneUCBRuleRequest::SetSort(const string& _sort)
{
    m_sort = _sort;
    m_sortHasBeenSet = true;
}

bool DescribeBotSceneUCBRuleRequest::SortHasBeenSet() const
{
    return m_sortHasBeenSet;
}

string DescribeBotSceneUCBRuleRequest::GetSceneId() const
{
    return m_sceneId;
}

void DescribeBotSceneUCBRuleRequest::SetSceneId(const string& _sceneId)
{
    m_sceneId = _sceneId;
    m_sceneIdHasBeenSet = true;
}

bool DescribeBotSceneUCBRuleRequest::SceneIdHasBeenSet() const
{
    return m_sceneIdHasBeenSet;
}

string DescribeBotSceneUCBRuleRequest::GetOperate() const
{
    return m_operate;
}

void DescribeBotSceneUCBRuleRequest::SetOperate(const string& _operate)
{
    m_operate = _operate;
    m_operateHasBeenSet = true;
}

bool DescribeBotSceneUCBRuleRequest::OperateHasBeenSet() const
{
    return m_operateHasBeenSet;
}

string DescribeBotSceneUCBRuleRequest::GetName() const
{
    return m_name;
}

void DescribeBotSceneUCBRuleRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribeBotSceneUCBRuleRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DescribeBotSceneUCBRuleRequest::GetVersionFlag() const
{
    return m_versionFlag;
}

void DescribeBotSceneUCBRuleRequest::SetVersionFlag(const string& _versionFlag)
{
    m_versionFlag = _versionFlag;
    m_versionFlagHasBeenSet = true;
}

bool DescribeBotSceneUCBRuleRequest::VersionFlagHasBeenSet() const
{
    return m_versionFlagHasBeenSet;
}

uint64_t DescribeBotSceneUCBRuleRequest::GetTimerType() const
{
    return m_timerType;
}

void DescribeBotSceneUCBRuleRequest::SetTimerType(const uint64_t& _timerType)
{
    m_timerType = _timerType;
    m_timerTypeHasBeenSet = true;
}

bool DescribeBotSceneUCBRuleRequest::TimerTypeHasBeenSet() const
{
    return m_timerTypeHasBeenSet;
}

uint64_t DescribeBotSceneUCBRuleRequest::GetValidStatus() const
{
    return m_validStatus;
}

void DescribeBotSceneUCBRuleRequest::SetValidStatus(const uint64_t& _validStatus)
{
    m_validStatus = _validStatus;
    m_validStatusHasBeenSet = true;
}

bool DescribeBotSceneUCBRuleRequest::ValidStatusHasBeenSet() const
{
    return m_validStatusHasBeenSet;
}

string DescribeBotSceneUCBRuleRequest::GetRuleId() const
{
    return m_ruleId;
}

void DescribeBotSceneUCBRuleRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DescribeBotSceneUCBRuleRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}


