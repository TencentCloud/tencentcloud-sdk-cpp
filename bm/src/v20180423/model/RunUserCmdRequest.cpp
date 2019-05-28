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

#include <tencentcloud/bm/v20180423/model/RunUserCmdRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bm::V20180423::Model;
using namespace rapidjson;
using namespace std;

RunUserCmdRequest::RunUserCmdRequest() :
    m_cmdIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_instanceIdsHasBeenSet(false),
    m_cmdParamHasBeenSet(false)
{
}

string RunUserCmdRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cmdIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CmdId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cmdId.c_str(), allocator).Move(), allocator);
    }

    if (m_userNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_passwordHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Password";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_password.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_instanceIds.begin(); itr != m_instanceIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_cmdParamHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CmdParam";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_cmdParam.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RunUserCmdRequest::GetCmdId() const
{
    return m_cmdId;
}

void RunUserCmdRequest::SetCmdId(const string& _cmdId)
{
    m_cmdId = _cmdId;
    m_cmdIdHasBeenSet = true;
}

bool RunUserCmdRequest::CmdIdHasBeenSet() const
{
    return m_cmdIdHasBeenSet;
}

string RunUserCmdRequest::GetUserName() const
{
    return m_userName;
}

void RunUserCmdRequest::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool RunUserCmdRequest::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

string RunUserCmdRequest::GetPassword() const
{
    return m_password;
}

void RunUserCmdRequest::SetPassword(const string& _password)
{
    m_password = _password;
    m_passwordHasBeenSet = true;
}

bool RunUserCmdRequest::PasswordHasBeenSet() const
{
    return m_passwordHasBeenSet;
}

vector<string> RunUserCmdRequest::GetInstanceIds() const
{
    return m_instanceIds;
}

void RunUserCmdRequest::SetInstanceIds(const vector<string>& _instanceIds)
{
    m_instanceIds = _instanceIds;
    m_instanceIdsHasBeenSet = true;
}

bool RunUserCmdRequest::InstanceIdsHasBeenSet() const
{
    return m_instanceIdsHasBeenSet;
}

string RunUserCmdRequest::GetCmdParam() const
{
    return m_cmdParam;
}

void RunUserCmdRequest::SetCmdParam(const string& _cmdParam)
{
    m_cmdParam = _cmdParam;
    m_cmdParamHasBeenSet = true;
}

bool RunUserCmdRequest::CmdParamHasBeenSet() const
{
    return m_cmdParamHasBeenSet;
}


