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

#include <tencentcloud/cdwdoris/v20211228/model/ScaleOutInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

ScaleOutInstanceRequest::ScaleOutInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_nodeCountHasBeenSet(false),
    m_haTypeHasBeenSet(false),
    m_checkAuthHasBeenSet(false)
{
}

string ScaleOutInstanceRequest::ToJsonString() const
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

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_nodeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NodeCount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_nodeCount, allocator);
    }

    if (m_haTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HaType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_haType, allocator);
    }

    if (m_checkAuthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckAuth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkAuth, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ScaleOutInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ScaleOutInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ScaleOutInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ScaleOutInstanceRequest::GetType() const
{
    return m_type;
}

void ScaleOutInstanceRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ScaleOutInstanceRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t ScaleOutInstanceRequest::GetNodeCount() const
{
    return m_nodeCount;
}

void ScaleOutInstanceRequest::SetNodeCount(const uint64_t& _nodeCount)
{
    m_nodeCount = _nodeCount;
    m_nodeCountHasBeenSet = true;
}

bool ScaleOutInstanceRequest::NodeCountHasBeenSet() const
{
    return m_nodeCountHasBeenSet;
}

int64_t ScaleOutInstanceRequest::GetHaType() const
{
    return m_haType;
}

void ScaleOutInstanceRequest::SetHaType(const int64_t& _haType)
{
    m_haType = _haType;
    m_haTypeHasBeenSet = true;
}

bool ScaleOutInstanceRequest::HaTypeHasBeenSet() const
{
    return m_haTypeHasBeenSet;
}

bool ScaleOutInstanceRequest::GetCheckAuth() const
{
    return m_checkAuth;
}

void ScaleOutInstanceRequest::SetCheckAuth(const bool& _checkAuth)
{
    m_checkAuth = _checkAuth;
    m_checkAuthHasBeenSet = true;
}

bool ScaleOutInstanceRequest::CheckAuthHasBeenSet() const
{
    return m_checkAuthHasBeenSet;
}


