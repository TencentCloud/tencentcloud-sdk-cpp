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

#include <tencentcloud/tcb/v20180608/model/CloudBaseRunVpcInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudBaseRunVpcInfo::CloudBaseRunVpcInfo() :
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_createTypeHasBeenSet(false)
{
}

CoreInternalOutcome CloudBaseRunVpcInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunVpcInfo.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("SubnetIds") && !value["SubnetIds"].IsNull())
    {
        if (!value["SubnetIds"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunVpcInfo.SubnetIds` is not array type"));

        const rapidjson::Value &tmpValue = value["SubnetIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_subnetIds.push_back((*itr).GetString());
        }
        m_subnetIdsHasBeenSet = true;
    }

    if (value.HasMember("CreateType") && !value["CreateType"].IsNull())
    {
        if (!value["CreateType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunVpcInfo.CreateType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createType = value["CreateType"].GetInt64();
        m_createTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudBaseRunVpcInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createType, allocator);
    }

}


string CloudBaseRunVpcInfo::GetVpcId() const
{
    return m_vpcId;
}

void CloudBaseRunVpcInfo::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool CloudBaseRunVpcInfo::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

vector<string> CloudBaseRunVpcInfo::GetSubnetIds() const
{
    return m_subnetIds;
}

void CloudBaseRunVpcInfo::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool CloudBaseRunVpcInfo::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

int64_t CloudBaseRunVpcInfo::GetCreateType() const
{
    return m_createType;
}

void CloudBaseRunVpcInfo::SetCreateType(const int64_t& _createType)
{
    m_createType = _createType;
    m_createTypeHasBeenSet = true;
}

bool CloudBaseRunVpcInfo::CreateTypeHasBeenSet() const
{
    return m_createTypeHasBeenSet;
}

