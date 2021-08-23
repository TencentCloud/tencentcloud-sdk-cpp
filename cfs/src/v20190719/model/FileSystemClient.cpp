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

#include <tencentcloud/cfs/v20190719/model/FileSystemClient.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

FileSystemClient::FileSystemClient() :
    m_cfsVipHasBeenSet(false),
    m_clientIpHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_zoneNameHasBeenSet(false),
    m_mountDirectoryHasBeenSet(false)
{
}

CoreInternalOutcome FileSystemClient::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CfsVip") && !value["CfsVip"].IsNull())
    {
        if (!value["CfsVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemClient.CfsVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cfsVip = string(value["CfsVip"].GetString());
        m_cfsVipHasBeenSet = true;
    }

    if (value.HasMember("ClientIp") && !value["ClientIp"].IsNull())
    {
        if (!value["ClientIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemClient.ClientIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clientIp = string(value["ClientIp"].GetString());
        m_clientIpHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemClient.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemClient.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ZoneName") && !value["ZoneName"].IsNull())
    {
        if (!value["ZoneName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemClient.ZoneName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneName = string(value["ZoneName"].GetString());
        m_zoneNameHasBeenSet = true;
    }

    if (value.HasMember("MountDirectory") && !value["MountDirectory"].IsNull())
    {
        if (!value["MountDirectory"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FileSystemClient.MountDirectory` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mountDirectory = string(value["MountDirectory"].GetString());
        m_mountDirectoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FileSystemClient::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cfsVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfsVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cfsVip.c_str(), allocator).Move(), allocator);
    }

    if (m_clientIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clientIp.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneName.c_str(), allocator).Move(), allocator);
    }

    if (m_mountDirectoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MountDirectory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mountDirectory.c_str(), allocator).Move(), allocator);
    }

}


string FileSystemClient::GetCfsVip() const
{
    return m_cfsVip;
}

void FileSystemClient::SetCfsVip(const string& _cfsVip)
{
    m_cfsVip = _cfsVip;
    m_cfsVipHasBeenSet = true;
}

bool FileSystemClient::CfsVipHasBeenSet() const
{
    return m_cfsVipHasBeenSet;
}

string FileSystemClient::GetClientIp() const
{
    return m_clientIp;
}

void FileSystemClient::SetClientIp(const string& _clientIp)
{
    m_clientIp = _clientIp;
    m_clientIpHasBeenSet = true;
}

bool FileSystemClient::ClientIpHasBeenSet() const
{
    return m_clientIpHasBeenSet;
}

string FileSystemClient::GetVpcId() const
{
    return m_vpcId;
}

void FileSystemClient::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool FileSystemClient::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string FileSystemClient::GetZone() const
{
    return m_zone;
}

void FileSystemClient::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool FileSystemClient::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string FileSystemClient::GetZoneName() const
{
    return m_zoneName;
}

void FileSystemClient::SetZoneName(const string& _zoneName)
{
    m_zoneName = _zoneName;
    m_zoneNameHasBeenSet = true;
}

bool FileSystemClient::ZoneNameHasBeenSet() const
{
    return m_zoneNameHasBeenSet;
}

string FileSystemClient::GetMountDirectory() const
{
    return m_mountDirectory;
}

void FileSystemClient::SetMountDirectory(const string& _mountDirectory)
{
    m_mountDirectory = _mountDirectory;
    m_mountDirectoryHasBeenSet = true;
}

bool FileSystemClient::MountDirectoryHasBeenSet() const
{
    return m_mountDirectoryHasBeenSet;
}

