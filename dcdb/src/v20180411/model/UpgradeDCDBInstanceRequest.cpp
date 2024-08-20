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

#include <tencentcloud/dcdb/v20180411/model/UpgradeDCDBInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dcdb::V20180411::Model;
using namespace std;

UpgradeDCDBInstanceRequest::UpgradeDCDBInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_upgradeTypeHasBeenSet(false),
    m_addShardConfigHasBeenSet(false),
    m_expandShardConfigHasBeenSet(false),
    m_splitShardConfigHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_voucherIdsHasBeenSet(false),
    m_zonesHasBeenSet(false),
    m_switchStartTimeHasBeenSet(false),
    m_switchEndTimeHasBeenSet(false),
    m_switchAutoRetryHasBeenSet(false)
{
}

string UpgradeDCDBInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_upgradeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpgradeType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_upgradeType.c_str(), allocator).Move(), allocator);
    }

    if (m_addShardConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddShardConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_addShardConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_expandShardConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpandShardConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_expandShardConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_splitShardConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SplitShardConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_splitShardConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_autoVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }

    if (m_voucherIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_voucherIds.begin(); itr != m_voucherIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_zonesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zones";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_zones.begin(); itr != m_zones.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_switchStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchStartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_switchStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_switchEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchEndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_switchEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_switchAutoRetryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SwitchAutoRetry";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_switchAutoRetry, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpgradeDCDBInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpgradeDCDBInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpgradeDCDBInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UpgradeDCDBInstanceRequest::GetUpgradeType() const
{
    return m_upgradeType;
}

void UpgradeDCDBInstanceRequest::SetUpgradeType(const string& _upgradeType)
{
    m_upgradeType = _upgradeType;
    m_upgradeTypeHasBeenSet = true;
}

bool UpgradeDCDBInstanceRequest::UpgradeTypeHasBeenSet() const
{
    return m_upgradeTypeHasBeenSet;
}

AddShardConfig UpgradeDCDBInstanceRequest::GetAddShardConfig() const
{
    return m_addShardConfig;
}

void UpgradeDCDBInstanceRequest::SetAddShardConfig(const AddShardConfig& _addShardConfig)
{
    m_addShardConfig = _addShardConfig;
    m_addShardConfigHasBeenSet = true;
}

bool UpgradeDCDBInstanceRequest::AddShardConfigHasBeenSet() const
{
    return m_addShardConfigHasBeenSet;
}

ExpandShardConfig UpgradeDCDBInstanceRequest::GetExpandShardConfig() const
{
    return m_expandShardConfig;
}

void UpgradeDCDBInstanceRequest::SetExpandShardConfig(const ExpandShardConfig& _expandShardConfig)
{
    m_expandShardConfig = _expandShardConfig;
    m_expandShardConfigHasBeenSet = true;
}

bool UpgradeDCDBInstanceRequest::ExpandShardConfigHasBeenSet() const
{
    return m_expandShardConfigHasBeenSet;
}

SplitShardConfig UpgradeDCDBInstanceRequest::GetSplitShardConfig() const
{
    return m_splitShardConfig;
}

void UpgradeDCDBInstanceRequest::SetSplitShardConfig(const SplitShardConfig& _splitShardConfig)
{
    m_splitShardConfig = _splitShardConfig;
    m_splitShardConfigHasBeenSet = true;
}

bool UpgradeDCDBInstanceRequest::SplitShardConfigHasBeenSet() const
{
    return m_splitShardConfigHasBeenSet;
}

bool UpgradeDCDBInstanceRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void UpgradeDCDBInstanceRequest::SetAutoVoucher(const bool& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool UpgradeDCDBInstanceRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

vector<string> UpgradeDCDBInstanceRequest::GetVoucherIds() const
{
    return m_voucherIds;
}

void UpgradeDCDBInstanceRequest::SetVoucherIds(const vector<string>& _voucherIds)
{
    m_voucherIds = _voucherIds;
    m_voucherIdsHasBeenSet = true;
}

bool UpgradeDCDBInstanceRequest::VoucherIdsHasBeenSet() const
{
    return m_voucherIdsHasBeenSet;
}

vector<string> UpgradeDCDBInstanceRequest::GetZones() const
{
    return m_zones;
}

void UpgradeDCDBInstanceRequest::SetZones(const vector<string>& _zones)
{
    m_zones = _zones;
    m_zonesHasBeenSet = true;
}

bool UpgradeDCDBInstanceRequest::ZonesHasBeenSet() const
{
    return m_zonesHasBeenSet;
}

string UpgradeDCDBInstanceRequest::GetSwitchStartTime() const
{
    return m_switchStartTime;
}

void UpgradeDCDBInstanceRequest::SetSwitchStartTime(const string& _switchStartTime)
{
    m_switchStartTime = _switchStartTime;
    m_switchStartTimeHasBeenSet = true;
}

bool UpgradeDCDBInstanceRequest::SwitchStartTimeHasBeenSet() const
{
    return m_switchStartTimeHasBeenSet;
}

string UpgradeDCDBInstanceRequest::GetSwitchEndTime() const
{
    return m_switchEndTime;
}

void UpgradeDCDBInstanceRequest::SetSwitchEndTime(const string& _switchEndTime)
{
    m_switchEndTime = _switchEndTime;
    m_switchEndTimeHasBeenSet = true;
}

bool UpgradeDCDBInstanceRequest::SwitchEndTimeHasBeenSet() const
{
    return m_switchEndTimeHasBeenSet;
}

int64_t UpgradeDCDBInstanceRequest::GetSwitchAutoRetry() const
{
    return m_switchAutoRetry;
}

void UpgradeDCDBInstanceRequest::SetSwitchAutoRetry(const int64_t& _switchAutoRetry)
{
    m_switchAutoRetry = _switchAutoRetry;
    m_switchAutoRetryHasBeenSet = true;
}

bool UpgradeDCDBInstanceRequest::SwitchAutoRetryHasBeenSet() const
{
    return m_switchAutoRetryHasBeenSet;
}


