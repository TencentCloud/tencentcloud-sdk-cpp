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

#include <tencentcloud/weilingwith/v20230427/model/DescribeDeviceListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

DescribeDeviceListRequest::DescribeDeviceListRequest() :
    m_workspaceIdHasBeenSet(false),
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_applicationTokenHasBeenSet(false),
    m_deviceTypeSetHasBeenSet(false),
    m_productIdSetHasBeenSet(false),
    m_tagIdSetHasBeenSet(false),
    m_spaceCodeSetHasBeenSet(false),
    m_deviceTagSetHasBeenSet(false),
    m_wIDSetHasBeenSet(false),
    m_fieldHasBeenSet(false),
    m_groupIdSetHasBeenSet(false),
    m_isActiveHasBeenSet(false),
    m_isCameraHasBeenSet(false)
{
}

string DescribeDeviceListRequest::ToJsonString() const
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

    if (m_fieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Field";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_field.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_groupIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupIdSet.begin(); itr != m_groupIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_isActiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsActive";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isActive.c_str(), allocator).Move(), allocator);
    }

    if (m_isCameraHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCamera";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_isCamera.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeDeviceListRequest::GetWorkspaceId() const
{
    return m_workspaceId;
}

void DescribeDeviceListRequest::SetWorkspaceId(const int64_t& _workspaceId)
{
    m_workspaceId = _workspaceId;
    m_workspaceIdHasBeenSet = true;
}

bool DescribeDeviceListRequest::WorkspaceIdHasBeenSet() const
{
    return m_workspaceIdHasBeenSet;
}

int64_t DescribeDeviceListRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeDeviceListRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeDeviceListRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribeDeviceListRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeDeviceListRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeDeviceListRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeDeviceListRequest::GetApplicationToken() const
{
    return m_applicationToken;
}

void DescribeDeviceListRequest::SetApplicationToken(const string& _applicationToken)
{
    m_applicationToken = _applicationToken;
    m_applicationTokenHasBeenSet = true;
}

bool DescribeDeviceListRequest::ApplicationTokenHasBeenSet() const
{
    return m_applicationTokenHasBeenSet;
}

vector<string> DescribeDeviceListRequest::GetDeviceTypeSet() const
{
    return m_deviceTypeSet;
}

void DescribeDeviceListRequest::SetDeviceTypeSet(const vector<string>& _deviceTypeSet)
{
    m_deviceTypeSet = _deviceTypeSet;
    m_deviceTypeSetHasBeenSet = true;
}

bool DescribeDeviceListRequest::DeviceTypeSetHasBeenSet() const
{
    return m_deviceTypeSetHasBeenSet;
}

vector<int64_t> DescribeDeviceListRequest::GetProductIdSet() const
{
    return m_productIdSet;
}

void DescribeDeviceListRequest::SetProductIdSet(const vector<int64_t>& _productIdSet)
{
    m_productIdSet = _productIdSet;
    m_productIdSetHasBeenSet = true;
}

bool DescribeDeviceListRequest::ProductIdSetHasBeenSet() const
{
    return m_productIdSetHasBeenSet;
}

vector<int64_t> DescribeDeviceListRequest::GetTagIdSet() const
{
    return m_tagIdSet;
}

void DescribeDeviceListRequest::SetTagIdSet(const vector<int64_t>& _tagIdSet)
{
    m_tagIdSet = _tagIdSet;
    m_tagIdSetHasBeenSet = true;
}

bool DescribeDeviceListRequest::TagIdSetHasBeenSet() const
{
    return m_tagIdSetHasBeenSet;
}

vector<string> DescribeDeviceListRequest::GetSpaceCodeSet() const
{
    return m_spaceCodeSet;
}

void DescribeDeviceListRequest::SetSpaceCodeSet(const vector<string>& _spaceCodeSet)
{
    m_spaceCodeSet = _spaceCodeSet;
    m_spaceCodeSetHasBeenSet = true;
}

bool DescribeDeviceListRequest::SpaceCodeSetHasBeenSet() const
{
    return m_spaceCodeSetHasBeenSet;
}

vector<string> DescribeDeviceListRequest::GetDeviceTagSet() const
{
    return m_deviceTagSet;
}

void DescribeDeviceListRequest::SetDeviceTagSet(const vector<string>& _deviceTagSet)
{
    m_deviceTagSet = _deviceTagSet;
    m_deviceTagSetHasBeenSet = true;
}

bool DescribeDeviceListRequest::DeviceTagSetHasBeenSet() const
{
    return m_deviceTagSetHasBeenSet;
}

vector<string> DescribeDeviceListRequest::GetWIDSet() const
{
    return m_wIDSet;
}

void DescribeDeviceListRequest::SetWIDSet(const vector<string>& _wIDSet)
{
    m_wIDSet = _wIDSet;
    m_wIDSetHasBeenSet = true;
}

bool DescribeDeviceListRequest::WIDSetHasBeenSet() const
{
    return m_wIDSetHasBeenSet;
}

CustomField DescribeDeviceListRequest::GetField() const
{
    return m_field;
}

void DescribeDeviceListRequest::SetField(const CustomField& _field)
{
    m_field = _field;
    m_fieldHasBeenSet = true;
}

bool DescribeDeviceListRequest::FieldHasBeenSet() const
{
    return m_fieldHasBeenSet;
}

vector<int64_t> DescribeDeviceListRequest::GetGroupIdSet() const
{
    return m_groupIdSet;
}

void DescribeDeviceListRequest::SetGroupIdSet(const vector<int64_t>& _groupIdSet)
{
    m_groupIdSet = _groupIdSet;
    m_groupIdSetHasBeenSet = true;
}

bool DescribeDeviceListRequest::GroupIdSetHasBeenSet() const
{
    return m_groupIdSetHasBeenSet;
}

string DescribeDeviceListRequest::GetIsActive() const
{
    return m_isActive;
}

void DescribeDeviceListRequest::SetIsActive(const string& _isActive)
{
    m_isActive = _isActive;
    m_isActiveHasBeenSet = true;
}

bool DescribeDeviceListRequest::IsActiveHasBeenSet() const
{
    return m_isActiveHasBeenSet;
}

string DescribeDeviceListRequest::GetIsCamera() const
{
    return m_isCamera;
}

void DescribeDeviceListRequest::SetIsCamera(const string& _isCamera)
{
    m_isCamera = _isCamera;
    m_isCameraHasBeenSet = true;
}

bool DescribeDeviceListRequest::IsCameraHasBeenSet() const
{
    return m_isCameraHasBeenSet;
}


