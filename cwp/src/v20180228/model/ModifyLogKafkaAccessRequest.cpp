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

#include <tencentcloud/cwp/v20180228/model/ModifyLogKafkaAccessRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

ModifyLogKafkaAccessRequest::ModifyLogKafkaAccessRequest() :
    m_kafkaEnvNameHasBeenSet(false),
    m_kafkaIdHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_accessAddrHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_hasPwdHasBeenSet(false),
    m_deliverTypeDetailsHasBeenSet(false),
    m_insVersionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_azHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_deliverStatusHasBeenSet(false),
    m_bandWidthHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_pwdHasBeenSet(false)
{
}

string ModifyLogKafkaAccessRequest::ToJsonString() const
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

    if (m_hasPwdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasPwd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_hasPwd, allocator);
    }

    if (m_deliverTypeDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeliverTypeDetails";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_deliverTypeDetails.begin(); itr != m_deliverTypeDetails.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_insVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_insVersion.c_str(), allocator).Move(), allocator);
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

    if (m_pwdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pwd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pwd.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLogKafkaAccessRequest::GetKafkaEnvName() const
{
    return m_kafkaEnvName;
}

void ModifyLogKafkaAccessRequest::SetKafkaEnvName(const string& _kafkaEnvName)
{
    m_kafkaEnvName = _kafkaEnvName;
    m_kafkaEnvNameHasBeenSet = true;
}

bool ModifyLogKafkaAccessRequest::KafkaEnvNameHasBeenSet() const
{
    return m_kafkaEnvNameHasBeenSet;
}

string ModifyLogKafkaAccessRequest::GetKafkaId() const
{
    return m_kafkaId;
}

void ModifyLogKafkaAccessRequest::SetKafkaId(const string& _kafkaId)
{
    m_kafkaId = _kafkaId;
    m_kafkaIdHasBeenSet = true;
}

bool ModifyLogKafkaAccessRequest::KafkaIdHasBeenSet() const
{
    return m_kafkaIdHasBeenSet;
}

uint64_t ModifyLogKafkaAccessRequest::GetAccessType() const
{
    return m_accessType;
}

void ModifyLogKafkaAccessRequest::SetAccessType(const uint64_t& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool ModifyLogKafkaAccessRequest::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

string ModifyLogKafkaAccessRequest::GetAccessAddr() const
{
    return m_accessAddr;
}

void ModifyLogKafkaAccessRequest::SetAccessAddr(const string& _accessAddr)
{
    m_accessAddr = _accessAddr;
    m_accessAddrHasBeenSet = true;
}

bool ModifyLogKafkaAccessRequest::AccessAddrHasBeenSet() const
{
    return m_accessAddrHasBeenSet;
}

string ModifyLogKafkaAccessRequest::GetUsername() const
{
    return m_username;
}

void ModifyLogKafkaAccessRequest::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool ModifyLogKafkaAccessRequest::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

uint64_t ModifyLogKafkaAccessRequest::GetHasPwd() const
{
    return m_hasPwd;
}

void ModifyLogKafkaAccessRequest::SetHasPwd(const uint64_t& _hasPwd)
{
    m_hasPwd = _hasPwd;
    m_hasPwdHasBeenSet = true;
}

bool ModifyLogKafkaAccessRequest::HasPwdHasBeenSet() const
{
    return m_hasPwdHasBeenSet;
}

vector<DeliverTypeDetails> ModifyLogKafkaAccessRequest::GetDeliverTypeDetails() const
{
    return m_deliverTypeDetails;
}

void ModifyLogKafkaAccessRequest::SetDeliverTypeDetails(const vector<DeliverTypeDetails>& _deliverTypeDetails)
{
    m_deliverTypeDetails = _deliverTypeDetails;
    m_deliverTypeDetailsHasBeenSet = true;
}

bool ModifyLogKafkaAccessRequest::DeliverTypeDetailsHasBeenSet() const
{
    return m_deliverTypeDetailsHasBeenSet;
}

string ModifyLogKafkaAccessRequest::GetInsVersion() const
{
    return m_insVersion;
}

void ModifyLogKafkaAccessRequest::SetInsVersion(const string& _insVersion)
{
    m_insVersion = _insVersion;
    m_insVersionHasBeenSet = true;
}

bool ModifyLogKafkaAccessRequest::InsVersionHasBeenSet() const
{
    return m_insVersionHasBeenSet;
}

string ModifyLogKafkaAccessRequest::GetZone() const
{
    return m_zone;
}

void ModifyLogKafkaAccessRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ModifyLogKafkaAccessRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string ModifyLogKafkaAccessRequest::GetAz() const
{
    return m_az;
}

void ModifyLogKafkaAccessRequest::SetAz(const string& _az)
{
    m_az = _az;
    m_azHasBeenSet = true;
}

bool ModifyLogKafkaAccessRequest::AzHasBeenSet() const
{
    return m_azHasBeenSet;
}

string ModifyLogKafkaAccessRequest::GetVpcId() const
{
    return m_vpcId;
}

void ModifyLogKafkaAccessRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ModifyLogKafkaAccessRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ModifyLogKafkaAccessRequest::GetSubnetId() const
{
    return m_subnetId;
}

void ModifyLogKafkaAccessRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ModifyLogKafkaAccessRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

int64_t ModifyLogKafkaAccessRequest::GetDeliverStatus() const
{
    return m_deliverStatus;
}

void ModifyLogKafkaAccessRequest::SetDeliverStatus(const int64_t& _deliverStatus)
{
    m_deliverStatus = _deliverStatus;
    m_deliverStatusHasBeenSet = true;
}

bool ModifyLogKafkaAccessRequest::DeliverStatusHasBeenSet() const
{
    return m_deliverStatusHasBeenSet;
}

int64_t ModifyLogKafkaAccessRequest::GetBandWidth() const
{
    return m_bandWidth;
}

void ModifyLogKafkaAccessRequest::SetBandWidth(const int64_t& _bandWidth)
{
    m_bandWidth = _bandWidth;
    m_bandWidthHasBeenSet = true;
}

bool ModifyLogKafkaAccessRequest::BandWidthHasBeenSet() const
{
    return m_bandWidthHasBeenSet;
}

int64_t ModifyLogKafkaAccessRequest::GetDiskSize() const
{
    return m_diskSize;
}

void ModifyLogKafkaAccessRequest::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool ModifyLogKafkaAccessRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string ModifyLogKafkaAccessRequest::GetPwd() const
{
    return m_pwd;
}

void ModifyLogKafkaAccessRequest::SetPwd(const string& _pwd)
{
    m_pwd = _pwd;
    m_pwdHasBeenSet = true;
}

bool ModifyLogKafkaAccessRequest::PwdHasBeenSet() const
{
    return m_pwdHasBeenSet;
}


