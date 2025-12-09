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

#include <tencentcloud/wedata/v20210820/model/DimTableLink.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DimTableLink::DimTableLink() :
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_tableGuidHasBeenSet(false),
    m_tableNameHasBeenSet(false)
{
}

CoreInternalOutcome DimTableLink::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DimTableLink.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DimTableLink.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("TableGuid") && !value["TableGuid"].IsNull())
    {
        if (!value["TableGuid"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DimTableLink.TableGuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableGuid = string(value["TableGuid"].GetString());
        m_tableGuidHasBeenSet = true;
    }

    if (value.HasMember("TableName") && !value["TableName"].IsNull())
    {
        if (!value["TableName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DimTableLink.TableName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tableName = string(value["TableName"].GetString());
        m_tableNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DimTableLink::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_tableGuidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableGuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableGuid.c_str(), allocator).Move(), allocator);
    }

    if (m_tableNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tableName.c_str(), allocator).Move(), allocator);
    }

}


string DimTableLink::GetKey() const
{
    return m_key;
}

void DimTableLink::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool DimTableLink::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string DimTableLink::GetValue() const
{
    return m_value;
}

void DimTableLink::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool DimTableLink::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string DimTableLink::GetTableGuid() const
{
    return m_tableGuid;
}

void DimTableLink::SetTableGuid(const string& _tableGuid)
{
    m_tableGuid = _tableGuid;
    m_tableGuidHasBeenSet = true;
}

bool DimTableLink::TableGuidHasBeenSet() const
{
    return m_tableGuidHasBeenSet;
}

string DimTableLink::GetTableName() const
{
    return m_tableName;
}

void DimTableLink::SetTableName(const string& _tableName)
{
    m_tableName = _tableName;
    m_tableNameHasBeenSet = true;
}

bool DimTableLink::TableNameHasBeenSet() const
{
    return m_tableNameHasBeenSet;
}

