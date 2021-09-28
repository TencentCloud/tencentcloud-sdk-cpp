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

#include <tencentcloud/dlc/v20210125/model/Column.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

Column::Column() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_precisionHasBeenSet(false),
    m_scaleHasBeenSet(false),
    m_nullableHasBeenSet(false)
{
}

CoreInternalOutcome Column::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Column.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Column.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Column.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Precision") && !value["Precision"].IsNull())
    {
        if (!value["Precision"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Column.Precision` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_precision = value["Precision"].GetInt64();
        m_precisionHasBeenSet = true;
    }

    if (value.HasMember("Scale") && !value["Scale"].IsNull())
    {
        if (!value["Scale"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Column.Scale` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scale = value["Scale"].GetInt64();
        m_scaleHasBeenSet = true;
    }

    if (value.HasMember("Nullable") && !value["Nullable"].IsNull())
    {
        if (!value["Nullable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Column.Nullable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nullable = string(value["Nullable"].GetString());
        m_nullableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Column::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_precisionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Precision";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_precision, allocator);
    }

    if (m_scaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scale";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scale, allocator);
    }

    if (m_nullableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Nullable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nullable.c_str(), allocator).Move(), allocator);
    }

}


string Column::GetName() const
{
    return m_name;
}

void Column::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Column::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Column::GetType() const
{
    return m_type;
}

void Column::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool Column::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string Column::GetComment() const
{
    return m_comment;
}

void Column::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool Column::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

int64_t Column::GetPrecision() const
{
    return m_precision;
}

void Column::SetPrecision(const int64_t& _precision)
{
    m_precision = _precision;
    m_precisionHasBeenSet = true;
}

bool Column::PrecisionHasBeenSet() const
{
    return m_precisionHasBeenSet;
}

int64_t Column::GetScale() const
{
    return m_scale;
}

void Column::SetScale(const int64_t& _scale)
{
    m_scale = _scale;
    m_scaleHasBeenSet = true;
}

bool Column::ScaleHasBeenSet() const
{
    return m_scaleHasBeenSet;
}

string Column::GetNullable() const
{
    return m_nullable;
}

void Column::SetNullable(const string& _nullable)
{
    m_nullable = _nullable;
    m_nullableHasBeenSet = true;
}

bool Column::NullableHasBeenSet() const
{
    return m_nullableHasBeenSet;
}

