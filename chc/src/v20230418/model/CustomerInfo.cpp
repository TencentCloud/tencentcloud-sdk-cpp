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

#include <tencentcloud/chc/v20230418/model/CustomerInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

CustomerInfo::CustomerInfo() :
    m_customerNameHasBeenSet(false),
    m_shortCustomerNameHasBeenSet(false),
    m_wholeFlagHasBeenSet(false)
{
}

CoreInternalOutcome CustomerInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CustomerName") && !value["CustomerName"].IsNull())
    {
        if (!value["CustomerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerInfo.CustomerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_customerName = string(value["CustomerName"].GetString());
        m_customerNameHasBeenSet = true;
    }

    if (value.HasMember("ShortCustomerName") && !value["ShortCustomerName"].IsNull())
    {
        if (!value["ShortCustomerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerInfo.ShortCustomerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shortCustomerName = string(value["ShortCustomerName"].GetString());
        m_shortCustomerNameHasBeenSet = true;
    }

    if (value.HasMember("WholeFlag") && !value["WholeFlag"].IsNull())
    {
        if (!value["WholeFlag"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomerInfo.WholeFlag` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_wholeFlag = value["WholeFlag"].GetBool();
        m_wholeFlagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomerInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_customerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_customerName.c_str(), allocator).Move(), allocator);
    }

    if (m_shortCustomerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShortCustomerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shortCustomerName.c_str(), allocator).Move(), allocator);
    }

    if (m_wholeFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WholeFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_wholeFlag, allocator);
    }

}


string CustomerInfo::GetCustomerName() const
{
    return m_customerName;
}

void CustomerInfo::SetCustomerName(const string& _customerName)
{
    m_customerName = _customerName;
    m_customerNameHasBeenSet = true;
}

bool CustomerInfo::CustomerNameHasBeenSet() const
{
    return m_customerNameHasBeenSet;
}

string CustomerInfo::GetShortCustomerName() const
{
    return m_shortCustomerName;
}

void CustomerInfo::SetShortCustomerName(const string& _shortCustomerName)
{
    m_shortCustomerName = _shortCustomerName;
    m_shortCustomerNameHasBeenSet = true;
}

bool CustomerInfo::ShortCustomerNameHasBeenSet() const
{
    return m_shortCustomerNameHasBeenSet;
}

bool CustomerInfo::GetWholeFlag() const
{
    return m_wholeFlag;
}

void CustomerInfo::SetWholeFlag(const bool& _wholeFlag)
{
    m_wholeFlag = _wholeFlag;
    m_wholeFlagHasBeenSet = true;
}

bool CustomerInfo::WholeFlagHasBeenSet() const
{
    return m_wholeFlagHasBeenSet;
}

