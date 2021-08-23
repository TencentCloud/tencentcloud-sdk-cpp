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

#include <tencentcloud/tcaplusdb/v20190823/model/FieldInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcaplusdb::V20190823::Model;
using namespace std;

FieldInfo::FieldInfo() :
    m_fieldNameHasBeenSet(false),
    m_isPrimaryKeyHasBeenSet(false),
    m_fieldTypeHasBeenSet(false),
    m_fieldSizeHasBeenSet(false)
{
}

CoreInternalOutcome FieldInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FieldName") && !value["FieldName"].IsNull())
    {
        if (!value["FieldName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldInfo.FieldName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldName = string(value["FieldName"].GetString());
        m_fieldNameHasBeenSet = true;
    }

    if (value.HasMember("IsPrimaryKey") && !value["IsPrimaryKey"].IsNull())
    {
        if (!value["IsPrimaryKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldInfo.IsPrimaryKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isPrimaryKey = string(value["IsPrimaryKey"].GetString());
        m_isPrimaryKeyHasBeenSet = true;
    }

    if (value.HasMember("FieldType") && !value["FieldType"].IsNull())
    {
        if (!value["FieldType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FieldInfo.FieldType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fieldType = string(value["FieldType"].GetString());
        m_fieldTypeHasBeenSet = true;
    }

    if (value.HasMember("FieldSize") && !value["FieldSize"].IsNull())
    {
        if (!value["FieldSize"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `FieldInfo.FieldSize` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fieldSize = value["FieldSize"].GetInt64();
        m_fieldSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FieldInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fieldNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldName.c_str(), allocator).Move(), allocator);
    }

    if (m_isPrimaryKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsPrimaryKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isPrimaryKey.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fieldType.c_str(), allocator).Move(), allocator);
    }

    if (m_fieldSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fieldSize, allocator);
    }

}


string FieldInfo::GetFieldName() const
{
    return m_fieldName;
}

void FieldInfo::SetFieldName(const string& _fieldName)
{
    m_fieldName = _fieldName;
    m_fieldNameHasBeenSet = true;
}

bool FieldInfo::FieldNameHasBeenSet() const
{
    return m_fieldNameHasBeenSet;
}

string FieldInfo::GetIsPrimaryKey() const
{
    return m_isPrimaryKey;
}

void FieldInfo::SetIsPrimaryKey(const string& _isPrimaryKey)
{
    m_isPrimaryKey = _isPrimaryKey;
    m_isPrimaryKeyHasBeenSet = true;
}

bool FieldInfo::IsPrimaryKeyHasBeenSet() const
{
    return m_isPrimaryKeyHasBeenSet;
}

string FieldInfo::GetFieldType() const
{
    return m_fieldType;
}

void FieldInfo::SetFieldType(const string& _fieldType)
{
    m_fieldType = _fieldType;
    m_fieldTypeHasBeenSet = true;
}

bool FieldInfo::FieldTypeHasBeenSet() const
{
    return m_fieldTypeHasBeenSet;
}

int64_t FieldInfo::GetFieldSize() const
{
    return m_fieldSize;
}

void FieldInfo::SetFieldSize(const int64_t& _fieldSize)
{
    m_fieldSize = _fieldSize;
    m_fieldSizeHasBeenSet = true;
}

bool FieldInfo::FieldSizeHasBeenSet() const
{
    return m_fieldSizeHasBeenSet;
}

