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

#include <tencentcloud/bmlb/v20180625/model/DevicesBindInfoLoadBalancer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

DevicesBindInfoLoadBalancer::DevicesBindInfoLoadBalancer() :
    m_loadBalancerIdHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_vipHasBeenSet(false),
    m_tgwSetTypeHasBeenSet(false),
    m_exclusiveHasBeenSet(false),
    m_l4ListenerSetHasBeenSet(false),
    m_l7ListenerSetHasBeenSet(false)
{
}

CoreInternalOutcome DevicesBindInfoLoadBalancer::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LoadBalancerId") && !value["LoadBalancerId"].IsNull())
    {
        if (!value["LoadBalancerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesBindInfoLoadBalancer.LoadBalancerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerId = string(value["LoadBalancerId"].GetString());
        m_loadBalancerIdHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesBindInfoLoadBalancer.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesBindInfoLoadBalancer.ProjectId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = value["ProjectId"].GetInt64();
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("VpcId") && !value["VpcId"].IsNull())
    {
        if (!value["VpcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesBindInfoLoadBalancer.VpcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vpcId = string(value["VpcId"].GetString());
        m_vpcIdHasBeenSet = true;
    }

    if (value.HasMember("Vip") && !value["Vip"].IsNull())
    {
        if (!value["Vip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesBindInfoLoadBalancer.Vip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vip = string(value["Vip"].GetString());
        m_vipHasBeenSet = true;
    }

    if (value.HasMember("TgwSetType") && !value["TgwSetType"].IsNull())
    {
        if (!value["TgwSetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesBindInfoLoadBalancer.TgwSetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tgwSetType = string(value["TgwSetType"].GetString());
        m_tgwSetTypeHasBeenSet = true;
    }

    if (value.HasMember("Exclusive") && !value["Exclusive"].IsNull())
    {
        if (!value["Exclusive"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DevicesBindInfoLoadBalancer.Exclusive` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_exclusive = value["Exclusive"].GetInt64();
        m_exclusiveHasBeenSet = true;
    }

    if (value.HasMember("L4ListenerSet") && !value["L4ListenerSet"].IsNull())
    {
        if (!value["L4ListenerSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DevicesBindInfoLoadBalancer.L4ListenerSet` is not array type"));

        const rapidjson::Value &tmpValue = value["L4ListenerSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DevicesBindInfoL4Listener item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_l4ListenerSet.push_back(item);
        }
        m_l4ListenerSetHasBeenSet = true;
    }

    if (value.HasMember("L7ListenerSet") && !value["L7ListenerSet"].IsNull())
    {
        if (!value["L7ListenerSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DevicesBindInfoLoadBalancer.L7ListenerSet` is not array type"));

        const rapidjson::Value &tmpValue = value["L7ListenerSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DevicesBindInfoL7Listener item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_l7ListenerSet.push_back(item);
        }
        m_l7ListenerSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DevicesBindInfoLoadBalancer::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_projectId, allocator);
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }

    if (m_tgwSetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TgwSetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tgwSetType.c_str(), allocator).Move(), allocator);
    }

    if (m_exclusiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Exclusive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_exclusive, allocator);
    }

    if (m_l4ListenerSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L4ListenerSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_l4ListenerSet.begin(); itr != m_l4ListenerSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_l7ListenerSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "L7ListenerSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_l7ListenerSet.begin(); itr != m_l7ListenerSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DevicesBindInfoLoadBalancer::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void DevicesBindInfoLoadBalancer::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool DevicesBindInfoLoadBalancer::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

int64_t DevicesBindInfoLoadBalancer::GetAppId() const
{
    return m_appId;
}

void DevicesBindInfoLoadBalancer::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool DevicesBindInfoLoadBalancer::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

int64_t DevicesBindInfoLoadBalancer::GetProjectId() const
{
    return m_projectId;
}

void DevicesBindInfoLoadBalancer::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DevicesBindInfoLoadBalancer::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DevicesBindInfoLoadBalancer::GetVpcId() const
{
    return m_vpcId;
}

void DevicesBindInfoLoadBalancer::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool DevicesBindInfoLoadBalancer::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string DevicesBindInfoLoadBalancer::GetVip() const
{
    return m_vip;
}

void DevicesBindInfoLoadBalancer::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool DevicesBindInfoLoadBalancer::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}

string DevicesBindInfoLoadBalancer::GetTgwSetType() const
{
    return m_tgwSetType;
}

void DevicesBindInfoLoadBalancer::SetTgwSetType(const string& _tgwSetType)
{
    m_tgwSetType = _tgwSetType;
    m_tgwSetTypeHasBeenSet = true;
}

bool DevicesBindInfoLoadBalancer::TgwSetTypeHasBeenSet() const
{
    return m_tgwSetTypeHasBeenSet;
}

int64_t DevicesBindInfoLoadBalancer::GetExclusive() const
{
    return m_exclusive;
}

void DevicesBindInfoLoadBalancer::SetExclusive(const int64_t& _exclusive)
{
    m_exclusive = _exclusive;
    m_exclusiveHasBeenSet = true;
}

bool DevicesBindInfoLoadBalancer::ExclusiveHasBeenSet() const
{
    return m_exclusiveHasBeenSet;
}

vector<DevicesBindInfoL4Listener> DevicesBindInfoLoadBalancer::GetL4ListenerSet() const
{
    return m_l4ListenerSet;
}

void DevicesBindInfoLoadBalancer::SetL4ListenerSet(const vector<DevicesBindInfoL4Listener>& _l4ListenerSet)
{
    m_l4ListenerSet = _l4ListenerSet;
    m_l4ListenerSetHasBeenSet = true;
}

bool DevicesBindInfoLoadBalancer::L4ListenerSetHasBeenSet() const
{
    return m_l4ListenerSetHasBeenSet;
}

vector<DevicesBindInfoL7Listener> DevicesBindInfoLoadBalancer::GetL7ListenerSet() const
{
    return m_l7ListenerSet;
}

void DevicesBindInfoLoadBalancer::SetL7ListenerSet(const vector<DevicesBindInfoL7Listener>& _l7ListenerSet)
{
    m_l7ListenerSet = _l7ListenerSet;
    m_l7ListenerSetHasBeenSet = true;
}

bool DevicesBindInfoLoadBalancer::L7ListenerSetHasBeenSet() const
{
    return m_l7ListenerSetHasBeenSet;
}

