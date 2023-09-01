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

#include <tencentcloud/tione/v20211111/model/ServiceEIP.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ServiceEIP::ServiceEIP() :
    m_enableEIPHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
}

CoreInternalOutcome ServiceEIP::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableEIP") && !value["EnableEIP"].IsNull())
    {
        if (!value["EnableEIP"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceEIP.EnableEIP` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableEIP = value["EnableEIP"].GetBool();
        m_enableEIPHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceEIP.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceEIP.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceEIP::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableEIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableEIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableEIP, allocator);
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


bool ServiceEIP::GetEnableEIP() const
{
    return m_enableEIP;
}

void ServiceEIP::SetEnableEIP(const bool& _enableEIP)
{
    m_enableEIP = _enableEIP;
    m_enableEIPHasBeenSet = true;
}

bool ServiceEIP::EnableEIPHasBeenSet() const
{
    return m_enableEIPHasBeenSet;
}

string ServiceEIP::GetVpcId() const
{
    return m_vpcId;
}

void ServiceEIP::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool ServiceEIP::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string ServiceEIP::GetSubnetId() const
{
    return m_subnetId;
}

void ServiceEIP::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ServiceEIP::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

