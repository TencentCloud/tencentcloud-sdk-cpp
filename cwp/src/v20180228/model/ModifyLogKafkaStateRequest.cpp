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

#include <tencentcloud/cwp/v20180228/model/ModifyLogKafkaStateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyLogKafkaStateRequest::ModifyLogKafkaStateRequest() :
    m_kafkaEnvNameHasBeenSet(false),
    m_kafkaIdHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_accessAddrHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_azHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_deliverStatusHasBeenSet(false),
    m_insVersionHasBeenSet(false),
    m_bandWidthHasBeenSet(false),
    m_diskSizeHasBeenSet(false)
{
}

string ModifyLogKafkaStateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_kafkaEnvNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaEnvName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kafkaEnvName.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_kafkaId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_accessType, allocator);
    }

    if (m_accessAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessAddr";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_accessAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_azHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Az";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_az.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_deliverStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deliverStatus, allocator);
    }

    if (m_insVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_insVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_bandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandWidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandWidth, allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLogKafkaStateRequest::GetKafkaEnvName() const
{
    return m_kafkaEnvName;
}

void ModifyLogKafkaStateRequest::SetKafkaEnvName(const string& _kafkaEnvName)
{
    m_kafkaEnvName = _kafkaEnvName;
    m_kafkaEnvNameHasBeenSet = true;
}

bool ModifyLogKafkaStateRequest::KafkaEnvNameHasBeenSet() const
{
    return m_kafkaEnvNameHasBeenSet;
}

string ModifyLogKafkaStateRequest::GetKafkaId() const
{
    return m_kafkaId;
}

void ModifyLogKafkaStateRequest::SetKafkaId(const string& _kafkaId)
{
    m_kafkaId = _kafkaId;
    m_kafkaIdHasBeenSet = true;
}

bool ModifyLogKafkaStateRequest::KafkaIdHasBeenSet() const
{
    return m_kafkaIdHasBeenSet;
}

uint64_t ModifyLogKafkaStateRequest::GetAccessType() const
{
    return m_accessType;
}

void ModifyLogKafkaStateRequest::SetAccessType(const uint64_t& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool ModifyLogKafkaStateRequest::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string ModifyLogKafkaStateRequest::GetAccessAddr() const
{
    return m_accessAddr;
}

void ModifyLogKafkaStateRequest::SetAccessAddr(const string& _accessAddr)
{
    m_accessAddr = _accessAddr;
    m_accessAddrHasBeenSet = true;
}

bool ModifyLogKafkaStateRequest::AccessAddrHasBeenSet() const
{
    return m_accessAddrHasBeenSet;
}

string ModifyLogKafkaStateRequest::GetUsername() const
{
    return m_username;
}

void ModifyLogKafkaStateRequest::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool ModifyLogKafkaStateRequest::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string ModifyLogKafkaStateRequest::GetZone() const
{
    return m_zone;
}

void ModifyLogKafkaStateRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ModifyLogKafkaStateRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string ModifyLogKafkaStateRequest::GetAz() const
{
    return m_az;
}

void ModifyLogKafkaStateRequest::SetAz(const string& _az)
{
    m_az = _az;
    m_azHasBeenSet = true;
}

bool ModifyLogKafkaStateRequest::AzHasBeenSet() const
{
    return m_azHasBeenSet;
}

string ModifyLogKafkaStateRequest::GetVpcId() const
{
    return m_vpcId;
}

void ModifyLogKafkaStateRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ModifyLogKafkaStateRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ModifyLogKafkaStateRequest::GetSubnetId() const
{
    return m_subnetId;
}

void ModifyLogKafkaStateRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ModifyLogKafkaStateRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

uint64_t ModifyLogKafkaStateRequest::GetDeliverStatus() const
{
    return m_deliverStatus;
}

void ModifyLogKafkaStateRequest::SetDeliverStatus(const uint64_t& _deliverStatus)
{
    m_deliverStatus = _deliverStatus;
    m_deliverStatusHasBeenSet = true;
}

bool ModifyLogKafkaStateRequest::DeliverStatusHasBeenSet() const
{
    return m_deliverStatusHasBeenSet;
}

string ModifyLogKafkaStateRequest::GetInsVersion() const
{
    return m_insVersion;
}

void ModifyLogKafkaStateRequest::SetInsVersion(const string& _insVersion)
{
    m_insVersion = _insVersion;
    m_insVersionHasBeenSet = true;
}

bool ModifyLogKafkaStateRequest::InsVersionHasBeenSet() const
{
    return m_insVersionHasBeenSet;
}

int64_t ModifyLogKafkaStateRequest::GetBandWidth() const
{
    return m_bandWidth;
}

void ModifyLogKafkaStateRequest::SetBandWidth(const int64_t& _bandWidth)
{
    m_bandWidth = _bandWidth;
    m_bandWidthHasBeenSet = true;
}

bool ModifyLogKafkaStateRequest::BandWidthHasBeenSet() const
{
    return m_bandWidthHasBeenSet;
}

int64_t ModifyLogKafkaStateRequest::GetDiskSize() const
{
    return m_diskSize;
}

void ModifyLogKafkaStateRequest::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool ModifyLogKafkaStateRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}


