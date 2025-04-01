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

#include <tencentcloud/dbbrain/v20210527/model/SqlCostDistribution.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

SqlCostDistribution::SqlCostDistribution() :
    m_countHasBeenSet(false),
    m_fromHasBeenSet(false),
    m_toHasBeenSet(false),
    m_ratioHasBeenSet(false)
{
}

CoreInternalOutcome SqlCostDistribution::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SqlCostDistribution.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }

    if (value.HasMember("From") && !value["From"].IsNull())
    {
        if (!value["From"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SqlCostDistribution.From` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_from = value["From"].GetDouble();
        m_fromHasBeenSet = true;
    }

    if (value.HasMember("To") && !value["To"].IsNull())
    {
        if (!value["To"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SqlCostDistribution.To` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_to = value["To"].GetDouble();
        m_toHasBeenSet = true;
    }

    if (value.HasMember("Ratio") && !value["Ratio"].IsNull())
    {
        if (!value["Ratio"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SqlCostDistribution.Ratio` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_ratio = value["Ratio"].GetDouble();
        m_ratioHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SqlCostDistribution::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

    if (m_fromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "From";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_from, allocator);
    }

    if (m_toHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "To";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_to, allocator);
    }

    if (m_ratioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ratio";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ratio, allocator);
    }

}


int64_t SqlCostDistribution::GetCount() const
{
    return m_count;
}

void SqlCostDistribution::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool SqlCostDistribution::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

double SqlCostDistribution::GetFrom() const
{
    return m_from;
}

void SqlCostDistribution::SetFrom(const double& _from)
{
    m_from = _from;
    m_fromHasBeenSet = true;
}

bool SqlCostDistribution::FromHasBeenSet() const
{
    return m_fromHasBeenSet;
}

double SqlCostDistribution::GetTo() const
{
    return m_to;
}

void SqlCostDistribution::SetTo(const double& _to)
{
    m_to = _to;
    m_toHasBeenSet = true;
}

bool SqlCostDistribution::ToHasBeenSet() const
{
    return m_toHasBeenSet;
}

double SqlCostDistribution::GetRatio() const
{
    return m_ratio;
}

void SqlCostDistribution::SetRatio(const double& _ratio)
{
    m_ratio = _ratio;
    m_ratioHasBeenSet = true;
}

bool SqlCostDistribution::RatioHasBeenSet() const
{
    return m_ratioHasBeenSet;
}

