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

#include <tencentcloud/mna/v20210119/model/FlowPackageInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

FlowPackageInfo::FlowPackageInfo() :
    m_resourceIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_packageTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_activeTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_deviceListHasBeenSet(false),
    m_capacitySizeHasBeenSet(false),
    m_capacityRemainHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_modifyStatusHasBeenSet(false),
    m_truncFlagHasBeenSet(false),
    m_capacityRemainPreciseHasBeenSet(false)
{
}

CoreInternalOutcome FlowPackageInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ResourceId") && !value["ResourceId"].IsNull())
    {
        if (!value["ResourceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowPackageInfo.ResourceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceId = string(value["ResourceId"].GetString());
        m_resourceIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowPackageInfo.AppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetUint64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("PackageType") && !value["PackageType"].IsNull())
    {
        if (!value["PackageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FlowPackageInfo.PackageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_packageType = string(value["PackageType"].GetString());
        m_packageTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowPackageInfo.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowPackageInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("ActiveTime") && !value["ActiveTime"].IsNull())
    {
        if (!value["ActiveTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowPackageInfo.ActiveTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activeTime = value["ActiveTime"].GetInt64();
        m_activeTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowPackageInfo.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("DeviceList") && !value["DeviceList"].IsNull())
    {
        if (!value["DeviceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FlowPackageInfo.DeviceList` is not array type"));

        const rapidjson::Value &tmpValue = value["DeviceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_deviceList.push_back((*itr).GetString());
        }
        m_deviceListHasBeenSet = true;
    }

    if (value.HasMember("CapacitySize") && !value["CapacitySize"].IsNull())
    {
        if (!value["CapacitySize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowPackageInfo.CapacitySize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_capacitySize = value["CapacitySize"].GetUint64();
        m_capacitySizeHasBeenSet = true;
    }

    if (value.HasMember("CapacityRemain") && !value["CapacityRemain"].IsNull())
    {
        if (!value["CapacityRemain"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowPackageInfo.CapacityRemain` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_capacityRemain = value["CapacityRemain"].GetUint64();
        m_capacityRemainHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowPackageInfo.RenewFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetBool();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("ModifyStatus") && !value["ModifyStatus"].IsNull())
    {
        if (!value["ModifyStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowPackageInfo.ModifyStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modifyStatus = value["ModifyStatus"].GetInt64();
        m_modifyStatusHasBeenSet = true;
    }

    if (value.HasMember("TruncFlag") && !value["TruncFlag"].IsNull())
    {
        if (!value["TruncFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `FlowPackageInfo.TruncFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_truncFlag = value["TruncFlag"].GetBool();
        m_truncFlagHasBeenSet = true;
    }

    if (value.HasMember("CapacityRemainPrecise") && !value["CapacityRemainPrecise"].IsNull())
    {
        if (!value["CapacityRemainPrecise"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `FlowPackageInfo.CapacityRemainPrecise` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_capacityRemainPrecise = value["CapacityRemainPrecise"].GetUint64();
        m_capacityRemainPreciseHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FlowPackageInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_activeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeTime, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_deviceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deviceList.begin(); itr != m_deviceList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_capacitySizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapacitySize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_capacitySize, allocator);
    }

    if (m_capacityRemainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapacityRemain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_capacityRemain, allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_modifyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modifyStatus, allocator);
    }

    if (m_truncFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TruncFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_truncFlag, allocator);
    }

    if (m_capacityRemainPreciseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapacityRemainPrecise";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_capacityRemainPrecise, allocator);
    }

}


string FlowPackageInfo::GetResourceId() const
{
    return m_resourceId;
}

void FlowPackageInfo::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool FlowPackageInfo::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

uint64_t FlowPackageInfo::GetAppId() const
{
    return m_appId;
}

void FlowPackageInfo::SetAppId(const uint64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool FlowPackageInfo::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string FlowPackageInfo::GetPackageType() const
{
    return m_packageType;
}

void FlowPackageInfo::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool FlowPackageInfo::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

int64_t FlowPackageInfo::GetStatus() const
{
    return m_status;
}

void FlowPackageInfo::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool FlowPackageInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t FlowPackageInfo::GetCreateTime() const
{
    return m_createTime;
}

void FlowPackageInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool FlowPackageInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t FlowPackageInfo::GetActiveTime() const
{
    return m_activeTime;
}

void FlowPackageInfo::SetActiveTime(const int64_t& _activeTime)
{
    m_activeTime = _activeTime;
    m_activeTimeHasBeenSet = true;
}

bool FlowPackageInfo::ActiveTimeHasBeenSet() const
{
    return m_activeTimeHasBeenSet;
}

int64_t FlowPackageInfo::GetExpireTime() const
{
    return m_expireTime;
}

void FlowPackageInfo::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool FlowPackageInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

vector<string> FlowPackageInfo::GetDeviceList() const
{
    return m_deviceList;
}

void FlowPackageInfo::SetDeviceList(const vector<string>& _deviceList)
{
    m_deviceList = _deviceList;
    m_deviceListHasBeenSet = true;
}

bool FlowPackageInfo::DeviceListHasBeenSet() const
{
    return m_deviceListHasBeenSet;
}

uint64_t FlowPackageInfo::GetCapacitySize() const
{
    return m_capacitySize;
}

void FlowPackageInfo::SetCapacitySize(const uint64_t& _capacitySize)
{
    m_capacitySize = _capacitySize;
    m_capacitySizeHasBeenSet = true;
}

bool FlowPackageInfo::CapacitySizeHasBeenSet() const
{
    return m_capacitySizeHasBeenSet;
}

uint64_t FlowPackageInfo::GetCapacityRemain() const
{
    return m_capacityRemain;
}

void FlowPackageInfo::SetCapacityRemain(const uint64_t& _capacityRemain)
{
    m_capacityRemain = _capacityRemain;
    m_capacityRemainHasBeenSet = true;
}

bool FlowPackageInfo::CapacityRemainHasBeenSet() const
{
    return m_capacityRemainHasBeenSet;
}

bool FlowPackageInfo::GetRenewFlag() const
{
    return m_renewFlag;
}

void FlowPackageInfo::SetRenewFlag(const bool& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool FlowPackageInfo::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

int64_t FlowPackageInfo::GetModifyStatus() const
{
    return m_modifyStatus;
}

void FlowPackageInfo::SetModifyStatus(const int64_t& _modifyStatus)
{
    m_modifyStatus = _modifyStatus;
    m_modifyStatusHasBeenSet = true;
}

bool FlowPackageInfo::ModifyStatusHasBeenSet() const
{
    return m_modifyStatusHasBeenSet;
}

bool FlowPackageInfo::GetTruncFlag() const
{
    return m_truncFlag;
}

void FlowPackageInfo::SetTruncFlag(const bool& _truncFlag)
{
    m_truncFlag = _truncFlag;
    m_truncFlagHasBeenSet = true;
}

bool FlowPackageInfo::TruncFlagHasBeenSet() const
{
    return m_truncFlagHasBeenSet;
}

uint64_t FlowPackageInfo::GetCapacityRemainPrecise() const
{
    return m_capacityRemainPrecise;
}

void FlowPackageInfo::SetCapacityRemainPrecise(const uint64_t& _capacityRemainPrecise)
{
    m_capacityRemainPrecise = _capacityRemainPrecise;
    m_capacityRemainPreciseHasBeenSet = true;
}

bool FlowPackageInfo::CapacityRemainPreciseHasBeenSet() const
{
    return m_capacityRemainPreciseHasBeenSet;
}

