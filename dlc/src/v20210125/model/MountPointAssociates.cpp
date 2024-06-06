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

#include <tencentcloud/dlc/v20210125/model/MountPointAssociates.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

MountPointAssociates::MountPointAssociates() :
    m_bucketIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vpcCidrBlockHasBeenSet(false),
    m_accessGroupIdHasBeenSet(false),
    m_accessRuleIdHasBeenSet(false)
{
}

CoreInternalOutcome MountPointAssociates::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BucketId") && !value["BucketId"].IsNull())
    {
        if (!value["BucketId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountPointAssociates.BucketId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bucketId = string(value["BucketId"].GetString());
        m_bucketIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountPointAssociates.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("VpcCidrBlock") && !value["VpcCidrBlock"].IsNull())
    {
        if (!value["VpcCidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountPointAssociates.VpcCidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcCidrBlock = string(value["VpcCidrBlock"].GetString());
        m_vpcCidrBlockHasBeenSet = true;
    }

    if (value.HasMember("AccessGroupId") && !value["AccessGroupId"].IsNull())
    {
        if (!value["AccessGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MountPointAssociates.AccessGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessGroupId = string(value["AccessGroupId"].GetString());
        m_accessGroupIdHasBeenSet = true;
    }

    if (value.HasMember("AccessRuleId") && !value["AccessRuleId"].IsNull())
    {
        if (!value["AccessRuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MountPointAssociates.AccessRuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessRuleId = value["AccessRuleId"].GetInt64();
        m_accessRuleIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MountPointAssociates::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_bucketIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bucketId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_accessGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessRuleId, allocator);
    }

}


string MountPointAssociates::GetBucketId() const
{
    return m_bucketId;
}

void MountPointAssociates::SetBucketId(const string& _bucketId)
{
    m_bucketId = _bucketId;
    m_bucketIdHasBeenSet = true;
}

bool MountPointAssociates::BucketIdHasBeenSet() const
{
    return m_bucketIdHasBeenSet;
}

string MountPointAssociates::GetVpcId() const
{
    return m_vpcId;
}

void MountPointAssociates::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool MountPointAssociates::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string MountPointAssociates::GetVpcCidrBlock() const
{
    return m_vpcCidrBlock;
}

void MountPointAssociates::SetVpcCidrBlock(const string& _vpcCidrBlock)
{
    m_vpcCidrBlock = _vpcCidrBlock;
    m_vpcCidrBlockHasBeenSet = true;
}

bool MountPointAssociates::VpcCidrBlockHasBeenSet() const
{
    return m_vpcCidrBlockHasBeenSet;
}

string MountPointAssociates::GetAccessGroupId() const
{
    return m_accessGroupId;
}

void MountPointAssociates::SetAccessGroupId(const string& _accessGroupId)
{
    m_accessGroupId = _accessGroupId;
    m_accessGroupIdHasBeenSet = true;
}

bool MountPointAssociates::AccessGroupIdHasBeenSet() const
{
    return m_accessGroupIdHasBeenSet;
}

int64_t MountPointAssociates::GetAccessRuleId() const
{
    return m_accessRuleId;
}

void MountPointAssociates::SetAccessRuleId(const int64_t& _accessRuleId)
{
    m_accessRuleId = _accessRuleId;
    m_accessRuleIdHasBeenSet = true;
}

bool MountPointAssociates::AccessRuleIdHasBeenSet() const
{
    return m_accessRuleIdHasBeenSet;
}

