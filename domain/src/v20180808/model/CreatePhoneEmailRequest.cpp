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

#include <tencentcloud/domain/v20180808/model/CreatePhoneEmailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

CreatePhoneEmailRequest::CreatePhoneEmailRequest() :
    m_codeHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_verifyCodeHasBeenSet(false)
{
}

string CreatePhoneEmailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_code.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_verifyCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifyCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_verifyCode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePhoneEmailRequest::GetCode() const
{
    return m_code;
}

void CreatePhoneEmailRequest::SetCode(const string& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool CreatePhoneEmailRequest::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

uint64_t CreatePhoneEmailRequest::GetType() const
{
    return m_type;
}

void CreatePhoneEmailRequest::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreatePhoneEmailRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreatePhoneEmailRequest::GetVerifyCode() const
{
    return m_verifyCode;
}

void CreatePhoneEmailRequest::SetVerifyCode(const string& _verifyCode)
{
    m_verifyCode = _verifyCode;
    m_verifyCodeHasBeenSet = true;
}

bool CreatePhoneEmailRequest::VerifyCodeHasBeenSet() const
{
    return m_verifyCodeHasBeenSet;
}


