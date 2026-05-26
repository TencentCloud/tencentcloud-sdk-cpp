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

#include <tencentcloud/iotexplorer/v20190423/model/SeeStatItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

SeeStatItem::SeeStatItem() :
    m_timeHasBeenSet(false),
    m_countHasBeenSet(false),
    m_costBasicHasBeenSet(false),
    m_costAdvancedHasBeenSet(false)
{
}

CoreInternalOutcome SeeStatItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SeeStatItem.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeStatItem.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("CostBasic") && !value["CostBasic"].IsNull())
    {
        if (!value["CostBasic"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeStatItem.CostBasic` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_costBasic = value["CostBasic"].GetInt64();
        m_costBasicHasBeenSet = true;
    }

    if (value.HasMember("CostAdvanced") && !value["CostAdvanced"].IsNull())
    {
        if (!value["CostAdvanced"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SeeStatItem.CostAdvanced` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_costAdvanced = value["CostAdvanced"].GetInt64();
        m_costAdvancedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SeeStatItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_costBasicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostBasic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costBasic, allocator);
    }

    if (m_costAdvancedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostAdvanced";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_costAdvanced, allocator);
    }

}


string SeeStatItem::GetTime() const
{
    return m_time;
}

void SeeStatItem::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool SeeStatItem::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

int64_t SeeStatItem::GetCount() const
{
    return m_count;
}

void SeeStatItem::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool SeeStatItem::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

int64_t SeeStatItem::GetCostBasic() const
{
    return m_costBasic;
}

void SeeStatItem::SetCostBasic(const int64_t& _costBasic)
{
    m_costBasic = _costBasic;
    m_costBasicHasBeenSet = true;
}

bool SeeStatItem::CostBasicHasBeenSet() const
{
    return m_costBasicHasBeenSet;
}

int64_t SeeStatItem::GetCostAdvanced() const
{
    return m_costAdvanced;
}

void SeeStatItem::SetCostAdvanced(const int64_t& _costAdvanced)
{
    m_costAdvanced = _costAdvanced;
    m_costAdvancedHasBeenSet = true;
}

bool SeeStatItem::CostAdvancedHasBeenSet() const
{
    return m_costAdvancedHasBeenSet;
}

