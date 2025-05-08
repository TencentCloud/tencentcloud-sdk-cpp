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

#include <tencentcloud/trocket/v20230308/model/InstanceItemExtraInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

InstanceItemExtraInfo::InstanceItemExtraInfo() :
    m_isVipHasBeenSet(false),
    m_vipInstanceStatusHasBeenSet(false),
    m_maxBandWidthHasBeenSet(false),
    m_specNameHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_maxStorageHasBeenSet(false),
    m_maxRetentionHasBeenSet(false),
    m_minRetentionHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_isFrozenHasBeenSet(false)
{
}

CoreInternalOutcome InstanceItemExtraInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsVip") && !value["IsVip"].IsNull())
    {
        if (!value["IsVip"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItemExtraInfo.IsVip` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isVip = value["IsVip"].GetBool();
        m_isVipHasBeenSet = true;
    }

    if (value.HasMember("VipInstanceStatus") && !value["VipInstanceStatus"].IsNull())
    {
        if (!value["VipInstanceStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItemExtraInfo.VipInstanceStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_vipInstanceStatus = value["VipInstanceStatus"].GetInt64();
        m_vipInstanceStatusHasBeenSet = true;
    }

    if (value.HasMember("MaxBandWidth") && !value["MaxBandWidth"].IsNull())
    {
        if (!value["MaxBandWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItemExtraInfo.MaxBandWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxBandWidth = value["MaxBandWidth"].GetInt64();
        m_maxBandWidthHasBeenSet = true;
    }

    if (value.HasMember("SpecName") && !value["SpecName"].IsNull())
    {
        if (!value["SpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItemExtraInfo.SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(value["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }

    if (value.HasMember("NodeCount") && !value["NodeCount"].IsNull())
    {
        if (!value["NodeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItemExtraInfo.NodeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_nodeCount = value["NodeCount"].GetInt64();
        m_nodeCountHasBeenSet = true;
    }

    if (value.HasMember("MaxStorage") && !value["MaxStorage"].IsNull())
    {
        if (!value["MaxStorage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItemExtraInfo.MaxStorage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxStorage = value["MaxStorage"].GetInt64();
        m_maxStorageHasBeenSet = true;
    }

    if (value.HasMember("MaxRetention") && !value["MaxRetention"].IsNull())
    {
        if (!value["MaxRetention"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItemExtraInfo.MaxRetention` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRetention = value["MaxRetention"].GetInt64();
        m_maxRetentionHasBeenSet = true;
    }

    if (value.HasMember("MinRetention") && !value["MinRetention"].IsNull())
    {
        if (!value["MinRetention"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItemExtraInfo.MinRetention` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minRetention = value["MinRetention"].GetInt64();
        m_minRetentionHasBeenSet = true;
    }

    if (value.HasMember("InstanceStatus") && !value["InstanceStatus"].IsNull())
    {
        if (!value["InstanceStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItemExtraInfo.InstanceStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = value["InstanceStatus"].GetInt64();
        m_instanceStatusHasBeenSet = true;
    }

    if (value.HasMember("IsFrozen") && !value["IsFrozen"].IsNull())
    {
        if (!value["IsFrozen"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceItemExtraInfo.IsFrozen` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isFrozen = value["IsFrozen"].GetBool();
        m_isFrozenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceItemExtraInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isVip, allocator);
    }

    if (m_vipInstanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipInstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vipInstanceStatus, allocator);
    }

    if (m_maxBandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxBandWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxBandWidth, allocator);
    }

    if (m_specNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specName.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_maxStorageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxStorage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxStorage, allocator);
    }

    if (m_maxRetentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRetention";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRetention, allocator);
    }

    if (m_minRetentionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinRetention";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minRetention, allocator);
    }

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceStatus, allocator);
    }

    if (m_isFrozenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsFrozen";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isFrozen, allocator);
    }

}


bool InstanceItemExtraInfo::GetIsVip() const
{
    return m_isVip;
}

void InstanceItemExtraInfo::SetIsVip(const bool& _isVip)
{
    m_isVip = _isVip;
    m_isVipHasBeenSet = true;
}

bool InstanceItemExtraInfo::IsVipHasBeenSet() const
{
    return m_isVipHasBeenSet;
}

int64_t InstanceItemExtraInfo::GetVipInstanceStatus() const
{
    return m_vipInstanceStatus;
}

void InstanceItemExtraInfo::SetVipInstanceStatus(const int64_t& _vipInstanceStatus)
{
    m_vipInstanceStatus = _vipInstanceStatus;
    m_vipInstanceStatusHasBeenSet = true;
}

bool InstanceItemExtraInfo::VipInstanceStatusHasBeenSet() const
{
    return m_vipInstanceStatusHasBeenSet;
}

int64_t InstanceItemExtraInfo::GetMaxBandWidth() const
{
    return m_maxBandWidth;
}

void InstanceItemExtraInfo::SetMaxBandWidth(const int64_t& _maxBandWidth)
{
    m_maxBandWidth = _maxBandWidth;
    m_maxBandWidthHasBeenSet = true;
}

bool InstanceItemExtraInfo::MaxBandWidthHasBeenSet() const
{
    return m_maxBandWidthHasBeenSet;
}

string InstanceItemExtraInfo::GetSpecName() const
{
    return m_specName;
}

void InstanceItemExtraInfo::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool InstanceItemExtraInfo::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

int64_t InstanceItemExtraInfo::GetNodeCount() const
{
    return m_nodeCount;
}

void InstanceItemExtraInfo::SetNodeCount(const int64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool InstanceItemExtraInfo::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

int64_t InstanceItemExtraInfo::GetMaxStorage() const
{
    return m_maxStorage;
}

void InstanceItemExtraInfo::SetMaxStorage(const int64_t& _maxStorage)
{
    m_maxStorage = _maxStorage;
    m_maxStorageHasBeenSet = true;
}

bool InstanceItemExtraInfo::MaxStorageHasBeenSet() const
{
    return m_maxStorageHasBeenSet;
}

int64_t InstanceItemExtraInfo::GetMaxRetention() const
{
    return m_maxRetention;
}

void InstanceItemExtraInfo::SetMaxRetention(const int64_t& _maxRetention)
{
    m_maxRetention = _maxRetention;
    m_maxRetentionHasBeenSet = true;
}

bool InstanceItemExtraInfo::MaxRetentionHasBeenSet() const
{
    return m_maxRetentionHasBeenSet;
}

int64_t InstanceItemExtraInfo::GetMinRetention() const
{
    return m_minRetention;
}

void InstanceItemExtraInfo::SetMinRetention(const int64_t& _minRetention)
{
    m_minRetention = _minRetention;
    m_minRetentionHasBeenSet = true;
}

bool InstanceItemExtraInfo::MinRetentionHasBeenSet() const
{
    return m_minRetentionHasBeenSet;
}

int64_t InstanceItemExtraInfo::GetInstanceStatus() const
{
    return m_instanceStatus;
}

void InstanceItemExtraInfo::SetInstanceStatus(const int64_t& _instanceStatus)
{
    m_instanceStatus = _instanceStatus;
    m_instanceStatusHasBeenSet = true;
}

bool InstanceItemExtraInfo::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

bool InstanceItemExtraInfo::GetIsFrozen() const
{
    return m_isFrozen;
}

void InstanceItemExtraInfo::SetIsFrozen(const bool& _isFrozen)
{
    m_isFrozen = _isFrozen;
    m_isFrozenHasBeenSet = true;
}

bool InstanceItemExtraInfo::IsFrozenHasBeenSet() const
{
    return m_isFrozenHasBeenSet;
}

