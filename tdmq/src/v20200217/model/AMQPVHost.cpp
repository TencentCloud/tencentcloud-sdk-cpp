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

#include <tencentcloud/tdmq/v20200217/model/AMQPVHost.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

AMQPVHost::AMQPVHost() :
    m_vHostIdHasBeenSet(false),
    m_msgTtlHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false)
{
}

CoreInternalOutcome AMQPVHost::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VHostId") && !value["VHostId"].IsNull())
    {
        if (!value["VHostId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPVHost.VHostId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vHostId = string(value["VHostId"].GetString());
        m_vHostIdHasBeenSet = true;
    }

    if (value.HasMember("MsgTtl") && !value["MsgTtl"].IsNull())
    {
        if (!value["MsgTtl"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPVHost.MsgTtl` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_msgTtl = value["MsgTtl"].GetUint64();
        m_msgTtlHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPVHost.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPVHost.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPVHost.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Username") && !value["Username"].IsNull())
    {
        if (!value["Username"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPVHost.Username` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_username = string(value["Username"].GetString());
        m_usernameHasBeenSet = true;
    }

    if (value.HasMember("Password") && !value["Password"].IsNull())
    {
        if (!value["Password"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AMQPVHost.Password` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_password = string(value["Password"].GetString());
        m_passwordHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AMQPVHost::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vHostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VHostId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vHostId.c_str(), allocator).Move(), allocator);
    }

    if (m_msgTtlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgTtl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgTtl, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_usernameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Username";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_username.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_password.c_str(), allocator).Move(), allocator);
    }

}


string AMQPVHost::GetVHostId() const
{
    return m_vHostId;
}

void AMQPVHost::SetVHostId(const string& _vHostId)
{
    m_vHostId = _vHostId;
    m_vHostIdHasBeenSet = true;
}

bool AMQPVHost::VHostIdHasBeenSet() const
{
    return m_vHostIdHasBeenSet;
}

uint64_t AMQPVHost::GetMsgTtl() const
{
    return m_msgTtl;
}

void AMQPVHost::SetMsgTtl(const uint64_t& _msgTtl)
{
    m_msgTtl = _msgTtl;
    m_msgTtlHasBeenSet = true;
}

bool AMQPVHost::MsgTtlHasBeenSet() const
{
    return m_msgTtlHasBeenSet;
}

string AMQPVHost::GetRemark() const
{
    return m_remark;
}

void AMQPVHost::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool AMQPVHost::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

uint64_t AMQPVHost::GetCreateTime() const
{
    return m_createTime;
}

void AMQPVHost::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AMQPVHost::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t AMQPVHost::GetUpdateTime() const
{
    return m_updateTime;
}

void AMQPVHost::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool AMQPVHost::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string AMQPVHost::GetUsername() const
{
    return m_username;
}

void AMQPVHost::SetUsername(const string& _username)
{
    m_username = _username;
    m_usernameHasBeenSet = true;
}

bool AMQPVHost::UsernameHasBeenSet() const
{
    return m_usernameHasBeenSet;
}

string AMQPVHost::GetPassword() const
{
    return m_password;
}

void AMQPVHost::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool AMQPVHost::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

