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

#include <tencentcloud/sqlserver/v20180328/model/ProductSpec.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

ProductSpec::ProductSpec() :
    m_regionIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_infoHasBeenSet(false)
{
}

CoreInternalOutcome ProductSpec::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSpec.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductSpec.ZoneId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = value["ZoneId"].GetInt64();
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("Info") && !value["Info"].IsNull())
    {
        if (!value["Info"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProductSpec.Info` is not array type"));

        const rapidjson::Value &tmpValue = value["Info"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SpecInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_info.push_back(item);
        }
        m_infoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductSpec::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_infoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Info";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_info.begin(); itr != m_info.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t ProductSpec::GetRegionId() const
{
    return m_regionId;
}

void ProductSpec::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool ProductSpec::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

int64_t ProductSpec::GetZoneId() const
{
    return m_zoneId;
}

void ProductSpec::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ProductSpec::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

vector<SpecInfo> ProductSpec::GetInfo() const
{
    return m_info;
}

void ProductSpec::SetInfo(const vector<SpecInfo>& _info)
{
    m_info = _info;
    m_infoHasBeenSet = true;
}

bool ProductSpec::InfoHasBeenSet() const
{
    return m_infoHasBeenSet;
}

