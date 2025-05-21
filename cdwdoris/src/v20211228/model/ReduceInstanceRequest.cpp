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

#include <tencentcloud/cdwdoris/v20211228/model/ReduceInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

ReduceInstanceRequest::ReduceInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_delHostsHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_haTypeHasBeenSet(false),
    m_checkAuthHasBeenSet(false)
{
}

string ReduceInstanceRequest::ToJsonString() const
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

    if (m_delHostsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DelHosts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_delHosts.begin(); itr != m_delHosts.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
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


string ReduceInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ReduceInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ReduceInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

vector<string> ReduceInstanceRequest::GetDelHosts() const
{
    return m_delHosts;
}

void ReduceInstanceRequest::SetDelHosts(const vector<string>& _delHosts)
{
    m_delHosts = _delHosts;
    m_delHostsHasBeenSet = true;
}

bool ReduceInstanceRequest::DelHostsHasBeenSet() const
{
    return m_delHostsHasBeenSet;
}

string ReduceInstanceRequest::GetType() const
{
    return m_type;
}

void ReduceInstanceRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ReduceInstanceRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t ReduceInstanceRequest::GetHaType() const
{
    return m_haType;
}

void ReduceInstanceRequest::SetHaType(const int64_t& _haType)
{
    m_haType = _haType;
    m_haTypeHasBeenSet = true;
}

bool ReduceInstanceRequest::HaTypeHasBeenSet() const
{
    return m_haTypeHasBeenSet;
}

bool ReduceInstanceRequest::GetCheckAuth() const
{
    return m_checkAuth;
}

void ReduceInstanceRequest::SetCheckAuth(const bool& _checkAuth)
{
    m_checkAuth = _checkAuth;
    m_checkAuthHasBeenSet = true;
}

bool ReduceInstanceRequest::CheckAuthHasBeenSet() const
{
    return m_checkAuthHasBeenSet;
}


