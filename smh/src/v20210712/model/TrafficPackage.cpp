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

#include <tencentcloud/smh/v20210712/model/TrafficPackage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Smh::V20210712::Model;
using namespace std;

TrafficPackage::TrafficPackage() :
    m_instanceIdHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_sizeGBHasBeenSet(false),
    m_remainHasBeenSet(false),
    m_usedHasBeenSet(false),
    m_usedPercentageHasBeenSet(false),
    m_effectiveTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false)
{
}

CoreInternalOutcome TrafficPackage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.Size` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_size = string(value["Size"].GetString());
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("SizeGB") && !value["SizeGB"].IsNull())
    {
        if (!value["SizeGB"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.SizeGB` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sizeGB = value["SizeGB"].GetUint64();
        m_sizeGBHasBeenSet = true;
    }

    if (value.HasMember("Remain") && !value["Remain"].IsNull())
    {
        if (!value["Remain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.Remain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remain = string(value["Remain"].GetString());
        m_remainHasBeenSet = true;
    }

    if (value.HasMember("Used") && !value["Used"].IsNull())
    {
        if (!value["Used"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.Used` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_used = string(value["Used"].GetString());
        m_usedHasBeenSet = true;
    }

    if (value.HasMember("UsedPercentage") && !value["UsedPercentage"].IsNull())
    {
        if (!value["UsedPercentage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.UsedPercentage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usedPercentage = string(value["UsedPercentage"].GetString());
        m_usedPercentageHasBeenSet = true;
    }

    if (value.HasMember("EffectiveTime") && !value["EffectiveTime"].IsNull())
    {
        if (!value["EffectiveTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.EffectiveTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectiveTime = string(value["EffectiveTime"].GetString());
        m_effectiveTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrafficPackage.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TrafficPackage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_size.c_str(), allocator).Move(), allocator);
    }

    if (m_sizeGBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SizeGB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sizeGB, allocator);
    }

    if (m_remainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remain.c_str(), allocator).Move(), allocator);
    }

    if (m_usedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Used";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_used.c_str(), allocator).Move(), allocator);
    }

    if (m_usedPercentageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedPercentage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usedPercentage.c_str(), allocator).Move(), allocator);
    }

    if (m_effectiveTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effectiveTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

}


string TrafficPackage::GetInstanceId() const
{
    return m_instanceId;
}

void TrafficPackage::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool TrafficPackage::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string TrafficPackage::GetDomain() const
{
    return m_domain;
}

void TrafficPackage::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool TrafficPackage::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

uint64_t TrafficPackage::GetType() const
{
    return m_type;
}

void TrafficPackage::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TrafficPackage::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string TrafficPackage::GetSize() const
{
    return m_size;
}

void TrafficPackage::SetSize(const string& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool TrafficPackage::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

uint64_t TrafficPackage::GetSizeGB() const
{
    return m_sizeGB;
}

void TrafficPackage::SetSizeGB(const uint64_t& _sizeGB)
{
    m_sizeGB = _sizeGB;
    m_sizeGBHasBeenSet = true;
}

bool TrafficPackage::SizeGBHasBeenSet() const
{
    return m_sizeGBHasBeenSet;
}

string TrafficPackage::GetRemain() const
{
    return m_remain;
}

void TrafficPackage::SetRemain(const string& _remain)
{
    m_remain = _remain;
    m_remainHasBeenSet = true;
}

bool TrafficPackage::RemainHasBeenSet() const
{
    return m_remainHasBeenSet;
}

string TrafficPackage::GetUsed() const
{
    return m_used;
}

void TrafficPackage::SetUsed(const string& _used)
{
    m_used = _used;
    m_usedHasBeenSet = true;
}

bool TrafficPackage::UsedHasBeenSet() const
{
    return m_usedHasBeenSet;
}

string TrafficPackage::GetUsedPercentage() const
{
    return m_usedPercentage;
}

void TrafficPackage::SetUsedPercentage(const string& _usedPercentage)
{
    m_usedPercentage = _usedPercentage;
    m_usedPercentageHasBeenSet = true;
}

bool TrafficPackage::UsedPercentageHasBeenSet() const
{
    return m_usedPercentageHasBeenSet;
}

string TrafficPackage::GetEffectiveTime() const
{
    return m_effectiveTime;
}

void TrafficPackage::SetEffectiveTime(const string& _effectiveTime)
{
    m_effectiveTime = _effectiveTime;
    m_effectiveTimeHasBeenSet = true;
}

bool TrafficPackage::EffectiveTimeHasBeenSet() const
{
    return m_effectiveTimeHasBeenSet;
}

string TrafficPackage::GetExpireTime() const
{
    return m_expireTime;
}

void TrafficPackage::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool TrafficPackage::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

