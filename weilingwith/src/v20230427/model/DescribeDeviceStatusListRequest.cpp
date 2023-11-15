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

#include <tencentcloud/weilingwith/v20230427/model/DescribeDeviceStatusListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DescribeDeviceStatusListRequest::DescribeDeviceStatusListRequest() :
    m_workspaceIdHasBeenSet(false),
    m_applicationTokenHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_deviceTypeSetHasBeenSet(false),
    m_productIdSetHasBeenSet(false),
    m_tagIdSetHasBeenSet(false),
    m_spaceCodeSetHasBeenSet(false),
    m_wIDSetHasBeenSet(false),
    m_deviceTagSetHasBeenSet(false),
    m_deviceStatusSetHasBeenSet(false),
    m_statusSetHasBeenSet(false),
    m_isAliveHasBeenSet(false)
{
}

string DescribeDeviceStatusListRequest::ToJsonString() const
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

    if (m_applicationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationToken.c_str(), allocator).Move(), allocator);
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

    if (m_deviceStatusSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceStatusSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deviceStatusSet.begin(); itr != m_deviceStatusSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatusSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_statusSet.begin(); itr != m_statusSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isAliveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAlive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_isAlive.begin(); itr != m_isAlive.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetBool(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeDeviceStatusListRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void DescribeDeviceStatusListRequest::SetWorkspaceId(const int64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool DescribeDeviceStatusListRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

string DescribeDeviceStatusListRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void DescribeDeviceStatusListRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool DescribeDeviceStatusListRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}

int64_t DescribeDeviceStatusListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeDeviceStatusListRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeDeviceStatusListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribeDeviceStatusListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeDeviceStatusListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeDeviceStatusListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

vector<string> DescribeDeviceStatusListRequest::GetDeviceTypeSet() const
{
    return m_deviceTypeSet;
}

void DescribeDeviceStatusListRequest::SetDeviceTypeSet(const vector<string>& _deviceTypeSet)
{
    m_deviceTypeSet = _deviceTypeSet;
    m_deviceTypeSetHasBeenSet = true;
}

bool DescribeDeviceStatusListRequest::DeviceTypeSetHasBeenSet() const
{
    return m_deviceTypeSetHasBeenSet;
}

vector<int64_t> DescribeDeviceStatusListRequest::GetProductIdSet() const
{
    return m_productIdSet;
}

void DescribeDeviceStatusListRequest::SetProductIdSet(const vector<int64_t>& _productIdSet)
{
    m_productIdSet = _productIdSet;
    m_productIdSetHasBeenSet = true;
}

bool DescribeDeviceStatusListRequest::ProductIdSetHasBeenSet() const
{
    return m_productIdSetHasBeenSet;
}

vector<int64_t> DescribeDeviceStatusListRequest::GetTagIdSet() const
{
    return m_tagIdSet;
}

void DescribeDeviceStatusListRequest::SetTagIdSet(const vector<int64_t>& _tagIdSet)
{
    m_tagIdSet = _tagIdSet;
    m_tagIdSetHasBeenSet = true;
}

bool DescribeDeviceStatusListRequest::TagIdSetHasBeenSet() const
{
    return m_tagIdSetHasBeenSet;
}

vector<string> DescribeDeviceStatusListRequest::GetSpaceCodeSet() const
{
    return m_spaceCodeSet;
}

void DescribeDeviceStatusListRequest::SetSpaceCodeSet(const vector<string>& _spaceCodeSet)
{
    m_spaceCodeSet = _spaceCodeSet;
    m_spaceCodeSetHasBeenSet = true;
}

bool DescribeDeviceStatusListRequest::SpaceCodeSetHasBeenSet() const
{
    return m_spaceCodeSetHasBeenSet;
}

vector<string> DescribeDeviceStatusListRequest::GetWIDSet() const
{
    return m_wIDSet;
}

void DescribeDeviceStatusListRequest::SetWIDSet(const vector<string>& _wIDSet)
{
    m_wIDSet = _wIDSet;
    m_wIDSetHasBeenSet = true;
}

bool DescribeDeviceStatusListRequest::WIDSetHasBeenSet() const
{
    return m_wIDSetHasBeenSet;
}

vector<string> DescribeDeviceStatusListRequest::GetDeviceTagSet() const
{
    return m_deviceTagSet;
}

void DescribeDeviceStatusListRequest::SetDeviceTagSet(const vector<string>& _deviceTagSet)
{
    m_deviceTagSet = _deviceTagSet;
    m_deviceTagSetHasBeenSet = true;
}

bool DescribeDeviceStatusListRequest::DeviceTagSetHasBeenSet() const
{
    return m_deviceTagSetHasBeenSet;
}

vector<string> DescribeDeviceStatusListRequest::GetDeviceStatusSet() const
{
    return m_deviceStatusSet;
}

void DescribeDeviceStatusListRequest::SetDeviceStatusSet(const vector<string>& _deviceStatusSet)
{
    m_deviceStatusSet = _deviceStatusSet;
    m_deviceStatusSetHasBeenSet = true;
}

bool DescribeDeviceStatusListRequest::DeviceStatusSetHasBeenSet() const
{
    return m_deviceStatusSetHasBeenSet;
}

vector<string> DescribeDeviceStatusListRequest::GetStatusSet() const
{
    return m_statusSet;
}

void DescribeDeviceStatusListRequest::SetStatusSet(const vector<string>& _statusSet)
{
    m_statusSet = _statusSet;
    m_statusSetHasBeenSet = true;
}

bool DescribeDeviceStatusListRequest::StatusSetHasBeenSet() const
{
    return m_statusSetHasBeenSet;
}

vector<bool> DescribeDeviceStatusListRequest::GetIsAlive() const
{
    return m_isAlive;
}

void DescribeDeviceStatusListRequest::SetIsAlive(const vector<bool>& _isAlive)
{
    m_isAlive = _isAlive;
    m_isAliveHasBeenSet = true;
}

bool DescribeDeviceStatusListRequest::IsAliveHasBeenSet() const
{
    return m_isAliveHasBeenSet;
}


