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

#include <tencentcloud/tke/v20180525/model/PodLimitsInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

PodLimitsInstance::PodLimitsInstance() :
    m_zoneHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_podLimitsHasBeenSet(false)
{
}

CoreInternalOutcome PodLimitsInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodLimitsInstance.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("InstanceFamily") && !value["InstanceFamily"].IsNull())
    {
        if (!value["InstanceFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodLimitsInstance.InstanceFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceFamily = string(value["InstanceFamily"].GetString());
        m_instanceFamilyHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodLimitsInstance.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("PodLimits") && !value["PodLimits"].IsNull())
    {
        if (!value["PodLimits"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `PodLimitsInstance.PodLimits` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_podLimits.Deserialize(value["PodLimits"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_podLimitsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PodLimitsInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceFamilyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceFamily";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceFamily.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_podLimitsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodLimits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_podLimits.ToJsonObject(value[key.c_str()], allocator);
    }

}


string PodLimitsInstance::GetZone() const
{
    return m_zone;
}

void PodLimitsInstance::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool PodLimitsInstance::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string PodLimitsInstance::GetInstanceFamily() const
{
    return m_instanceFamily;
}

void PodLimitsInstance::SetInstanceFamily(const string& _instanceFamily)
{
    m_instanceFamily = _instanceFamily;
    m_instanceFamilyHasBeenSet = true;
}

bool PodLimitsInstance::InstanceFamilyHasBeenSet() const
{
    return m_instanceFamilyHasBeenSet;
}

string PodLimitsInstance::GetInstanceType() const
{
    return m_instanceType;
}

void PodLimitsInstance::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool PodLimitsInstance::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

PodLimitsByType PodLimitsInstance::GetPodLimits() const
{
    return m_podLimits;
}

void PodLimitsInstance::SetPodLimits(const PodLimitsByType& _podLimits)
{
    m_podLimits = _podLimits;
    m_podLimitsHasBeenSet = true;
}

bool PodLimitsInstance::PodLimitsHasBeenSet() const
{
    return m_podLimitsHasBeenSet;
}

