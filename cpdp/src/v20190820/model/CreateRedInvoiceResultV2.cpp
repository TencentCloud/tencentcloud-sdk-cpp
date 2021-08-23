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

#include <tencentcloud/cpdp/v20190820/model/CreateRedInvoiceResultV2.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CreateRedInvoiceResultV2::CreateRedInvoiceResultV2() :
    m_invoiceIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateRedInvoiceResultV2::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InvoiceId") && !value["InvoiceId"].IsNull())
    {
        if (!value["InvoiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CreateRedInvoiceResultV2.InvoiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invoiceId = string(value["InvoiceId"].GetString());
        m_invoiceIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CreateRedInvoiceResultV2::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_invoiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvoiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invoiceId.c_str(), allocator).Move(), allocator);
    }

}


string CreateRedInvoiceResultV2::GetInvoiceId() const
{
    return m_invoiceId;
}

void CreateRedInvoiceResultV2::SetInvoiceId(const string& _invoiceId)
{
    m_invoiceId = _invoiceId;
    m_invoiceIdHasBeenSet = true;
}

bool CreateRedInvoiceResultV2::InvoiceIdHasBeenSet() const
{
    return m_invoiceIdHasBeenSet;
}

