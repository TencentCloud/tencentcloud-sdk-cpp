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

#include <tencentcloud/bh/v20230418/model/CreateOperationTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

CreateOperationTaskRequest::CreateOperationTaskRequest() :
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

string CreateOperationTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


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


string CreateOperationTaskRequest::GetName() const
{
    return m_name;
}

void CreateOperationTaskRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateOperationTaskRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t CreateOperationTaskRequest::GetType() const
{
    return m_type;
}

void CreateOperationTaskRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateOperationTaskRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateOperationTaskRequest::GetAccount() const
{
    return m_account;
}

void CreateOperationTaskRequest::SetAccount(const string& _account)
{
    m_account = _account;
    m_accountHasBeenSet = true;
}

bool CreateOperationTaskRequest::AccountHasBeenSet() const
{
    return m_accountHasBeenSet;
}

uint64_t CreateOperationTaskRequest::GetTimeout() const
{
    return m_timeout;
}

void CreateOperationTaskRequest::SetTimeout(const uint64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool CreateOperationTaskRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

string CreateOperationTaskRequest::GetScript() const
{
    return m_script;
}

void CreateOperationTaskRequest::SetScript(const string& _script)
{
    m_script = _script;
    m_scriptHasBeenSet = true;
}

bool CreateOperationTaskRequest::ScriptHasBeenSet() const
{
    return m_scriptHasBeenSet;
}

vector<uint64_t> CreateOperationTaskRequest::GetDeviceIdSet() const
{
    return m_deviceIdSet;
}

void CreateOperationTaskRequest::SetDeviceIdSet(const vector<uint64_t>& _deviceIdSet)
{
    m_deviceIdSet = _deviceIdSet;
    m_deviceIdSetHasBeenSet = true;
}

bool CreateOperationTaskRequest::DeviceIdSetHasBeenSet() const
{
    return m_deviceIdSetHasBeenSet;
}

uint64_t CreateOperationTaskRequest::GetPeriod() const
{
    return m_period;
}

void CreateOperationTaskRequest::SetPeriod(const uint64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool CreateOperationTaskRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string CreateOperationTaskRequest::GetFirstTime() const
{
    return m_firstTime;
}

void CreateOperationTaskRequest::SetFirstTime(const string& _firstTime)
{
    m_firstTime = _firstTime;
    m_firstTimeHasBeenSet = true;
}

bool CreateOperationTaskRequest::FirstTimeHasBeenSet() const
{
    return m_firstTimeHasBeenSet;
}

uint64_t CreateOperationTaskRequest::GetEncoding() const
{
    return m_encoding;
}

void CreateOperationTaskRequest::SetEncoding(const uint64_t& _encoding)
{
    m_encoding = _encoding;
    m_encodingHasBeenSet = true;
}

bool CreateOperationTaskRequest::EncodingHasBeenSet() const
{
    return m_encodingHasBeenSet;
}


