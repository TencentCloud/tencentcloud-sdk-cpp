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

#include <tencentcloud/billing/v20180709/model/RenewInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

RenewInstance::RenewInstance() :
    m_instanceIdHasBeenSet(false),
    m_productCodeHasBeenSet(false),
    m_subProductCodeHasBeenSet(false),
    m_regionCodeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_renewPeriodHasBeenSet(false),
    m_renewPeriodUnitHasBeenSet(false)
{
}

CoreInternalOutcome RenewInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenewInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ProductCode") && !value["ProductCode"].IsNull())
    {
        if (!value["ProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenewInstance.ProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productCode = string(value["ProductCode"].GetString());
        m_productCodeHasBeenSet = true;
    }

    if (value.HasMember("SubProductCode") && !value["SubProductCode"].IsNull())
    {
        if (!value["SubProductCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenewInstance.SubProductCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subProductCode = string(value["SubProductCode"].GetString());
        m_subProductCodeHasBeenSet = true;
    }

    if (value.HasMember("RegionCode") && !value["RegionCode"].IsNull())
    {
        if (!value["RegionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenewInstance.RegionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionCode = string(value["RegionCode"].GetString());
        m_regionCodeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenewInstance.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenewInstance.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenewInstance.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenewInstance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("ProductName") && !value["ProductName"].IsNull())
    {
        if (!value["ProductName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenewInstance.ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(value["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (value.HasMember("ProjectName") && !value["ProjectName"].IsNull())
    {
        if (!value["ProjectName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenewInstance.ProjectName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectName = string(value["ProjectName"].GetString());
        m_projectNameHasBeenSet = true;
    }

    if (value.HasMember("RenewPeriod") && !value["RenewPeriod"].IsNull())
    {
        if (!value["RenewPeriod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RenewInstance.RenewPeriod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_renewPeriod = value["RenewPeriod"].GetUint64();
        m_renewPeriodHasBeenSet = true;
    }

    if (value.HasMember("RenewPeriodUnit") && !value["RenewPeriodUnit"].IsNull())
    {
        if (!value["RenewPeriodUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RenewInstance.RenewPeriodUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewPeriodUnit = string(value["RenewPeriodUnit"].GetString());
        m_renewPeriodUnitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RenewInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_productCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productCode.c_str(), allocator).Move(), allocator);
    }

    if (m_subProductCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubProductCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subProductCode.c_str(), allocator).Move(), allocator);
    }

    if (m_regionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_projectNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectName.c_str(), allocator).Move(), allocator);
    }

    if (m_renewPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewPeriod, allocator);
    }

    if (m_renewPeriodUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewPeriodUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_renewPeriodUnit.c_str(), allocator).Move(), allocator);
    }

}


string RenewInstance::GetInstanceId() const
{
    return m_instanceId;
}

void RenewInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RenewInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RenewInstance::GetProductCode() const
{
    return m_productCode;
}

void RenewInstance::SetProductCode(const string& _productCode)
{
    m_productCode = _productCode;
    m_productCodeHasBeenSet = true;
}

bool RenewInstance::ProductCodeHasBeenSet() const
{
    return m_productCodeHasBeenSet;
}

string RenewInstance::GetSubProductCode() const
{
    return m_subProductCode;
}

void RenewInstance::SetSubProductCode(const string& _subProductCode)
{
    m_subProductCode = _subProductCode;
    m_subProductCodeHasBeenSet = true;
}

bool RenewInstance::SubProductCodeHasBeenSet() const
{
    return m_subProductCodeHasBeenSet;
}

string RenewInstance::GetRegionCode() const
{
    return m_regionCode;
}

void RenewInstance::SetRegionCode(const string& _regionCode)
{
    m_regionCode = _regionCode;
    m_regionCodeHasBeenSet = true;
}

bool RenewInstance::RegionCodeHasBeenSet() const
{
    return m_regionCodeHasBeenSet;
}

string RenewInstance::GetStatus() const
{
    return m_status;
}

void RenewInstance::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool RenewInstance::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string RenewInstance::GetRenewFlag() const
{
    return m_renewFlag;
}

void RenewInstance::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool RenewInstance::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

string RenewInstance::GetExpireTime() const
{
    return m_expireTime;
}

void RenewInstance::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool RenewInstance::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string RenewInstance::GetInstanceName() const
{
    return m_instanceName;
}

void RenewInstance::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool RenewInstance::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string RenewInstance::GetProductName() const
{
    return m_productName;
}

void RenewInstance::SetProductName(const string& _productName)
{
    m_productName = _productName;
    m_productNameHasBeenSet = true;
}

bool RenewInstance::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string RenewInstance::GetProjectName() const
{
    return m_projectName;
}

void RenewInstance::SetProjectName(const string& _projectName)
{
    m_projectName = _projectName;
    m_projectNameHasBeenSet = true;
}

bool RenewInstance::ProjectNameHasBeenSet() const
{
    return m_projectNameHasBeenSet;
}

uint64_t RenewInstance::GetRenewPeriod() const
{
    return m_renewPeriod;
}

void RenewInstance::SetRenewPeriod(const uint64_t& _renewPeriod)
{
    m_renewPeriod = _renewPeriod;
    m_renewPeriodHasBeenSet = true;
}

bool RenewInstance::RenewPeriodHasBeenSet() const
{
    return m_renewPeriodHasBeenSet;
}

string RenewInstance::GetRenewPeriodUnit() const
{
    return m_renewPeriodUnit;
}

void RenewInstance::SetRenewPeriodUnit(const string& _renewPeriodUnit)
{
    m_renewPeriodUnit = _renewPeriodUnit;
    m_renewPeriodUnitHasBeenSet = true;
}

bool RenewInstance::RenewPeriodUnitHasBeenSet() const
{
    return m_renewPeriodUnitHasBeenSet;
}

