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

#include <tencentcloud/tse/v20201207/model/ZookeeperReplica.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

ZookeeperReplica::ZookeeperReplica() :
    m_nameHasBeenSet(false),
    m_roleHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_aliasNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

CoreInternalOutcome ZookeeperReplica::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZookeeperReplica.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Role") && !value["Role"].IsNull())
    {
        if (!value["Role"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZookeeperReplica.Role` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_role = string(value["Role"].GetString());
        m_roleHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZookeeperReplica.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZookeeperReplica.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZookeeperReplica.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZookeeperReplica.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("AliasName") && !value["AliasName"].IsNull())
    {
        if (!value["AliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZookeeperReplica.AliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasName = string(value["AliasName"].GetString());
        m_aliasNameHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZookeeperReplica.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ZookeeperReplica::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_roleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Role";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_role.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

}


string ZookeeperReplica::GetName() const
{
    return m_name;
}

void ZookeeperReplica::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ZookeeperReplica::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ZookeeperReplica::GetRole() const
{
    return m_role;
}

void ZookeeperReplica::SetRole(const string& _role)
{
    m_role = _role;
    m_roleHasBeenSet = true;
}

bool ZookeeperReplica::RoleHasBeenSet() const
{
    return m_roleHasBeenSet;
}

string ZookeeperReplica::GetStatus() const
{
    return m_status;
}

void ZookeeperReplica::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ZookeeperReplica::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ZookeeperReplica::GetSubnetId() const
{
    return m_subnetId;
}

void ZookeeperReplica::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ZookeeperReplica::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ZookeeperReplica::GetZone() const
{
    return m_zone;
}

void ZookeeperReplica::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ZookeeperReplica::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string ZookeeperReplica::GetZoneId() const
{
    return m_zoneId;
}

void ZookeeperReplica::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ZookeeperReplica::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ZookeeperReplica::GetAliasName() const
{
    return m_aliasName;
}

void ZookeeperReplica::SetAliasName(const string& _aliasName)
{
    m_aliasName = _aliasName;
    m_aliasNameHasBeenSet = true;
}

bool ZookeeperReplica::AliasNameHasBeenSet() const
{
    return m_aliasNameHasBeenSet;
}

string ZookeeperReplica::GetVpcId() const
{
    return m_vpcId;
}

void ZookeeperReplica::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ZookeeperReplica::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

