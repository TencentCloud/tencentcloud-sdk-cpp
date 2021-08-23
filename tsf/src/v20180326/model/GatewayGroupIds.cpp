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

#include <tencentcloud/tsf/v20180326/model/GatewayGroupIds.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

GatewayGroupIds::GatewayGroupIds() :
    m_gatewayDeployGroupIdHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

CoreInternalOutcome GatewayGroupIds::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GatewayDeployGroupId") && !value["GatewayDeployGroupId"].IsNull())
    {
        if (!value["GatewayDeployGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayGroupIds.GatewayDeployGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayDeployGroupId = string(value["GatewayDeployGroupId"].GetString());
        m_gatewayDeployGroupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayGroupIds.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GatewayGroupIds::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gatewayDeployGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayDeployGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayDeployGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

}


string GatewayGroupIds::GetGatewayDeployGroupId() const
{
    return m_gatewayDeployGroupId;
}

void GatewayGroupIds::SetGatewayDeployGroupId(const string& _gatewayDeployGroupId)
{
    m_gatewayDeployGroupId = _gatewayDeployGroupId;
    m_gatewayDeployGroupIdHasBeenSet = true;
}

bool GatewayGroupIds::GatewayDeployGroupIdHasBeenSet() const
{
    return m_gatewayDeployGroupIdHasBeenSet;
}

string GatewayGroupIds::GetGroupId() const
{
    return m_groupId;
}

void GatewayGroupIds::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool GatewayGroupIds::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

