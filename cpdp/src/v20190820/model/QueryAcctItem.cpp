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

#include <tencentcloud/cpdp/v20190820/model/QueryAcctItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

QueryAcctItem::QueryAcctItem() :
    m_subMchTypeHasBeenSet(false),
    m_subMchNameHasBeenSet(false),
    m_subAcctNoHasBeenSet(false),
    m_shortNameHasBeenSet(false),
    m_subMchIdHasBeenSet(false),
    m_subAppIdHasBeenSet(false),
    m_contactHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_mobileHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_subMerchantMemberTypeHasBeenSet(false)
{
}

CoreInternalOutcome QueryAcctItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubMchType") && !value["SubMchType"].IsNull())
    {
        if (!value["SubMchType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryAcctItem.SubMchType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subMchType = string(value["SubMchType"].GetString());
        m_subMchTypeHasBeenSet = true;
    }

    if (value.HasMember("SubMchName") && !value["SubMchName"].IsNull())
    {
        if (!value["SubMchName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryAcctItem.SubMchName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subMchName = string(value["SubMchName"].GetString());
        m_subMchNameHasBeenSet = true;
    }

    if (value.HasMember("SubAcctNo") && !value["SubAcctNo"].IsNull())
    {
        if (!value["SubAcctNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryAcctItem.SubAcctNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAcctNo = string(value["SubAcctNo"].GetString());
        m_subAcctNoHasBeenSet = true;
    }

    if (value.HasMember("ShortName") && !value["ShortName"].IsNull())
    {
        if (!value["ShortName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryAcctItem.ShortName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shortName = string(value["ShortName"].GetString());
        m_shortNameHasBeenSet = true;
    }

    if (value.HasMember("SubMchId") && !value["SubMchId"].IsNull())
    {
        if (!value["SubMchId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryAcctItem.SubMchId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subMchId = string(value["SubMchId"].GetString());
        m_subMchIdHasBeenSet = true;
    }

    if (value.HasMember("SubAppId") && !value["SubAppId"].IsNull())
    {
        if (!value["SubAppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryAcctItem.SubAppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAppId = string(value["SubAppId"].GetString());
        m_subAppIdHasBeenSet = true;
    }

    if (value.HasMember("Contact") && !value["Contact"].IsNull())
    {
        if (!value["Contact"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryAcctItem.Contact` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contact = string(value["Contact"].GetString());
        m_contactHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryAcctItem.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("Mobile") && !value["Mobile"].IsNull())
    {
        if (!value["Mobile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryAcctItem.Mobile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mobile = string(value["Mobile"].GetString());
        m_mobileHasBeenSet = true;
    }

    if (value.HasMember("Email") && !value["Email"].IsNull())
    {
        if (!value["Email"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryAcctItem.Email` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_email = string(value["Email"].GetString());
        m_emailHasBeenSet = true;
    }

    if (value.HasMember("SubMerchantMemberType") && !value["SubMerchantMemberType"].IsNull())
    {
        if (!value["SubMerchantMemberType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `QueryAcctItem.SubMerchantMemberType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subMerchantMemberType = string(value["SubMerchantMemberType"].GetString());
        m_subMerchantMemberTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueryAcctItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subMchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMchType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subMchType.c_str(), allocator).Move(), allocator);
    }

    if (m_subMchNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMchName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subMchName.c_str(), allocator).Move(), allocator);
    }

    if (m_subAcctNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAcctNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAcctNo.c_str(), allocator).Move(), allocator);
    }

    if (m_shortNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShortName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shortName.c_str(), allocator).Move(), allocator);
    }

    if (m_subMchIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMchId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subMchId.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAppId.c_str(), allocator).Move(), allocator);
    }

    if (m_contactHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Contact";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contact.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_mobileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mobile.c_str(), allocator).Move(), allocator);
    }

    if (m_emailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Email";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_email.c_str(), allocator).Move(), allocator);
    }

    if (m_subMerchantMemberTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubMerchantMemberType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subMerchantMemberType.c_str(), allocator).Move(), allocator);
    }

}


string QueryAcctItem::GetSubMchType() const
{
    return m_subMchType;
}

void QueryAcctItem::SetSubMchType(const string& _subMchType)
{
    m_subMchType = _subMchType;
    m_subMchTypeHasBeenSet = true;
}

bool QueryAcctItem::SubMchTypeHasBeenSet() const
{
    return m_subMchTypeHasBeenSet;
}

string QueryAcctItem::GetSubMchName() const
{
    return m_subMchName;
}

void QueryAcctItem::SetSubMchName(const string& _subMchName)
{
    m_subMchName = _subMchName;
    m_subMchNameHasBeenSet = true;
}

bool QueryAcctItem::SubMchNameHasBeenSet() const
{
    return m_subMchNameHasBeenSet;
}

string QueryAcctItem::GetSubAcctNo() const
{
    return m_subAcctNo;
}

void QueryAcctItem::SetSubAcctNo(const string& _subAcctNo)
{
    m_subAcctNo = _subAcctNo;
    m_subAcctNoHasBeenSet = true;
}

bool QueryAcctItem::SubAcctNoHasBeenSet() const
{
    return m_subAcctNoHasBeenSet;
}

string QueryAcctItem::GetShortName() const
{
    return m_shortName;
}

void QueryAcctItem::SetShortName(const string& _shortName)
{
    m_shortName = _shortName;
    m_shortNameHasBeenSet = true;
}

bool QueryAcctItem::ShortNameHasBeenSet() const
{
    return m_shortNameHasBeenSet;
}

string QueryAcctItem::GetSubMchId() const
{
    return m_subMchId;
}

void QueryAcctItem::SetSubMchId(const string& _subMchId)
{
    m_subMchId = _subMchId;
    m_subMchIdHasBeenSet = true;
}

bool QueryAcctItem::SubMchIdHasBeenSet() const
{
    return m_subMchIdHasBeenSet;
}

string QueryAcctItem::GetSubAppId() const
{
    return m_subAppId;
}

void QueryAcctItem::SetSubAppId(const string& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool QueryAcctItem::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string QueryAcctItem::GetContact() const
{
    return m_contact;
}

void QueryAcctItem::SetContact(const string& _contact)
{
    m_contact = _contact;
    m_contactHasBeenSet = true;
}

bool QueryAcctItem::ContactHasBeenSet() const
{
    return m_contactHasBeenSet;
}

string QueryAcctItem::GetAddress() const
{
    return m_address;
}

void QueryAcctItem::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool QueryAcctItem::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

string QueryAcctItem::GetMobile() const
{
    return m_mobile;
}

void QueryAcctItem::SetMobile(const string& _mobile)
{
    m_mobile = _mobile;
    m_mobileHasBeenSet = true;
}

bool QueryAcctItem::MobileHasBeenSet() const
{
    return m_mobileHasBeenSet;
}

string QueryAcctItem::GetEmail() const
{
    return m_email;
}

void QueryAcctItem::SetEmail(const string& _email)
{
    m_email = _email;
    m_emailHasBeenSet = true;
}

bool QueryAcctItem::EmailHasBeenSet() const
{
    return m_emailHasBeenSet;
}

string QueryAcctItem::GetSubMerchantMemberType() const
{
    return m_subMerchantMemberType;
}

void QueryAcctItem::SetSubMerchantMemberType(const string& _subMerchantMemberType)
{
    m_subMerchantMemberType = _subMerchantMemberType;
    m_subMerchantMemberTypeHasBeenSet = true;
}

bool QueryAcctItem::SubMerchantMemberTypeHasBeenSet() const
{
    return m_subMerchantMemberTypeHasBeenSet;
}

