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

#include <tencentcloud/weilingwith/v20230427/model/DescribeDeviceShadowListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DescribeDeviceShadowListRequest::DescribeDeviceShadowListRequest() :
    m_workspaceIdHasBeenSet(false),
    m_wIDSetHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_applicationTokenHasBeenSet(false),
    m_deviceTypeSetHasBeenSet(false),
    m_productIdSetHasBeenSet(false),
    m_tagIdSetHasBeenSet(false),
    m_spaceCodeSetHasBeenSet(false),
    m_deviceTagSetHasBeenSet(false)
{
}

string DescribeDeviceShadowListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_workspaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkspaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_workspaceId, allocator);
    }

    if (m_wIDSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WIDSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_wIDSet.begin(); itr != m_wIDSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_pageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageNumber, allocator);
    }

    if (m_pageSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageSize";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_pageSize, allocator);
    }

    if (m_applicationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationToken.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceTypeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceTypeSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deviceTypeSet.begin(); itr != m_deviceTypeSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_productIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_productIdSet.begin(); itr != m_productIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_tagIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagIdSet.begin(); itr != m_tagIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_spaceCodeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceCodeSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_spaceCodeSet.begin(); itr != m_spaceCodeSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_deviceTagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceTagSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deviceTagSet.begin(); itr != m_deviceTagSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeDeviceShadowListRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void DescribeDeviceShadowListRequest::SetWorkspaceId(const int64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool DescribeDeviceShadowListRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

vector<string> DescribeDeviceShadowListRequest::GetWIDSet() const
{
    return m_wIDSet;
}

void DescribeDeviceShadowListRequest::SetWIDSet(const vector<string>& _wIDSet)
{
    m_wIDSet = _wIDSet;
    m_wIDSetHasBeenSet = true;
}

bool DescribeDeviceShadowListRequest::WIDSetHasBeenSet() const
{
    return m_wIDSetHasBeenSet;
}

int64_t DescribeDeviceShadowListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeDeviceShadowListRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeDeviceShadowListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribeDeviceShadowListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeDeviceShadowListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeDeviceShadowListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeDeviceShadowListRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void DescribeDeviceShadowListRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool DescribeDeviceShadowListRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}

vector<string> DescribeDeviceShadowListRequest::GetDeviceTypeSet() const
{
    return m_deviceTypeSet;
}

void DescribeDeviceShadowListRequest::SetDeviceTypeSet(const vector<string>& _deviceTypeSet)
{
    m_deviceTypeSet = _deviceTypeSet;
    m_deviceTypeSetHasBeenSet = true;
}

bool DescribeDeviceShadowListRequest::DeviceTypeSetHasBeenSet() const
{
    return m_deviceTypeSetHasBeenSet;
}

vector<int64_t> DescribeDeviceShadowListRequest::GetProductIdSet() const
{
    return m_productIdSet;
}

void DescribeDeviceShadowListRequest::SetProductIdSet(const vector<int64_t>& _productIdSet)
{
    m_productIdSet = _productIdSet;
    m_productIdSetHasBeenSet = true;
}

bool DescribeDeviceShadowListRequest::ProductIdSetHasBeenSet() const
{
    return m_productIdSetHasBeenSet;
}

vector<int64_t> DescribeDeviceShadowListRequest::GetTagIdSet() const
{
    return m_tagIdSet;
}

void DescribeDeviceShadowListRequest::SetTagIdSet(const vector<int64_t>& _tagIdSet)
{
    m_tagIdSet = _tagIdSet;
    m_tagIdSetHasBeenSet = true;
}

bool DescribeDeviceShadowListRequest::TagIdSetHasBeenSet() const
{
    return m_tagIdSetHasBeenSet;
}

vector<string> DescribeDeviceShadowListRequest::GetSpaceCodeSet() const
{
    return m_spaceCodeSet;
}

void DescribeDeviceShadowListRequest::SetSpaceCodeSet(const vector<string>& _spaceCodeSet)
{
    m_spaceCodeSet = _spaceCodeSet;
    m_spaceCodeSetHasBeenSet = true;
}

bool DescribeDeviceShadowListRequest::SpaceCodeSetHasBeenSet() const
{
    return m_spaceCodeSetHasBeenSet;
}

vector<string> DescribeDeviceShadowListRequest::GetDeviceTagSet() const
{
    return m_deviceTagSet;
}

void DescribeDeviceShadowListRequest::SetDeviceTagSet(const vector<string>& _deviceTagSet)
{
    m_deviceTagSet = _deviceTagSet;
    m_deviceTagSetHasBeenSet = true;
}

bool DescribeDeviceShadowListRequest::DeviceTagSetHasBeenSet() const
{
    return m_deviceTagSetHasBeenSet;
}


