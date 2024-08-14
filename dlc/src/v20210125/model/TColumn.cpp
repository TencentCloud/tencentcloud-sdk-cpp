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

#include <tencentcloud/dlc/v20210125/model/TColumn.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

TColumn::TColumn() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_defaultHasBeenSet(false),
    m_notNullHasBeenSet(false),
    m_precisionHasBeenSet(false),
    m_scaleHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_isPartitionHasBeenSet(false)
{
}

CoreInternalOutcome TColumn::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TColumn.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TColumn.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TColumn.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Default") && !value["Default"].IsNull())
    {
        if (!value["Default"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TColumn.Default` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_default = string(value["Default"].GetString());
        m_defaultHasBeenSet = true;
    }

    if (value.HasMember("NotNull") && !value["NotNull"].IsNull())
    {
        if (!value["NotNull"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TColumn.NotNull` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_notNull = value["NotNull"].GetBool();
        m_notNullHasBeenSet = true;
    }

    if (value.HasMember("Precision") && !value["Precision"].IsNull())
    {
        if (!value["Precision"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TColumn.Precision` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_precision = value["Precision"].GetInt64();
        m_precisionHasBeenSet = true;
    }

    if (value.HasMember("Scale") && !value["Scale"].IsNull())
    {
        if (!value["Scale"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TColumn.Scale` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scale = value["Scale"].GetInt64();
        m_scaleHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TColumn.Position` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_position = value["Position"].GetInt64();
        m_positionHasBeenSet = true;
    }

    if (value.HasMember("IsPartition") && !value["IsPartition"].IsNull())
    {
        if (!value["IsPartition"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TColumn.IsPartition` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isPartition = value["IsPartition"].GetBool();
        m_isPartitionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TColumn::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_defaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Default";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_default.c_str(), allocator).Move(), allocator);
    }

    if (m_notNullHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotNull";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_notNull, allocator);
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

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_position, allocator);
    }

    if (m_isPartitionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPartition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isPartition, allocator);
    }

}


string TColumn::GetName() const
{
    return m_name;
}

void TColumn::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TColumn::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TColumn::GetType() const
{
    return m_type;
}

void TColumn::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool TColumn::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string TColumn::GetComment() const
{
    return m_comment;
}

void TColumn::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool TColumn::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string TColumn::GetDefault() const
{
    return m_default;
}

void TColumn::SetDefault(const string& _default)
{
    m_default = _default;
    m_defaultHasBeenSet = true;
}

bool TColumn::DefaultHasBeenSet() const
{
    return m_defaultHasBeenSet;
}

bool TColumn::GetNotNull() const
{
    return m_notNull;
}

void TColumn::SetNotNull(const bool& _notNull)
{
    m_notNull = _notNull;
    m_notNullHasBeenSet = true;
}

bool TColumn::NotNullHasBeenSet() const
{
    return m_notNullHasBeenSet;
}

int64_t TColumn::GetPrecision() const
{
    return m_precision;
}

void TColumn::SetPrecision(const int64_t& _precision)
{
    m_precision = _precision;
    m_precisionHasBeenSet = true;
}

bool TColumn::PrecisionHasBeenSet() const
{
    return m_precisionHasBeenSet;
}

int64_t TColumn::GetScale() const
{
    return m_scale;
}

void TColumn::SetScale(const int64_t& _scale)
{
    m_scale = _scale;
    m_scaleHasBeenSet = true;
}

bool TColumn::ScaleHasBeenSet() const
{
    return m_scaleHasBeenSet;
}

int64_t TColumn::GetPosition() const
{
    return m_position;
}

void TColumn::SetPosition(const int64_t& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool TColumn::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

bool TColumn::GetIsPartition() const
{
    return m_isPartition;
}

void TColumn::SetIsPartition(const bool& _isPartition)
{
    m_isPartition = _isPartition;
    m_isPartitionHasBeenSet = true;
}

bool TColumn::IsPartitionHasBeenSet() const
{
    return m_isPartitionHasBeenSet;
}

