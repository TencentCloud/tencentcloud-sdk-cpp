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

#include <tencentcloud/iotexplorer/v20190423/model/InstanceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

InstanceDetail::InstanceDetail() :
    m_instanceIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_totalDeviceNumHasBeenSet(false),
    m_usedDeviceNumHasBeenSet(false),
    m_projectNumHasBeenSet(false),
    m_productNumHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_totalDeviceHasBeenSet(false),
    m_activateDeviceHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_upDownTPSHasBeenSet(false),
    m_upDownCurrentTPSHasBeenSet(false),
    m_forwardTPSHasBeenSet(false),
    m_forwardCurrentTPSHasBeenSet(false),
    m_cellNumHasBeenSet(false),
    m_billingTagHasBeenSet(false),
    m_everydayFreeMessageCountHasBeenSet(false),
    m_maxDeviceOnlineCountHasBeenSet(false)
{
}

CoreInternalOutcome InstanceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.InstanceType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = value["InstanceType"].GetInt64();
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("TotalDeviceNum") && !value["TotalDeviceNum"].IsNull())
    {
        if (!value["TotalDeviceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.TotalDeviceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalDeviceNum = value["TotalDeviceNum"].GetInt64();
        m_totalDeviceNumHasBeenSet = true;
    }

    if (value.HasMember("UsedDeviceNum") && !value["UsedDeviceNum"].IsNull())
    {
        if (!value["UsedDeviceNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.UsedDeviceNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedDeviceNum = value["UsedDeviceNum"].GetInt64();
        m_usedDeviceNumHasBeenSet = true;
    }

    if (value.HasMember("ProjectNum") && !value["ProjectNum"].IsNull())
    {
        if (!value["ProjectNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ProjectNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectNum = value["ProjectNum"].GetInt64();
        m_projectNumHasBeenSet = true;
    }

    if (value.HasMember("ProductNum") && !value["ProductNum"].IsNull())
    {
        if (!value["ProductNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ProductNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_productNum = value["ProductNum"].GetInt64();
        m_productNumHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("TotalDevice") && !value["TotalDevice"].IsNull())
    {
        if (!value["TotalDevice"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.TotalDevice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalDevice = value["TotalDevice"].GetInt64();
        m_totalDeviceHasBeenSet = true;
    }

    if (value.HasMember("ActivateDevice") && !value["ActivateDevice"].IsNull())
    {
        if (!value["ActivateDevice"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ActivateDevice` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_activateDevice = value["ActivateDevice"].GetInt64();
        m_activateDeviceHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("UpDownTPS") && !value["UpDownTPS"].IsNull())
    {
        if (!value["UpDownTPS"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.UpDownTPS` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_upDownTPS = value["UpDownTPS"].GetInt64();
        m_upDownTPSHasBeenSet = true;
    }

    if (value.HasMember("UpDownCurrentTPS") && !value["UpDownCurrentTPS"].IsNull())
    {
        if (!value["UpDownCurrentTPS"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.UpDownCurrentTPS` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_upDownCurrentTPS = value["UpDownCurrentTPS"].GetInt64();
        m_upDownCurrentTPSHasBeenSet = true;
    }

    if (value.HasMember("ForwardTPS") && !value["ForwardTPS"].IsNull())
    {
        if (!value["ForwardTPS"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ForwardTPS` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_forwardTPS = value["ForwardTPS"].GetInt64();
        m_forwardTPSHasBeenSet = true;
    }

    if (value.HasMember("ForwardCurrentTPS") && !value["ForwardCurrentTPS"].IsNull())
    {
        if (!value["ForwardCurrentTPS"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.ForwardCurrentTPS` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_forwardCurrentTPS = value["ForwardCurrentTPS"].GetInt64();
        m_forwardCurrentTPSHasBeenSet = true;
    }

    if (value.HasMember("CellNum") && !value["CellNum"].IsNull())
    {
        if (!value["CellNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.CellNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cellNum = value["CellNum"].GetInt64();
        m_cellNumHasBeenSet = true;
    }

    if (value.HasMember("BillingTag") && !value["BillingTag"].IsNull())
    {
        if (!value["BillingTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.BillingTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingTag = string(value["BillingTag"].GetString());
        m_billingTagHasBeenSet = true;
    }

    if (value.HasMember("EverydayFreeMessageCount") && !value["EverydayFreeMessageCount"].IsNull())
    {
        if (!value["EverydayFreeMessageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.EverydayFreeMessageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_everydayFreeMessageCount = value["EverydayFreeMessageCount"].GetInt64();
        m_everydayFreeMessageCountHasBeenSet = true;
    }

    if (value.HasMember("MaxDeviceOnlineCount") && !value["MaxDeviceOnlineCount"].IsNull())
    {
        if (!value["MaxDeviceOnlineCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceDetail.MaxDeviceOnlineCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxDeviceOnlineCount = value["MaxDeviceOnlineCount"].GetInt64();
        m_maxDeviceOnlineCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceType, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_totalDeviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalDeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalDeviceNum, allocator);
    }

    if (m_usedDeviceNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedDeviceNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedDeviceNum, allocator);
    }

    if (m_projectNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectNum, allocator);
    }

    if (m_productNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_productNum, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_totalDeviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalDevice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalDevice, allocator);
    }

    if (m_activateDeviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActivateDevice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activateDevice, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_upDownTPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpDownTPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upDownTPS, allocator);
    }

    if (m_upDownCurrentTPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpDownCurrentTPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upDownCurrentTPS, allocator);
    }

    if (m_forwardTPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardTPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forwardTPS, allocator);
    }

    if (m_forwardCurrentTPSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForwardCurrentTPS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_forwardCurrentTPS, allocator);
    }

    if (m_cellNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CellNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cellNum, allocator);
    }

    if (m_billingTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingTag.c_str(), allocator).Move(), allocator);
    }

    if (m_everydayFreeMessageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EverydayFreeMessageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_everydayFreeMessageCount, allocator);
    }

    if (m_maxDeviceOnlineCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxDeviceOnlineCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxDeviceOnlineCount, allocator);
    }

}


string InstanceDetail::GetInstanceId() const
{
    return m_instanceId;
}

void InstanceDetail::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool InstanceDetail::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t InstanceDetail::GetInstanceType() const
{
    return m_instanceType;
}

void InstanceDetail::SetInstanceType(const int64_t& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool InstanceDetail::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string InstanceDetail::GetRegion() const
{
    return m_region;
}

void InstanceDetail::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool InstanceDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string InstanceDetail::GetZoneId() const
{
    return m_zoneId;
}

void InstanceDetail::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool InstanceDetail::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

int64_t InstanceDetail::GetTotalDeviceNum() const
{
    return m_totalDeviceNum;
}

void InstanceDetail::SetTotalDeviceNum(const int64_t& _totalDeviceNum)
{
    m_totalDeviceNum = _totalDeviceNum;
    m_totalDeviceNumHasBeenSet = true;
}

bool InstanceDetail::TotalDeviceNumHasBeenSet() const
{
    return m_totalDeviceNumHasBeenSet;
}

int64_t InstanceDetail::GetUsedDeviceNum() const
{
    return m_usedDeviceNum;
}

void InstanceDetail::SetUsedDeviceNum(const int64_t& _usedDeviceNum)
{
    m_usedDeviceNum = _usedDeviceNum;
    m_usedDeviceNumHasBeenSet = true;
}

bool InstanceDetail::UsedDeviceNumHasBeenSet() const
{
    return m_usedDeviceNumHasBeenSet;
}

int64_t InstanceDetail::GetProjectNum() const
{
    return m_projectNum;
}

void InstanceDetail::SetProjectNum(const int64_t& _projectNum)
{
    m_projectNum = _projectNum;
    m_projectNumHasBeenSet = true;
}

bool InstanceDetail::ProjectNumHasBeenSet() const
{
    return m_projectNumHasBeenSet;
}

int64_t InstanceDetail::GetProductNum() const
{
    return m_productNum;
}

void InstanceDetail::SetProductNum(const int64_t& _productNum)
{
    m_productNum = _productNum;
    m_productNumHasBeenSet = true;
}

bool InstanceDetail::ProductNumHasBeenSet() const
{
    return m_productNumHasBeenSet;
}

string InstanceDetail::GetCreateTime() const
{
    return m_createTime;
}

void InstanceDetail::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool InstanceDetail::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string InstanceDetail::GetUpdateTime() const
{
    return m_updateTime;
}

void InstanceDetail::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool InstanceDetail::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string InstanceDetail::GetExpireTime() const
{
    return m_expireTime;
}

void InstanceDetail::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool InstanceDetail::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t InstanceDetail::GetTotalDevice() const
{
    return m_totalDevice;
}

void InstanceDetail::SetTotalDevice(const int64_t& _totalDevice)
{
    m_totalDevice = _totalDevice;
    m_totalDeviceHasBeenSet = true;
}

bool InstanceDetail::TotalDeviceHasBeenSet() const
{
    return m_totalDeviceHasBeenSet;
}

int64_t InstanceDetail::GetActivateDevice() const
{
    return m_activateDevice;
}

void InstanceDetail::SetActivateDevice(const int64_t& _activateDevice)
{
    m_activateDevice = _activateDevice;
    m_activateDeviceHasBeenSet = true;
}

bool InstanceDetail::ActivateDeviceHasBeenSet() const
{
    return m_activateDeviceHasBeenSet;
}

string InstanceDetail::GetDescription() const
{
    return m_description;
}

void InstanceDetail::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool InstanceDetail::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t InstanceDetail::GetStatus() const
{
    return m_status;
}

void InstanceDetail::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceDetail::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t InstanceDetail::GetUpDownTPS() const
{
    return m_upDownTPS;
}

void InstanceDetail::SetUpDownTPS(const int64_t& _upDownTPS)
{
    m_upDownTPS = _upDownTPS;
    m_upDownTPSHasBeenSet = true;
}

bool InstanceDetail::UpDownTPSHasBeenSet() const
{
    return m_upDownTPSHasBeenSet;
}

int64_t InstanceDetail::GetUpDownCurrentTPS() const
{
    return m_upDownCurrentTPS;
}

void InstanceDetail::SetUpDownCurrentTPS(const int64_t& _upDownCurrentTPS)
{
    m_upDownCurrentTPS = _upDownCurrentTPS;
    m_upDownCurrentTPSHasBeenSet = true;
}

bool InstanceDetail::UpDownCurrentTPSHasBeenSet() const
{
    return m_upDownCurrentTPSHasBeenSet;
}

int64_t InstanceDetail::GetForwardTPS() const
{
    return m_forwardTPS;
}

void InstanceDetail::SetForwardTPS(const int64_t& _forwardTPS)
{
    m_forwardTPS = _forwardTPS;
    m_forwardTPSHasBeenSet = true;
}

bool InstanceDetail::ForwardTPSHasBeenSet() const
{
    return m_forwardTPSHasBeenSet;
}

int64_t InstanceDetail::GetForwardCurrentTPS() const
{
    return m_forwardCurrentTPS;
}

void InstanceDetail::SetForwardCurrentTPS(const int64_t& _forwardCurrentTPS)
{
    m_forwardCurrentTPS = _forwardCurrentTPS;
    m_forwardCurrentTPSHasBeenSet = true;
}

bool InstanceDetail::ForwardCurrentTPSHasBeenSet() const
{
    return m_forwardCurrentTPSHasBeenSet;
}

int64_t InstanceDetail::GetCellNum() const
{
    return m_cellNum;
}

void InstanceDetail::SetCellNum(const int64_t& _cellNum)
{
    m_cellNum = _cellNum;
    m_cellNumHasBeenSet = true;
}

bool InstanceDetail::CellNumHasBeenSet() const
{
    return m_cellNumHasBeenSet;
}

string InstanceDetail::GetBillingTag() const
{
    return m_billingTag;
}

void InstanceDetail::SetBillingTag(const string& _billingTag)
{
    m_billingTag = _billingTag;
    m_billingTagHasBeenSet = true;
}

bool InstanceDetail::BillingTagHasBeenSet() const
{
    return m_billingTagHasBeenSet;
}

int64_t InstanceDetail::GetEverydayFreeMessageCount() const
{
    return m_everydayFreeMessageCount;
}

void InstanceDetail::SetEverydayFreeMessageCount(const int64_t& _everydayFreeMessageCount)
{
    m_everydayFreeMessageCount = _everydayFreeMessageCount;
    m_everydayFreeMessageCountHasBeenSet = true;
}

bool InstanceDetail::EverydayFreeMessageCountHasBeenSet() const
{
    return m_everydayFreeMessageCountHasBeenSet;
}

int64_t InstanceDetail::GetMaxDeviceOnlineCount() const
{
    return m_maxDeviceOnlineCount;
}

void InstanceDetail::SetMaxDeviceOnlineCount(const int64_t& _maxDeviceOnlineCount)
{
    m_maxDeviceOnlineCount = _maxDeviceOnlineCount;
    m_maxDeviceOnlineCountHasBeenSet = true;
}

bool InstanceDetail::MaxDeviceOnlineCountHasBeenSet() const
{
    return m_maxDeviceOnlineCountHasBeenSet;
}

