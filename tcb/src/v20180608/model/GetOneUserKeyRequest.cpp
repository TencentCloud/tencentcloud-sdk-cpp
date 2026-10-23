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

#include <tencentcloud/tcb/v20180608/model/GetOneUserKeyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

GetOneUserKeyRequest::GetOneUserKeyRequest() :
    m_envIdHasBeenSet(false),
    m_keyIDHasBeenSet(false),
    m_businessHasBeenSet(false),
    m_needPwdHasBeenSet(false)
{
}

string GetOneUserKeyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_keyIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_keyID.c_str(), allocator).Move(), allocator);
    }

    if (m_businessHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Business";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_business.c_str(), allocator).Move(), allocator);
    }

    if (m_needPwdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedPwd";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needPwd, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetOneUserKeyRequest::GetEnvId() const
{
    return m_envId;
}

void GetOneUserKeyRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool GetOneUserKeyRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string GetOneUserKeyRequest::GetKeyID() const
{
    return m_keyID;
}

void GetOneUserKeyRequest::SetKeyID(const string& _keyID)
{
    m_keyID = _keyID;
    m_keyIDHasBeenSet = true;
}

bool GetOneUserKeyRequest::KeyIDHasBeenSet() const
{
    return m_keyIDHasBeenSet;
}

string GetOneUserKeyRequest::GetBusiness() const
{
    return m_business;
}

void GetOneUserKeyRequest::SetBusiness(const string& _business)
{
    m_business = _business;
    m_businessHasBeenSet = true;
}

bool GetOneUserKeyRequest::BusinessHasBeenSet() const
{
    return m_businessHasBeenSet;
}

bool GetOneUserKeyRequest::GetNeedPwd() const
{
    return m_needPwd;
}

void GetOneUserKeyRequest::SetNeedPwd(const bool& _needPwd)
{
    m_needPwd = _needPwd;
    m_needPwdHasBeenSet = true;
}

bool GetOneUserKeyRequest::NeedPwdHasBeenSet() const
{
    return m_needPwdHasBeenSet;
}


