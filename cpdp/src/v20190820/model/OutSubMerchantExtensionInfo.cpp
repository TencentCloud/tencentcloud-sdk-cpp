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

#include <tencentcloud/cpdp/v20190820/model/OutSubMerchantExtensionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

OutSubMerchantExtensionInfo::OutSubMerchantExtensionInfo() :
    m_regionCodeHasBeenSet(false),
    m_registerAddressHasBeenSet(false),
    m_mailingAddressHasBeenSet(false),
    m_businessAddressHasBeenSet(false),
    m_servicePhoneHasBeenSet(false),
    m_webSiteUrlHasBeenSet(false),
    m_emailAddressHasBeenSet(false)
{
}

CoreInternalOutcome OutSubMerchantExtensionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegionCode") && !value["RegionCode"].IsNull())
    {
        if (!value["RegionCode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutSubMerchantExtensionInfo.RegionCode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regionCode = string(value["RegionCode"].GetString());
        m_regionCodeHasBeenSet = true;
    }

    if (value.HasMember("RegisterAddress") && !value["RegisterAddress"].IsNull())
    {
        if (!value["RegisterAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutSubMerchantExtensionInfo.RegisterAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registerAddress = string(value["RegisterAddress"].GetString());
        m_registerAddressHasBeenSet = true;
    }

    if (value.HasMember("MailingAddress") && !value["MailingAddress"].IsNull())
    {
        if (!value["MailingAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutSubMerchantExtensionInfo.MailingAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mailingAddress = string(value["MailingAddress"].GetString());
        m_mailingAddressHasBeenSet = true;
    }

    if (value.HasMember("BusinessAddress") && !value["BusinessAddress"].IsNull())
    {
        if (!value["BusinessAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutSubMerchantExtensionInfo.BusinessAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessAddress = string(value["BusinessAddress"].GetString());
        m_businessAddressHasBeenSet = true;
    }

    if (value.HasMember("ServicePhone") && !value["ServicePhone"].IsNull())
    {
        if (!value["ServicePhone"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutSubMerchantExtensionInfo.ServicePhone` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_servicePhone = string(value["ServicePhone"].GetString());
        m_servicePhoneHasBeenSet = true;
    }

    if (value.HasMember("WebSiteUrl") && !value["WebSiteUrl"].IsNull())
    {
        if (!value["WebSiteUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutSubMerchantExtensionInfo.WebSiteUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_webSiteUrl = string(value["WebSiteUrl"].GetString());
        m_webSiteUrlHasBeenSet = true;
    }

    if (value.HasMember("EmailAddress") && !value["EmailAddress"].IsNull())
    {
        if (!value["EmailAddress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OutSubMerchantExtensionInfo.EmailAddress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_emailAddress = string(value["EmailAddress"].GetString());
        m_emailAddressHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OutSubMerchantExtensionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_regionCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regionCode.c_str(), allocator).Move(), allocator);
    }

    if (m_registerAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegisterAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registerAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_mailingAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MailingAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mailingAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_businessAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessAddress.c_str(), allocator).Move(), allocator);
    }

    if (m_servicePhoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServicePhone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_servicePhone.c_str(), allocator).Move(), allocator);
    }

    if (m_webSiteUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WebSiteUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_webSiteUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_emailAddressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EmailAddress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_emailAddress.c_str(), allocator).Move(), allocator);
    }

}


string OutSubMerchantExtensionInfo::GetRegionCode() const
{
    return m_regionCode;
}

void OutSubMerchantExtensionInfo::SetRegionCode(const string& _regionCode)
{
    m_regionCode = _regionCode;
    m_regionCodeHasBeenSet = true;
}

bool OutSubMerchantExtensionInfo::RegionCodeHasBeenSet() const
{
    return m_regionCodeHasBeenSet;
}

string OutSubMerchantExtensionInfo::GetRegisterAddress() const
{
    return m_registerAddress;
}

void OutSubMerchantExtensionInfo::SetRegisterAddress(const string& _registerAddress)
{
    m_registerAddress = _registerAddress;
    m_registerAddressHasBeenSet = true;
}

bool OutSubMerchantExtensionInfo::RegisterAddressHasBeenSet() const
{
    return m_registerAddressHasBeenSet;
}

string OutSubMerchantExtensionInfo::GetMailingAddress() const
{
    return m_mailingAddress;
}

void OutSubMerchantExtensionInfo::SetMailingAddress(const string& _mailingAddress)
{
    m_mailingAddress = _mailingAddress;
    m_mailingAddressHasBeenSet = true;
}

bool OutSubMerchantExtensionInfo::MailingAddressHasBeenSet() const
{
    return m_mailingAddressHasBeenSet;
}

string OutSubMerchantExtensionInfo::GetBusinessAddress() const
{
    return m_businessAddress;
}

void OutSubMerchantExtensionInfo::SetBusinessAddress(const string& _businessAddress)
{
    m_businessAddress = _businessAddress;
    m_businessAddressHasBeenSet = true;
}

bool OutSubMerchantExtensionInfo::BusinessAddressHasBeenSet() const
{
    return m_businessAddressHasBeenSet;
}

string OutSubMerchantExtensionInfo::GetServicePhone() const
{
    return m_servicePhone;
}

void OutSubMerchantExtensionInfo::SetServicePhone(const string& _servicePhone)
{
    m_servicePhone = _servicePhone;
    m_servicePhoneHasBeenSet = true;
}

bool OutSubMerchantExtensionInfo::ServicePhoneHasBeenSet() const
{
    return m_servicePhoneHasBeenSet;
}

string OutSubMerchantExtensionInfo::GetWebSiteUrl() const
{
    return m_webSiteUrl;
}

void OutSubMerchantExtensionInfo::SetWebSiteUrl(const string& _webSiteUrl)
{
    m_webSiteUrl = _webSiteUrl;
    m_webSiteUrlHasBeenSet = true;
}

bool OutSubMerchantExtensionInfo::WebSiteUrlHasBeenSet() const
{
    return m_webSiteUrlHasBeenSet;
}

string OutSubMerchantExtensionInfo::GetEmailAddress() const
{
    return m_emailAddress;
}

void OutSubMerchantExtensionInfo::SetEmailAddress(const string& _emailAddress)
{
    m_emailAddress = _emailAddress;
    m_emailAddressHasBeenSet = true;
}

bool OutSubMerchantExtensionInfo::EmailAddressHasBeenSet() const
{
    return m_emailAddressHasBeenSet;
}

