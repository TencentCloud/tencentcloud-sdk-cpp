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

#include <tencentcloud/ciam/v20220331/model/Sort.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

Sort::Sort() :
    m_propertyKeyHasBeenSet(false),
    m_orderHasBeenSet(false)
{
}

CoreInternalOutcome Sort::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PropertyKey") && !value["PropertyKey"].IsNull())
    {
        if (!value["PropertyKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Sort.PropertyKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_propertyKey = string(value["PropertyKey"].GetString());
        m_propertyKeyHasBeenSet = true;
    }

    if (value.HasMember("Order") && !value["Order"].IsNull())
    {
        if (!value["Order"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Sort.Order` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_order = string(value["Order"].GetString());
        m_orderHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Sort::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_propertyKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PropertyKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_propertyKey.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

}


string Sort::GetPropertyKey() const
{
    return m_propertyKey;
}

void Sort::SetPropertyKey(const string& _propertyKey)
{
    m_propertyKey = _propertyKey;
    m_propertyKeyHasBeenSet = true;
}

bool Sort::PropertyKeyHasBeenSet() const
{
    return m_propertyKeyHasBeenSet;
}

string Sort::GetOrder() const
{
    return m_order;
}

void Sort::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool Sort::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

