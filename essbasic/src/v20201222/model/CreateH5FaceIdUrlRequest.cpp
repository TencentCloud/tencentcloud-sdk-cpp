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

#include <tencentcloud/essbasic/v20201222/model/CreateH5FaceIdUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20201222::Model;
using namespace std;

CreateH5FaceIdUrlRequest::CreateH5FaceIdUrlRequest() :
    m_callerHasBeenSet(false),
    m_wbAppIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_idCardTypeHasBeenSet(false),
    m_idCardNumberHasBeenSet(false),
    m_jumpUrlHasBeenSet(false),
    m_jumpTypeHasBeenSet(false),
    m_openFromHasBeenSet(false),
    m_redirectTypeHasBeenSet(false)
{
}

string CreateH5FaceIdUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_callerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Caller";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_caller.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_wbAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WbAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_wbAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCardType.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdCardNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_idCardNumber.c_str(), allocator).Move(), allocator);
    }

    if (m_jumpUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jumpUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_jumpTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JumpType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jumpType.c_str(), allocator).Move(), allocator);
    }

    if (m_openFromHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenFrom";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_openFrom.c_str(), allocator).Move(), allocator);
    }

    if (m_redirectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_redirectType.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Caller CreateH5FaceIdUrlRequest::GetCaller() const
{
    return m_caller;
}

void CreateH5FaceIdUrlRequest::SetCaller(const Caller& _caller)
{
    m_caller = _caller;
    m_callerHasBeenSet = true;
}

bool CreateH5FaceIdUrlRequest::CallerHasBeenSet() const
{
    return m_callerHasBeenSet;
}

string CreateH5FaceIdUrlRequest::GetWbAppId() const
{
    return m_wbAppId;
}

void CreateH5FaceIdUrlRequest::SetWbAppId(const string& _wbAppId)
{
    m_wbAppId = _wbAppId;
    m_wbAppIdHasBeenSet = true;
}

bool CreateH5FaceIdUrlRequest::WbAppIdHasBeenSet() const
{
    return m_wbAppIdHasBeenSet;
}

string CreateH5FaceIdUrlRequest::GetName() const
{
    return m_name;
}

void CreateH5FaceIdUrlRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateH5FaceIdUrlRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateH5FaceIdUrlRequest::GetIdCardType() const
{
    return m_idCardType;
}

void CreateH5FaceIdUrlRequest::SetIdCardType(const string& _idCardType)
{
    m_idCardType = _idCardType;
    m_idCardTypeHasBeenSet = true;
}

bool CreateH5FaceIdUrlRequest::IdCardTypeHasBeenSet() const
{
    return m_idCardTypeHasBeenSet;
}

string CreateH5FaceIdUrlRequest::GetIdCardNumber() const
{
    return m_idCardNumber;
}

void CreateH5FaceIdUrlRequest::SetIdCardNumber(const string& _idCardNumber)
{
    m_idCardNumber = _idCardNumber;
    m_idCardNumberHasBeenSet = true;
}

bool CreateH5FaceIdUrlRequest::IdCardNumberHasBeenSet() const
{
    return m_idCardNumberHasBeenSet;
}

string CreateH5FaceIdUrlRequest::GetJumpUrl() const
{
    return m_jumpUrl;
}

void CreateH5FaceIdUrlRequest::SetJumpUrl(const string& _jumpUrl)
{
    m_jumpUrl = _jumpUrl;
    m_jumpUrlHasBeenSet = true;
}

bool CreateH5FaceIdUrlRequest::JumpUrlHasBeenSet() const
{
    return m_jumpUrlHasBeenSet;
}

string CreateH5FaceIdUrlRequest::GetJumpType() const
{
    return m_jumpType;
}

void CreateH5FaceIdUrlRequest::SetJumpType(const string& _jumpType)
{
    m_jumpType = _jumpType;
    m_jumpTypeHasBeenSet = true;
}

bool CreateH5FaceIdUrlRequest::JumpTypeHasBeenSet() const
{
    return m_jumpTypeHasBeenSet;
}

string CreateH5FaceIdUrlRequest::GetOpenFrom() const
{
    return m_openFrom;
}

void CreateH5FaceIdUrlRequest::SetOpenFrom(const string& _openFrom)
{
    m_openFrom = _openFrom;
    m_openFromHasBeenSet = true;
}

bool CreateH5FaceIdUrlRequest::OpenFromHasBeenSet() const
{
    return m_openFromHasBeenSet;
}

string CreateH5FaceIdUrlRequest::GetRedirectType() const
{
    return m_redirectType;
}

void CreateH5FaceIdUrlRequest::SetRedirectType(const string& _redirectType)
{
    m_redirectType = _redirectType;
    m_redirectTypeHasBeenSet = true;
}

bool CreateH5FaceIdUrlRequest::RedirectTypeHasBeenSet() const
{
    return m_redirectTypeHasBeenSet;
}


