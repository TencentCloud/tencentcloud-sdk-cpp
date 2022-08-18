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

#include <tencentcloud/monitor/v20180724/model/EnableGrafanaInternetRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

EnableGrafanaInternetRequest::EnableGrafanaInternetRequest() :
    m_instanceIDHasBeenSet(false),
    m_enableInternetHasBeenSet(false)
{
}

string EnableGrafanaInternetRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_enableInternetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableInternet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableInternet, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string EnableGrafanaInternetRequest::GetInstanceID() const
{
    return m_instanceID;
}

void EnableGrafanaInternetRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool EnableGrafanaInternetRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

bool EnableGrafanaInternetRequest::GetEnableInternet() const
{
    return m_enableInternet;
}

void EnableGrafanaInternetRequest::SetEnableInternet(const bool& _enableInternet)
{
    m_enableInternet = _enableInternet;
    m_enableInternetHasBeenSet = true;
}

bool EnableGrafanaInternetRequest::EnableInternetHasBeenSet() const
{
    return m_enableInternetHasBeenSet;
}


