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

#include <tencentcloud/wedata/v20210820/model/SourceFieldInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SourceFieldInfo::SourceFieldInfo() :
    m_fieldNameHasBeenSet(false),
    m_fieldTypeHasBeenSet(false),
    m_aliasHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

CoreInternalOutcome SourceFieldInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FieldName") && !value["FieldName"].IsNull())
    {
        if (!value["FieldName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceFieldInfo.FieldName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldName = string(value["FieldName"].GetString());
        m_fieldNameHasBeenSet = true;
    }

    if (value.HasMember("FieldType") && !value["FieldType"].IsNull())
    {
        if (!value["FieldType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceFieldInfo.FieldType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldType = string(value["FieldType"].GetString());
        m_fieldTypeHasBeenSet = true;
    }

    if (value.HasMember("Alias") && !value["Alias"].IsNull())
    {
        if (!value["Alias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceFieldInfo.Alias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alias = string(value["Alias"].GetString());
        m_aliasHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceFieldInfo.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SourceFieldInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldName.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldType.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Alias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alias.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

}


string SourceFieldInfo::GetFieldName() const
{
    return m_fieldName;
}

void SourceFieldInfo::SetFieldName(const string& _fieldName)
{
    m_fieldName = _fieldName;
    m_fieldNameHasBeenSet = true;
}

bool SourceFieldInfo::FieldNameHasBeenSet() const
{
    return m_fieldNameHasBeenSet;
}

string SourceFieldInfo::GetFieldType() const
{
    return m_fieldType;
}

void SourceFieldInfo::SetFieldType(const string& _fieldType)
{
    m_fieldType = _fieldType;
    m_fieldTypeHasBeenSet = true;
}

bool SourceFieldInfo::FieldTypeHasBeenSet() const
{
    return m_fieldTypeHasBeenSet;
}

string SourceFieldInfo::GetAlias() const
{
    return m_alias;
}

void SourceFieldInfo::SetAlias(const string& _alias)
{
    m_alias = _alias;
    m_aliasHasBeenSet = true;
}

bool SourceFieldInfo::AliasHasBeenSet() const
{
    return m_aliasHasBeenSet;
}

string SourceFieldInfo::GetComment() const
{
    return m_comment;
}

void SourceFieldInfo::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool SourceFieldInfo::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

