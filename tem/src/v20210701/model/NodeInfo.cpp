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

#include <tencentcloud/tem/v20210701/model/NodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

NodeInfo::NodeInfo() :
    m_nameHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_availableIpCountHasBeenSet(false),
    m_cidrHasBeenSet(false)
{
}

CoreInternalOutcome NodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInfo.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInfo.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("AvailableIpCount") && !value["AvailableIpCount"].IsNull())
    {
        if (!value["AvailableIpCount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInfo.AvailableIpCount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_availableIpCount = string(value["AvailableIpCount"].GetString());
        m_availableIpCountHasBeenSet = true;
    }

    if (value.HasMember("Cidr") && !value["Cidr"].IsNull())
    {
        if (!value["Cidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NodeInfo.Cidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidr = string(value["Cidr"].GetString());
        m_cidrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_availableIpCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvailableIpCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_availableIpCount.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidr.c_str(), allocator).Move(), allocator);
    }

}


string NodeInfo::GetName() const
{
    return m_name;
}

void NodeInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool NodeInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string NodeInfo::GetZone() const
{
    return m_zone;
}

void NodeInfo::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool NodeInfo::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string NodeInfo::GetSubnetId() const
{
    return m_subnetId;
}

void NodeInfo::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool NodeInfo::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string NodeInfo::GetAvailableIpCount() const
{
    return m_availableIpCount;
}

void NodeInfo::SetAvailableIpCount(const string& _availableIpCount)
{
    m_availableIpCount = _availableIpCount;
    m_availableIpCountHasBeenSet = true;
}

bool NodeInfo::AvailableIpCountHasBeenSet() const
{
    return m_availableIpCountHasBeenSet;
}

string NodeInfo::GetCidr() const
{
    return m_cidr;
}

void NodeInfo::SetCidr(const string& _cidr)
{
    m_cidr = _cidr;
    m_cidrHasBeenSet = true;
}

bool NodeInfo::CidrHasBeenSet() const
{
    return m_cidrHasBeenSet;
}

