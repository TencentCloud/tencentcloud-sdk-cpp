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

#include <tencentcloud/cwp/v20180228/model/DescribeLogKafkaDeliverInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

DescribeLogKafkaDeliverInfoResponse::DescribeLogKafkaDeliverInfoResponse() :
    m_kafkaEnvNameHasBeenSet(false),
    m_kafkaIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_azHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_accessAddrHasBeenSet(false),
    m_deliverStatusHasBeenSet(false),
    m_insVersionHasBeenSet(false),
    m_bandWidthHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_deliverTypeDetailsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLogKafkaDeliverInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("KafkaEnvName") && !rsp["KafkaEnvName"].IsNull())
    {
        if (!rsp["KafkaEnvName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaEnvName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaEnvName = string(rsp["KafkaEnvName"].GetString());
        m_kafkaEnvNameHasBeenSet = true;
    }

    if (rsp.HasMember("KafkaId") && !rsp["KafkaId"].IsNull())
    {
        if (!rsp["KafkaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KafkaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaId = string(rsp["KafkaId"].GetString());
        m_kafkaIdHasBeenSet = true;
    }

    if (rsp.HasMember("Zone") && !rsp["Zone"].IsNull())
    {
        if (!rsp["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(rsp["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (rsp.HasMember("Az") && !rsp["Az"].IsNull())
    {
        if (!rsp["Az"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Az` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_az = string(rsp["Az"].GetString());
        m_azHasBeenSet = true;
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

    if (rsp.HasMember("AccessType") && !rsp["AccessType"].IsNull())
    {
        if (!rsp["AccessType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AccessType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = rsp["AccessType"].GetUint64();
        m_accessTypeHasBeenSet = true;
    }

    if (rsp.HasMember("AccessAddr") && !rsp["AccessAddr"].IsNull())
    {
        if (!rsp["AccessAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessAddr = string(rsp["AccessAddr"].GetString());
        m_accessAddrHasBeenSet = true;
    }

    if (rsp.HasMember("DeliverStatus") && !rsp["DeliverStatus"].IsNull())
    {
        if (!rsp["DeliverStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeliverStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deliverStatus = rsp["DeliverStatus"].GetUint64();
        m_deliverStatusHasBeenSet = true;
    }

    if (rsp.HasMember("InsVersion") && !rsp["InsVersion"].IsNull())
    {
        if (!rsp["InsVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InsVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insVersion = string(rsp["InsVersion"].GetString());
        m_insVersionHasBeenSet = true;
    }

    if (rsp.HasMember("BandWidth") && !rsp["BandWidth"].IsNull())
    {
        if (!rsp["BandWidth"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BandWidth` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bandWidth = rsp["BandWidth"].GetInt64();
        m_bandWidthHasBeenSet = true;
    }

    if (rsp.HasMember("DiskSize") && !rsp["DiskSize"].IsNull())
    {
        if (!rsp["DiskSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DiskSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_diskSize = rsp["DiskSize"].GetInt64();
        m_diskSizeHasBeenSet = true;
    }

    if (rsp.HasMember("Username") && !rsp["Username"].IsNull())
    {
        if (!rsp["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(rsp["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (rsp.HasMember("DeliverTypeDetails") && !rsp["DeliverTypeDetails"].IsNull())
    {
        if (!rsp["DeliverTypeDetails"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DeliverTypeDetails` is not array type"));

        const rapidjson::Value &tmpValue = rsp["DeliverTypeDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DeliverTypeDetails item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_deliverTypeDetails.push_back(item);
        }
        m_deliverTypeDetailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeLogKafkaDeliverInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_kafkaEnvNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaEnvName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaEnvName.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_azHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Az";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_az.c_str(), allocator).Move(), allocator);
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

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessType, allocator);
    }

    if (m_accessAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_deliverStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deliverStatus, allocator);
    }

    if (m_insVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_bandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bandWidth, allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_deliverTypeDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverTypeDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deliverTypeDetails.begin(); itr != m_deliverTypeDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string DescribeLogKafkaDeliverInfoResponse::GetKafkaEnvName() const
{
    return m_kafkaEnvName;
}

bool DescribeLogKafkaDeliverInfoResponse::KafkaEnvNameHasBeenSet() const
{
    return m_kafkaEnvNameHasBeenSet;
}

string DescribeLogKafkaDeliverInfoResponse::GetKafkaId() const
{
    return m_kafkaId;
}

bool DescribeLogKafkaDeliverInfoResponse::KafkaIdHasBeenSet() const
{
    return m_kafkaIdHasBeenSet;
}

string DescribeLogKafkaDeliverInfoResponse::GetZone() const
{
    return m_zone;
}

bool DescribeLogKafkaDeliverInfoResponse::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DescribeLogKafkaDeliverInfoResponse::GetAz() const
{
    return m_az;
}

bool DescribeLogKafkaDeliverInfoResponse::AzHasBeenSet() const
{
    return m_azHasBeenSet;
}

string DescribeLogKafkaDeliverInfoResponse::GetVpcId() const
{
    return m_vpcId;
}

bool DescribeLogKafkaDeliverInfoResponse::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DescribeLogKafkaDeliverInfoResponse::GetSubnetId() const
{
    return m_subnetId;
}

bool DescribeLogKafkaDeliverInfoResponse::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

uint64_t DescribeLogKafkaDeliverInfoResponse::GetAccessType() const
{
    return m_accessType;
}

bool DescribeLogKafkaDeliverInfoResponse::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string DescribeLogKafkaDeliverInfoResponse::GetAccessAddr() const
{
    return m_accessAddr;
}

bool DescribeLogKafkaDeliverInfoResponse::AccessAddrHasBeenSet() const
{
    return m_accessAddrHasBeenSet;
}

uint64_t DescribeLogKafkaDeliverInfoResponse::GetDeliverStatus() const
{
    return m_deliverStatus;
}

bool DescribeLogKafkaDeliverInfoResponse::DeliverStatusHasBeenSet() const
{
    return m_deliverStatusHasBeenSet;
}

string DescribeLogKafkaDeliverInfoResponse::GetInsVersion() const
{
    return m_insVersion;
}

bool DescribeLogKafkaDeliverInfoResponse::InsVersionHasBeenSet() const
{
    return m_insVersionHasBeenSet;
}

int64_t DescribeLogKafkaDeliverInfoResponse::GetBandWidth() const
{
    return m_bandWidth;
}

bool DescribeLogKafkaDeliverInfoResponse::BandWidthHasBeenSet() const
{
    return m_bandWidthHasBeenSet;
}

int64_t DescribeLogKafkaDeliverInfoResponse::GetDiskSize() const
{
    return m_diskSize;
}

bool DescribeLogKafkaDeliverInfoResponse::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string DescribeLogKafkaDeliverInfoResponse::GetUsername() const
{
    return m_username;
}

bool DescribeLogKafkaDeliverInfoResponse::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

vector<DeliverTypeDetails> DescribeLogKafkaDeliverInfoResponse::GetDeliverTypeDetails() const
{
    return m_deliverTypeDetails;
}

bool DescribeLogKafkaDeliverInfoResponse::DeliverTypeDetailsHasBeenSet() const
{
    return m_deliverTypeDetailsHasBeenSet;
}


