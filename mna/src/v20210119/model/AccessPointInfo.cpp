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

#include <tencentcloud/mna/v20210119/model/AccessPointInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

AccessPointInfo::AccessPointInfo() :
    m_vendorHasBeenSet(false),
    m_publicAddrHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_bigAreaHasBeenSet(false),
    m_availableHasBeenSet(false),
    m_gwGroupIdHasBeenSet(false)
{
}

CoreInternalOutcome AccessPointInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Vendor") && !value["Vendor"].IsNull())
    {
        if (!value["Vendor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessPointInfo.Vendor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vendor = string(value["Vendor"].GetString());
        m_vendorHasBeenSet = true;
    }

    if (value.HasMember("PublicAddr") && !value["PublicAddr"].IsNull())
    {
        if (!value["PublicAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessPointInfo.PublicAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publicAddr = string(value["PublicAddr"].GetString());
        m_publicAddrHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessPointInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("BigArea") && !value["BigArea"].IsNull())
    {
        if (!value["BigArea"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessPointInfo.BigArea` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bigArea = string(value["BigArea"].GetString());
        m_bigAreaHasBeenSet = true;
    }

    if (value.HasMember("Available") && !value["Available"].IsNull())
    {
        if (!value["Available"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AccessPointInfo.Available` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_available = value["Available"].GetBool();
        m_availableHasBeenSet = true;
    }

    if (value.HasMember("GwGroupId") && !value["GwGroupId"].IsNull())
    {
        if (!value["GwGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessPointInfo.GwGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_gwGroupId = string(value["GwGroupId"].GetString());
        m_gwGroupIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessPointInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vendorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vendor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vendor.c_str(), allocator).Move(), allocator);
    }

    if (m_publicAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublicAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publicAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_bigAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BigArea";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bigArea.c_str(), allocator).Move(), allocator);
    }

    if (m_availableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Available";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_available, allocator);
    }

    if (m_gwGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GwGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_gwGroupId.c_str(), allocator).Move(), allocator);
    }

}


string AccessPointInfo::GetVendor() const
{
    return m_vendor;
}

void AccessPointInfo::SetVendor(const string& _vendor)
{
    m_vendor = _vendor;
    m_vendorHasBeenSet = true;
}

bool AccessPointInfo::VendorHasBeenSet() const
{
    return m_vendorHasBeenSet;
}

string AccessPointInfo::GetPublicAddr() const
{
    return m_publicAddr;
}

void AccessPointInfo::SetPublicAddr(const string& _publicAddr)
{
    m_publicAddr = _publicAddr;
    m_publicAddrHasBeenSet = true;
}

bool AccessPointInfo::PublicAddrHasBeenSet() const
{
    return m_publicAddrHasBeenSet;
}

string AccessPointInfo::GetRegion() const
{
    return m_region;
}

void AccessPointInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool AccessPointInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string AccessPointInfo::GetBigArea() const
{
    return m_bigArea;
}

void AccessPointInfo::SetBigArea(const string& _bigArea)
{
    m_bigArea = _bigArea;
    m_bigAreaHasBeenSet = true;
}

bool AccessPointInfo::BigAreaHasBeenSet() const
{
    return m_bigAreaHasBeenSet;
}

bool AccessPointInfo::GetAvailable() const
{
    return m_available;
}

void AccessPointInfo::SetAvailable(const bool& _available)
{
    m_available = _available;
    m_availableHasBeenSet = true;
}

bool AccessPointInfo::AvailableHasBeenSet() const
{
    return m_availableHasBeenSet;
}

string AccessPointInfo::GetGwGroupId() const
{
    return m_gwGroupId;
}

void AccessPointInfo::SetGwGroupId(const string& _gwGroupId)
{
    m_gwGroupId = _gwGroupId;
    m_gwGroupIdHasBeenSet = true;
}

bool AccessPointInfo::GwGroupIdHasBeenSet() const
{
    return m_gwGroupIdHasBeenSet;
}

