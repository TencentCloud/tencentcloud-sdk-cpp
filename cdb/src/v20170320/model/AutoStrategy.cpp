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

#include <tencentcloud/cdb/v20170320/model/AutoStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

AutoStrategy::AutoStrategy() :
    m_expandThresholdHasBeenSet(false),
    m_shrinkThresholdHasBeenSet(false),
    m_expandPeriodHasBeenSet(false),
    m_shrinkPeriodHasBeenSet(false),
    m_expandSecondPeriodHasBeenSet(false),
    m_shrinkSecondPeriodHasBeenSet(false)
{
}

CoreInternalOutcome AutoStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExpandThreshold") && !value["ExpandThreshold"].IsNull())
    {
        if (!value["ExpandThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoStrategy.ExpandThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expandThreshold = value["ExpandThreshold"].GetInt64();
        m_expandThresholdHasBeenSet = true;
    }

    if (value.HasMember("ShrinkThreshold") && !value["ShrinkThreshold"].IsNull())
    {
        if (!value["ShrinkThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoStrategy.ShrinkThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shrinkThreshold = value["ShrinkThreshold"].GetInt64();
        m_shrinkThresholdHasBeenSet = true;
    }

    if (value.HasMember("ExpandPeriod") && !value["ExpandPeriod"].IsNull())
    {
        if (!value["ExpandPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoStrategy.ExpandPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expandPeriod = value["ExpandPeriod"].GetInt64();
        m_expandPeriodHasBeenSet = true;
    }

    if (value.HasMember("ShrinkPeriod") && !value["ShrinkPeriod"].IsNull())
    {
        if (!value["ShrinkPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoStrategy.ShrinkPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shrinkPeriod = value["ShrinkPeriod"].GetInt64();
        m_shrinkPeriodHasBeenSet = true;
    }

    if (value.HasMember("ExpandSecondPeriod") && !value["ExpandSecondPeriod"].IsNull())
    {
        if (!value["ExpandSecondPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoStrategy.ExpandSecondPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expandSecondPeriod = value["ExpandSecondPeriod"].GetInt64();
        m_expandSecondPeriodHasBeenSet = true;
    }

    if (value.HasMember("ShrinkSecondPeriod") && !value["ShrinkSecondPeriod"].IsNull())
    {
        if (!value["ShrinkSecondPeriod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoStrategy.ShrinkSecondPeriod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_shrinkSecondPeriod = value["ShrinkSecondPeriod"].GetInt64();
        m_shrinkSecondPeriodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_expandThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpandThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expandThreshold, allocator);
    }

    if (m_shrinkThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShrinkThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shrinkThreshold, allocator);
    }

    if (m_expandPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpandPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expandPeriod, allocator);
    }

    if (m_shrinkPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShrinkPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shrinkPeriod, allocator);
    }

    if (m_expandSecondPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpandSecondPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expandSecondPeriod, allocator);
    }

    if (m_shrinkSecondPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShrinkSecondPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_shrinkSecondPeriod, allocator);
    }

}


int64_t AutoStrategy::GetExpandThreshold() const
{
    return m_expandThreshold;
}

void AutoStrategy::SetExpandThreshold(const int64_t& _expandThreshold)
{
    m_expandThreshold = _expandThreshold;
    m_expandThresholdHasBeenSet = true;
}

bool AutoStrategy::ExpandThresholdHasBeenSet() const
{
    return m_expandThresholdHasBeenSet;
}

int64_t AutoStrategy::GetShrinkThreshold() const
{
    return m_shrinkThreshold;
}

void AutoStrategy::SetShrinkThreshold(const int64_t& _shrinkThreshold)
{
    m_shrinkThreshold = _shrinkThreshold;
    m_shrinkThresholdHasBeenSet = true;
}

bool AutoStrategy::ShrinkThresholdHasBeenSet() const
{
    return m_shrinkThresholdHasBeenSet;
}

int64_t AutoStrategy::GetExpandPeriod() const
{
    return m_expandPeriod;
}

void AutoStrategy::SetExpandPeriod(const int64_t& _expandPeriod)
{
    m_expandPeriod = _expandPeriod;
    m_expandPeriodHasBeenSet = true;
}

bool AutoStrategy::ExpandPeriodHasBeenSet() const
{
    return m_expandPeriodHasBeenSet;
}

int64_t AutoStrategy::GetShrinkPeriod() const
{
    return m_shrinkPeriod;
}

void AutoStrategy::SetShrinkPeriod(const int64_t& _shrinkPeriod)
{
    m_shrinkPeriod = _shrinkPeriod;
    m_shrinkPeriodHasBeenSet = true;
}

bool AutoStrategy::ShrinkPeriodHasBeenSet() const
{
    return m_shrinkPeriodHasBeenSet;
}

int64_t AutoStrategy::GetExpandSecondPeriod() const
{
    return m_expandSecondPeriod;
}

void AutoStrategy::SetExpandSecondPeriod(const int64_t& _expandSecondPeriod)
{
    m_expandSecondPeriod = _expandSecondPeriod;
    m_expandSecondPeriodHasBeenSet = true;
}

bool AutoStrategy::ExpandSecondPeriodHasBeenSet() const
{
    return m_expandSecondPeriodHasBeenSet;
}

int64_t AutoStrategy::GetShrinkSecondPeriod() const
{
    return m_shrinkSecondPeriod;
}

void AutoStrategy::SetShrinkSecondPeriod(const int64_t& _shrinkSecondPeriod)
{
    m_shrinkSecondPeriod = _shrinkSecondPeriod;
    m_shrinkSecondPeriodHasBeenSet = true;
}

bool AutoStrategy::ShrinkSecondPeriodHasBeenSet() const
{
    return m_shrinkSecondPeriodHasBeenSet;
}

