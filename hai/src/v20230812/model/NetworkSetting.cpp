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

#include <tencentcloud/hai/v20230812/model/NetworkSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Hai::V20230812::Model;
using namespace std;

NetworkSetting::NetworkSetting() :
    m_publicEndpointEnableHasBeenSet(false),
    m_vpcEndpointEnableHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
}

CoreInternalOutcome NetworkSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PublicEndpointEnable") && !value["PublicEndpointEnable"].IsNull())
    {
        if (!value["PublicEndpointEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkSetting.PublicEndpointEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_publicEndpointEnable = value["PublicEndpointEnable"].GetBool();
        m_publicEndpointEnableHasBeenSet = true;
    }

    if (value.HasMember("VpcEndpointEnable") && !value["VpcEndpointEnable"].IsNull())
    {
        if (!value["VpcEndpointEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkSetting.VpcEndpointEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_vpcEndpointEnable = value["VpcEndpointEnable"].GetBool();
        m_vpcEndpointEnableHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkSetting.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkSetting.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_publicEndpointEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicEndpointEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publicEndpointEnable, allocator);
    }

    if (m_vpcEndpointEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcEndpointEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vpcEndpointEnable, allocator);
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

}


bool NetworkSetting::GetPublicEndpointEnable() const
{
    return m_publicEndpointEnable;
}

void NetworkSetting::SetPublicEndpointEnable(const bool& _publicEndpointEnable)
{
    m_publicEndpointEnable = _publicEndpointEnable;
    m_publicEndpointEnableHasBeenSet = true;
}

bool NetworkSetting::PublicEndpointEnableHasBeenSet() const
{
    return m_publicEndpointEnableHasBeenSet;
}

bool NetworkSetting::GetVpcEndpointEnable() const
{
    return m_vpcEndpointEnable;
}

void NetworkSetting::SetVpcEndpointEnable(const bool& _vpcEndpointEnable)
{
    m_vpcEndpointEnable = _vpcEndpointEnable;
    m_vpcEndpointEnableHasBeenSet = true;
}

bool NetworkSetting::VpcEndpointEnableHasBeenSet() const
{
    return m_vpcEndpointEnableHasBeenSet;
}

string NetworkSetting::GetVpcId() const
{
    return m_vpcId;
}

void NetworkSetting::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool NetworkSetting::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string NetworkSetting::GetSubnetId() const
{
    return m_subnetId;
}

void NetworkSetting::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool NetworkSetting::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

