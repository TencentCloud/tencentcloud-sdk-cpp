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

#include <tencentcloud/tsf/v20180326/model/GatewayVo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

GatewayVo::GatewayVo() :
    m_gatewayDeployGroupIdHasBeenSet(false),
    m_gatewayDeployGroupNameHasBeenSet(false),
    m_groupNumHasBeenSet(false),
    m_groupsHasBeenSet(false)
{
}

CoreInternalOutcome GatewayVo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GatewayDeployGroupId") && !value["GatewayDeployGroupId"].IsNull())
    {
        if (!value["GatewayDeployGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayVo.GatewayDeployGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayDeployGroupId = string(value["GatewayDeployGroupId"].GetString());
        m_gatewayDeployGroupIdHasBeenSet = true;
    }

    if (value.HasMember("GatewayDeployGroupName") && !value["GatewayDeployGroupName"].IsNull())
    {
        if (!value["GatewayDeployGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayVo.GatewayDeployGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayDeployGroupName = string(value["GatewayDeployGroupName"].GetString());
        m_gatewayDeployGroupNameHasBeenSet = true;
    }

    if (value.HasMember("GroupNum") && !value["GroupNum"].IsNull())
    {
        if (!value["GroupNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayVo.GroupNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupNum = value["GroupNum"].GetUint64();
        m_groupNumHasBeenSet = true;
    }

    if (value.HasMember("Groups") && !value["Groups"].IsNull())
    {
        if (!value["Groups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GatewayVo.Groups` is not array type"));

        const rapidjson::Value &tmpValue = value["Groups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GatewayApiGroupVo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groups.push_back(item);
        }
        m_groupsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GatewayVo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_gatewayDeployGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayDeployGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayDeployGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayDeployGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayDeployGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayDeployGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupNum, allocator);
    }

    if (m_groupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Groups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groups.begin(); itr != m_groups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string GatewayVo::GetGatewayDeployGroupId() const
{
    return m_gatewayDeployGroupId;
}

void GatewayVo::SetGatewayDeployGroupId(const string& _gatewayDeployGroupId)
{
    m_gatewayDeployGroupId = _gatewayDeployGroupId;
    m_gatewayDeployGroupIdHasBeenSet = true;
}

bool GatewayVo::GatewayDeployGroupIdHasBeenSet() const
{
    return m_gatewayDeployGroupIdHasBeenSet;
}

string GatewayVo::GetGatewayDeployGroupName() const
{
    return m_gatewayDeployGroupName;
}

void GatewayVo::SetGatewayDeployGroupName(const string& _gatewayDeployGroupName)
{
    m_gatewayDeployGroupName = _gatewayDeployGroupName;
    m_gatewayDeployGroupNameHasBeenSet = true;
}

bool GatewayVo::GatewayDeployGroupNameHasBeenSet() const
{
    return m_gatewayDeployGroupNameHasBeenSet;
}

uint64_t GatewayVo::GetGroupNum() const
{
    return m_groupNum;
}

void GatewayVo::SetGroupNum(const uint64_t& _groupNum)
{
    m_groupNum = _groupNum;
    m_groupNumHasBeenSet = true;
}

bool GatewayVo::GroupNumHasBeenSet() const
{
    return m_groupNumHasBeenSet;
}

vector<GatewayApiGroupVo> GatewayVo::GetGroups() const
{
    return m_groups;
}

void GatewayVo::SetGroups(const vector<GatewayApiGroupVo>& _groups)
{
    m_groups = _groups;
    m_groupsHasBeenSet = true;
}

bool GatewayVo::GroupsHasBeenSet() const
{
    return m_groupsHasBeenSet;
}

