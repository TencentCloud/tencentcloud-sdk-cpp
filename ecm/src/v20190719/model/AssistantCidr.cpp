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

#include <tencentcloud/ecm/v20190719/model/AssistantCidr.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecm::V20190719::Model;
using namespace std;

AssistantCidr::AssistantCidr() :
    m_vpcIdHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_assistantTypeHasBeenSet(false),
    m_subnetSetHasBeenSet(false)
{
}

CoreInternalOutcome AssistantCidr::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssistantCidr.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AssistantCidr.CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrBlock = string(value["CidrBlock"].GetString());
        m_cidrBlockHasBeenSet = true;
    }

    if (value.HasMember("AssistantType") && !value["AssistantType"].IsNull())
    {
        if (!value["AssistantType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AssistantCidr.AssistantType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_assistantType = value["AssistantType"].GetUint64();
        m_assistantTypeHasBeenSet = true;
    }

    if (value.HasMember("SubnetSet") && !value["SubnetSet"].IsNull())
    {
        if (!value["SubnetSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssistantCidr.SubnetSet` is not array type"));

        const rapidjson::Value &tmpValue = value["SubnetSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Subnet item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_subnetSet.push_back(item);
        }
        m_subnetSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AssistantCidr::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_assistantTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssistantType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assistantType, allocator);
    }

    if (m_subnetSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subnetSet.begin(); itr != m_subnetSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string AssistantCidr::GetVpcId() const
{
    return m_vpcId;
}

void AssistantCidr::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool AssistantCidr::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string AssistantCidr::GetCidrBlock() const
{
    return m_cidrBlock;
}

void AssistantCidr::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool AssistantCidr::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

uint64_t AssistantCidr::GetAssistantType() const
{
    return m_assistantType;
}

void AssistantCidr::SetAssistantType(const uint64_t& _assistantType)
{
    m_assistantType = _assistantType;
    m_assistantTypeHasBeenSet = true;
}

bool AssistantCidr::AssistantTypeHasBeenSet() const
{
    return m_assistantTypeHasBeenSet;
}

vector<Subnet> AssistantCidr::GetSubnetSet() const
{
    return m_subnetSet;
}

void AssistantCidr::SetSubnetSet(const vector<Subnet>& _subnetSet)
{
    m_subnetSet = _subnetSet;
    m_subnetSetHasBeenSet = true;
}

bool AssistantCidr::SubnetSetHasBeenSet() const
{
    return m_subnetSetHasBeenSet;
}

