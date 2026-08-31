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

#include <tencentcloud/thpc/v20230321/model/ExpansionPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

ExpansionPolicy::ExpansionPolicy() :
    m_expansionModeHasBeenSet(false),
    m_launchTemplateIdsHasBeenSet(false),
    m_referenceInstanceIdHasBeenSet(false),
    m_templateOverridesHasBeenSet(false),
    m_expansionPriorityHasBeenSet(false)
{
}

CoreInternalOutcome ExpansionPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExpansionMode") && !value["ExpansionMode"].IsNull())
    {
        if (!value["ExpansionMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpansionPolicy.ExpansionMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expansionMode = string(value["ExpansionMode"].GetString());
        m_expansionModeHasBeenSet = true;
    }

    if (value.HasMember("LaunchTemplateIds") && !value["LaunchTemplateIds"].IsNull())
    {
        if (!value["LaunchTemplateIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ExpansionPolicy.LaunchTemplateIds` is not array type"));

        const rapidjson::Value &tmpValue = value["LaunchTemplateIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_launchTemplateIds.push_back((*itr).GetString());
        }
        m_launchTemplateIdsHasBeenSet = true;
    }

    if (value.HasMember("ReferenceInstanceId") && !value["ReferenceInstanceId"].IsNull())
    {
        if (!value["ReferenceInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpansionPolicy.ReferenceInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_referenceInstanceId = string(value["ReferenceInstanceId"].GetString());
        m_referenceInstanceIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateOverrides") && !value["TemplateOverrides"].IsNull())
    {
        if (!value["TemplateOverrides"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExpansionPolicy.TemplateOverrides` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_templateOverrides.Deserialize(value["TemplateOverrides"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_templateOverridesHasBeenSet = true;
    }

    if (value.HasMember("ExpansionPriority") && !value["ExpansionPriority"].IsNull())
    {
        if (!value["ExpansionPriority"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ExpansionPolicy.ExpansionPriority` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_expansionPriority.Deserialize(value["ExpansionPriority"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_expansionPriorityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExpansionPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_expansionModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpansionMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expansionMode.c_str(), allocator).Move(), allocator);
    }

    if (m_launchTemplateIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LaunchTemplateIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_launchTemplateIds.begin(); itr != m_launchTemplateIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_referenceInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_referenceInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateOverridesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateOverrides";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_templateOverrides.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_expansionPriorityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpansionPriority";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_expansionPriority.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ExpansionPolicy::GetExpansionMode() const
{
    return m_expansionMode;
}

void ExpansionPolicy::SetExpansionMode(const string& _expansionMode)
{
    m_expansionMode = _expansionMode;
    m_expansionModeHasBeenSet = true;
}

bool ExpansionPolicy::ExpansionModeHasBeenSet() const
{
    return m_expansionModeHasBeenSet;
}

vector<string> ExpansionPolicy::GetLaunchTemplateIds() const
{
    return m_launchTemplateIds;
}

void ExpansionPolicy::SetLaunchTemplateIds(const vector<string>& _launchTemplateIds)
{
    m_launchTemplateIds = _launchTemplateIds;
    m_launchTemplateIdsHasBeenSet = true;
}

bool ExpansionPolicy::LaunchTemplateIdsHasBeenSet() const
{
    return m_launchTemplateIdsHasBeenSet;
}

string ExpansionPolicy::GetReferenceInstanceId() const
{
    return m_referenceInstanceId;
}

void ExpansionPolicy::SetReferenceInstanceId(const string& _referenceInstanceId)
{
    m_referenceInstanceId = _referenceInstanceId;
    m_referenceInstanceIdHasBeenSet = true;
}

bool ExpansionPolicy::ReferenceInstanceIdHasBeenSet() const
{
    return m_referenceInstanceIdHasBeenSet;
}

TemplateOverrides ExpansionPolicy::GetTemplateOverrides() const
{
    return m_templateOverrides;
}

void ExpansionPolicy::SetTemplateOverrides(const TemplateOverrides& _templateOverrides)
{
    m_templateOverrides = _templateOverrides;
    m_templateOverridesHasBeenSet = true;
}

bool ExpansionPolicy::TemplateOverridesHasBeenSet() const
{
    return m_templateOverridesHasBeenSet;
}

ExpansionPriority ExpansionPolicy::GetExpansionPriority() const
{
    return m_expansionPriority;
}

void ExpansionPolicy::SetExpansionPriority(const ExpansionPriority& _expansionPriority)
{
    m_expansionPriority = _expansionPriority;
    m_expansionPriorityHasBeenSet = true;
}

bool ExpansionPolicy::ExpansionPriorityHasBeenSet() const
{
    return m_expansionPriorityHasBeenSet;
}

