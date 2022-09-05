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
    m_shortNameHasBeenSet(false),
    m_subMerchantMemberTypeHasBeenSet(false),
    m_subMerchantKeyHasBeenSet(false),
    m_subMerchantPrivateKeyHasBeenSet(false),
    m_encryptTypeHasBeenSet(false),
    m_subAcctNoHasBeenSet(false),
    m_midasEnvironmentHasBeenSet(false),
    m_subMerchantStoreNameHasBeenSet(false),
    m_organizationInfoHasBeenSet(false),
    m_subMerchantIdTypeHasBeenSet(false),
    m_subMerchantIdCodeHasBeenSet(false)
{
}

string CreateAcctRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_midasAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_subMchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMchId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subMchId.c_str(), allocator).Move(), allocator);
    }

    if (m_subMchNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMchName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subMchName.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_contactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Contact";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contact.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasSecretId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_midasSignatureHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasSignature";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasSignature.c_str(), allocator).Move(), allocator);
    }

    if (m_subMchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMchType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subMchType.c_str(), allocator).Move(), allocator);
    }

    if (m_shortNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShortName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_shortName.c_str(), allocator).Move(), allocator);
    }

    if (m_subMerchantMemberTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMerchantMemberType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subMerchantMemberType.c_str(), allocator).Move(), allocator);
    }

    if (m_subMerchantKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMerchantKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subMerchantKey.c_str(), allocator).Move(), allocator);
    }

    if (m_subMerchantPrivateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMerchantPrivateKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subMerchantPrivateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encryptType.c_str(), allocator).Move(), allocator);
    }

    if (m_subAcctNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAcctNo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_midasEnvironmentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MidasEnvironment";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_midasEnvironment.c_str(), allocator).Move(), allocator);
    }

    if (m_subMerchantStoreNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMerchantStoreName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subMerchantStoreName.c_str(), allocator).Move(), allocator);
    }

    if (m_organizationInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrganizationInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_organizationInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_subMerchantIdTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMerchantIdType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subMerchantIdType.c_str(), allocator).Move(), allocator);
    }

    if (m_subMerchantIdCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMerchantIdCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subMerchantIdCode.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
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

string CreateAcctRequest::GetSubMerchantMemberType() const
{
    return m_subMerchantMemberType;
}

void CreateAcctRequest::SetSubMerchantMemberType(const string& _subMerchantMemberType)
{
    m_subMerchantMemberType = _subMerchantMemberType;
    m_subMerchantMemberTypeHasBeenSet = true;
}

bool CreateAcctRequest::SubMerchantMemberTypeHasBeenSet() const
{
    return m_subMerchantMemberTypeHasBeenSet;
}

string CreateAcctRequest::GetSubMerchantKey() const
{
    return m_subMerchantKey;
}

void CreateAcctRequest::SetSubMerchantKey(const string& _subMerchantKey)
{
    m_subMerchantKey = _subMerchantKey;
    m_subMerchantKeyHasBeenSet = true;
}

bool CreateAcctRequest::SubMerchantKeyHasBeenSet() const
{
    return m_subMerchantKeyHasBeenSet;
}

string CreateAcctRequest::GetSubMerchantPrivateKey() const
{
    return m_subMerchantPrivateKey;
}

void CreateAcctRequest::SetSubMerchantPrivateKey(const string& _subMerchantPrivateKey)
{
    m_subMerchantPrivateKey = _subMerchantPrivateKey;
    m_subMerchantPrivateKeyHasBeenSet = true;
}

bool CreateAcctRequest::SubMerchantPrivateKeyHasBeenSet() const
{
    return m_subMerchantPrivateKeyHasBeenSet;
}

string CreateAcctRequest::GetEncryptType() const
{
    return m_encryptType;
}

void CreateAcctRequest::SetEncryptType(const string& _encryptType)
{
    m_encryptType = _encryptType;
    m_encryptTypeHasBeenSet = true;
}

bool CreateAcctRequest::EncryptTypeHasBeenSet() const
{
    return m_encryptTypeHasBeenSet;
}

string CreateAcctRequest::GetSubAcctNo() const
{
    return m_subAcctNo;
}

void CreateAcctRequest::SetSubAcctNo(const string& _subAcctNo)
{
    m_subAcctNo = _subAcctNo;
    m_subAcctNoHasBeenSet = true;
}

bool CreateAcctRequest::SubAcctNoHasBeenSet() const
{
    return m_subAcctNoHasBeenSet;
}

string CreateAcctRequest::GetMidasEnvironment() const
{
    return m_midasEnvironment;
}

void CreateAcctRequest::SetMidasEnvironment(const string& _midasEnvironment)
{
    m_midasEnvironment = _midasEnvironment;
    m_midasEnvironmentHasBeenSet = true;
}

bool CreateAcctRequest::MidasEnvironmentHasBeenSet() const
{
    return m_midasEnvironmentHasBeenSet;
}

string CreateAcctRequest::GetSubMerchantStoreName() const
{
    return m_subMerchantStoreName;
}

void CreateAcctRequest::SetSubMerchantStoreName(const string& _subMerchantStoreName)
{
    m_subMerchantStoreName = _subMerchantStoreName;
    m_subMerchantStoreNameHasBeenSet = true;
}

bool CreateAcctRequest::SubMerchantStoreNameHasBeenSet() const
{
    return m_subMerchantStoreNameHasBeenSet;
}

OrganizationInfo CreateAcctRequest::GetOrganizationInfo() const
{
    return m_organizationInfo;
}

void CreateAcctRequest::SetOrganizationInfo(const OrganizationInfo& _organizationInfo)
{
    m_organizationInfo = _organizationInfo;
    m_organizationInfoHasBeenSet = true;
}

bool CreateAcctRequest::OrganizationInfoHasBeenSet() const
{
    return m_organizationInfoHasBeenSet;
}

string CreateAcctRequest::GetSubMerchantIdType() const
{
    return m_subMerchantIdType;
}

void CreateAcctRequest::SetSubMerchantIdType(const string& _subMerchantIdType)
{
    m_subMerchantIdType = _subMerchantIdType;
    m_subMerchantIdTypeHasBeenSet = true;
}

bool CreateAcctRequest::SubMerchantIdTypeHasBeenSet() const
{
    return m_subMerchantIdTypeHasBeenSet;
}

string CreateAcctRequest::GetSubMerchantIdCode() const
{
    return m_subMerchantIdCode;
}

void CreateAcctRequest::SetSubMerchantIdCode(const string& _subMerchantIdCode)
{
    m_subMerchantIdCode = _subMerchantIdCode;
    m_subMerchantIdCodeHasBeenSet = true;
}

bool CreateAcctRequest::SubMerchantIdCodeHasBeenSet() const
{
    return m_subMerchantIdCodeHasBeenSet;
}


