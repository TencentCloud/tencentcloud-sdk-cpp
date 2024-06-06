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

#include <tencentcloud/dlc/v20210125/model/VpcInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

VpcInfo::VpcInfo() :
    m_vpcIdHasBeenSet(false),
    m_vpcCidrBlockHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_accessGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome VpcInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcCidrBlock") && !value["VpcCidrBlock"].IsNull())
    {
        if (!value["VpcCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcInfo.VpcCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcCidrBlock = string(value["VpcCidrBlock"].GetString());
        m_vpcCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VpcInfo.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("AccessGroupId") && !value["AccessGroupId"].IsNull())
    {
        if (!value["AccessGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VpcInfo.AccessGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessGroupId = string(value["AccessGroupId"].GetString());
        m_accessGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VpcInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_accessGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessGroupId.c_str(), allocator).Move(), allocator);
    }

}


string VpcInfo::GetVpcId() const
{
    return m_vpcId;
}

void VpcInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool VpcInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string VpcInfo::GetVpcCidrBlock() const
{
    return m_vpcCidrBlock;
}

void VpcInfo::SetVpcCidrBlock(const string& _vpcCidrBlock)
{
    m_vpcCidrBlock = _vpcCidrBlock;
    m_vpcCidrBlockHasBeenSet = true;
}

bool VpcInfo::VpcCidrBlockHasBeenSet() const
{
    return m_vpcCidrBlockHasBeenSet;
}

int64_t VpcInfo::GetRuleId() const
{
    return m_ruleId;
}

void VpcInfo::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool VpcInfo::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string VpcInfo::GetAccessGroupId() const
{
    return m_accessGroupId;
}

void VpcInfo::SetAccessGroupId(const string& _accessGroupId)
{
    m_accessGroupId = _accessGroupId;
    m_accessGroupIdHasBeenSet = true;
}

bool VpcInfo::AccessGroupIdHasBeenSet() const
{
    return m_accessGroupIdHasBeenSet;
}

