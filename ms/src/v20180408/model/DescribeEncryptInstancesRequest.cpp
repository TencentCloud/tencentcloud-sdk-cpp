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

#include <tencentcloud/ms/v20180408/model/DescribeEncryptInstancesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

DescribeEncryptInstancesRequest::DescribeEncryptInstancesRequest() :
    m_pageNumberHasBeenSet(false),
    m_pageSizeHasBeenSet(false),
    m_orderFieldHasBeenSet(false),
    m_orderDirectionHasBeenSet(false),
    m_platformTypeHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_encryptOpTypeHasBeenSet(false),
    m_resultIdHasBeenSet(false),
    m_orderIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_appTypeHasBeenSet(false),
    m_appPkgNameHasBeenSet(false),
    m_encryptStateHasBeenSet(false)
{
}

string DescribeEncryptInstancesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_orderFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderField";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderField.c_str(), allocator).Move(), allocator);
    }

    if (m_orderDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderDirection";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderDirection.c_str(), allocator).Move(), allocator);
    }

    if (m_platformTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlatformType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_platformType, allocator);
    }

    if (m_orderTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orderType, allocator);
    }

    if (m_encryptOpTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptOpType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_encryptOpType, allocator);
    }

    if (m_resultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resultId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_orderId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_appTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appType.c_str(), allocator).Move(), allocator);
    }

    if (m_appPkgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppPkgName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appPkgName.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptState";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_encryptState.begin(); itr != m_encryptState.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeEncryptInstancesRequest::GetPageNumber() const
{
    return m_pageNumber;
}

void DescribeEncryptInstancesRequest::SetPageNumber(const int64_t& _pageNumber)
{
    m_pageNumber = _pageNumber;
    m_pageNumberHasBeenSet = true;
}

bool DescribeEncryptInstancesRequest::PageNumberHasBeenSet() const
{
    return m_pageNumberHasBeenSet;
}

int64_t DescribeEncryptInstancesRequest::GetPageSize() const
{
    return m_pageSize;
}

void DescribeEncryptInstancesRequest::SetPageSize(const int64_t& _pageSize)
{
    m_pageSize = _pageSize;
    m_pageSizeHasBeenSet = true;
}

bool DescribeEncryptInstancesRequest::PageSizeHasBeenSet() const
{
    return m_pageSizeHasBeenSet;
}

string DescribeEncryptInstancesRequest::GetOrderField() const
{
    return m_orderField;
}

void DescribeEncryptInstancesRequest::SetOrderField(const string& _orderField)
{
    m_orderField = _orderField;
    m_orderFieldHasBeenSet = true;
}

bool DescribeEncryptInstancesRequest::OrderFieldHasBeenSet() const
{
    return m_orderFieldHasBeenSet;
}

string DescribeEncryptInstancesRequest::GetOrderDirection() const
{
    return m_orderDirection;
}

void DescribeEncryptInstancesRequest::SetOrderDirection(const string& _orderDirection)
{
    m_orderDirection = _orderDirection;
    m_orderDirectionHasBeenSet = true;
}

bool DescribeEncryptInstancesRequest::OrderDirectionHasBeenSet() const
{
    return m_orderDirectionHasBeenSet;
}

int64_t DescribeEncryptInstancesRequest::GetPlatformType() const
{
    return m_platformType;
}

void DescribeEncryptInstancesRequest::SetPlatformType(const int64_t& _platformType)
{
    m_platformType = _platformType;
    m_platformTypeHasBeenSet = true;
}

bool DescribeEncryptInstancesRequest::PlatformTypeHasBeenSet() const
{
    return m_platformTypeHasBeenSet;
}

int64_t DescribeEncryptInstancesRequest::GetOrderType() const
{
    return m_orderType;
}

void DescribeEncryptInstancesRequest::SetOrderType(const int64_t& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool DescribeEncryptInstancesRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

int64_t DescribeEncryptInstancesRequest::GetEncryptOpType() const
{
    return m_encryptOpType;
}

void DescribeEncryptInstancesRequest::SetEncryptOpType(const int64_t& _encryptOpType)
{
    m_encryptOpType = _encryptOpType;
    m_encryptOpTypeHasBeenSet = true;
}

bool DescribeEncryptInstancesRequest::EncryptOpTypeHasBeenSet() const
{
    return m_encryptOpTypeHasBeenSet;
}

string DescribeEncryptInstancesRequest::GetResultId() const
{
    return m_resultId;
}

void DescribeEncryptInstancesRequest::SetResultId(const string& _resultId)
{
    m_resultId = _resultId;
    m_resultIdHasBeenSet = true;
}

bool DescribeEncryptInstancesRequest::ResultIdHasBeenSet() const
{
    return m_resultIdHasBeenSet;
}

string DescribeEncryptInstancesRequest::GetOrderId() const
{
    return m_orderId;
}

void DescribeEncryptInstancesRequest::SetOrderId(const string& _orderId)
{
    m_orderId = _orderId;
    m_orderIdHasBeenSet = true;
}

bool DescribeEncryptInstancesRequest::OrderIdHasBeenSet() const
{
    return m_orderIdHasBeenSet;
}

string DescribeEncryptInstancesRequest::GetResourceId() const
{
    return m_resourceId;
}

void DescribeEncryptInstancesRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DescribeEncryptInstancesRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DescribeEncryptInstancesRequest::GetAppType() const
{
    return m_appType;
}

void DescribeEncryptInstancesRequest::SetAppType(const string& _appType)
{
    m_appType = _appType;
    m_appTypeHasBeenSet = true;
}

bool DescribeEncryptInstancesRequest::AppTypeHasBeenSet() const
{
    return m_appTypeHasBeenSet;
}

string DescribeEncryptInstancesRequest::GetAppPkgName() const
{
    return m_appPkgName;
}

void DescribeEncryptInstancesRequest::SetAppPkgName(const string& _appPkgName)
{
    m_appPkgName = _appPkgName;
    m_appPkgNameHasBeenSet = true;
}

bool DescribeEncryptInstancesRequest::AppPkgNameHasBeenSet() const
{
    return m_appPkgNameHasBeenSet;
}

vector<int64_t> DescribeEncryptInstancesRequest::GetEncryptState() const
{
    return m_encryptState;
}

void DescribeEncryptInstancesRequest::SetEncryptState(const vector<int64_t>& _encryptState)
{
    m_encryptState = _encryptState;
    m_encryptStateHasBeenSet = true;
}

bool DescribeEncryptInstancesRequest::EncryptStateHasBeenSet() const
{
    return m_encryptStateHasBeenSet;
}


