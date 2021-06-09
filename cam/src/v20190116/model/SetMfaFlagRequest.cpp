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

#include <tencentcloud/cam/v20190116/model/SetMfaFlagRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

SetMfaFlagRequest::SetMfaFlagRequest() :
    m_opUinHasBeenSet(false),
    m_loginFlagHasBeenSet(false),
    m_actionFlagHasBeenSet(false)
{
}

string SetMfaFlagRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_opUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_opUin, allocator);
    }

    if (m_loginFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loginFlag.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_actionFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_actionFlag.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t SetMfaFlagRequest::GetOpUin() const
{
    return m_opUin;
}

void SetMfaFlagRequest::SetOpUin(const uint64_t& _opUin)
{
    m_opUin = _opUin;
    m_opUinHasBeenSet = true;
}

bool SetMfaFlagRequest::OpUinHasBeenSet() const
{
    return m_opUinHasBeenSet;
}

LoginActionMfaFlag SetMfaFlagRequest::GetLoginFlag() const
{
    return m_loginFlag;
}

void SetMfaFlagRequest::SetLoginFlag(const LoginActionMfaFlag& _loginFlag)
{
    m_loginFlag = _loginFlag;
    m_loginFlagHasBeenSet = true;
}

bool SetMfaFlagRequest::LoginFlagHasBeenSet() const
{
    return m_loginFlagHasBeenSet;
}

LoginActionMfaFlag SetMfaFlagRequest::GetActionFlag() const
{
    return m_actionFlag;
}

void SetMfaFlagRequest::SetActionFlag(const LoginActionMfaFlag& _actionFlag)
{
    m_actionFlag = _actionFlag;
    m_actionFlagHasBeenSet = true;
}

bool SetMfaFlagRequest::ActionFlagHasBeenSet() const
{
    return m_actionFlagHasBeenSet;
}


