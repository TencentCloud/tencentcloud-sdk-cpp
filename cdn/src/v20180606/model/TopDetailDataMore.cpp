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

#include <tencentcloud/cdn/v20180606/model/TopDetailDataMore.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

TopDetailDataMore::TopDetailDataMore() :
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_percentHasBeenSet(false)
{
}

CoreInternalOutcome TopDetailDataMore::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TopDetailDataMore.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopDetailDataMore.Value` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetDouble();
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Percent") && !value["Percent"].IsNull())
    {
        if (!value["Percent"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TopDetailDataMore.Percent` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_percent = value["Percent"].GetDouble();
        m_percentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TopDetailDataMore::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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
        value.AddMember(iKey, m_value, allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
    }

}


string TopDetailDataMore::GetName() const
{
    return m_name;
}

void TopDetailDataMore::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TopDetailDataMore::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

double TopDetailDataMore::GetValue() const
{
    return m_value;
}

void TopDetailDataMore::SetValue(const double& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool TopDetailDataMore::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

double TopDetailDataMore::GetPercent() const
{
    return m_percent;
}

void TopDetailDataMore::SetPercent(const double& _percent)
{
    m_percent = _percent;
    m_percentHasBeenSet = true;
}

bool TopDetailDataMore::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}

