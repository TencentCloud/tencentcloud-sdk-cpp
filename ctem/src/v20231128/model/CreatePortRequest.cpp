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

#include <tencentcloud/ctem/v20231128/model/CreatePortRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

CreatePortRequest::CreatePortRequest() :
    m_customerIdHasBeenSet(false),
    m_portHasBeenSet(false),
    m_assetHasBeenSet(false),
    m_isHighRiskHasBeenSet(false),
    m_enterpriseUidHasBeenSet(false),
    m_bannerHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_appHasBeenSet(false),
    m_serviceHasBeenSet(false)
{
}

string CreatePortRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_customerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_customerId, allocator);
    }

    if (m_portHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Port";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_port, allocator);
    }

    if (m_assetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Asset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_asset.c_str(), allocator).Move(), allocator);
    }

    if (m_isHighRiskHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsHighRisk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isHighRisk, allocator);
    }

    if (m_enterpriseUidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnterpriseUid";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_enterpriseUid.c_str(), allocator).Move(), allocator);
    }

    if (m_bannerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Banner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_banner.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_appHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "App";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_app.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Service";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_service.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreatePortRequest::GetCustomerId() const
{
    return m_customerId;
}

void CreatePortRequest::SetCustomerId(const int64_t& _customerId)
{
    m_customerId = _customerId;
    m_customerIdHasBeenSet = true;
}

bool CreatePortRequest::CustomerIdHasBeenSet() const
{
    return m_customerIdHasBeenSet;
}

int64_t CreatePortRequest::GetPort() const
{
    return m_port;
}

void CreatePortRequest::SetPort(const int64_t& _port)
{
    m_port = _port;
    m_portHasBeenSet = true;
}

bool CreatePortRequest::PortHasBeenSet() const
{
    return m_portHasBeenSet;
}

string CreatePortRequest::GetAsset() const
{
    return m_asset;
}

void CreatePortRequest::SetAsset(const string& _asset)
{
    m_asset = _asset;
    m_assetHasBeenSet = true;
}

bool CreatePortRequest::AssetHasBeenSet() const
{
    return m_assetHasBeenSet;
}

bool CreatePortRequest::GetIsHighRisk() const
{
    return m_isHighRisk;
}

void CreatePortRequest::SetIsHighRisk(const bool& _isHighRisk)
{
    m_isHighRisk = _isHighRisk;
    m_isHighRiskHasBeenSet = true;
}

bool CreatePortRequest::IsHighRiskHasBeenSet() const
{
    return m_isHighRiskHasBeenSet;
}

string CreatePortRequest::GetEnterpriseUid() const
{
    return m_enterpriseUid;
}

void CreatePortRequest::SetEnterpriseUid(const string& _enterpriseUid)
{
    m_enterpriseUid = _enterpriseUid;
    m_enterpriseUidHasBeenSet = true;
}

bool CreatePortRequest::EnterpriseUidHasBeenSet() const
{
    return m_enterpriseUidHasBeenSet;
}

string CreatePortRequest::GetBanner() const
{
    return m_banner;
}

void CreatePortRequest::SetBanner(const string& _banner)
{
    m_banner = _banner;
    m_bannerHasBeenSet = true;
}

bool CreatePortRequest::BannerHasBeenSet() const
{
    return m_bannerHasBeenSet;
}

string CreatePortRequest::GetIp() const
{
    return m_ip;
}

void CreatePortRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool CreatePortRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string CreatePortRequest::GetApp() const
{
    return m_app;
}

void CreatePortRequest::SetApp(const string& _app)
{
    m_app = _app;
    m_appHasBeenSet = true;
}

bool CreatePortRequest::AppHasBeenSet() const
{
    return m_appHasBeenSet;
}

string CreatePortRequest::GetService() const
{
    return m_service;
}

void CreatePortRequest::SetService(const string& _service)
{
    m_service = _service;
    m_serviceHasBeenSet = true;
}

bool CreatePortRequest::ServiceHasBeenSet() const
{
    return m_serviceHasBeenSet;
}


