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

#include <tencentcloud/dbbrain/v20210527/model/CreateKillTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

CreateKillTaskRequest::CreateKillTaskRequest() :
    m_instanceIdHasBeenSet(false),
    m_durationHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_dBHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_infoHasBeenSet(false),
    m_infosHasBeenSet(false),
    m_userHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_productHasBeenSet(false)
{
}

string CreateKillTaskRequest::ToJsonString() const
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
        d.AddMember(iKey, rapidjson::Value(m_dB.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_infoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Info";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_info.c_str(), allocator).Move(), allocator);
    }

    if (m_infosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Infos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_infos.begin(); itr != m_infos.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_time, allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateKillTaskRequest::GetInstanceId() const
{
    return m_instanceId;
}

void CreateKillTaskRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CreateKillTaskRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t CreateKillTaskRequest::GetDuration() const
{
    return m_duration;
}

void CreateKillTaskRequest::SetDuration(const int64_t& _duration)
{
    m_duration = _duration;
    m_durationHasBeenSet = true;
}

bool CreateKillTaskRequest::DurationHasBeenSet() const
{
    return m_durationHasBeenSet;
}

string CreateKillTaskRequest::GetHost() const
{
    return m_host;
}

void CreateKillTaskRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool CreateKillTaskRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string CreateKillTaskRequest::GetDB() const
{
    return m_dB;
}

void CreateKillTaskRequest::SetDB(const string& _dB)
{
    m_dB = _dB;
    m_dBHasBeenSet = true;
}

bool CreateKillTaskRequest::DBHasBeenSet() const
{
    return m_dBHasBeenSet;
}

string CreateKillTaskRequest::GetCommand() const
{
    return m_command;
}

void CreateKillTaskRequest::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool CreateKillTaskRequest::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

string CreateKillTaskRequest::GetInfo() const
{
    return m_info;
}

void CreateKillTaskRequest::SetInfo(const string& _info)
{
    m_info = _info;
    m_infoHasBeenSet = true;
}

bool CreateKillTaskRequest::InfoHasBeenSet() const
{
    return m_infoHasBeenSet;
}

vector<string> CreateKillTaskRequest::GetInfos() const
{
    return m_infos;
}

void CreateKillTaskRequest::SetInfos(const vector<string>& _infos)
{
    m_infos = _infos;
    m_infosHasBeenSet = true;
}

bool CreateKillTaskRequest::InfosHasBeenSet() const
{
    return m_infosHasBeenSet;
}

string CreateKillTaskRequest::GetUser() const
{
    return m_user;
}

void CreateKillTaskRequest::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool CreateKillTaskRequest::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

int64_t CreateKillTaskRequest::GetTime() const
{
    return m_time;
}

void CreateKillTaskRequest::SetTime(const int64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool CreateKillTaskRequest::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string CreateKillTaskRequest::GetProduct() const
{
    return m_product;
}

void CreateKillTaskRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool CreateKillTaskRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}


