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

#include <tencentcloud/cfs/v20190719/model/LifecyclePolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

LifecyclePolicy::LifecyclePolicy() :
    m_createTimeHasBeenSet(false),
    m_lifecyclePolicyIDHasBeenSet(false),
    m_lifecyclePolicyNameHasBeenSet(false),
    m_lifecycleRulesHasBeenSet(false),
    m_pathsHasBeenSet(false)
{
}

CoreInternalOutcome LifecyclePolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecyclePolicy.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LifecyclePolicyID") && !value["LifecyclePolicyID"].IsNull())
    {
        if (!value["LifecyclePolicyID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecyclePolicy.LifecyclePolicyID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifecyclePolicyID = string(value["LifecyclePolicyID"].GetString());
        m_lifecyclePolicyIDHasBeenSet = true;
    }

    if (value.HasMember("LifecyclePolicyName") && !value["LifecyclePolicyName"].IsNull())
    {
        if (!value["LifecyclePolicyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LifecyclePolicy.LifecyclePolicyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifecyclePolicyName = string(value["LifecyclePolicyName"].GetString());
        m_lifecyclePolicyNameHasBeenSet = true;
    }

    if (value.HasMember("LifecycleRules") && !value["LifecycleRules"].IsNull())
    {
        if (!value["LifecycleRules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LifecyclePolicy.LifecycleRules` is not array type"));

        const rapidjson::Value &tmpValue = value["LifecycleRules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LifecycleRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_lifecycleRules.push_back(item);
        }
        m_lifecycleRulesHasBeenSet = true;
    }

    if (value.HasMember("Paths") && !value["Paths"].IsNull())
    {
        if (!value["Paths"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LifecyclePolicy.Paths` is not array type"));

        const rapidjson::Value &tmpValue = value["Paths"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PathInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_paths.push_back(item);
        }
        m_pathsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LifecyclePolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lifecyclePolicyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecyclePolicyID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifecyclePolicyID.c_str(), allocator).Move(), allocator);
    }

    if (m_lifecyclePolicyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecyclePolicyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifecyclePolicyName.c_str(), allocator).Move(), allocator);
    }

    if (m_lifecycleRulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecycleRules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_lifecycleRules.begin(); itr != m_lifecycleRules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_pathsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Paths";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_paths.begin(); itr != m_paths.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string LifecyclePolicy::GetCreateTime() const
{
    return m_createTime;
}

void LifecyclePolicy::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool LifecyclePolicy::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string LifecyclePolicy::GetLifecyclePolicyID() const
{
    return m_lifecyclePolicyID;
}

void LifecyclePolicy::SetLifecyclePolicyID(const string& _lifecyclePolicyID)
{
    m_lifecyclePolicyID = _lifecyclePolicyID;
    m_lifecyclePolicyIDHasBeenSet = true;
}

bool LifecyclePolicy::LifecyclePolicyIDHasBeenSet() const
{
    return m_lifecyclePolicyIDHasBeenSet;
}

string LifecyclePolicy::GetLifecyclePolicyName() const
{
    return m_lifecyclePolicyName;
}

void LifecyclePolicy::SetLifecyclePolicyName(const string& _lifecyclePolicyName)
{
    m_lifecyclePolicyName = _lifecyclePolicyName;
    m_lifecyclePolicyNameHasBeenSet = true;
}

bool LifecyclePolicy::LifecyclePolicyNameHasBeenSet() const
{
    return m_lifecyclePolicyNameHasBeenSet;
}

vector<LifecycleRule> LifecyclePolicy::GetLifecycleRules() const
{
    return m_lifecycleRules;
}

void LifecyclePolicy::SetLifecycleRules(const vector<LifecycleRule>& _lifecycleRules)
{
    m_lifecycleRules = _lifecycleRules;
    m_lifecycleRulesHasBeenSet = true;
}

bool LifecyclePolicy::LifecycleRulesHasBeenSet() const
{
    return m_lifecycleRulesHasBeenSet;
}

vector<PathInfo> LifecyclePolicy::GetPaths() const
{
    return m_paths;
}

void LifecyclePolicy::SetPaths(const vector<PathInfo>& _paths)
{
    m_paths = _paths;
    m_pathsHasBeenSet = true;
}

bool LifecyclePolicy::PathsHasBeenSet() const
{
    return m_pathsHasBeenSet;
}

