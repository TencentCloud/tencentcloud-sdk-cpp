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

#include <tencentcloud/tcm/v20210413/model/LoadBalancerStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

LoadBalancerStatus::LoadBalancerStatus() :
    m_loadBalancerIdHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_loadBalancerVipHasBeenSet(false),
    m_loadBalancerHostnameHasBeenSet(false)
{
}

CoreInternalOutcome LoadBalancerStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LoadBalancerId") && !value["LoadBalancerId"].IsNull())
    {
        if (!value["LoadBalancerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerStatus.LoadBalancerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerId = string(value["LoadBalancerId"].GetString());
        m_loadBalancerIdHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerName") && !value["LoadBalancerName"].IsNull())
    {
        if (!value["LoadBalancerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerStatus.LoadBalancerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerName = string(value["LoadBalancerName"].GetString());
        m_loadBalancerNameHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerVip") && !value["LoadBalancerVip"].IsNull())
    {
        if (!value["LoadBalancerVip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerStatus.LoadBalancerVip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerVip = string(value["LoadBalancerVip"].GetString());
        m_loadBalancerVipHasBeenSet = true;
    }

    if (value.HasMember("LoadBalancerHostname") && !value["LoadBalancerHostname"].IsNull())
    {
        if (!value["LoadBalancerHostname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoadBalancerStatus.LoadBalancerHostname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerHostname = string(value["LoadBalancerHostname"].GetString());
        m_loadBalancerHostnameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoadBalancerStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerName.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerVipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerVip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerVip.c_str(), allocator).Move(), allocator);
    }

    if (m_loadBalancerHostnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerHostname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerHostname.c_str(), allocator).Move(), allocator);
    }

}


string LoadBalancerStatus::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void LoadBalancerStatus::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool LoadBalancerStatus::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

string LoadBalancerStatus::GetLoadBalancerName() const
{
    return m_loadBalancerName;
}

void LoadBalancerStatus::SetLoadBalancerName(const string& _loadBalancerName)
{
    m_loadBalancerName = _loadBalancerName;
    m_loadBalancerNameHasBeenSet = true;
}

bool LoadBalancerStatus::LoadBalancerNameHasBeenSet() const
{
    return m_loadBalancerNameHasBeenSet;
}

string LoadBalancerStatus::GetLoadBalancerVip() const
{
    return m_loadBalancerVip;
}

void LoadBalancerStatus::SetLoadBalancerVip(const string& _loadBalancerVip)
{
    m_loadBalancerVip = _loadBalancerVip;
    m_loadBalancerVipHasBeenSet = true;
}

bool LoadBalancerStatus::LoadBalancerVipHasBeenSet() const
{
    return m_loadBalancerVipHasBeenSet;
}

string LoadBalancerStatus::GetLoadBalancerHostname() const
{
    return m_loadBalancerHostname;
}

void LoadBalancerStatus::SetLoadBalancerHostname(const string& _loadBalancerHostname)
{
    m_loadBalancerHostname = _loadBalancerHostname;
    m_loadBalancerHostnameHasBeenSet = true;
}

bool LoadBalancerStatus::LoadBalancerHostnameHasBeenSet() const
{
    return m_loadBalancerHostnameHasBeenSet;
}

