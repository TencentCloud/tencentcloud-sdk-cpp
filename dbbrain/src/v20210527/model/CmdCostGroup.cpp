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

#include <tencentcloud/dbbrain/v20210527/model/CmdCostGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

CmdCostGroup::CmdCostGroup() :
    m_percentHasBeenSet(false),
    m_costUpperLimitHasBeenSet(false),
    m_costLowerLimitHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome CmdCostGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Percent") && !value["Percent"].IsNull())
    {
        if (!value["Percent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CmdCostGroup.Percent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_percent = value["Percent"].GetDouble();
        m_percentHasBeenSet = true;
    }

    if (value.HasMember("CostUpperLimit") && !value["CostUpperLimit"].IsNull())
    {
        if (!value["CostUpperLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CmdCostGroup.CostUpperLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_costUpperLimit = string(value["CostUpperLimit"].GetString());
        m_costUpperLimitHasBeenSet = true;
    }

    if (value.HasMember("CostLowerLimit") && !value["CostLowerLimit"].IsNull())
    {
        if (!value["CostLowerLimit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CmdCostGroup.CostLowerLimit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_costLowerLimit = string(value["CostLowerLimit"].GetString());
        m_costLowerLimitHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CmdCostGroup.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CmdCostGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
    }

    if (m_costUpperLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostUpperLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_costUpperLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_costLowerLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CostLowerLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_costLowerLimit.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


double CmdCostGroup::GetPercent() const
{
    return m_percent;
}

void CmdCostGroup::SetPercent(const double& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool CmdCostGroup::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

string CmdCostGroup::GetCostUpperLimit() const
{
    return m_costUpperLimit;
}

void CmdCostGroup::SetCostUpperLimit(const string& _costUpperLimit)
{
    m_costUpperLimit = _costUpperLimit;
    m_costUpperLimitHasBeenSet = true;
}

bool CmdCostGroup::CostUpperLimitHasBeenSet() const
{
    return m_costUpperLimitHasBeenSet;
}

string CmdCostGroup::GetCostLowerLimit() const
{
    return m_costLowerLimit;
}

void CmdCostGroup::SetCostLowerLimit(const string& _costLowerLimit)
{
    m_costLowerLimit = _costLowerLimit;
    m_costLowerLimitHasBeenSet = true;
}

bool CmdCostGroup::CostLowerLimitHasBeenSet() const
{
    return m_costLowerLimitHasBeenSet;
}

int64_t CmdCostGroup::GetCount() const
{
    return m_count;
}

void CmdCostGroup::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool CmdCostGroup::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

