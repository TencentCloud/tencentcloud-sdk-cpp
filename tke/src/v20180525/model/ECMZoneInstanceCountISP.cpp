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

#include <tencentcloud/tke/v20180525/model/ECMZoneInstanceCountISP.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ECMZoneInstanceCountISP::ECMZoneInstanceCountISP() :
    m_zoneHasBeenSet(false),
    m_instanceCountHasBeenSet(false),
    m_iSPHasBeenSet(false)
{
}

CoreInternalOutcome ECMZoneInstanceCountISP::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ECMZoneInstanceCountISP.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("InstanceCount") && !value["InstanceCount"].IsNull())
    {
        if (!value["InstanceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ECMZoneInstanceCountISP.InstanceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceCount = value["InstanceCount"].GetInt64();
        m_instanceCountHasBeenSet = true;
    }

    if (value.HasMember("ISP") && !value["ISP"].IsNull())
    {
        if (!value["ISP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ECMZoneInstanceCountISP.ISP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iSP = string(value["ISP"].GetString());
        m_iSPHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ECMZoneInstanceCountISP::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceCount, allocator);
    }

    if (m_iSPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ISP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iSP.c_str(), allocator).Move(), allocator);
    }

}


string ECMZoneInstanceCountISP::GetZone() const
{
    return m_zone;
}

void ECMZoneInstanceCountISP::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ECMZoneInstanceCountISP::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

int64_t ECMZoneInstanceCountISP::GetInstanceCount() const
{
    return m_instanceCount;
}

void ECMZoneInstanceCountISP::SetInstanceCount(const int64_t& _instanceCount)
{
    m_instanceCount = _instanceCount;
    m_instanceCountHasBeenSet = true;
}

bool ECMZoneInstanceCountISP::InstanceCountHasBeenSet() const
{
    return m_instanceCountHasBeenSet;
}

string ECMZoneInstanceCountISP::GetISP() const
{
    return m_iSP;
}

void ECMZoneInstanceCountISP::SetISP(const string& _iSP)
{
    m_iSP = _iSP;
    m_iSPHasBeenSet = true;
}

bool ECMZoneInstanceCountISP::ISPHasBeenSet() const
{
    return m_iSPHasBeenSet;
}

