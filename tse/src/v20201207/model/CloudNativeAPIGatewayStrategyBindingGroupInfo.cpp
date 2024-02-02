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

#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayStrategyBindingGroupInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

CloudNativeAPIGatewayStrategyBindingGroupInfo::CloudNativeAPIGatewayStrategyBindingGroupInfo() :
    m_groupIdHasBeenSet(false),
    m_nodeConfigHasBeenSet(false),
    m_bindTimeHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome CloudNativeAPIGatewayStrategyBindingGroupInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyBindingGroupInfo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("NodeConfig") && !value["NodeConfig"].IsNull())
    {
        if (!value["NodeConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyBindingGroupInfo.NodeConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nodeConfig.Deserialize(value["NodeConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nodeConfigHasBeenSet = true;
    }

    if (value.HasMember("BindTime") && !value["BindTime"].IsNull())
    {
        if (!value["BindTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyBindingGroupInfo.BindTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bindTime = string(value["BindTime"].GetString());
        m_bindTimeHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyBindingGroupInfo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudNativeAPIGatewayStrategyBindingGroupInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudNativeAPIGatewayStrategyBindingGroupInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nodeConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bindTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bindTime.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string CloudNativeAPIGatewayStrategyBindingGroupInfo::GetGroupId() const
{
    return m_groupId;
}

void CloudNativeAPIGatewayStrategyBindingGroupInfo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyBindingGroupInfo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

CloudNativeAPIGatewayNodeConfig CloudNativeAPIGatewayStrategyBindingGroupInfo::GetNodeConfig() const
{
    return m_nodeConfig;
}

void CloudNativeAPIGatewayStrategyBindingGroupInfo::SetNodeConfig(const CloudNativeAPIGatewayNodeConfig& _nodeConfig)
{
    m_nodeConfig = _nodeConfig;
    m_nodeConfigHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyBindingGroupInfo::NodeConfigHasBeenSet() const
{
    return m_nodeConfigHasBeenSet;
}

string CloudNativeAPIGatewayStrategyBindingGroupInfo::GetBindTime() const
{
    return m_bindTime;
}

void CloudNativeAPIGatewayStrategyBindingGroupInfo::SetBindTime(const string& _bindTime)
{
    m_bindTime = _bindTime;
    m_bindTimeHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyBindingGroupInfo::BindTimeHasBeenSet() const
{
    return m_bindTimeHasBeenSet;
}

string CloudNativeAPIGatewayStrategyBindingGroupInfo::GetGroupName() const
{
    return m_groupName;
}

void CloudNativeAPIGatewayStrategyBindingGroupInfo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyBindingGroupInfo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string CloudNativeAPIGatewayStrategyBindingGroupInfo::GetStatus() const
{
    return m_status;
}

void CloudNativeAPIGatewayStrategyBindingGroupInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CloudNativeAPIGatewayStrategyBindingGroupInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

