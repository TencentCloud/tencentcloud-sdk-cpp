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

#include <tencentcloud/tokenhub/v20260322/model/RequestSort.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tokenhub::V20260322::Model;
using namespace std;

RequestSort::RequestSort() :
    m_nameHasBeenSet(false),
    m_orderHasBeenSet(false)
{
}

CoreInternalOutcome RequestSort::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestSort.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Order") && !value["Order"].IsNull())
    {
        if (!value["Order"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RequestSort.Order` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_order = string(value["Order"].GetString());
        m_orderHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RequestSort::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_order.c_str(), allocator).Move(), allocator);
    }

}


string RequestSort::GetName() const
{
    return m_name;
}

void RequestSort::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool RequestSort::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string RequestSort::GetOrder() const
{
    return m_order;
}

void RequestSort::SetOrder(const string& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool RequestSort::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

