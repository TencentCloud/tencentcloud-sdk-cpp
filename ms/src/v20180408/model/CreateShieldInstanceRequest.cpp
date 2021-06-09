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

#include <tencentcloud/ms/v20180408/model/CreateShieldInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

CreateShieldInstanceRequest::CreateShieldInstanceRequest() :
    m_appInfoHasBeenSet(false),
    m_serviceInfoHasBeenSet(false)
{
}

string CreateShieldInstanceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_appInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_serviceInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_serviceInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


AppInfo CreateShieldInstanceRequest::GetAppInfo() const
{
    return m_appInfo;
}

void CreateShieldInstanceRequest::SetAppInfo(const AppInfo& _appInfo)
{
    m_appInfo = _appInfo;
    m_appInfoHasBeenSet = true;
}

bool CreateShieldInstanceRequest::AppInfoHasBeenSet() const
{
    return m_appInfoHasBeenSet;
}

ServiceInfo CreateShieldInstanceRequest::GetServiceInfo() const
{
    return m_serviceInfo;
}

void CreateShieldInstanceRequest::SetServiceInfo(const ServiceInfo& _serviceInfo)
{
    m_serviceInfo = _serviceInfo;
    m_serviceInfoHasBeenSet = true;
}

bool CreateShieldInstanceRequest::ServiceInfoHasBeenSet() const
{
    return m_serviceInfoHasBeenSet;
}


