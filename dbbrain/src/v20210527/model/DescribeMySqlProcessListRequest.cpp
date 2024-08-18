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

#include <tencentcloud/dbbrain/v20210527/model/DescribeMySqlProcessListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dbbrain::V20210527::Model;
using namespace std;

DescribeMySqlProcessListRequest::DescribeMySqlProcessListRequest() :
    m_instanceIdHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_userHasBeenSet(false),
    m_hostHasBeenSet(false),
    m_dBHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_commandHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_infoHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_productHasBeenSet(false),
    m_statDimensionsHasBeenSet(false)
{
}

string DescribeMySqlProcessListRequest::ToJsonString() const
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

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iD, allocator);
    }

    if (m_userHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "User";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_user.c_str(), allocator).Move(), allocator);
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

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_commandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Command";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_command.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_time, allocator);
    }

    if (m_infoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Info";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_info.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_statDimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatDimensions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_statDimensions.begin(); itr != m_statDimensions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeMySqlProcessListRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeMySqlProcessListRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeMySqlProcessListRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

uint64_t DescribeMySqlProcessListRequest::GetID() const
{
    return m_iD;
}

void DescribeMySqlProcessListRequest::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DescribeMySqlProcessListRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string DescribeMySqlProcessListRequest::GetUser() const
{
    return m_user;
}

void DescribeMySqlProcessListRequest::SetUser(const string& _user)
{
    m_user = _user;
    m_userHasBeenSet = true;
}

bool DescribeMySqlProcessListRequest::UserHasBeenSet() const
{
    return m_userHasBeenSet;
}

string DescribeMySqlProcessListRequest::GetHost() const
{
    return m_host;
}

void DescribeMySqlProcessListRequest::SetHost(const string& _host)
{
    m_host = _host;
    m_hostHasBeenSet = true;
}

bool DescribeMySqlProcessListRequest::HostHasBeenSet() const
{
    return m_hostHasBeenSet;
}

string DescribeMySqlProcessListRequest::GetDB() const
{
    return m_dB;
}

void DescribeMySqlProcessListRequest::SetDB(const string& _dB)
{
    m_dB = _dB;
    m_dBHasBeenSet = true;
}

bool DescribeMySqlProcessListRequest::DBHasBeenSet() const
{
    return m_dBHasBeenSet;
}

string DescribeMySqlProcessListRequest::GetState() const
{
    return m_state;
}

void DescribeMySqlProcessListRequest::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DescribeMySqlProcessListRequest::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string DescribeMySqlProcessListRequest::GetCommand() const
{
    return m_command;
}

void DescribeMySqlProcessListRequest::SetCommand(const string& _command)
{
    m_command = _command;
    m_commandHasBeenSet = true;
}

bool DescribeMySqlProcessListRequest::CommandHasBeenSet() const
{
    return m_commandHasBeenSet;
}

uint64_t DescribeMySqlProcessListRequest::GetTime() const
{
    return m_time;
}

void DescribeMySqlProcessListRequest::SetTime(const uint64_t& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool DescribeMySqlProcessListRequest::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string DescribeMySqlProcessListRequest::GetInfo() const
{
    return m_info;
}

void DescribeMySqlProcessListRequest::SetInfo(const string& _info)
{
    m_info = _info;
    m_infoHasBeenSet = true;
}

bool DescribeMySqlProcessListRequest::InfoHasBeenSet() const
{
    return m_infoHasBeenSet;
}

uint64_t DescribeMySqlProcessListRequest::GetLimit() const
{
    return m_limit;
}

void DescribeMySqlProcessListRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeMySqlProcessListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeMySqlProcessListRequest::GetProduct() const
{
    return m_product;
}

void DescribeMySqlProcessListRequest::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool DescribeMySqlProcessListRequest::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

vector<StatDimension> DescribeMySqlProcessListRequest::GetStatDimensions() const
{
    return m_statDimensions;
}

void DescribeMySqlProcessListRequest::SetStatDimensions(const vector<StatDimension>& _statDimensions)
{
    m_statDimensions = _statDimensions;
    m_statDimensionsHasBeenSet = true;
}

bool DescribeMySqlProcessListRequest::StatDimensionsHasBeenSet() const
{
    return m_statDimensionsHasBeenSet;
}


