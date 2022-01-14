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

#include <tencentcloud/cdb/v20170320/model/Address.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

Address::Address() :
    m_vipHasBeenSet(false),
    m_vPortHasBeenSet(false),
    m_uniqVpcIdHasBeenSet(false),
    m_uniqSubnetHasBeenSet(false),
    m_descHasBeenSet(false)
{
}

CoreInternalOutcome Address::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("VPort") && !value["VPort"].IsNull())
    {
        if (!value["VPort"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Address.VPort` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_vPort = value["VPort"].GetUint64();
        m_vPortHasBeenSet = true;
    }

    if (value.HasMember("UniqVpcId") && !value["UniqVpcId"].IsNull())
    {
        if (!value["UniqVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.UniqVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqVpcId = string(value["UniqVpcId"].GetString());
        m_uniqVpcIdHasBeenSet = true;
    }

    if (value.HasMember("UniqSubnet") && !value["UniqSubnet"].IsNull())
    {
        if (!value["UniqSubnet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.UniqSubnet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uniqSubnet = string(value["UniqSubnet"].GetString());
        m_uniqSubnetHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Address::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_vPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_vPort, allocator);
    }

    if (m_uniqVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_uniqSubnetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UniqSubnet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uniqSubnet.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

}


string Address::GetVip() const
{
    return m_vip;
}

void Address::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool Address::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

uint64_t Address::GetVPort() const
{
    return m_vPort;
}

void Address::SetVPort(const uint64_t& _vPort)
{
    m_vPort = _vPort;
    m_vPortHasBeenSet = true;
}

bool Address::VPortHasBeenSet() const
{
    return m_vPortHasBeenSet;
}

string Address::GetUniqVpcId() const
{
    return m_uniqVpcId;
}

void Address::SetUniqVpcId(const string& _uniqVpcId)
{
    m_uniqVpcId = _uniqVpcId;
    m_uniqVpcIdHasBeenSet = true;
}

bool Address::UniqVpcIdHasBeenSet() const
{
    return m_uniqVpcIdHasBeenSet;
}

string Address::GetUniqSubnet() const
{
    return m_uniqSubnet;
}

void Address::SetUniqSubnet(const string& _uniqSubnet)
{
    m_uniqSubnet = _uniqSubnet;
    m_uniqSubnetHasBeenSet = true;
}

bool Address::UniqSubnetHasBeenSet() const
{
    return m_uniqSubnetHasBeenSet;
}

string Address::GetDesc() const
{
    return m_desc;
}

void Address::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool Address::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

