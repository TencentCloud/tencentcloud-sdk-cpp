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

#include <tencentcloud/cpdp/v20190820/model/MerchantManagementList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

MerchantManagementList::MerchantManagementList() :
    m_taxpayerNameHasBeenSet(false),
    m_taxpayerNumHasBeenSet(false),
    m_serialNoHasBeenSet(false),
    m_invoicePlatformIdHasBeenSet(false)
{
}

CoreInternalOutcome MerchantManagementList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaxpayerName") && !value["TaxpayerName"].IsNull())
    {
        if (!value["TaxpayerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantManagementList.TaxpayerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxpayerName = string(value["TaxpayerName"].GetString());
        m_taxpayerNameHasBeenSet = true;
    }

    if (value.HasMember("TaxpayerNum") && !value["TaxpayerNum"].IsNull())
    {
        if (!value["TaxpayerNum"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantManagementList.TaxpayerNum` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taxpayerNum = string(value["TaxpayerNum"].GetString());
        m_taxpayerNumHasBeenSet = true;
    }

    if (value.HasMember("SerialNo") && !value["SerialNo"].IsNull())
    {
        if (!value["SerialNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantManagementList.SerialNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serialNo = string(value["SerialNo"].GetString());
        m_serialNoHasBeenSet = true;
    }

    if (value.HasMember("InvoicePlatformId") && !value["InvoicePlatformId"].IsNull())
    {
        if (!value["InvoicePlatformId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MerchantManagementList.InvoicePlatformId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invoicePlatformId = value["InvoicePlatformId"].GetInt64();
        m_invoicePlatformIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MerchantManagementList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taxpayerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxpayerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxpayerName.c_str(), allocator).Move(), allocator);
    }

    if (m_taxpayerNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxpayerNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taxpayerNum.c_str(), allocator).Move(), allocator);
    }

    if (m_serialNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SerialNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serialNo.c_str(), allocator).Move(), allocator);
    }

    if (m_invoicePlatformIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoicePlatformId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invoicePlatformId, allocator);
    }

}


string MerchantManagementList::GetTaxpayerName() const
{
    return m_taxpayerName;
}

void MerchantManagementList::SetTaxpayerName(const string& _taxpayerName)
{
    m_taxpayerName = _taxpayerName;
    m_taxpayerNameHasBeenSet = true;
}

bool MerchantManagementList::TaxpayerNameHasBeenSet() const
{
    return m_taxpayerNameHasBeenSet;
}

string MerchantManagementList::GetTaxpayerNum() const
{
    return m_taxpayerNum;
}

void MerchantManagementList::SetTaxpayerNum(const string& _taxpayerNum)
{
    m_taxpayerNum = _taxpayerNum;
    m_taxpayerNumHasBeenSet = true;
}

bool MerchantManagementList::TaxpayerNumHasBeenSet() const
{
    return m_taxpayerNumHasBeenSet;
}

string MerchantManagementList::GetSerialNo() const
{
    return m_serialNo;
}

void MerchantManagementList::SetSerialNo(const string& _serialNo)
{
    m_serialNo = _serialNo;
    m_serialNoHasBeenSet = true;
}

bool MerchantManagementList::SerialNoHasBeenSet() const
{
    return m_serialNoHasBeenSet;
}

int64_t MerchantManagementList::GetInvoicePlatformId() const
{
    return m_invoicePlatformId;
}

void MerchantManagementList::SetInvoicePlatformId(const int64_t& _invoicePlatformId)
{
    m_invoicePlatformId = _invoicePlatformId;
    m_invoicePlatformIdHasBeenSet = true;
}

bool MerchantManagementList::InvoicePlatformIdHasBeenSet() const
{
    return m_invoicePlatformIdHasBeenSet;
}

