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

#include <tencentcloud/ckafka/v20190819/model/CreateCdcClusterRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

CreateCdcClusterRequest::CreateCdcClusterRequest() :
    m_cdcIdHasBeenSet(false),
    m_cdcVpcIdHasBeenSet(false),
    m_cdcSubnetIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_bandwidthHasBeenSet(false),
    m_diskSizeHasBeenSet(false),
    m_diskTypeHasBeenSet(false),
    m_systemDiskTypeHasBeenSet(false)
{
}

string CreateCdcClusterRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cdcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cdcId.c_str(), allocator).Move(), allocator);
    }

    if (m_cdcVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcVpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cdcVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_cdcSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdcSubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cdcSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_bandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Bandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bandwidth, allocator);
    }

    if (m_diskSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_diskSize, allocator);
    }

    if (m_diskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DiskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_diskType.c_str(), allocator).Move(), allocator);
    }

    if (m_systemDiskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SystemDiskType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_systemDiskType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCdcClusterRequest::GetCdcId() const
{
    return m_cdcId;
}

void CreateCdcClusterRequest::SetCdcId(const string& _cdcId)
{
    m_cdcId = _cdcId;
    m_cdcIdHasBeenSet = true;
}

bool CreateCdcClusterRequest::CdcIdHasBeenSet() const
{
    return m_cdcIdHasBeenSet;
}

string CreateCdcClusterRequest::GetCdcVpcId() const
{
    return m_cdcVpcId;
}

void CreateCdcClusterRequest::SetCdcVpcId(const string& _cdcVpcId)
{
    m_cdcVpcId = _cdcVpcId;
    m_cdcVpcIdHasBeenSet = true;
}

bool CreateCdcClusterRequest::CdcVpcIdHasBeenSet() const
{
    return m_cdcVpcIdHasBeenSet;
}

string CreateCdcClusterRequest::GetCdcSubnetId() const
{
    return m_cdcSubnetId;
}

void CreateCdcClusterRequest::SetCdcSubnetId(const string& _cdcSubnetId)
{
    m_cdcSubnetId = _cdcSubnetId;
    m_cdcSubnetIdHasBeenSet = true;
}

bool CreateCdcClusterRequest::CdcSubnetIdHasBeenSet() const
{
    return m_cdcSubnetIdHasBeenSet;
}

int64_t CreateCdcClusterRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateCdcClusterRequest::SetZoneId(const int64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateCdcClusterRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

int64_t CreateCdcClusterRequest::GetBandwidth() const
{
    return m_bandwidth;
}

void CreateCdcClusterRequest::SetBandwidth(const int64_t& _bandwidth)
{
    m_bandwidth = _bandwidth;
    m_bandwidthHasBeenSet = true;
}

bool CreateCdcClusterRequest::BandwidthHasBeenSet() const
{
    return m_bandwidthHasBeenSet;
}

int64_t CreateCdcClusterRequest::GetDiskSize() const
{
    return m_diskSize;
}

void CreateCdcClusterRequest::SetDiskSize(const int64_t& _diskSize)
{
    m_diskSize = _diskSize;
    m_diskSizeHasBeenSet = true;
}

bool CreateCdcClusterRequest::DiskSizeHasBeenSet() const
{
    return m_diskSizeHasBeenSet;
}

string CreateCdcClusterRequest::GetDiskType() const
{
    return m_diskType;
}

void CreateCdcClusterRequest::SetDiskType(const string& _diskType)
{
    m_diskType = _diskType;
    m_diskTypeHasBeenSet = true;
}

bool CreateCdcClusterRequest::DiskTypeHasBeenSet() const
{
    return m_diskTypeHasBeenSet;
}

string CreateCdcClusterRequest::GetSystemDiskType() const
{
    return m_systemDiskType;
}

void CreateCdcClusterRequest::SetSystemDiskType(const string& _systemDiskType)
{
    m_systemDiskType = _systemDiskType;
    m_systemDiskTypeHasBeenSet = true;
}

bool CreateCdcClusterRequest::SystemDiskTypeHasBeenSet() const
{
    return m_systemDiskTypeHasBeenSet;
}


