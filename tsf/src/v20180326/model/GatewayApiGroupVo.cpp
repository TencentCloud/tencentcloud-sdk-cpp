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

#include <tencentcloud/tsf/v20180326/model/GatewayApiGroupVo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

GatewayApiGroupVo::GatewayApiGroupVo() :
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_groupApiCountHasBeenSet(false),
    m_groupApisHasBeenSet(false),
    m_gatewayInstanceTypeHasBeenSet(false),
    m_gatewayInstanceIdHasBeenSet(false)
{
}

CoreInternalOutcome GatewayApiGroupVo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayApiGroupVo.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayApiGroupVo.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("GroupApiCount") && !value["GroupApiCount"].IsNull())
    {
        if (!value["GroupApiCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayApiGroupVo.GroupApiCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_groupApiCount = value["GroupApiCount"].GetUint64();
        m_groupApiCountHasBeenSet = true;
    }

    if (value.HasMember("GroupApis") && !value["GroupApis"].IsNull())
    {
        if (!value["GroupApis"].IsArray())
            return CoreInternalOutcome(Core::Error("response `GatewayApiGroupVo.GroupApis` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupApis"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GatewayGroupApiVo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_groupApis.push_back(item);
        }
        m_groupApisHasBeenSet = true;
    }

    if (value.HasMember("GatewayInstanceType") && !value["GatewayInstanceType"].IsNull())
    {
        if (!value["GatewayInstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayApiGroupVo.GatewayInstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayInstanceType = string(value["GatewayInstanceType"].GetString());
        m_gatewayInstanceTypeHasBeenSet = true;
    }

    if (value.HasMember("GatewayInstanceId") && !value["GatewayInstanceId"].IsNull())
    {
        if (!value["GatewayInstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `GatewayApiGroupVo.GatewayInstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gatewayInstanceId = string(value["GatewayInstanceId"].GetString());
        m_gatewayInstanceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void GatewayApiGroupVo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupApiCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupApiCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupApiCount, allocator);
    }

    if (m_groupApisHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupApis";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_groupApis.begin(); itr != m_groupApis.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_gatewayInstanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayInstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayInstanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayInstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gatewayInstanceId.c_str(), allocator).Move(), allocator);
    }

}


string GatewayApiGroupVo::GetGroupId() const
{
    return m_groupId;
}

void GatewayApiGroupVo::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool GatewayApiGroupVo::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string GatewayApiGroupVo::GetGroupName() const
{
    return m_groupName;
}

void GatewayApiGroupVo::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool GatewayApiGroupVo::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

uint64_t GatewayApiGroupVo::GetGroupApiCount() const
{
    return m_groupApiCount;
}

void GatewayApiGroupVo::SetGroupApiCount(const uint64_t& _groupApiCount)
{
    m_groupApiCount = _groupApiCount;
    m_groupApiCountHasBeenSet = true;
}

bool GatewayApiGroupVo::GroupApiCountHasBeenSet() const
{
    return m_groupApiCountHasBeenSet;
}

vector<GatewayGroupApiVo> GatewayApiGroupVo::GetGroupApis() const
{
    return m_groupApis;
}

void GatewayApiGroupVo::SetGroupApis(const vector<GatewayGroupApiVo>& _groupApis)
{
    m_groupApis = _groupApis;
    m_groupApisHasBeenSet = true;
}

bool GatewayApiGroupVo::GroupApisHasBeenSet() const
{
    return m_groupApisHasBeenSet;
}

string GatewayApiGroupVo::GetGatewayInstanceType() const
{
    return m_gatewayInstanceType;
}

void GatewayApiGroupVo::SetGatewayInstanceType(const string& _gatewayInstanceType)
{
    m_gatewayInstanceType = _gatewayInstanceType;
    m_gatewayInstanceTypeHasBeenSet = true;
}

bool GatewayApiGroupVo::GatewayInstanceTypeHasBeenSet() const
{
    return m_gatewayInstanceTypeHasBeenSet;
}

string GatewayApiGroupVo::GetGatewayInstanceId() const
{
    return m_gatewayInstanceId;
}

void GatewayApiGroupVo::SetGatewayInstanceId(const string& _gatewayInstanceId)
{
    m_gatewayInstanceId = _gatewayInstanceId;
    m_gatewayInstanceIdHasBeenSet = true;
}

bool GatewayApiGroupVo::GatewayInstanceIdHasBeenSet() const
{
    return m_gatewayInstanceIdHasBeenSet;
}

