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

#include <tencentcloud/teo/v20220901/model/CheckRegionHealthStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

CheckRegionHealthStatus::CheckRegionHealthStatus() :
    m_regionHasBeenSet(false),
    m_healthyHasBeenSet(false),
    m_originHealthStatusHasBeenSet(false)
{
}

CoreInternalOutcome CheckRegionHealthStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckRegionHealthStatus.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Healthy") && !value["Healthy"].IsNull())
    {
        if (!value["Healthy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CheckRegionHealthStatus.Healthy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthy = string(value["Healthy"].GetString());
        m_healthyHasBeenSet = true;
    }

    if (value.HasMember("OriginHealthStatus") && !value["OriginHealthStatus"].IsNull())
    {
        if (!value["OriginHealthStatus"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CheckRegionHealthStatus.OriginHealthStatus` is not array type"));

        const rapidjson::Value &tmpValue = value["OriginHealthStatus"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            OriginHealthStatus item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_originHealthStatus.push_back(item);
        }
        m_originHealthStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CheckRegionHealthStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_healthyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Healthy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthy.c_str(), allocator).Move(), allocator);
    }

    if (m_originHealthStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginHealthStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_originHealthStatus.begin(); itr != m_originHealthStatus.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string CheckRegionHealthStatus::GetRegion() const
{
    return m_region;
}

void CheckRegionHealthStatus::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CheckRegionHealthStatus::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string CheckRegionHealthStatus::GetHealthy() const
{
    return m_healthy;
}

void CheckRegionHealthStatus::SetHealthy(const string& _healthy)
{
    m_healthy = _healthy;
    m_healthyHasBeenSet = true;
}

bool CheckRegionHealthStatus::HealthyHasBeenSet() const
{
    return m_healthyHasBeenSet;
}

vector<OriginHealthStatus> CheckRegionHealthStatus::GetOriginHealthStatus() const
{
    return m_originHealthStatus;
}

void CheckRegionHealthStatus::SetOriginHealthStatus(const vector<OriginHealthStatus>& _originHealthStatus)
{
    m_originHealthStatus = _originHealthStatus;
    m_originHealthStatusHasBeenSet = true;
}

bool CheckRegionHealthStatus::OriginHealthStatusHasBeenSet() const
{
    return m_originHealthStatusHasBeenSet;
}

