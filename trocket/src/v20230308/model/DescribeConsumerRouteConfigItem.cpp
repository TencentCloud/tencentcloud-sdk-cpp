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

#include <tencentcloud/trocket/v20230308/model/DescribeConsumerRouteConfigItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

DescribeConsumerRouteConfigItem::DescribeConsumerRouteConfigItem() :
    m_keyHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_cutTimestampHasBeenSet(false)
{
}

CoreInternalOutcome DescribeConsumerRouteConfigItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConsumerRouteConfigItem.Key` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_key.Deserialize(value["Key"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConsumerRouteConfigItem.Version` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_version = value["Version"].GetInt64();
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("Rules") && !value["Rules"].IsNull())
    {
        if (!value["Rules"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeConsumerRouteConfigItem.Rules` is not array type"));

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

    if (value.HasMember("CutTimestamp") && !value["CutTimestamp"].IsNull())
    {
        if (!value["CutTimestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeConsumerRouteConfigItem.CutTimestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cutTimestamp = value["CutTimestamp"].GetInt64();
        m_cutTimestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeConsumerRouteConfigItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_key.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_version, allocator);
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

    if (m_cutTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CutTimestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cutTimestamp, allocator);
    }

}


ConsumerRouteKey DescribeConsumerRouteConfigItem::GetKey() const
{
    return m_key;
}

void DescribeConsumerRouteConfigItem::SetKey(const ConsumerRouteKey& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool DescribeConsumerRouteConfigItem::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

int64_t DescribeConsumerRouteConfigItem::GetVersion() const
{
    return m_version;
}

void DescribeConsumerRouteConfigItem::SetVersion(const int64_t& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool DescribeConsumerRouteConfigItem::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

vector<RouteRule> DescribeConsumerRouteConfigItem::GetRules() const
{
    return m_rules;
}

void DescribeConsumerRouteConfigItem::SetRules(const vector<RouteRule>& _rules)
{
    m_rules = _rules;
    m_rulesHasBeenSet = true;
}

bool DescribeConsumerRouteConfigItem::RulesHasBeenSet() const
{
    return m_rulesHasBeenSet;
}

int64_t DescribeConsumerRouteConfigItem::GetCutTimestamp() const
{
    return m_cutTimestamp;
}

void DescribeConsumerRouteConfigItem::SetCutTimestamp(const int64_t& _cutTimestamp)
{
    m_cutTimestamp = _cutTimestamp;
    m_cutTimestampHasBeenSet = true;
}

bool DescribeConsumerRouteConfigItem::CutTimestampHasBeenSet() const
{
    return m_cutTimestampHasBeenSet;
}

