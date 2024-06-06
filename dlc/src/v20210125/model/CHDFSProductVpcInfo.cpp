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

#include <tencentcloud/dlc/v20210125/model/CHDFSProductVpcInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

CHDFSProductVpcInfo::CHDFSProductVpcInfo() :
    m_vpcIdHasBeenSet(false),
    m_vpcNameHasBeenSet(false),
    m_vpcCidrBlockHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_accessGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome CHDFSProductVpcInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CHDFSProductVpcInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcName") && !value["VpcName"].IsNull())
    {
        if (!value["VpcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CHDFSProductVpcInfo.VpcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcName = string(value["VpcName"].GetString());
        m_vpcNameHasBeenSet = true;
    }

    if (value.HasMember("VpcCidrBlock") && !value["VpcCidrBlock"].IsNull())
    {
        if (!value["VpcCidrBlock"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CHDFSProductVpcInfo.VpcCidrBlock` is not array type"));

        const rapidjson::Value &tmpValue = value["VpcCidrBlock"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VpcCidrBlock item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vpcCidrBlock.push_back(item);
        }
        m_vpcCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CHDFSProductVpcInfo.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("AccessGroupId") && !value["AccessGroupId"].IsNull())
    {
        if (!value["AccessGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CHDFSProductVpcInfo.AccessGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessGroupId = string(value["AccessGroupId"].GetString());
        m_accessGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CHDFSProductVpcInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcCidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcCidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcCidrBlock.begin(); itr != m_vpcCidrBlock.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string CHDFSProductVpcInfo::GetVpcId() const
{
    return m_vpcId;
}

void CHDFSProductVpcInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CHDFSProductVpcInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string CHDFSProductVpcInfo::GetVpcName() const
{
    return m_vpcName;
}

void CHDFSProductVpcInfo::SetVpcName(const string& _vpcName)
{
    m_vpcName = _vpcName;
    m_vpcNameHasBeenSet = true;
}

bool CHDFSProductVpcInfo::VpcNameHasBeenSet() const
{
    return m_vpcNameHasBeenSet;
}

vector<VpcCidrBlock> CHDFSProductVpcInfo::GetVpcCidrBlock() const
{
    return m_vpcCidrBlock;
}

void CHDFSProductVpcInfo::SetVpcCidrBlock(const vector<VpcCidrBlock>& _vpcCidrBlock)
{
    m_vpcCidrBlock = _vpcCidrBlock;
    m_vpcCidrBlockHasBeenSet = true;
}

bool CHDFSProductVpcInfo::VpcCidrBlockHasBeenSet() const
{
    return m_vpcCidrBlockHasBeenSet;
}

int64_t CHDFSProductVpcInfo::GetRuleId() const
{
    return m_ruleId;
}

void CHDFSProductVpcInfo::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool CHDFSProductVpcInfo::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string CHDFSProductVpcInfo::GetAccessGroupId() const
{
    return m_accessGroupId;
}

void CHDFSProductVpcInfo::SetAccessGroupId(const string& _accessGroupId)
{
    m_accessGroupId = _accessGroupId;
    m_accessGroupIdHasBeenSet = true;
}

bool CHDFSProductVpcInfo::AccessGroupIdHasBeenSet() const
{
    return m_accessGroupIdHasBeenSet;
}

