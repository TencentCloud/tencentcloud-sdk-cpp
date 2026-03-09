/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/dbbrain/v20210527/model/CreateMongoDBKillTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

CreateMongoDBKillTaskRequest::CreateMongoDBKillTaskRequest() :
    m_instanceIdHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_productHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_dBHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_timeHasBeenSet(false)
{
}

string CreateMongoDBKillTaskRequest::ToJsonString() const
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

    if (m_durationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Duration";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_duration, allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_hostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Host";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_host.c_str(), allocator).Move(), allocator);
    }

    if (m_dBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DB";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_dB.begin(); itr != m_dB.end(); ++itr)
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

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_time, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMongoDBKillTaskRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateMongoDBKillTaskRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateMongoDBKillTaskRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t CreateMongoDBKillTaskRequest::GetDuration() const
{
    return m_duration;
}

void CreateMongoDBKillTaskRequest::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool CreateMongoDBKillTaskRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string CreateMongoDBKillTaskRequest::GetProduct() const
{
    return m_product;
}

void CreateMongoDBKillTaskRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool CreateMongoDBKillTaskRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string CreateMongoDBKillTaskRequest::GetHost() const
{
    return m_host;
}

void CreateMongoDBKillTaskRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool CreateMongoDBKillTaskRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

vector<string> CreateMongoDBKillTaskRequest::GetDB() const
{
    return m_dB;
}

void CreateMongoDBKillTaskRequest::SetDB(const vector<string>& _dB)
{
    m_dB = _dB;
    m_dBHasBeenSet = true;
}

bool CreateMongoDBKillTaskRequest::DBHasBeenSet() const
{
    return m_dBHasBeenSet;
}

string CreateMongoDBKillTaskRequest::GetType() const
{
    return m_type;
}

void CreateMongoDBKillTaskRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateMongoDBKillTaskRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t CreateMongoDBKillTaskRequest::GetTime() const
{
    return m_time;
}

void CreateMongoDBKillTaskRequest::SetTime(const int64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool CreateMongoDBKillTaskRequest::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}


