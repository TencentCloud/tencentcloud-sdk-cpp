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

#include <tencentcloud/tse/v20201207/model/DeleteCloudNativeAPIGatewayPublicNetworkRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

DeleteCloudNativeAPIGatewayPublicNetworkRequest::DeleteCloudNativeAPIGatewayPublicNetworkRequest() :
    m_gatewayIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_internetAddressVersionHasBeenSet(false),
    m_vipHasBeenSet(false)
{
}

string DeleteCloudNativeAPIGatewayPublicNetworkRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_internetAddressVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetAddressVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_internetAddressVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_vipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vip.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteCloudNativeAPIGatewayPublicNetworkRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void DeleteCloudNativeAPIGatewayPublicNetworkRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool DeleteCloudNativeAPIGatewayPublicNetworkRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

string DeleteCloudNativeAPIGatewayPublicNetworkRequest::GetGroupId() const
{
    return m_groupId;
}

void DeleteCloudNativeAPIGatewayPublicNetworkRequest::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool DeleteCloudNativeAPIGatewayPublicNetworkRequest::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string DeleteCloudNativeAPIGatewayPublicNetworkRequest::GetInternetAddressVersion() const
{
    return m_internetAddressVersion;
}

void DeleteCloudNativeAPIGatewayPublicNetworkRequest::SetInternetAddressVersion(const string& _internetAddressVersion)
{
    m_internetAddressVersion = _internetAddressVersion;
    m_internetAddressVersionHasBeenSet = true;
}

bool DeleteCloudNativeAPIGatewayPublicNetworkRequest::InternetAddressVersionHasBeenSet() const
{
    return m_internetAddressVersionHasBeenSet;
}

string DeleteCloudNativeAPIGatewayPublicNetworkRequest::GetVip() const
{
    return m_vip;
}

void DeleteCloudNativeAPIGatewayPublicNetworkRequest::SetVip(const string& _vip)
{
    m_vip = _vip;
    m_vipHasBeenSet = true;
}

bool DeleteCloudNativeAPIGatewayPublicNetworkRequest::VipHasBeenSet() const
{
    return m_vipHasBeenSet;
}


