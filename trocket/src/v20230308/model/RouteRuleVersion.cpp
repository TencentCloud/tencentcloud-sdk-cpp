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

#include <tencentcloud/trocket/v20230308/model/RouteRuleVersion.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

RouteRuleVersion::RouteRuleVersion() :
    m_versionHasBeenSet(false),
    m_cutTimestampHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_rulesHasBeenSet(false)
{
}

CoreInternalOutcome RouteRuleVersion::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RouteRuleVersion.Version` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_version = value["Version"].GetInt64();
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("CutTimestamp") && !value["CutTimestamp"].IsNull())
    {
        if (!value["CutTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RouteRuleVersion.CutTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cutTimestamp = value["CutTimestamp"].GetInt64();
        m_cutTimestampHasBeenSet = true;
    }

    if (value.HasMember("UpdatedAt") && !value["UpdatedAt"].IsNull())
    {
        if (!value["UpdatedAt"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RouteRuleVersion.UpdatedAt` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = value["UpdatedAt"].GetInt64();
        m_updatedAtHasBeenSet = true;
    }

    if (value.HasMember("Rules") && !value["Rules"].IsNull())
    {
        if (!value["Rules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RouteRuleVersion.Rules` is not array type"));

        const rapidjson::Value &tmpValue = value["Rules"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RouteRule item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_rules.push_back(item);
        }
        m_rulesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RouteRuleVersion::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_version, allocator);
    }

    if (m_cutTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CutTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cutTimestamp, allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updatedAt, allocator);
    }

    if (m_rulesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Rules";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_rules.begin(); itr != m_rules.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t RouteRuleVersion::GetVersion() const
{
    return m_version;
}

void RouteRuleVersion::SetVersion(const int64_t& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool RouteRuleVersion::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

int64_t RouteRuleVersion::GetCutTimestamp() const
{
    return m_cutTimestamp;
}

void RouteRuleVersion::SetCutTimestamp(const int64_t& _cutTimestamp)
{
    m_cutTimestamp = _cutTimestamp;
    m_cutTimestampHasBeenSet = true;
}

bool RouteRuleVersion::CutTimestampHasBeenSet() const
{
    return m_cutTimestampHasBeenSet;
}

int64_t RouteRuleVersion::GetUpdatedAt() const
{
    return m_updatedAt;
}

void RouteRuleVersion::SetUpdatedAt(const int64_t& _updatedAt)
{
    m_updatedAt = _updatedAt;
    m_updatedAtHasBeenSet = true;
}

bool RouteRuleVersion::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}

vector<RouteRule> RouteRuleVersion::GetRules() const
{
    return m_rules;
}

void RouteRuleVersion::SetRules(const vector<RouteRule>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool RouteRuleVersion::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

