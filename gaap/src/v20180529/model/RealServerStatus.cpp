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

#include <tencentcloud/gaap/v20180529/model/RealServerStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gaap::V20180529::Model;
using namespace std;

RealServerStatus::RealServerStatus() :
    m_realServerIdHasBeenSet(false),
    m_bindStatusHasBeenSet(false),
    m_proxyIdHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

CoreInternalOutcome RealServerStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RealServerId") && !value["RealServerId"].IsNull())
    {
        if (!value["RealServerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RealServerStatus.RealServerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realServerId = string(value["RealServerId"].GetString());
        m_realServerIdHasBeenSet = true;
    }

    if (value.HasMember("BindStatus") && !value["BindStatus"].IsNull())
    {
        if (!value["BindStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RealServerStatus.BindStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bindStatus = value["BindStatus"].GetInt64();
        m_bindStatusHasBeenSet = true;
    }

    if (value.HasMember("ProxyId") && !value["ProxyId"].IsNull())
    {
        if (!value["ProxyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RealServerStatus.ProxyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_proxyId = string(value["ProxyId"].GetString());
        m_proxyIdHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RealServerStatus.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RealServerStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_realServerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealServerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realServerId.c_str(), allocator).Move(), allocator);
    }

    if (m_bindStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindStatus, allocator);
    }

    if (m_proxyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_proxyId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

}


string RealServerStatus::GetRealServerId() const
{
    return m_realServerId;
}

void RealServerStatus::SetRealServerId(const string& _realServerId)
{
    m_realServerId = _realServerId;
    m_realServerIdHasBeenSet = true;
}

bool RealServerStatus::RealServerIdHasBeenSet() const
{
    return m_realServerIdHasBeenSet;
}

int64_t RealServerStatus::GetBindStatus() const
{
    return m_bindStatus;
}

void RealServerStatus::SetBindStatus(const int64_t& _bindStatus)
{
    m_bindStatus = _bindStatus;
    m_bindStatusHasBeenSet = true;
}

bool RealServerStatus::BindStatusHasBeenSet() const
{
    return m_bindStatusHasBeenSet;
}

string RealServerStatus::GetProxyId() const
{
    return m_proxyId;
}

void RealServerStatus::SetProxyId(const string& _proxyId)
{
    m_proxyId = _proxyId;
    m_proxyIdHasBeenSet = true;
}

bool RealServerStatus::ProxyIdHasBeenSet() const
{
    return m_proxyIdHasBeenSet;
}

string RealServerStatus::GetGroupId() const
{
    return m_groupId;
}

void RealServerStatus::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool RealServerStatus::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

