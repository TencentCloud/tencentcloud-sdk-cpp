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

#include <tencentcloud/cpdp/v20190820/model/CreateAcctRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace rapidjson;
using namespace std;

CreateAcctRequest::CreateAcctRequest() :
    m_midasAppIdHasBeenSet(false),
    m_subMchIdHasBeenSet(false),
    m_subMchNameHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_contactHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_midasSecretIdHasBeenSet(false),
    m_midasSignatureHasBeenSet(false),
    m_subMchTypeHasBeenSet(false),
    m_shortNameHasBeenSet(false)
{
}

string CreateAcctRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_midasAppIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MidasAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_midasAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_subMchIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubMchId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subMchId.c_str(), allocator).Move(), allocator);
    }

    if (m_subMchNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubMchName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subMchName.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_contactHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Contact";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_contact.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSecretIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MidasSecretId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_midasSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSignatureHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MidasSignature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_midasSignature.c_str(), allocator).Move(), allocator);
    }

    if (m_subMchTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubMchType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subMchType.c_str(), allocator).Move(), allocator);
    }

    if (m_shortNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ShortName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_shortName.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAcctRequest::GetMidasAppId() const
{
    return m_midasAppId;
}

void CreateAcctRequest::SetMidasAppId(const string& _midasAppId)
{
    m_midasAppId = _midasAppId;
    m_midasAppIdHasBeenSet = true;
}

bool CreateAcctRequest::MidasAppIdHasBeenSet() const
{
    return m_midasAppIdHasBeenSet;
}

string CreateAcctRequest::GetSubMchId() const
{
    return m_subMchId;
}

void CreateAcctRequest::SetSubMchId(const string& _subMchId)
{
    m_subMchId = _subMchId;
    m_subMchIdHasBeenSet = true;
}

bool CreateAcctRequest::SubMchIdHasBeenSet() const
{
    return m_subMchIdHasBeenSet;
}

string CreateAcctRequest::GetSubMchName() const
{
    return m_subMchName;
}

void CreateAcctRequest::SetSubMchName(const string& _subMchName)
{
    m_subMchName = _subMchName;
    m_subMchNameHasBeenSet = true;
}

bool CreateAcctRequest::SubMchNameHasBeenSet() const
{
    return m_subMchNameHasBeenSet;
}

string CreateAcctRequest::GetAddress() const
{
    return m_address;
}

void CreateAcctRequest::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool CreateAcctRequest::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string CreateAcctRequest::GetContact() const
{
    return m_contact;
}

void CreateAcctRequest::SetContact(const string& _contact)
{
    m_contact = _contact;
    m_contactHasBeenSet = true;
}

bool CreateAcctRequest::ContactHasBeenSet() const
{
    return m_contactHasBeenSet;
}

string CreateAcctRequest::GetMobile() const
{
    return m_mobile;
}

void CreateAcctRequest::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool CreateAcctRequest::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string CreateAcctRequest::GetEmail() const
{
    return m_email;
}

void CreateAcctRequest::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool CreateAcctRequest::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string CreateAcctRequest::GetMidasSecretId() const
{
    return m_midasSecretId;
}

void CreateAcctRequest::SetMidasSecretId(const string& _midasSecretId)
{
    m_midasSecretId = _midasSecretId;
    m_midasSecretIdHasBeenSet = true;
}

bool CreateAcctRequest::MidasSecretIdHasBeenSet() const
{
    return m_midasSecretIdHasBeenSet;
}

string CreateAcctRequest::GetMidasSignature() const
{
    return m_midasSignature;
}

void CreateAcctRequest::SetMidasSignature(const string& _midasSignature)
{
    m_midasSignature = _midasSignature;
    m_midasSignatureHasBeenSet = true;
}

bool CreateAcctRequest::MidasSignatureHasBeenSet() const
{
    return m_midasSignatureHasBeenSet;
}

string CreateAcctRequest::GetSubMchType() const
{
    return m_subMchType;
}

void CreateAcctRequest::SetSubMchType(const string& _subMchType)
{
    m_subMchType = _subMchType;
    m_subMchTypeHasBeenSet = true;
}

bool CreateAcctRequest::SubMchTypeHasBeenSet() const
{
    return m_subMchTypeHasBeenSet;
}

string CreateAcctRequest::GetShortName() const
{
    return m_shortName;
}

void CreateAcctRequest::SetShortName(const string& _shortName)
{
    m_shortName = _shortName;
    m_shortNameHasBeenSet = true;
}

bool CreateAcctRequest::ShortNameHasBeenSet() const
{
    return m_shortNameHasBeenSet;
}


