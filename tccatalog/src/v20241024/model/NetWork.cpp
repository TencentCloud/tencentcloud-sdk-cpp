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

#include <tencentcloud/tccatalog/v20241024/model/NetWork.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tccatalog::V20241024::Model;
using namespace std;

NetWork::NetWork() :
    m_vpcIdHasBeenSet(false),
    m_vpcCidrBlockHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_subnetCidrBlockHasBeenSet(false),
    m_clbIpHasBeenSet(false),
    m_clbPortHasBeenSet(false)
{
}

CoreInternalOutcome NetWork::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetWork.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcCidrBlock") && !value["VpcCidrBlock"].IsNull())
    {
        if (!value["VpcCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetWork.VpcCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcCidrBlock = string(value["VpcCidrBlock"].GetString());
        m_vpcCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetWork.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetCidrBlock") && !value["SubnetCidrBlock"].IsNull())
    {
        if (!value["SubnetCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetWork.SubnetCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetCidrBlock = string(value["SubnetCidrBlock"].GetString());
        m_subnetCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("ClbIp") && !value["ClbIp"].IsNull())
    {
        if (!value["ClbIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetWork.ClbIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clbIp = string(value["ClbIp"].GetString());
        m_clbIpHasBeenSet = true;
    }

    if (value.HasMember("ClbPort") && !value["ClbPort"].IsNull())
    {
        if (!value["ClbPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetWork.ClbPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clbPort = string(value["ClbPort"].GetString());
        m_clbPortHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetWork::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetCidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_clbIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClbIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clbIp.c_str(), allocator).Move(), allocator);
    }

    if (m_clbPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClbPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clbPort.c_str(), allocator).Move(), allocator);
    }

}


string NetWork::GetVpcId() const
{
    return m_vpcId;
}

void NetWork::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool NetWork::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string NetWork::GetVpcCidrBlock() const
{
    return m_vpcCidrBlock;
}

void NetWork::SetVpcCidrBlock(const string& _vpcCidrBlock)
{
    m_vpcCidrBlock = _vpcCidrBlock;
    m_vpcCidrBlockHasBeenSet = true;
}

bool NetWork::VpcCidrBlockHasBeenSet() const
{
    return m_vpcCidrBlockHasBeenSet;
}

string NetWork::GetSubnetId() const
{
    return m_subnetId;
}

void NetWork::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool NetWork::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string NetWork::GetSubnetCidrBlock() const
{
    return m_subnetCidrBlock;
}

void NetWork::SetSubnetCidrBlock(const string& _subnetCidrBlock)
{
    m_subnetCidrBlock = _subnetCidrBlock;
    m_subnetCidrBlockHasBeenSet = true;
}

bool NetWork::SubnetCidrBlockHasBeenSet() const
{
    return m_subnetCidrBlockHasBeenSet;
}

string NetWork::GetClbIp() const
{
    return m_clbIp;
}

void NetWork::SetClbIp(const string& _clbIp)
{
    m_clbIp = _clbIp;
    m_clbIpHasBeenSet = true;
}

bool NetWork::ClbIpHasBeenSet() const
{
    return m_clbIpHasBeenSet;
}

string NetWork::GetClbPort() const
{
    return m_clbPort;
}

void NetWork::SetClbPort(const string& _clbPort)
{
    m_clbPort = _clbPort;
    m_clbPortHasBeenSet = true;
}

bool NetWork::ClbPortHasBeenSet() const
{
    return m_clbPortHasBeenSet;
}

