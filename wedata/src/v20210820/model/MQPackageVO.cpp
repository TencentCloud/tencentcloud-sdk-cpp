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

#include <tencentcloud/wedata/v20210820/model/MQPackageVO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

MQPackageVO::MQPackageVO() :
    m_typeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_statusDescriptionHasBeenSet(false),
    m_dataProxySpecHasBeenSet(false),
    m_dataProxyNumHasBeenSet(false),
    m_dataProxyStatusHasBeenSet(false),
    m_dataProxyStatusDescriptionHasBeenSet(false),
    m_billingTypeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_lifeTimeHasBeenSet(false)
{
}

CoreInternalOutcome MQPackageVO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQPackageVO.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQPackageVO.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQPackageVO.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQPackageVO.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQPackageVO.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQPackageVO.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("StatusDescription") && !value["StatusDescription"].IsNull())
    {
        if (!value["StatusDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQPackageVO.StatusDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_statusDescription = string(value["StatusDescription"].GetString());
        m_statusDescriptionHasBeenSet = true;
    }

    if (value.HasMember("DataProxySpec") && !value["DataProxySpec"].IsNull())
    {
        if (!value["DataProxySpec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQPackageVO.DataProxySpec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataProxySpec = string(value["DataProxySpec"].GetString());
        m_dataProxySpecHasBeenSet = true;
    }

    if (value.HasMember("DataProxyNum") && !value["DataProxyNum"].IsNull())
    {
        if (!value["DataProxyNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQPackageVO.DataProxyNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataProxyNum = value["DataProxyNum"].GetInt64();
        m_dataProxyNumHasBeenSet = true;
    }

    if (value.HasMember("DataProxyStatus") && !value["DataProxyStatus"].IsNull())
    {
        if (!value["DataProxyStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQPackageVO.DataProxyStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataProxyStatus = value["DataProxyStatus"].GetInt64();
        m_dataProxyStatusHasBeenSet = true;
    }

    if (value.HasMember("DataProxyStatusDescription") && !value["DataProxyStatusDescription"].IsNull())
    {
        if (!value["DataProxyStatusDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQPackageVO.DataProxyStatusDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataProxyStatusDescription = string(value["DataProxyStatusDescription"].GetString());
        m_dataProxyStatusDescriptionHasBeenSet = true;
    }

    if (value.HasMember("BillingType") && !value["BillingType"].IsNull())
    {
        if (!value["BillingType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MQPackageVO.BillingType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingType = string(value["BillingType"].GetString());
        m_billingTypeHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQPackageVO.ExpireTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = value["ExpireTime"].GetInt64();
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("LifeTime") && !value["LifeTime"].IsNull())
    {
        if (!value["LifeTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MQPackageVO.LifeTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lifeTime = value["LifeTime"].GetInt64();
        m_lifeTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MQPackageVO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_statusDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_statusDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_dataProxySpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataProxySpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataProxySpec.c_str(), allocator).Move(), allocator);
    }

    if (m_dataProxyNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataProxyNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataProxyNum, allocator);
    }

    if (m_dataProxyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataProxyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataProxyStatus, allocator);
    }

    if (m_dataProxyStatusDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataProxyStatusDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataProxyStatusDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_billingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingType.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_expireTime, allocator);
    }

    if (m_lifeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lifeTime, allocator);
    }

}


string MQPackageVO::GetType() const
{
    return m_type;
}

void MQPackageVO::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MQPackageVO::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string MQPackageVO::GetInstanceId() const
{
    return m_instanceId;
}

void MQPackageVO::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool MQPackageVO::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string MQPackageVO::GetInstanceName() const
{
    return m_instanceName;
}

void MQPackageVO::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool MQPackageVO::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string MQPackageVO::GetVpcId() const
{
    return m_vpcId;
}

void MQPackageVO::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool MQPackageVO::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string MQPackageVO::GetSubnetId() const
{
    return m_subnetId;
}

void MQPackageVO::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool MQPackageVO::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t MQPackageVO::GetStatus() const
{
    return m_status;
}

void MQPackageVO::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool MQPackageVO::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string MQPackageVO::GetStatusDescription() const
{
    return m_statusDescription;
}

void MQPackageVO::SetStatusDescription(const string& _statusDescription)
{
    m_statusDescription = _statusDescription;
    m_statusDescriptionHasBeenSet = true;
}

bool MQPackageVO::StatusDescriptionHasBeenSet() const
{
    return m_statusDescriptionHasBeenSet;
}

string MQPackageVO::GetDataProxySpec() const
{
    return m_dataProxySpec;
}

void MQPackageVO::SetDataProxySpec(const string& _dataProxySpec)
{
    m_dataProxySpec = _dataProxySpec;
    m_dataProxySpecHasBeenSet = true;
}

bool MQPackageVO::DataProxySpecHasBeenSet() const
{
    return m_dataProxySpecHasBeenSet;
}

int64_t MQPackageVO::GetDataProxyNum() const
{
    return m_dataProxyNum;
}

void MQPackageVO::SetDataProxyNum(const int64_t& _dataProxyNum)
{
    m_dataProxyNum = _dataProxyNum;
    m_dataProxyNumHasBeenSet = true;
}

bool MQPackageVO::DataProxyNumHasBeenSet() const
{
    return m_dataProxyNumHasBeenSet;
}

int64_t MQPackageVO::GetDataProxyStatus() const
{
    return m_dataProxyStatus;
}

void MQPackageVO::SetDataProxyStatus(const int64_t& _dataProxyStatus)
{
    m_dataProxyStatus = _dataProxyStatus;
    m_dataProxyStatusHasBeenSet = true;
}

bool MQPackageVO::DataProxyStatusHasBeenSet() const
{
    return m_dataProxyStatusHasBeenSet;
}

string MQPackageVO::GetDataProxyStatusDescription() const
{
    return m_dataProxyStatusDescription;
}

void MQPackageVO::SetDataProxyStatusDescription(const string& _dataProxyStatusDescription)
{
    m_dataProxyStatusDescription = _dataProxyStatusDescription;
    m_dataProxyStatusDescriptionHasBeenSet = true;
}

bool MQPackageVO::DataProxyStatusDescriptionHasBeenSet() const
{
    return m_dataProxyStatusDescriptionHasBeenSet;
}

string MQPackageVO::GetBillingType() const
{
    return m_billingType;
}

void MQPackageVO::SetBillingType(const string& _billingType)
{
    m_billingType = _billingType;
    m_billingTypeHasBeenSet = true;
}

bool MQPackageVO::BillingTypeHasBeenSet() const
{
    return m_billingTypeHasBeenSet;
}

int64_t MQPackageVO::GetExpireTime() const
{
    return m_expireTime;
}

void MQPackageVO::SetExpireTime(const int64_t& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool MQPackageVO::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t MQPackageVO::GetLifeTime() const
{
    return m_lifeTime;
}

void MQPackageVO::SetLifeTime(const int64_t& _lifeTime)
{
    m_lifeTime = _lifeTime;
    m_lifeTimeHasBeenSet = true;
}

bool MQPackageVO::LifeTimeHasBeenSet() const
{
    return m_lifeTimeHasBeenSet;
}

