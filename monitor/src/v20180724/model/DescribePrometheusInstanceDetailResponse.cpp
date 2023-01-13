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

#include <tencentcloud/monitor/v20180724/model/DescribePrometheusInstanceDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribePrometheusInstanceDetailResponse::DescribePrometheusInstanceDetailResponse() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_instanceStatusHasBeenSet(false),
    m_chargeStatusHasBeenSet(false),
    m_enableGrafanaHasBeenSet(false),
    m_grafanaURLHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_specNameHasBeenSet(false),
    m_dataRetentionTimeHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false)
{
}

CoreInternalOutcome DescribePrometheusInstanceDetailResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceName") && !rsp["InstanceName"].IsNull())
    {
        if (!rsp["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(rsp["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (rsp.HasMember("VpcId") && !rsp["VpcId"].IsNull())
    {
        if (!rsp["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(rsp["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (rsp.HasMember("SubnetId") && !rsp["SubnetId"].IsNull())
    {
        if (!rsp["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(rsp["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceStatus") && !rsp["InstanceStatus"].IsNull())
    {
        if (!rsp["InstanceStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceStatus = rsp["InstanceStatus"].GetInt64();
        m_instanceStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ChargeStatus") && !rsp["ChargeStatus"].IsNull())
    {
        if (!rsp["ChargeStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ChargeStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_chargeStatus = rsp["ChargeStatus"].GetInt64();
        m_chargeStatusHasBeenSet = true;
    }

    if (rsp.HasMember("EnableGrafana") && !rsp["EnableGrafana"].IsNull())
    {
        if (!rsp["EnableGrafana"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EnableGrafana` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_enableGrafana = rsp["EnableGrafana"].GetInt64();
        m_enableGrafanaHasBeenSet = true;
    }

    if (rsp.HasMember("GrafanaURL") && !rsp["GrafanaURL"].IsNull())
    {
        if (!rsp["GrafanaURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GrafanaURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grafanaURL = string(rsp["GrafanaURL"].GetString());
        m_grafanaURLHasBeenSet = true;
    }

    if (rsp.HasMember("InstanceChargeType") && !rsp["InstanceChargeType"].IsNull())
    {
        if (!rsp["InstanceChargeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceChargeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = rsp["InstanceChargeType"].GetInt64();
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (rsp.HasMember("SpecName") && !rsp["SpecName"].IsNull())
    {
        if (!rsp["SpecName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SpecName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specName = string(rsp["SpecName"].GetString());
        m_specNameHasBeenSet = true;
    }

    if (rsp.HasMember("DataRetentionTime") && !rsp["DataRetentionTime"].IsNull())
    {
        if (!rsp["DataRetentionTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataRetentionTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_dataRetentionTime = rsp["DataRetentionTime"].GetInt64();
        m_dataRetentionTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ExpireTime") && !rsp["ExpireTime"].IsNull())
    {
        if (!rsp["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(rsp["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (rsp.HasMember("AutoRenewFlag") && !rsp["AutoRenewFlag"].IsNull())
    {
        if (!rsp["AutoRenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoRenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoRenewFlag = rsp["AutoRenewFlag"].GetInt64();
        m_autoRenewFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribePrometheusInstanceDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

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

    if (m_instanceStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceStatus, allocator);
    }

    if (m_chargeStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChargeStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_chargeStatus, allocator);
    }

    if (m_enableGrafanaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableGrafana";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableGrafana, allocator);
    }

    if (m_grafanaURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrafanaURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grafanaURL.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceChargeType, allocator);
    }

    if (m_specNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataRetentionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataRetentionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_dataRetentionTime, allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribePrometheusInstanceDetailResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribePrometheusInstanceDetailResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribePrometheusInstanceDetailResponse::GetInstanceName() const
{
    return m_instanceName;
}

bool DescribePrometheusInstanceDetailResponse::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string DescribePrometheusInstanceDetailResponse::GetVpcId() const
{
    return m_vpcId;
}

bool DescribePrometheusInstanceDetailResponse::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DescribePrometheusInstanceDetailResponse::GetSubnetId() const
{
    return m_subnetId;
}

bool DescribePrometheusInstanceDetailResponse::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t DescribePrometheusInstanceDetailResponse::GetInstanceStatus() const
{
    return m_instanceStatus;
}

bool DescribePrometheusInstanceDetailResponse::InstanceStatusHasBeenSet() const
{
    return m_instanceStatusHasBeenSet;
}

int64_t DescribePrometheusInstanceDetailResponse::GetChargeStatus() const
{
    return m_chargeStatus;
}

bool DescribePrometheusInstanceDetailResponse::ChargeStatusHasBeenSet() const
{
    return m_chargeStatusHasBeenSet;
}

int64_t DescribePrometheusInstanceDetailResponse::GetEnableGrafana() const
{
    return m_enableGrafana;
}

bool DescribePrometheusInstanceDetailResponse::EnableGrafanaHasBeenSet() const
{
    return m_enableGrafanaHasBeenSet;
}

string DescribePrometheusInstanceDetailResponse::GetGrafanaURL() const
{
    return m_grafanaURL;
}

bool DescribePrometheusInstanceDetailResponse::GrafanaURLHasBeenSet() const
{
    return m_grafanaURLHasBeenSet;
}

int64_t DescribePrometheusInstanceDetailResponse::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

bool DescribePrometheusInstanceDetailResponse::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

string DescribePrometheusInstanceDetailResponse::GetSpecName() const
{
    return m_specName;
}

bool DescribePrometheusInstanceDetailResponse::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

int64_t DescribePrometheusInstanceDetailResponse::GetDataRetentionTime() const
{
    return m_dataRetentionTime;
}

bool DescribePrometheusInstanceDetailResponse::DataRetentionTimeHasBeenSet() const
{
    return m_dataRetentionTimeHasBeenSet;
}

string DescribePrometheusInstanceDetailResponse::GetExpireTime() const
{
    return m_expireTime;
}

bool DescribePrometheusInstanceDetailResponse::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

int64_t DescribePrometheusInstanceDetailResponse::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

bool DescribePrometheusInstanceDetailResponse::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}


