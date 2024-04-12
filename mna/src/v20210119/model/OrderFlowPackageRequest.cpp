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

#include <tencentcloud/mna/v20210119/model/OrderFlowPackageRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

OrderFlowPackageRequest::OrderFlowPackageRequest() :
    m_packageTypeHasBeenSet(false),
    m_deviceListHasBeenSet(false),
    m_autoRenewFlagHasBeenSet(false),
    m_packageRegionHasBeenSet(false),
    m_flowTruncFlagHasBeenSet(false),
    m_autoVoucherHasBeenSet(false),
    m_voucherIdsHasBeenSet(false)
{
}

string OrderFlowPackageRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_packageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_packageType.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deviceList.begin(); itr != m_deviceList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_autoRenewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoRenewFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoRenewFlag, allocator);
    }

    if (m_packageRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PackageRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_packageRegion, allocator);
    }

    if (m_flowTruncFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowTruncFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_flowTruncFlag, allocator);
    }

    if (m_autoVoucherHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoVoucher";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoVoucher, allocator);
    }

    if (m_voucherIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VoucherIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_voucherIds.begin(); itr != m_voucherIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string OrderFlowPackageRequest::GetPackageType() const
{
    return m_packageType;
}

void OrderFlowPackageRequest::SetPackageType(const string& _packageType)
{
    m_packageType = _packageType;
    m_packageTypeHasBeenSet = true;
}

bool OrderFlowPackageRequest::PackageTypeHasBeenSet() const
{
    return m_packageTypeHasBeenSet;
}

vector<string> OrderFlowPackageRequest::GetDeviceList() const
{
    return m_deviceList;
}

void OrderFlowPackageRequest::SetDeviceList(const vector<string>& _deviceList)
{
    m_deviceList = _deviceList;
    m_deviceListHasBeenSet = true;
}

bool OrderFlowPackageRequest::DeviceListHasBeenSet() const
{
    return m_deviceListHasBeenSet;
}

bool OrderFlowPackageRequest::GetAutoRenewFlag() const
{
    return m_autoRenewFlag;
}

void OrderFlowPackageRequest::SetAutoRenewFlag(const bool& _autoRenewFlag)
{
    m_autoRenewFlag = _autoRenewFlag;
    m_autoRenewFlagHasBeenSet = true;
}

bool OrderFlowPackageRequest::AutoRenewFlagHasBeenSet() const
{
    return m_autoRenewFlagHasBeenSet;
}

int64_t OrderFlowPackageRequest::GetPackageRegion() const
{
    return m_packageRegion;
}

void OrderFlowPackageRequest::SetPackageRegion(const int64_t& _packageRegion)
{
    m_packageRegion = _packageRegion;
    m_packageRegionHasBeenSet = true;
}

bool OrderFlowPackageRequest::PackageRegionHasBeenSet() const
{
    return m_packageRegionHasBeenSet;
}

bool OrderFlowPackageRequest::GetFlowTruncFlag() const
{
    return m_flowTruncFlag;
}

void OrderFlowPackageRequest::SetFlowTruncFlag(const bool& _flowTruncFlag)
{
    m_flowTruncFlag = _flowTruncFlag;
    m_flowTruncFlagHasBeenSet = true;
}

bool OrderFlowPackageRequest::FlowTruncFlagHasBeenSet() const
{
    return m_flowTruncFlagHasBeenSet;
}

bool OrderFlowPackageRequest::GetAutoVoucher() const
{
    return m_autoVoucher;
}

void OrderFlowPackageRequest::SetAutoVoucher(const bool& _autoVoucher)
{
    m_autoVoucher = _autoVoucher;
    m_autoVoucherHasBeenSet = true;
}

bool OrderFlowPackageRequest::AutoVoucherHasBeenSet() const
{
    return m_autoVoucherHasBeenSet;
}

vector<string> OrderFlowPackageRequest::GetVoucherIds() const
{
    return m_voucherIds;
}

void OrderFlowPackageRequest::SetVoucherIds(const vector<string>& _voucherIds)
{
    m_voucherIds = _voucherIds;
    m_voucherIdsHasBeenSet = true;
}

bool OrderFlowPackageRequest::VoucherIdsHasBeenSet() const
{
    return m_voucherIdsHasBeenSet;
}


