/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/bh/v20230418/model/ParamInitResourceSubnet.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

ParamInitResourceSubnet::ParamInitResourceSubnet() :
    m_subnetIdHasBeenSet(false),
    m_subnetNameHasBeenSet(false),
    m_zoneHasBeenSet(false),
    m_subnetCidrBlockHasBeenSet(false)
{
}

CoreInternalOutcome ParamInitResourceSubnet::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamInitResourceSubnet.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetName") && !value["SubnetName"].IsNull())
    {
        if (!value["SubnetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamInitResourceSubnet.SubnetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetName = string(value["SubnetName"].GetString());
        m_subnetNameHasBeenSet = true;
    }

    if (value.HasMember("Zone") && !value["Zone"].IsNull())
    {
        if (!value["Zone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamInitResourceSubnet.Zone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zone = string(value["Zone"].GetString());
        m_zoneHasBeenSet = true;
    }

    if (value.HasMember("SubnetCidrBlock") && !value["SubnetCidrBlock"].IsNull())
    {
        if (!value["SubnetCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ParamInitResourceSubnet.SubnetCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetCidrBlock = string(value["SubnetCidrBlock"].GetString());
        m_subnetCidrBlockHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ParamInitResourceSubnet::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetName.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetCidrBlock.c_str(), allocator).Move(), allocator);
    }

}


string ParamInitResourceSubnet::GetSubnetId() const
{
    return m_subnetId;
}

void ParamInitResourceSubnet::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ParamInitResourceSubnet::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string ParamInitResourceSubnet::GetSubnetName() const
{
    return m_subnetName;
}

void ParamInitResourceSubnet::SetSubnetName(const string& _subnetName)
{
    m_subnetName = _subnetName;
    m_subnetNameHasBeenSet = true;
}

bool ParamInitResourceSubnet::SubnetNameHasBeenSet() const
{
    return m_subnetNameHasBeenSet;
}

string ParamInitResourceSubnet::GetZone() const
{
    return m_zone;
}

void ParamInitResourceSubnet::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool ParamInitResourceSubnet::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string ParamInitResourceSubnet::GetSubnetCidrBlock() const
{
    return m_subnetCidrBlock;
}

void ParamInitResourceSubnet::SetSubnetCidrBlock(const string& _subnetCidrBlock)
{
    m_subnetCidrBlock = _subnetCidrBlock;
    m_subnetCidrBlockHasBeenSet = true;
}

bool ParamInitResourceSubnet::SubnetCidrBlockHasBeenSet() const
{
    return m_subnetCidrBlockHasBeenSet;
}

