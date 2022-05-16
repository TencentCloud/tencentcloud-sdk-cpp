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

#include <tencentcloud/cdc/v20201214/model/CosCapacity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdc::V20201214::Model;
using namespace std;

CosCapacity::CosCapacity() :
    m_totalCapacityHasBeenSet(false),
    m_totalFreeCapacityHasBeenSet(false),
    m_totalUsedCapacityHasBeenSet(false)
{
}

CoreInternalOutcome CosCapacity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCapacity") && !value["TotalCapacity"].IsNull())
    {
        if (!value["TotalCapacity"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CosCapacity.TotalCapacity` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalCapacity = value["TotalCapacity"].GetDouble();
        m_totalCapacityHasBeenSet = true;
    }

    if (value.HasMember("TotalFreeCapacity") && !value["TotalFreeCapacity"].IsNull())
    {
        if (!value["TotalFreeCapacity"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CosCapacity.TotalFreeCapacity` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalFreeCapacity = value["TotalFreeCapacity"].GetDouble();
        m_totalFreeCapacityHasBeenSet = true;
    }

    if (value.HasMember("TotalUsedCapacity") && !value["TotalUsedCapacity"].IsNull())
    {
        if (!value["TotalUsedCapacity"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CosCapacity.TotalUsedCapacity` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalUsedCapacity = value["TotalUsedCapacity"].GetDouble();
        m_totalUsedCapacityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosCapacity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCapacity, allocator);
    }

    if (m_totalFreeCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalFreeCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalFreeCapacity, allocator);
    }

    if (m_totalUsedCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalUsedCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalUsedCapacity, allocator);
    }

}


double CosCapacity::GetTotalCapacity() const
{
    return m_totalCapacity;
}

void CosCapacity::SetTotalCapacity(const double& _totalCapacity)
{
    m_totalCapacity = _totalCapacity;
    m_totalCapacityHasBeenSet = true;
}

bool CosCapacity::TotalCapacityHasBeenSet() const
{
    return m_totalCapacityHasBeenSet;
}

double CosCapacity::GetTotalFreeCapacity() const
{
    return m_totalFreeCapacity;
}

void CosCapacity::SetTotalFreeCapacity(const double& _totalFreeCapacity)
{
    m_totalFreeCapacity = _totalFreeCapacity;
    m_totalFreeCapacityHasBeenSet = true;
}

bool CosCapacity::TotalFreeCapacityHasBeenSet() const
{
    return m_totalFreeCapacityHasBeenSet;
}

double CosCapacity::GetTotalUsedCapacity() const
{
    return m_totalUsedCapacity;
}

void CosCapacity::SetTotalUsedCapacity(const double& _totalUsedCapacity)
{
    m_totalUsedCapacity = _totalUsedCapacity;
    m_totalUsedCapacityHasBeenSet = true;
}

bool CosCapacity::TotalUsedCapacityHasBeenSet() const
{
    return m_totalUsedCapacityHasBeenSet;
}

