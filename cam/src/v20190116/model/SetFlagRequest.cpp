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

#include <tencentcloud/cam/v20190116/model/SetFlagRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace rapidjson;
using namespace std;

SetFlagRequest::SetFlagRequest() :
    m_opUinHasBeenSet(false),
    m_loginFlagHasBeenSet(false),
    m_actionFlagHasBeenSet(false),
    m_offsiteFlagHasBeenSet(false),
    m_needResetMfaHasBeenSet(false)
{
}

string SetFlagRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_opUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OpUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_opUin, allocator);
    }

    if (m_loginFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoginFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_loginFlag.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_actionFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ActionFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_actionFlag.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_offsiteFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OffsiteFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_offsiteFlag.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_needResetMfaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NeedResetMfa";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needResetMfa, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t SetFlagRequest::GetOpUin() const
{
    return m_opUin;
}

void SetFlagRequest::SetOpUin(const uint64_t& _opUin)
{
    m_opUin = _opUin;
    m_opUinHasBeenSet = true;
}

bool SetFlagRequest::OpUinHasBeenSet() const
{
    return m_opUinHasBeenSet;
}

LoginActionFlag SetFlagRequest::GetLoginFlag() const
{
    return m_loginFlag;
}

void SetFlagRequest::SetLoginFlag(const LoginActionFlag& _loginFlag)
{
    m_loginFlag = _loginFlag;
    m_loginFlagHasBeenSet = true;
}

bool SetFlagRequest::LoginFlagHasBeenSet() const
{
    return m_loginFlagHasBeenSet;
}

LoginActionFlag SetFlagRequest::GetActionFlag() const
{
    return m_actionFlag;
}

void SetFlagRequest::SetActionFlag(const LoginActionFlag& _actionFlag)
{
    m_actionFlag = _actionFlag;
    m_actionFlagHasBeenSet = true;
}

bool SetFlagRequest::ActionFlagHasBeenSet() const
{
    return m_actionFlagHasBeenSet;
}

OffsiteFlag SetFlagRequest::GetOffsiteFlag() const
{
    return m_offsiteFlag;
}

void SetFlagRequest::SetOffsiteFlag(const OffsiteFlag& _offsiteFlag)
{
    m_offsiteFlag = _offsiteFlag;
    m_offsiteFlagHasBeenSet = true;
}

bool SetFlagRequest::OffsiteFlagHasBeenSet() const
{
    return m_offsiteFlagHasBeenSet;
}

uint64_t SetFlagRequest::GetNeedResetMfa() const
{
    return m_needResetMfa;
}

void SetFlagRequest::SetNeedResetMfa(const uint64_t& _needResetMfa)
{
    m_needResetMfa = _needResetMfa;
    m_needResetMfaHasBeenSet = true;
}

bool SetFlagRequest::NeedResetMfaHasBeenSet() const
{
    return m_needResetMfaHasBeenSet;
}


