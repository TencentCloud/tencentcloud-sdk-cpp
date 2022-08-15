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

#include <tencentcloud/privatedns/v20201028/model/ModifyPrivateZoneRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

ModifyPrivateZoneRequest::ModifyPrivateZoneRequest() :
    m_zoneIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_dnsForwardStatusHasBeenSet(false),
    m_cnameSpeedupStatusHasBeenSet(false)
{
}

string ModifyPrivateZoneRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_dnsForwardStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DnsForwardStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dnsForwardStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_cnameSpeedupStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CnameSpeedupStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cnameSpeedupStatus.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyPrivateZoneRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyPrivateZoneRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyPrivateZoneRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifyPrivateZoneRequest::GetRemark() const
{
    return m_remark;
}

void ModifyPrivateZoneRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyPrivateZoneRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string ModifyPrivateZoneRequest::GetDnsForwardStatus() const
{
    return m_dnsForwardStatus;
}

void ModifyPrivateZoneRequest::SetDnsForwardStatus(const string& _dnsForwardStatus)
{
    m_dnsForwardStatus = _dnsForwardStatus;
    m_dnsForwardStatusHasBeenSet = true;
}

bool ModifyPrivateZoneRequest::DnsForwardStatusHasBeenSet() const
{
    return m_dnsForwardStatusHasBeenSet;
}

string ModifyPrivateZoneRequest::GetCnameSpeedupStatus() const
{
    return m_cnameSpeedupStatus;
}

void ModifyPrivateZoneRequest::SetCnameSpeedupStatus(const string& _cnameSpeedupStatus)
{
    m_cnameSpeedupStatus = _cnameSpeedupStatus;
    m_cnameSpeedupStatusHasBeenSet = true;
}

bool ModifyPrivateZoneRequest::CnameSpeedupStatusHasBeenSet() const
{
    return m_cnameSpeedupStatusHasBeenSet;
}


