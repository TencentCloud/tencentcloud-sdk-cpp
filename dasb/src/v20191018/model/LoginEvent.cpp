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

#include <tencentcloud/dasb/v20191018/model/LoginEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

LoginEvent::LoginEvent() :
    m_userNameHasBeenSet(false),
    m_realNameHasBeenSet(false),
    m_timeHasBeenSet(false),
    m_sourceIpHasBeenSet(false),
    m_entryHasBeenSet(false),
    m_resultHasBeenSet(false)
{
}

CoreInternalOutcome LoginEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginEvent.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("RealName") && !value["RealName"].IsNull())
    {
        if (!value["RealName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginEvent.RealName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realName = string(value["RealName"].GetString());
        m_realNameHasBeenSet = true;
    }

    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginEvent.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("SourceIp") && !value["SourceIp"].IsNull())
    {
        if (!value["SourceIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LoginEvent.SourceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceIp = string(value["SourceIp"].GetString());
        m_sourceIpHasBeenSet = true;
    }

    if (value.HasMember("Entry") && !value["Entry"].IsNull())
    {
        if (!value["Entry"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginEvent.Entry` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_entry = value["Entry"].GetUint64();
        m_entryHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoginEvent.Result` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_result = value["Result"].GetUint64();
        m_resultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoginEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_realNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realName.c_str(), allocator).Move(), allocator);
    }

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_entryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Entry";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_entry, allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

}


string LoginEvent::GetUserName() const
{
    return m_userName;
}

void LoginEvent::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool LoginEvent::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string LoginEvent::GetRealName() const
{
    return m_realName;
}

void LoginEvent::SetRealName(const string& _realName)
{
    m_realName = _realName;
    m_realNameHasBeenSet = true;
}

bool LoginEvent::RealNameHasBeenSet() const
{
    return m_realNameHasBeenSet;
}

string LoginEvent::GetTime() const
{
    return m_time;
}

void LoginEvent::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool LoginEvent::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

string LoginEvent::GetSourceIp() const
{
    return m_sourceIp;
}

void LoginEvent::SetSourceIp(const string& _sourceIp)
{
    m_sourceIp = _sourceIp;
    m_sourceIpHasBeenSet = true;
}

bool LoginEvent::SourceIpHasBeenSet() const
{
    return m_sourceIpHasBeenSet;
}

uint64_t LoginEvent::GetEntry() const
{
    return m_entry;
}

void LoginEvent::SetEntry(const uint64_t& _entry)
{
    m_entry = _entry;
    m_entryHasBeenSet = true;
}

bool LoginEvent::EntryHasBeenSet() const
{
    return m_entryHasBeenSet;
}

uint64_t LoginEvent::GetResult() const
{
    return m_result;
}

void LoginEvent::SetResult(const uint64_t& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool LoginEvent::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

