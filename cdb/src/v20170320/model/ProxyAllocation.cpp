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

#include <tencentcloud/cdb/v20170320/model/ProxyAllocation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

ProxyAllocation::ProxyAllocation() :
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_proxyInstanceHasBeenSet(false)
{
}

CoreInternalOutcome ProxyAllocation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAllocation.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProxyAllocation.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ProxyInstance") && !value["ProxyInstance"].IsNull())
    {
        if (!value["ProxyInstance"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProxyAllocation.ProxyInstance` is not array type"));

        const rapidjson::Value &tmpValue = value["ProxyInstance"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProxyInst item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_proxyInstance.push_back(item);
        }
        m_proxyInstanceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProxyAllocation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_proxyInstanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyInstance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_proxyInstance.begin(); itr != m_proxyInstance.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ProxyAllocation::GetRegion() const
{
    return m_region;
}

void ProxyAllocation::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ProxyAllocation::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ProxyAllocation::GetZone() const
{
    return m_zone;
}

void ProxyAllocation::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ProxyAllocation::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

vector<ProxyInst> ProxyAllocation::GetProxyInstance() const
{
    return m_proxyInstance;
}

void ProxyAllocation::SetProxyInstance(const vector<ProxyInst>& _proxyInstance)
{
    m_proxyInstance = _proxyInstance;
    m_proxyInstanceHasBeenSet = true;
}

bool ProxyAllocation::ProxyInstanceHasBeenSet() const
{
    return m_proxyInstanceHasBeenSet;
}

