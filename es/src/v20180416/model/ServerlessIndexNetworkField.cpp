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

#include <tencentcloud/es/v20180416/model/ServerlessIndexNetworkField.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

ServerlessIndexNetworkField::ServerlessIndexNetworkField() :
    m_regionHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_vpcUidHasBeenSet(false),
    m_subnetUidHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false)
{
}

CoreInternalOutcome ServerlessIndexNetworkField::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexNetworkField.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexNetworkField.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("VpcUid") && !value["VpcUid"].IsNull())
    {
        if (!value["VpcUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexNetworkField.VpcUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcUid = string(value["VpcUid"].GetString());
        m_vpcUidHasBeenSet = true;
    }

    if (value.HasMember("SubnetUid") && !value["SubnetUid"].IsNull())
    {
        if (!value["SubnetUid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexNetworkField.SubnetUid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetUid = string(value["SubnetUid"].GetString());
        m_subnetUidHasBeenSet = true;
    }

    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexNetworkField.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServerlessIndexNetworkField.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServerlessIndexNetworkField::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcUid.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetUid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetUid.c_str(), allocator).Move(), allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

}


string ServerlessIndexNetworkField::GetRegion() const
{
    return m_region;
}

void ServerlessIndexNetworkField::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ServerlessIndexNetworkField::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string ServerlessIndexNetworkField::GetZone() const
{
    return m_zone;
}

void ServerlessIndexNetworkField::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ServerlessIndexNetworkField::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string ServerlessIndexNetworkField::GetVpcUid() const
{
    return m_vpcUid;
}

void ServerlessIndexNetworkField::SetVpcUid(const string& _vpcUid)
{
    m_vpcUid = _vpcUid;
    m_vpcUidHasBeenSet = true;
}

bool ServerlessIndexNetworkField::VpcUidHasBeenSet() const
{
    return m_vpcUidHasBeenSet;
}

string ServerlessIndexNetworkField::GetSubnetUid() const
{
    return m_subnetUid;
}

void ServerlessIndexNetworkField::SetSubnetUid(const string& _subnetUid)
{
    m_subnetUid = _subnetUid;
    m_subnetUidHasBeenSet = true;
}

bool ServerlessIndexNetworkField::SubnetUidHasBeenSet() const
{
    return m_subnetUidHasBeenSet;
}

string ServerlessIndexNetworkField::GetUsername() const
{
    return m_username;
}

void ServerlessIndexNetworkField::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool ServerlessIndexNetworkField::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string ServerlessIndexNetworkField::GetPassword() const
{
    return m_password;
}

void ServerlessIndexNetworkField::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool ServerlessIndexNetworkField::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

