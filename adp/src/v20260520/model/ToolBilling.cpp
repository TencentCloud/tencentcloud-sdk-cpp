/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/adp/v20260520/model/ToolBilling.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ToolBilling::ToolBilling() :
    m_billingTypeHasBeenSet(false)
{
}

CoreInternalOutcome ToolBilling::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BillingType") && !value["BillingType"].IsNull())
    {
        if (!value["BillingType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ToolBilling.BillingType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_billingType = value["BillingType"].GetInt64();
        m_billingTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ToolBilling::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_billingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_billingType, allocator);
    }

}


int64_t ToolBilling::GetBillingType() const
{
    return m_billingType;
}

void ToolBilling::SetBillingType(const int64_t& _billingType)
{
    m_billingType = _billingType;
    m_billingTypeHasBeenSet = true;
}

bool ToolBilling::BillingTypeHasBeenSet() const
{
    return m_billingTypeHasBeenSet;
}

