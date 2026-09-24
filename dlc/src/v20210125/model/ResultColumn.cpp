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

#include <tencentcloud/dlc/v20210125/model/ResultColumn.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

ResultColumn::ResultColumn() :
    m_nameHasBeenSet(false),
    m_dataTypeHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_nullableHasBeenSet(false)
{
}

CoreInternalOutcome ResultColumn::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultColumn.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("DataType") && !value["DataType"].IsNull())
    {
        if (!value["DataType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultColumn.DataType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataType = string(value["DataType"].GetString());
        m_dataTypeHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResultColumn.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Nullable") && !value["Nullable"].IsNull())
    {
        if (!value["Nullable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ResultColumn.Nullable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_nullable = value["Nullable"].GetBool();
        m_nullableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResultColumn::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_dataTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataType.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_nullableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nullable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nullable, allocator);
    }

}


string ResultColumn::GetName() const
{
    return m_name;
}

void ResultColumn::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ResultColumn::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ResultColumn::GetDataType() const
{
    return m_dataType;
}

void ResultColumn::SetDataType(const string& _dataType)
{
    m_dataType = _dataType;
    m_dataTypeHasBeenSet = true;
}

bool ResultColumn::DataTypeHasBeenSet() const
{
    return m_dataTypeHasBeenSet;
}

string ResultColumn::GetComment() const
{
    return m_comment;
}

void ResultColumn::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool ResultColumn::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

bool ResultColumn::GetNullable() const
{
    return m_nullable;
}

void ResultColumn::SetNullable(const bool& _nullable)
{
    m_nullable = _nullable;
    m_nullableHasBeenSet = true;
}

bool ResultColumn::NullableHasBeenSet() const
{
    return m_nullableHasBeenSet;
}

