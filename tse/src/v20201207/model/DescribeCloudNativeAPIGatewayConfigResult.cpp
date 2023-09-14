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

#include <tencentcloud/tse/v20201207/model/DescribeCloudNativeAPIGatewayConfigResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DescribeCloudNativeAPIGatewayConfigResult::DescribeCloudNativeAPIGatewayConfigResult() :
    m_gatewayIdHasBeenSet(false),
    m_configListHasBeenSet(false),
    m_groupSubnetIdHasBeenSet(false),
    m_groupVpcIdHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeCloudNativeAPIGatewayConfigResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GatewayId") && !value["GatewayId"].IsNull())
    {
        if (!value["GatewayId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayConfigResult.GatewayId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayId = string(value["GatewayId"].GetString());
        m_gatewayIdHasBeenSet = true;
    }

    if (value.HasMember("ConfigList") && !value["ConfigList"].IsNull())
    {
        if (!value["ConfigList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayConfigResult.ConfigList` is not array type"));

        const rapidjson::Value &tmpValue = value["ConfigList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudNativeAPIGatewayConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_configList.push_back(item);
        }
        m_configListHasBeenSet = true;
    }

    if (value.HasMember("GroupSubnetId") && !value["GroupSubnetId"].IsNull())
    {
        if (!value["GroupSubnetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayConfigResult.GroupSubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupSubnetId = string(value["GroupSubnetId"].GetString());
        m_groupSubnetIdHasBeenSet = true;
    }

    if (value.HasMember("GroupVpcId") && !value["GroupVpcId"].IsNull())
    {
        if (!value["GroupVpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayConfigResult.GroupVpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupVpcId = string(value["GroupVpcId"].GetString());
        m_groupVpcIdHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeCloudNativeAPIGatewayConfigResult.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeCloudNativeAPIGatewayConfigResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_configListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_configList.begin(); itr != m_configList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_groupSubnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupSubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupSubnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupVpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupVpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupVpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

}


string DescribeCloudNativeAPIGatewayConfigResult::GetGatewayId() const
{
    return m_gatewayId;
}

void DescribeCloudNativeAPIGatewayConfigResult::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayConfigResult::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

vector<CloudNativeAPIGatewayConfig> DescribeCloudNativeAPIGatewayConfigResult::GetConfigList() const
{
    return m_configList;
}

void DescribeCloudNativeAPIGatewayConfigResult::SetConfigList(const vector<CloudNativeAPIGatewayConfig>& _configList)
{
    m_configList = _configList;
    m_configListHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayConfigResult::ConfigListHasBeenSet() const
{
    return m_configListHasBeenSet;
}

string DescribeCloudNativeAPIGatewayConfigResult::GetGroupSubnetId() const
{
    return m_groupSubnetId;
}

void DescribeCloudNativeAPIGatewayConfigResult::SetGroupSubnetId(const string& _groupSubnetId)
{
    m_groupSubnetId = _groupSubnetId;
    m_groupSubnetIdHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayConfigResult::GroupSubnetIdHasBeenSet() const
{
    return m_groupSubnetIdHasBeenSet;
}

string DescribeCloudNativeAPIGatewayConfigResult::GetGroupVpcId() const
{
    return m_groupVpcId;
}

void DescribeCloudNativeAPIGatewayConfigResult::SetGroupVpcId(const string& _groupVpcId)
{
    m_groupVpcId = _groupVpcId;
    m_groupVpcIdHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayConfigResult::GroupVpcIdHasBeenSet() const
{
    return m_groupVpcIdHasBeenSet;
}

string DescribeCloudNativeAPIGatewayConfigResult::GetGroupId() const
{
    return m_groupId;
}

void DescribeCloudNativeAPIGatewayConfigResult::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DescribeCloudNativeAPIGatewayConfigResult::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

