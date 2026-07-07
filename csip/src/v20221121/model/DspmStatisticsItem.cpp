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

#include <tencentcloud/csip/v20221121/model/DspmStatisticsItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmStatisticsItem::DspmStatisticsItem() :
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_descHasBeenSet(false)
{
}

CoreInternalOutcome DspmStatisticsItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmStatisticsItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmStatisticsItem.Value` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetInt64();
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmStatisticsItem.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmStatisticsItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

}


string DspmStatisticsItem::GetName() const
{
    return m_name;
}

void DspmStatisticsItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DspmStatisticsItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DspmStatisticsItem::GetValue() const
{
    return m_value;
}

void DspmStatisticsItem::SetValue(const int64_t& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool DspmStatisticsItem::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string DspmStatisticsItem::GetDesc() const
{
    return m_desc;
}

void DspmStatisticsItem::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool DspmStatisticsItem::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

