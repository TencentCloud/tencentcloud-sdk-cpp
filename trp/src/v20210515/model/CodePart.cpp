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

#include <tencentcloud/trp/v20210515/model/CodePart.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

CodePart::CodePart() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_lengthHasBeenSet(false),
    m_extHasBeenSet(false)
{
}

CoreInternalOutcome CodePart::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodePart.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodePart.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodePart.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Length") && !value["Length"].IsNull())
    {
        if (!value["Length"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CodePart.Length` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_length = value["Length"].GetUint64();
        m_lengthHasBeenSet = true;
    }

    if (value.HasMember("Ext") && !value["Ext"].IsNull())
    {
        if (!value["Ext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodePart.Ext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ext = string(value["Ext"].GetString());
        m_extHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CodePart::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_lengthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Length";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_length, allocator);
    }

    if (m_extHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ext.c_str(), allocator).Move(), allocator);
    }

}


string CodePart::GetName() const
{
    return m_name;
}

void CodePart::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CodePart::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CodePart::GetType() const
{
    return m_type;
}

void CodePart::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CodePart::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CodePart::GetValue() const
{
    return m_value;
}

void CodePart::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool CodePart::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

uint64_t CodePart::GetLength() const
{
    return m_length;
}

void CodePart::SetLength(const uint64_t& _length)
{
    m_length = _length;
    m_lengthHasBeenSet = true;
}

bool CodePart::LengthHasBeenSet() const
{
    return m_lengthHasBeenSet;
}

string CodePart::GetExt() const
{
    return m_ext;
}

void CodePart::SetExt(const string& _ext)
{
    m_ext = _ext;
    m_extHasBeenSet = true;
}

bool CodePart::ExtHasBeenSet() const
{
    return m_extHasBeenSet;
}

