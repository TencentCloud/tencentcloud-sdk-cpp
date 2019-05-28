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

#include <tencentcloud/faceid/v20180301/model/DetectAuthRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace rapidjson;
using namespace std;

DetectAuthRequest::DetectAuthRequest() :
    m_ruleIdHasBeenSet(false),
    m_terminalTypeHasBeenSet(false),
    m_idCardHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_redirectUrlHasBeenSet(false),
    m_extraHasBeenSet(false),
    m_imageBase64HasBeenSet(false)
{
}

string DetectAuthRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ruleIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_terminalTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TerminalType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_terminalType.c_str(), allocator).Move(), allocator);
    }

    if (m_idCardHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IdCard";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_idCard.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_redirectUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RedirectUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_redirectUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_extraHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Extra";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_extra.c_str(), allocator).Move(), allocator);
    }

    if (m_imageBase64HasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ImageBase64";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_imageBase64.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DetectAuthRequest::GetRuleId() const
{
    return m_ruleId;
}

void DetectAuthRequest::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool DetectAuthRequest::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string DetectAuthRequest::GetTerminalType() const
{
    return m_terminalType;
}

void DetectAuthRequest::SetTerminalType(const string& _terminalType)
{
    m_terminalType = _terminalType;
    m_terminalTypeHasBeenSet = true;
}

bool DetectAuthRequest::TerminalTypeHasBeenSet() const
{
    return m_terminalTypeHasBeenSet;
}

string DetectAuthRequest::GetIdCard() const
{
    return m_idCard;
}

void DetectAuthRequest::SetIdCard(const string& _idCard)
{
    m_idCard = _idCard;
    m_idCardHasBeenSet = true;
}

bool DetectAuthRequest::IdCardHasBeenSet() const
{
    return m_idCardHasBeenSet;
}

string DetectAuthRequest::GetName() const
{
    return m_name;
}

void DetectAuthRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DetectAuthRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string DetectAuthRequest::GetRedirectUrl() const
{
    return m_redirectUrl;
}

void DetectAuthRequest::SetRedirectUrl(const string& _redirectUrl)
{
    m_redirectUrl = _redirectUrl;
    m_redirectUrlHasBeenSet = true;
}

bool DetectAuthRequest::RedirectUrlHasBeenSet() const
{
    return m_redirectUrlHasBeenSet;
}

string DetectAuthRequest::GetExtra() const
{
    return m_extra;
}

void DetectAuthRequest::SetExtra(const string& _extra)
{
    m_extra = _extra;
    m_extraHasBeenSet = true;
}

bool DetectAuthRequest::ExtraHasBeenSet() const
{
    return m_extraHasBeenSet;
}

string DetectAuthRequest::GetImageBase64() const
{
    return m_imageBase64;
}

void DetectAuthRequest::SetImageBase64(const string& _imageBase64)
{
    m_imageBase64 = _imageBase64;
    m_imageBase64HasBeenSet = true;
}

bool DetectAuthRequest::ImageBase64HasBeenSet() const
{
    return m_imageBase64HasBeenSet;
}


