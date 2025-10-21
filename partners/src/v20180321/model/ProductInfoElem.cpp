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

#include <tencentcloud/partners/v20180321/model/ProductInfoElem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

ProductInfoElem::ProductInfoElem() :
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false)
{
}

CoreInternalOutcome ProductInfoElem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfoElem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductInfoElem.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductInfoElem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

}


string ProductInfoElem::GetName() const
{
    return m_name;
}

void ProductInfoElem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ProductInfoElem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ProductInfoElem::GetValue() const
{
    return m_value;
}

void ProductInfoElem::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool ProductInfoElem::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

