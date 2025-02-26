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

#include <tencentcloud/lowcode/v20210108/model/RelationField.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

RelationField::RelationField() :
    m_fieldHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_relateDataSourceNameHasBeenSet(false)
{
}

CoreInternalOutcome RelationField::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Field") && !value["Field"].IsNull())
    {
        if (!value["Field"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelationField.Field` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_field = string(value["Field"].GetString());
        m_fieldHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelationField.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("RelateDataSourceName") && !value["RelateDataSourceName"].IsNull())
    {
        if (!value["RelateDataSourceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RelationField.RelateDataSourceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relateDataSourceName = string(value["RelateDataSourceName"].GetString());
        m_relateDataSourceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RelationField::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Field";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_field.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_relateDataSourceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelateDataSourceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relateDataSourceName.c_str(), allocator).Move(), allocator);
    }

}


string RelationField::GetField() const
{
    return m_field;
}

void RelationField::SetField(const string& _field)
{
    m_field = _field;
    m_fieldHasBeenSet = true;
}

bool RelationField::FieldHasBeenSet() const
{
    return m_fieldHasBeenSet;
}

string RelationField::GetFormat() const
{
    return m_format;
}

void RelationField::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool RelationField::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string RelationField::GetRelateDataSourceName() const
{
    return m_relateDataSourceName;
}

void RelationField::SetRelateDataSourceName(const string& _relateDataSourceName)
{
    m_relateDataSourceName = _relateDataSourceName;
    m_relateDataSourceNameHasBeenSet = true;
}

bool RelationField::RelateDataSourceNameHasBeenSet() const
{
    return m_relateDataSourceNameHasBeenSet;
}

