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

#include <tencentcloud/ms/v20180408/model/CreateEncryptInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

CreateEncryptInstanceRequest::CreateEncryptInstanceRequest() :
    m_platformTypeHasBeenSet(false),
    m_orderTypeHasBeenSet(false),
    m_encryptOpTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_androidAppInfoHasBeenSet(false),
    m_androidPlanHasBeenSet(false),
    m_appletInfoHasBeenSet(false),
    m_iOSInfoHasBeenSet(false)
{
}

string CreateEncryptInstanceRequest::ToJsonString() const
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

    if (m_androidAppInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidAppInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_androidAppInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_androidPlanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AndroidPlan";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_androidPlan.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_appletInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppletInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_appletInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_iOSInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IOSInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_iOSInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateEncryptInstanceRequest::GetPlatformType() const
{
    return m_platformType;
}

void CreateEncryptInstanceRequest::SetPlatformType(const int64_t& _platformType)
{
    m_platformType = _platformType;
    m_platformTypeHasBeenSet = true;
}

bool CreateEncryptInstanceRequest::PlatformTypeHasBeenSet() const
{
    return m_platformTypeHasBeenSet;
}

int64_t CreateEncryptInstanceRequest::GetOrderType() const
{
    return m_orderType;
}

void CreateEncryptInstanceRequest::SetOrderType(const int64_t& _orderType)
{
    m_orderType = _orderType;
    m_orderTypeHasBeenSet = true;
}

bool CreateEncryptInstanceRequest::OrderTypeHasBeenSet() const
{
    return m_orderTypeHasBeenSet;
}

int64_t CreateEncryptInstanceRequest::GetEncryptOpType() const
{
    return m_encryptOpType;
}

void CreateEncryptInstanceRequest::SetEncryptOpType(const int64_t& _encryptOpType)
{
    m_encryptOpType = _encryptOpType;
    m_encryptOpTypeHasBeenSet = true;
}

bool CreateEncryptInstanceRequest::EncryptOpTypeHasBeenSet() const
{
    return m_encryptOpTypeHasBeenSet;
}

string CreateEncryptInstanceRequest::GetResourceId() const
{
    return m_resourceId;
}

void CreateEncryptInstanceRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool CreateEncryptInstanceRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

AndroidAppInfo CreateEncryptInstanceRequest::GetAndroidAppInfo() const
{
    return m_androidAppInfo;
}

void CreateEncryptInstanceRequest::SetAndroidAppInfo(const AndroidAppInfo& _androidAppInfo)
{
    m_androidAppInfo = _androidAppInfo;
    m_androidAppInfoHasBeenSet = true;
}

bool CreateEncryptInstanceRequest::AndroidAppInfoHasBeenSet() const
{
    return m_androidAppInfoHasBeenSet;
}

AndroidPlan CreateEncryptInstanceRequest::GetAndroidPlan() const
{
    return m_androidPlan;
}

void CreateEncryptInstanceRequest::SetAndroidPlan(const AndroidPlan& _androidPlan)
{
    m_androidPlan = _androidPlan;
    m_androidPlanHasBeenSet = true;
}

bool CreateEncryptInstanceRequest::AndroidPlanHasBeenSet() const
{
    return m_androidPlanHasBeenSet;
}

AppletInfo CreateEncryptInstanceRequest::GetAppletInfo() const
{
    return m_appletInfo;
}

void CreateEncryptInstanceRequest::SetAppletInfo(const AppletInfo& _appletInfo)
{
    m_appletInfo = _appletInfo;
    m_appletInfoHasBeenSet = true;
}

bool CreateEncryptInstanceRequest::AppletInfoHasBeenSet() const
{
    return m_appletInfoHasBeenSet;
}

IOSInfo CreateEncryptInstanceRequest::GetIOSInfo() const
{
    return m_iOSInfo;
}

void CreateEncryptInstanceRequest::SetIOSInfo(const IOSInfo& _iOSInfo)
{
    m_iOSInfo = _iOSInfo;
    m_iOSInfoHasBeenSet = true;
}

bool CreateEncryptInstanceRequest::IOSInfoHasBeenSet() const
{
    return m_iOSInfoHasBeenSet;
}


