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

#include <tencentcloud/monitor/v20180724/model/PrometheusAlertmanagerConfigInhibitRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

PrometheusAlertmanagerConfigInhibitRule::PrometheusAlertmanagerConfigInhibitRule() :
    m_sourceMatchersHasBeenSet(false),
    m_targetMatchersHasBeenSet(false),
    m_equalHasBeenSet(false)
{
}

CoreInternalOutcome PrometheusAlertmanagerConfigInhibitRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceMatchers") && !value["SourceMatchers"].IsNull())
    {
        if (!value["SourceMatchers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertmanagerConfigInhibitRule.SourceMatchers` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceMatchers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sourceMatchers.push_back((*itr).GetString());
        }
        m_sourceMatchersHasBeenSet = true;
    }

    if (value.HasMember("TargetMatchers") && !value["TargetMatchers"].IsNull())
    {
        if (!value["TargetMatchers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertmanagerConfigInhibitRule.TargetMatchers` is not array type"));

        const rapidjson::Value &tmpValue = value["TargetMatchers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_targetMatchers.push_back((*itr).GetString());
        }
        m_targetMatchersHasBeenSet = true;
    }

    if (value.HasMember("Equal") && !value["Equal"].IsNull())
    {
        if (!value["Equal"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PrometheusAlertmanagerConfigInhibitRule.Equal` is not array type"));

        const rapidjson::Value &tmpValue = value["Equal"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_equal.push_back((*itr).GetString());
        }
        m_equalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PrometheusAlertmanagerConfigInhibitRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceMatchersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceMatchers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sourceMatchers.begin(); itr != m_sourceMatchers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_targetMatchersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetMatchers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetMatchers.begin(); itr != m_targetMatchers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_equalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Equal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_equal.begin(); itr != m_equal.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> PrometheusAlertmanagerConfigInhibitRule::GetSourceMatchers() const
{
    return m_sourceMatchers;
}

void PrometheusAlertmanagerConfigInhibitRule::SetSourceMatchers(const vector<string>& _sourceMatchers)
{
    m_sourceMatchers = _sourceMatchers;
    m_sourceMatchersHasBeenSet = true;
}

bool PrometheusAlertmanagerConfigInhibitRule::SourceMatchersHasBeenSet() const
{
    return m_sourceMatchersHasBeenSet;
}

vector<string> PrometheusAlertmanagerConfigInhibitRule::GetTargetMatchers() const
{
    return m_targetMatchers;
}

void PrometheusAlertmanagerConfigInhibitRule::SetTargetMatchers(const vector<string>& _targetMatchers)
{
    m_targetMatchers = _targetMatchers;
    m_targetMatchersHasBeenSet = true;
}

bool PrometheusAlertmanagerConfigInhibitRule::TargetMatchersHasBeenSet() const
{
    return m_targetMatchersHasBeenSet;
}

vector<string> PrometheusAlertmanagerConfigInhibitRule::GetEqual() const
{
    return m_equal;
}

void PrometheusAlertmanagerConfigInhibitRule::SetEqual(const vector<string>& _equal)
{
    m_equal = _equal;
    m_equalHasBeenSet = true;
}

bool PrometheusAlertmanagerConfigInhibitRule::EqualHasBeenSet() const
{
    return m_equalHasBeenSet;
}

