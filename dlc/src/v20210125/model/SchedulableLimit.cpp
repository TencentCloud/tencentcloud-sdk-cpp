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

#include <tencentcloud/dlc/v20210125/model/SchedulableLimit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

SchedulableLimit::SchedulableLimit() :
    m_billingItemHasBeenSet(false),
    m_maxSchedulableUnitsHasBeenSet(false)
{
}

CoreInternalOutcome SchedulableLimit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BillingItem") && !value["BillingItem"].IsNull())
    {
        if (!value["BillingItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulableLimit.BillingItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingItem = string(value["BillingItem"].GetString());
        m_billingItemHasBeenSet = true;
    }

    if (value.HasMember("MaxSchedulableUnits") && !value["MaxSchedulableUnits"].IsNull())
    {
        if (!value["MaxSchedulableUnits"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SchedulableLimit.MaxSchedulableUnits` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxSchedulableUnits = value["MaxSchedulableUnits"].GetInt64();
        m_maxSchedulableUnitsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SchedulableLimit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_billingItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingItem.c_str(), allocator).Move(), allocator);
    }

    if (m_maxSchedulableUnitsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxSchedulableUnits";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxSchedulableUnits, allocator);
    }

}


string SchedulableLimit::GetBillingItem() const
{
    return m_billingItem;
}

void SchedulableLimit::SetBillingItem(const string& _billingItem)
{
    m_billingItem = _billingItem;
    m_billingItemHasBeenSet = true;
}

bool SchedulableLimit::BillingItemHasBeenSet() const
{
    return m_billingItemHasBeenSet;
}

int64_t SchedulableLimit::GetMaxSchedulableUnits() const
{
    return m_maxSchedulableUnits;
}

void SchedulableLimit::SetMaxSchedulableUnits(const int64_t& _maxSchedulableUnits)
{
    m_maxSchedulableUnits = _maxSchedulableUnits;
    m_maxSchedulableUnitsHasBeenSet = true;
}

bool SchedulableLimit::MaxSchedulableUnitsHasBeenSet() const
{
    return m_maxSchedulableUnitsHasBeenSet;
}

