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

#include <tencentcloud/bh/v20230418/model/ModifyOperationTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

ModifyOperationTaskRequest::ModifyOperationTaskRequest() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_accountHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_scriptHasBeenSet(false),
    m_deviceIdSetHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_firstTimeHasBeenSet(false),
    m_encodingHasBeenSet(false)
{
}

string ModifyOperationTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_id, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_accountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Account";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_account.c_str(), allocator).Move(), allocator);
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
    }

    if (m_scriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Script";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_script.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_deviceIdSet.begin(); itr != m_deviceIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_firstTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_firstTime.c_str(), allocator).Move(), allocator);
    }

    if (m_encodingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encoding";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_encoding, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t ModifyOperationTaskRequest::GetId() const
{
    return m_id;
}

void ModifyOperationTaskRequest::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ModifyOperationTaskRequest::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ModifyOperationTaskRequest::GetName() const
{
    return m_name;
}

void ModifyOperationTaskRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyOperationTaskRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t ModifyOperationTaskRequest::GetType() const
{
    return m_type;
}

void ModifyOperationTaskRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ModifyOperationTaskRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ModifyOperationTaskRequest::GetAccount() const
{
    return m_account;
}

void ModifyOperationTaskRequest::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool ModifyOperationTaskRequest::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

uint64_t ModifyOperationTaskRequest::GetTimeout() const
{
    return m_timeout;
}

void ModifyOperationTaskRequest::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool ModifyOperationTaskRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string ModifyOperationTaskRequest::GetScript() const
{
    return m_script;
}

void ModifyOperationTaskRequest::SetScript(const string& _script)
{
    m_script = _script;
    m_scriptHasBeenSet = true;
}

bool ModifyOperationTaskRequest::ScriptHasBeenSet() const
{
    return m_scriptHasBeenSet;
}

vector<uint64_t> ModifyOperationTaskRequest::GetDeviceIdSet() const
{
    return m_deviceIdSet;
}

void ModifyOperationTaskRequest::SetDeviceIdSet(const vector<uint64_t>& _deviceIdSet)
{
    m_deviceIdSet = _deviceIdSet;
    m_deviceIdSetHasBeenSet = true;
}

bool ModifyOperationTaskRequest::DeviceIdSetHasBeenSet() const
{
    return m_deviceIdSetHasBeenSet;
}

uint64_t ModifyOperationTaskRequest::GetPeriod() const
{
    return m_period;
}

void ModifyOperationTaskRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool ModifyOperationTaskRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string ModifyOperationTaskRequest::GetFirstTime() const
{
    return m_firstTime;
}

void ModifyOperationTaskRequest::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool ModifyOperationTaskRequest::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

uint64_t ModifyOperationTaskRequest::GetEncoding() const
{
    return m_encoding;
}

void ModifyOperationTaskRequest::SetEncoding(const uint64_t& _encoding)
{
    m_encoding = _encoding;
    m_encodingHasBeenSet = true;
}

bool ModifyOperationTaskRequest::EncodingHasBeenSet() const
{
    return m_encodingHasBeenSet;
}


