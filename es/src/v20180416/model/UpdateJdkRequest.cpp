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

#include <tencentcloud/es/v20180416/model/UpdateJdkRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

UpdateJdkRequest::UpdateJdkRequest() :
    m_instanceIdHasBeenSet(false),
    m_jdkHasBeenSet(false),
    m_gcHasBeenSet(false),
    m_forceRestartHasBeenSet(false)
{
}

string UpdateJdkRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_jdkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Jdk";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jdk.c_str(), allocator).Move(), allocator);
    }

    if (m_gcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Gc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gc.c_str(), allocator).Move(), allocator);
    }

    if (m_forceRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForceRestart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_forceRestart, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateJdkRequest::GetInstanceId() const
{
    return m_instanceId;
}

void UpdateJdkRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UpdateJdkRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UpdateJdkRequest::GetJdk() const
{
    return m_jdk;
}

void UpdateJdkRequest::SetJdk(const string& _jdk)
{
    m_jdk = _jdk;
    m_jdkHasBeenSet = true;
}

bool UpdateJdkRequest::JdkHasBeenSet() const
{
    return m_jdkHasBeenSet;
}

string UpdateJdkRequest::GetGc() const
{
    return m_gc;
}

void UpdateJdkRequest::SetGc(const string& _gc)
{
    m_gc = _gc;
    m_gcHasBeenSet = true;
}

bool UpdateJdkRequest::GcHasBeenSet() const
{
    return m_gcHasBeenSet;
}

bool UpdateJdkRequest::GetForceRestart() const
{
    return m_forceRestart;
}

void UpdateJdkRequest::SetForceRestart(const bool& _forceRestart)
{
    m_forceRestart = _forceRestart;
    m_forceRestartHasBeenSet = true;
}

bool UpdateJdkRequest::ForceRestartHasBeenSet() const
{
    return m_forceRestartHasBeenSet;
}


