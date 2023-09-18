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

#include <tencentcloud/dlc/v20210125/model/DatasourceConnectionLocation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DatasourceConnectionLocation::DatasourceConnectionLocation() :
    m_vpcIdHasBeenSet(false),
    m_vpcCidrBlockHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_subnetCidrBlockHasBeenSet(false)
{
}

CoreInternalOutcome DatasourceConnectionLocation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionLocation.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcCidrBlock") && !value["VpcCidrBlock"].IsNull())
    {
        if (!value["VpcCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionLocation.VpcCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcCidrBlock = string(value["VpcCidrBlock"].GetString());
        m_vpcCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionLocation.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetCidrBlock") && !value["SubnetCidrBlock"].IsNull())
    {
        if (!value["SubnetCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DatasourceConnectionLocation.SubnetCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetCidrBlock = string(value["SubnetCidrBlock"].GetString());
        m_subnetCidrBlockHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DatasourceConnectionLocation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string DatasourceConnectionLocation::GetVpcId() const
{
    return m_vpcId;
}

void DatasourceConnectionLocation::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DatasourceConnectionLocation::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DatasourceConnectionLocation::GetVpcCidrBlock() const
{
    return m_vpcCidrBlock;
}

void DatasourceConnectionLocation::SetVpcCidrBlock(const string& _vpcCidrBlock)
{
    m_vpcCidrBlock = _vpcCidrBlock;
    m_vpcCidrBlockHasBeenSet = true;
}

bool DatasourceConnectionLocation::VpcCidrBlockHasBeenSet() const
{
    return m_vpcCidrBlockHasBeenSet;
}

string DatasourceConnectionLocation::GetSubnetId() const
{
    return m_subnetId;
}

void DatasourceConnectionLocation::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool DatasourceConnectionLocation::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

string DatasourceConnectionLocation::GetSubnetCidrBlock() const
{
    return m_subnetCidrBlock;
}

void DatasourceConnectionLocation::SetSubnetCidrBlock(const string& _subnetCidrBlock)
{
    m_subnetCidrBlock = _subnetCidrBlock;
    m_subnetCidrBlockHasBeenSet = true;
}

bool DatasourceConnectionLocation::SubnetCidrBlockHasBeenSet() const
{
    return m_subnetCidrBlockHasBeenSet;
}

