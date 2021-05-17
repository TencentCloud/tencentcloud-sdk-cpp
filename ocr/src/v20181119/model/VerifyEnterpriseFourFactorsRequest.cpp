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

#include <tencentcloud/ocr/v20181119/model/VerifyEnterpriseFourFactorsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ocr::V20181119::Model;
using namespace rapidjson;
using namespace std;

VerifyEnterpriseFourFactorsRequest::VerifyEnterpriseFourFactorsRequest() :
    m_realNameHasBeenSet(false),
    m_idCardHasBeenSet(false),
    m_enterpriseNameHasBeenSet(false),
    m_enterpriseMarkHasBeenSet(false)
{
}

string VerifyEnterpriseFourFactorsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_realNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RealName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_realName.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IdCard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_idCard.c_str(), allocator).Move(), allocator);
    }

    if (m_enterpriseNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnterpriseName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_enterpriseName.c_str(), allocator).Move(), allocator);
    }

    if (m_enterpriseMarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnterpriseMark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_enterpriseMark.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string VerifyEnterpriseFourFactorsRequest::GetRealName() const
{
    return m_realName;
}

void VerifyEnterpriseFourFactorsRequest::SetRealName(const string& _realName)
{
    m_realName = _realName;
    m_realNameHasBeenSet = true;
}

bool VerifyEnterpriseFourFactorsRequest::RealNameHasBeenSet() const
{
    return m_realNameHasBeenSet;
}

string VerifyEnterpriseFourFactorsRequest::GetIdCard() const
{
    return m_idCard;
}

void VerifyEnterpriseFourFactorsRequest::SetIdCard(const string& _idCard)
{
    m_idCard = _idCard;
    m_idCardHasBeenSet = true;
}

bool VerifyEnterpriseFourFactorsRequest::IdCardHasBeenSet() const
{
    return m_idCardHasBeenSet;
}

string VerifyEnterpriseFourFactorsRequest::GetEnterpriseName() const
{
    return m_enterpriseName;
}

void VerifyEnterpriseFourFactorsRequest::SetEnterpriseName(const string& _enterpriseName)
{
    m_enterpriseName = _enterpriseName;
    m_enterpriseNameHasBeenSet = true;
}

bool VerifyEnterpriseFourFactorsRequest::EnterpriseNameHasBeenSet() const
{
    return m_enterpriseNameHasBeenSet;
}

string VerifyEnterpriseFourFactorsRequest::GetEnterpriseMark() const
{
    return m_enterpriseMark;
}

void VerifyEnterpriseFourFactorsRequest::SetEnterpriseMark(const string& _enterpriseMark)
{
    m_enterpriseMark = _enterpriseMark;
    m_enterpriseMarkHasBeenSet = true;
}

bool VerifyEnterpriseFourFactorsRequest::EnterpriseMarkHasBeenSet() const
{
    return m_enterpriseMarkHasBeenSet;
}


