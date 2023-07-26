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

#include <tencentcloud/ms/v20180408/model/DescribeEncryptPlanRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

DescribeEncryptPlanRequest::DescribeEncryptPlanRequest() :
    m_platformTypeHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_encryptOpTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_appPkgNameHasBeenSet(false),
    m_appTypeHasBeenSet(false)
{
}

string DescribeEncryptPlanRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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

    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_appPkgNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppPkgName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appPkgName.c_str(), allocator).Move(), allocator);
    }

    if (m_appTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t DescribeEncryptPlanRequest::GetPlatformType() const
{
    return m_platformType;
}

void DescribeEncryptPlanRequest::SetPlatformType(const int64_t& _platformType)
{
    m_platformType = _platformType;
    m_platformTypeHasBeenSet = true;
}

bool DescribeEncryptPlanRequest::PlatformTypeHasBeenSet() const
{
    return m_platformTypeHasBeenSet;
}

int64_t DescribeEncryptPlanRequest::GetOrderType() const
{
    return m_orderType;
}

void DescribeEncryptPlanRequest::SetOrderType(const int64_t& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool DescribeEncryptPlanRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

int64_t DescribeEncryptPlanRequest::GetEncryptOpType() const
{
    return m_encryptOpType;
}

void DescribeEncryptPlanRequest::SetEncryptOpType(const int64_t& _encryptOpType)
{
    m_encryptOpType = _encryptOpType;
    m_encryptOpTypeHasBeenSet = true;
}

bool DescribeEncryptPlanRequest::EncryptOpTypeHasBeenSet() const
{
    return m_encryptOpTypeHasBeenSet;
}

string DescribeEncryptPlanRequest::GetResourceId() const
{
    return m_resourceId;
}

void DescribeEncryptPlanRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool DescribeEncryptPlanRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string DescribeEncryptPlanRequest::GetAppPkgName() const
{
    return m_appPkgName;
}

void DescribeEncryptPlanRequest::SetAppPkgName(const string& _appPkgName)
{
    m_appPkgName = _appPkgName;
    m_appPkgNameHasBeenSet = true;
}

bool DescribeEncryptPlanRequest::AppPkgNameHasBeenSet() const
{
    return m_appPkgNameHasBeenSet;
}

string DescribeEncryptPlanRequest::GetAppType() const
{
    return m_appType;
}

void DescribeEncryptPlanRequest::SetAppType(const string& _appType)
{
    m_appType = _appType;
    m_appTypeHasBeenSet = true;
}

bool DescribeEncryptPlanRequest::AppTypeHasBeenSet() const
{
    return m_appTypeHasBeenSet;
}


