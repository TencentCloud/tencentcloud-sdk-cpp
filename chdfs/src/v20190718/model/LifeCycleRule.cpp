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

#include <tencentcloud/chdfs/v20190718/model/LifeCycleRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chdfs::V20190718::Model;
using namespace std;

LifeCycleRule::LifeCycleRule() :
    m_lifeCycleRuleIdHasBeenSet(false),
    m_lifeCycleRuleNameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_transitionsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome LifeCycleRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LifeCycleRuleId") && !value["LifeCycleRuleId"].IsNull())
    {
        if (!value["LifeCycleRuleId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LifeCycleRule.LifeCycleRuleId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lifeCycleRuleId = value["LifeCycleRuleId"].GetUint64();
        m_lifeCycleRuleIdHasBeenSet = true;
    }

    if (value.HasMember("LifeCycleRuleName") && !value["LifeCycleRuleName"].IsNull())
    {
        if (!value["LifeCycleRuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifeCycleRule.LifeCycleRuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifeCycleRuleName = string(value["LifeCycleRuleName"].GetString());
        m_lifeCycleRuleNameHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifeCycleRule.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Transitions") && !value["Transitions"].IsNull())
    {
        if (!value["Transitions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LifeCycleRule.Transitions` is not array type"));

        const rapidjson::Value &tmpValue = value["Transitions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Transition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_transitions.push_back(item);
        }
        m_transitionsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LifeCycleRule.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifeCycleRule.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LifeCycleRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_lifeCycleRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeCycleRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lifeCycleRuleId, allocator);
    }

    if (m_lifeCycleRuleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeCycleRuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifeCycleRuleName.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_transitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Transitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_transitions.begin(); itr != m_transitions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


uint64_t LifeCycleRule::GetLifeCycleRuleId() const
{
    return m_lifeCycleRuleId;
}

void LifeCycleRule::SetLifeCycleRuleId(const uint64_t& _lifeCycleRuleId)
{
    m_lifeCycleRuleId = _lifeCycleRuleId;
    m_lifeCycleRuleIdHasBeenSet = true;
}

bool LifeCycleRule::LifeCycleRuleIdHasBeenSet() const
{
    return m_lifeCycleRuleIdHasBeenSet;
}

string LifeCycleRule::GetLifeCycleRuleName() const
{
    return m_lifeCycleRuleName;
}

void LifeCycleRule::SetLifeCycleRuleName(const string& _lifeCycleRuleName)
{
    m_lifeCycleRuleName = _lifeCycleRuleName;
    m_lifeCycleRuleNameHasBeenSet = true;
}

bool LifeCycleRule::LifeCycleRuleNameHasBeenSet() const
{
    return m_lifeCycleRuleNameHasBeenSet;
}

string LifeCycleRule::GetPath() const
{
    return m_path;
}

void LifeCycleRule::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool LifeCycleRule::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

vector<Transition> LifeCycleRule::GetTransitions() const
{
    return m_transitions;
}

void LifeCycleRule::SetTransitions(const vector<Transition>& _transitions)
{
    m_transitions = _transitions;
    m_transitionsHasBeenSet = true;
}

bool LifeCycleRule::TransitionsHasBeenSet() const
{
    return m_transitionsHasBeenSet;
}

uint64_t LifeCycleRule::GetStatus() const
{
    return m_status;
}

void LifeCycleRule::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LifeCycleRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string LifeCycleRule::GetCreateTime() const
{
    return m_createTime;
}

void LifeCycleRule::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LifeCycleRule::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

