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

#include <tencentcloud/privatedns/v20201028/model/AccountVpcInfoOut.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

AccountVpcInfoOut::AccountVpcInfoOut() :
    m_vpcIdHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_uinHasBeenSet(false),
    m_vpcNameHasBeenSet(false)
{
}

CoreInternalOutcome AccountVpcInfoOut::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountVpcInfoOut.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountVpcInfoOut.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountVpcInfoOut.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountVpcInfoOut.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountVpcInfoOut::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

}


string AccountVpcInfoOut::GetVpcId() const
{
    return m_vpcId;
}

void AccountVpcInfoOut::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool AccountVpcInfoOut::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string AccountVpcInfoOut::GetRegion() const
{
    return m_region;
}

void AccountVpcInfoOut::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AccountVpcInfoOut::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string AccountVpcInfoOut::GetUin() const
{
    return m_uin;
}

void AccountVpcInfoOut::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AccountVpcInfoOut::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string AccountVpcInfoOut::GetVpcName() const
{
    return m_vpcName;
}

void AccountVpcInfoOut::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool AccountVpcInfoOut::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

