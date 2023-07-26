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

#include <tencentcloud/ms/v20180408/model/CreateOrderInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

CreateOrderInstanceRequest::CreateOrderInstanceRequest() :
    m_platformTypeHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_appPkgNameListHasBeenSet(false)
{
}

string CreateOrderInstanceRequest::ToJsonString() const
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

    if (m_appPkgNameListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppPkgNameList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appPkgNameList.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateOrderInstanceRequest::GetPlatformType() const
{
    return m_platformType;
}

void CreateOrderInstanceRequest::SetPlatformType(const int64_t& _platformType)
{
    m_platformType = _platformType;
    m_platformTypeHasBeenSet = true;
}

bool CreateOrderInstanceRequest::PlatformTypeHasBeenSet() const
{
    return m_platformTypeHasBeenSet;
}

int64_t CreateOrderInstanceRequest::GetOrderType() const
{
    return m_orderType;
}

void CreateOrderInstanceRequest::SetOrderType(const int64_t& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool CreateOrderInstanceRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

string CreateOrderInstanceRequest::GetAppPkgNameList() const
{
    return m_appPkgNameList;
}

void CreateOrderInstanceRequest::SetAppPkgNameList(const string& _appPkgNameList)
{
    m_appPkgNameList = _appPkgNameList;
    m_appPkgNameListHasBeenSet = true;
}

bool CreateOrderInstanceRequest::AppPkgNameListHasBeenSet() const
{
    return m_appPkgNameListHasBeenSet;
}


