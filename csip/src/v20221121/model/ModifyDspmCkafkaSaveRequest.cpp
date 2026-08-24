/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/csip/v20221121/model/ModifyDspmCkafkaSaveRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyDspmCkafkaSaveRequest::ModifyDspmCkafkaSaveRequest() :
    m_vipTypeHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_routeInfoHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_logDeliveryInfoHasBeenSet(false),
    m_isOverwriteHasBeenSet(false),
    m_memberIdHasBeenSet(false)
{
}

string ModifyDspmCkafkaSaveRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vipTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VipType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_vipType, allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_regionId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_routeInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RouteInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_routeInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_logDeliveryInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogDeliveryInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_logDeliveryInfo.begin(); itr != m_logDeliveryInfo.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_isOverwriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsOverwrite";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isOverwrite, allocator);
    }

    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyDspmCkafkaSaveRequest::GetVipType() const
{
    return m_vipType;
}

void ModifyDspmCkafkaSaveRequest::SetVipType(const int64_t& _vipType)
{
    m_vipType = _vipType;
    m_vipTypeHasBeenSet = true;
}

bool ModifyDspmCkafkaSaveRequest::VipTypeHasBeenSet() const
{
    return m_vipTypeHasBeenSet;
}

string ModifyDspmCkafkaSaveRequest::GetRegionId() const
{
    return m_regionId;
}

void ModifyDspmCkafkaSaveRequest::SetRegionId(const string& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool ModifyDspmCkafkaSaveRequest::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

string ModifyDspmCkafkaSaveRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ModifyDspmCkafkaSaveRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ModifyDspmCkafkaSaveRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ModifyDspmCkafkaSaveRequest::GetInstanceName() const
{
    return m_instanceName;
}

void ModifyDspmCkafkaSaveRequest::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ModifyDspmCkafkaSaveRequest::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

RouteInfo ModifyDspmCkafkaSaveRequest::GetRouteInfo() const
{
    return m_routeInfo;
}

void ModifyDspmCkafkaSaveRequest::SetRouteInfo(const RouteInfo& _routeInfo)
{
    m_routeInfo = _routeInfo;
    m_routeInfoHasBeenSet = true;
}

bool ModifyDspmCkafkaSaveRequest::RouteInfoHasBeenSet() const
{
    return m_routeInfoHasBeenSet;
}

string ModifyDspmCkafkaSaveRequest::GetUsername() const
{
    return m_username;
}

void ModifyDspmCkafkaSaveRequest::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool ModifyDspmCkafkaSaveRequest::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string ModifyDspmCkafkaSaveRequest::GetPassword() const
{
    return m_password;
}

void ModifyDspmCkafkaSaveRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool ModifyDspmCkafkaSaveRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

vector<LogDeliveryInfo> ModifyDspmCkafkaSaveRequest::GetLogDeliveryInfo() const
{
    return m_logDeliveryInfo;
}

void ModifyDspmCkafkaSaveRequest::SetLogDeliveryInfo(const vector<LogDeliveryInfo>& _logDeliveryInfo)
{
    m_logDeliveryInfo = _logDeliveryInfo;
    m_logDeliveryInfoHasBeenSet = true;
}

bool ModifyDspmCkafkaSaveRequest::LogDeliveryInfoHasBeenSet() const
{
    return m_logDeliveryInfoHasBeenSet;
}

bool ModifyDspmCkafkaSaveRequest::GetIsOverwrite() const
{
    return m_isOverwrite;
}

void ModifyDspmCkafkaSaveRequest::SetIsOverwrite(const bool& _isOverwrite)
{
    m_isOverwrite = _isOverwrite;
    m_isOverwriteHasBeenSet = true;
}

bool ModifyDspmCkafkaSaveRequest::IsOverwriteHasBeenSet() const
{
    return m_isOverwriteHasBeenSet;
}

vector<string> ModifyDspmCkafkaSaveRequest::GetMemberId() const
{
    return m_memberId;
}

void ModifyDspmCkafkaSaveRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool ModifyDspmCkafkaSaveRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}


