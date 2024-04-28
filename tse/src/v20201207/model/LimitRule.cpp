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

#include <tencentcloud/tse/v20201207/model/LimitRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

LimitRule::LimitRule() :
    m_filtersHasBeenSet(false),
    m_limitByHasBeenSet(false),
    m_qpsThresholdsHasBeenSet(false),
    m_accurateQpsThresholdsHasBeenSet(false)
{
}

CoreInternalOutcome LimitRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Filters") && !value["Filters"].IsNull())
    {
        if (!value["Filters"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LimitRule.Filters` is not array type"));

        const rapidjson::Value &tmpValue = value["Filters"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RuleFilter item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_filters.push_back(item);
        }
        m_filtersHasBeenSet = true;
    }

    if (value.HasMember("LimitBy") && !value["LimitBy"].IsNull())
    {
        if (!value["LimitBy"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LimitRule.LimitBy` is not array type"));

        const rapidjson::Value &tmpValue = value["LimitBy"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValue item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_limitBy.push_back(item);
        }
        m_limitByHasBeenSet = true;
    }

    if (value.HasMember("QpsThresholds") && !value["QpsThresholds"].IsNull())
    {
        if (!value["QpsThresholds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LimitRule.QpsThresholds` is not array type"));

        const rapidjson::Value &tmpValue = value["QpsThresholds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            QpsThreshold item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_qpsThresholds.push_back(item);
        }
        m_qpsThresholdsHasBeenSet = true;
    }

    if (value.HasMember("AccurateQpsThresholds") && !value["AccurateQpsThresholds"].IsNull())
    {
        if (!value["AccurateQpsThresholds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LimitRule.AccurateQpsThresholds` is not array type"));

        const rapidjson::Value &tmpValue = value["AccurateQpsThresholds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AccurateQpsThreshold item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_accurateQpsThresholds.push_back(item);
        }
        m_accurateQpsThresholdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LimitRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_filtersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_limitByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_limitBy.begin(); itr != m_limitBy.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_qpsThresholdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QpsThresholds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_qpsThresholds.begin(); itr != m_qpsThresholds.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_accurateQpsThresholdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccurateQpsThresholds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_accurateQpsThresholds.begin(); itr != m_accurateQpsThresholds.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<RuleFilter> LimitRule::GetFilters() const
{
    return m_filters;
}

void LimitRule::SetFilters(const vector<RuleFilter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool LimitRule::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}

vector<KeyValue> LimitRule::GetLimitBy() const
{
    return m_limitBy;
}

void LimitRule::SetLimitBy(const vector<KeyValue>& _limitBy)
{
    m_limitBy = _limitBy;
    m_limitByHasBeenSet = true;
}

bool LimitRule::LimitByHasBeenSet() const
{
    return m_limitByHasBeenSet;
}

vector<QpsThreshold> LimitRule::GetQpsThresholds() const
{
    return m_qpsThresholds;
}

void LimitRule::SetQpsThresholds(const vector<QpsThreshold>& _qpsThresholds)
{
    m_qpsThresholds = _qpsThresholds;
    m_qpsThresholdsHasBeenSet = true;
}

bool LimitRule::QpsThresholdsHasBeenSet() const
{
    return m_qpsThresholdsHasBeenSet;
}

vector<AccurateQpsThreshold> LimitRule::GetAccurateQpsThresholds() const
{
    return m_accurateQpsThresholds;
}

void LimitRule::SetAccurateQpsThresholds(const vector<AccurateQpsThreshold>& _accurateQpsThresholds)
{
    m_accurateQpsThresholds = _accurateQpsThresholds;
    m_accurateQpsThresholdsHasBeenSet = true;
}

bool LimitRule::AccurateQpsThresholdsHasBeenSet() const
{
    return m_accurateQpsThresholdsHasBeenSet;
}

