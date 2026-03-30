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

#include <tencentcloud/cvm/v20170312/model/ResourcePoolPackInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

ResourcePoolPackInstance::ResourcePoolPackInstance() :
    m_dedicatedResourcePackIdHasBeenSet(false),
    m_instanceIdSetHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_zoneHasBeenSet(false)
{
}

CoreInternalOutcome ResourcePoolPackInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DedicatedResourcePackId") && !value["DedicatedResourcePackId"].IsNull())
    {
        if (!value["DedicatedResourcePackId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolPackInstance.DedicatedResourcePackId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dedicatedResourcePackId = string(value["DedicatedResourcePackId"].GetString());
        m_dedicatedResourcePackIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceIdSet") && !value["InstanceIdSet"].IsNull())
    {
        if (!value["InstanceIdSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ResourcePoolPackInstance.InstanceIdSet` is not array type"));

        const rapidjson::Value &tmpValue = value["InstanceIdSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_instanceIdSet.push_back((*itr).GetString());
        }
        m_instanceIdSetHasBeenSet = true;
    }

    if (value.HasMember("InstanceFamily") && !value["InstanceFamily"].IsNull())
    {
        if (!value["InstanceFamily"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolPackInstance.InstanceFamily` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceFamily = string(value["InstanceFamily"].GetString());
        m_instanceFamilyHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolPackInstance.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourcePoolPackInstance.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourcePoolPackInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dedicatedResourcePackIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DedicatedResourcePackId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dedicatedResourcePackId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceIdSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_instanceIdSet.begin(); itr != m_instanceIdSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

}


string ResourcePoolPackInstance::GetDedicatedResourcePackId() const
{
    return m_dedicatedResourcePackId;
}

void ResourcePoolPackInstance::SetDedicatedResourcePackId(const string& _dedicatedResourcePackId)
{
    m_dedicatedResourcePackId = _dedicatedResourcePackId;
    m_dedicatedResourcePackIdHasBeenSet = true;
}

bool ResourcePoolPackInstance::DedicatedResourcePackIdHasBeenSet() const
{
    return m_dedicatedResourcePackIdHasBeenSet;
}

vector<string> ResourcePoolPackInstance::GetInstanceIdSet() const
{
    return m_instanceIdSet;
}

void ResourcePoolPackInstance::SetInstanceIdSet(const vector<string>& _instanceIdSet)
{
    m_instanceIdSet = _instanceIdSet;
    m_instanceIdSetHasBeenSet = true;
}

bool ResourcePoolPackInstance::InstanceIdSetHasBeenSet() const
{
    return m_instanceIdSetHasBeenSet;
}

string ResourcePoolPackInstance::GetInstanceFamily() const
{
    return m_instanceFamily;
}

void ResourcePoolPackInstance::SetInstanceFamily(const string& _instanceFamily)
{
    m_instanceFamily = _instanceFamily;
    m_instanceFamilyHasBeenSet = true;
}

bool ResourcePoolPackInstance::InstanceFamilyHasBeenSet() const
{
    return m_instanceFamilyHasBeenSet;
}

string ResourcePoolPackInstance::GetInstanceType() const
{
    return m_instanceType;
}

void ResourcePoolPackInstance::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool ResourcePoolPackInstance::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string ResourcePoolPackInstance::GetZone() const
{
    return m_zone;
}

void ResourcePoolPackInstance::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ResourcePoolPackInstance::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

