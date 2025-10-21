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

#include <tencentcloud/emr/v20190103/model/ConfigurationItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

ConfigurationItem::ConfigurationItem() :
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_inFileHasBeenSet(false)
{
}

CoreInternalOutcome ConfigurationItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigurationItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigurationItem.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("InFile") && !value["InFile"].IsNull())
    {
        if (!value["InFile"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigurationItem.InFile` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inFile = string(value["InFile"].GetString());
        m_inFileHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigurationItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_inFileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InFile";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inFile.c_str(), allocator).Move(), allocator);
    }

}


string ConfigurationItem::GetName() const
{
    return m_name;
}

void ConfigurationItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ConfigurationItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ConfigurationItem::GetValue() const
{
    return m_value;
}

void ConfigurationItem::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool ConfigurationItem::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string ConfigurationItem::GetInFile() const
{
    return m_inFile;
}

void ConfigurationItem::SetInFile(const string& _inFile)
{
    m_inFile = _inFile;
    m_inFileHasBeenSet = true;
}

bool ConfigurationItem::InFileHasBeenSet() const
{
    return m_inFileHasBeenSet;
}

