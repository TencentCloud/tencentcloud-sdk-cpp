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

#include <tencentcloud/cdwdoris/v20211228/model/ScaleUpInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

ScaleUpInstanceRequest::ScaleUpInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_specNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_checkAuthHasBeenSet(false),
    m_rollingRestartHasBeenSet(false)
{
}

string ScaleUpInstanceRequest::ToJsonString() const
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

    if (m_specNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_specName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_checkAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckAuth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkAuth, allocator);
    }

    if (m_rollingRestartHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RollingRestart";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_rollingRestart, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ScaleUpInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ScaleUpInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ScaleUpInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ScaleUpInstanceRequest::GetSpecName() const
{
    return m_specName;
}

void ScaleUpInstanceRequest::SetSpecName(const string& _specName)
{
    m_specName = _specName;
    m_specNameHasBeenSet = true;
}

bool ScaleUpInstanceRequest::SpecNameHasBeenSet() const
{
    return m_specNameHasBeenSet;
}

string ScaleUpInstanceRequest::GetType() const
{
    return m_type;
}

void ScaleUpInstanceRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ScaleUpInstanceRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool ScaleUpInstanceRequest::GetCheckAuth() const
{
    return m_checkAuth;
}

void ScaleUpInstanceRequest::SetCheckAuth(const bool& _checkAuth)
{
    m_checkAuth = _checkAuth;
    m_checkAuthHasBeenSet = true;
}

bool ScaleUpInstanceRequest::CheckAuthHasBeenSet() const
{
    return m_checkAuthHasBeenSet;
}

bool ScaleUpInstanceRequest::GetRollingRestart() const
{
    return m_rollingRestart;
}

void ScaleUpInstanceRequest::SetRollingRestart(const bool& _rollingRestart)
{
    m_rollingRestart = _rollingRestart;
    m_rollingRestartHasBeenSet = true;
}

bool ScaleUpInstanceRequest::RollingRestartHasBeenSet() const
{
    return m_rollingRestartHasBeenSet;
}


