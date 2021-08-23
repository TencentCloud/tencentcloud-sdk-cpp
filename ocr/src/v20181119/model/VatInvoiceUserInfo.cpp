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

#include <tencentcloud/ocr/v20181119/model/VatInvoiceUserInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

VatInvoiceUserInfo::VatInvoiceUserInfo() :
    m_nameHasBeenSet(false),
    m_taxIdHasBeenSet(false),
    m_addrTelHasBeenSet(false),
    m_financialAccountHasBeenSet(false)
{
}

CoreInternalOutcome VatInvoiceUserInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceUserInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TaxId") && !value["TaxId"].IsNull())
    {
        if (!value["TaxId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceUserInfo.TaxId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxId = string(value["TaxId"].GetString());
        m_taxIdHasBeenSet = true;
    }

    if (value.HasMember("AddrTel") && !value["AddrTel"].IsNull())
    {
        if (!value["AddrTel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceUserInfo.AddrTel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addrTel = string(value["AddrTel"].GetString());
        m_addrTelHasBeenSet = true;
    }

    if (value.HasMember("FinancialAccount") && !value["FinancialAccount"].IsNull())
    {
        if (!value["FinancialAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `VatInvoiceUserInfo.FinancialAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_financialAccount = string(value["FinancialAccount"].GetString());
        m_financialAccountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VatInvoiceUserInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_taxIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxId.c_str(), allocator).Move(), allocator);
    }

    if (m_addrTelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddrTel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addrTel.c_str(), allocator).Move(), allocator);
    }

    if (m_financialAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FinancialAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_financialAccount.c_str(), allocator).Move(), allocator);
    }

}


string VatInvoiceUserInfo::GetName() const
{
    return m_name;
}

void VatInvoiceUserInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool VatInvoiceUserInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string VatInvoiceUserInfo::GetTaxId() const
{
    return m_taxId;
}

void VatInvoiceUserInfo::SetTaxId(const string& _taxId)
{
    m_taxId = _taxId;
    m_taxIdHasBeenSet = true;
}

bool VatInvoiceUserInfo::TaxIdHasBeenSet() const
{
    return m_taxIdHasBeenSet;
}

string VatInvoiceUserInfo::GetAddrTel() const
{
    return m_addrTel;
}

void VatInvoiceUserInfo::SetAddrTel(const string& _addrTel)
{
    m_addrTel = _addrTel;
    m_addrTelHasBeenSet = true;
}

bool VatInvoiceUserInfo::AddrTelHasBeenSet() const
{
    return m_addrTelHasBeenSet;
}

string VatInvoiceUserInfo::GetFinancialAccount() const
{
    return m_financialAccount;
}

void VatInvoiceUserInfo::SetFinancialAccount(const string& _financialAccount)
{
    m_financialAccount = _financialAccount;
    m_financialAccountHasBeenSet = true;
}

bool VatInvoiceUserInfo::FinancialAccountHasBeenSet() const
{
    return m_financialAccountHasBeenSet;
}

