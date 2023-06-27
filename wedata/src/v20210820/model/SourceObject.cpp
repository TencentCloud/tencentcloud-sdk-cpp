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

#include <tencentcloud/wedata/v20210820/model/SourceObject.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

SourceObject::SourceObject() :
    m_sourceObjectDataTypeNameHasBeenSet(false),
    m_sourceObjectValueHasBeenSet(false),
    m_objectDataTypeNameHasBeenSet(false),
    m_objectValueHasBeenSet(false),
    m_objectTypeHasBeenSet(false)
{
}

CoreInternalOutcome SourceObject::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceObjectDataTypeName") && !value["SourceObjectDataTypeName"].IsNull())
    {
        if (!value["SourceObjectDataTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceObject.SourceObjectDataTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceObjectDataTypeName = string(value["SourceObjectDataTypeName"].GetString());
        m_sourceObjectDataTypeNameHasBeenSet = true;
    }

    if (value.HasMember("SourceObjectValue") && !value["SourceObjectValue"].IsNull())
    {
        if (!value["SourceObjectValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceObject.SourceObjectValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceObjectValue = string(value["SourceObjectValue"].GetString());
        m_sourceObjectValueHasBeenSet = true;
    }

    if (value.HasMember("ObjectDataTypeName") && !value["ObjectDataTypeName"].IsNull())
    {
        if (!value["ObjectDataTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceObject.ObjectDataTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectDataTypeName = string(value["ObjectDataTypeName"].GetString());
        m_objectDataTypeNameHasBeenSet = true;
    }

    if (value.HasMember("ObjectValue") && !value["ObjectValue"].IsNull())
    {
        if (!value["ObjectValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceObject.ObjectValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectValue = string(value["ObjectValue"].GetString());
        m_objectValueHasBeenSet = true;
    }

    if (value.HasMember("ObjectType") && !value["ObjectType"].IsNull())
    {
        if (!value["ObjectType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceObject.ObjectType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_objectType = value["ObjectType"].GetUint64();
        m_objectTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SourceObject::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceObjectDataTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceObjectDataTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceObjectDataTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceObjectValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceObjectValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceObjectValue.c_str(), allocator).Move(), allocator);
    }

    if (m_objectDataTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectDataTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectDataTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_objectValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectValue.c_str(), allocator).Move(), allocator);
    }

    if (m_objectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_objectType, allocator);
    }

}


string SourceObject::GetSourceObjectDataTypeName() const
{
    return m_sourceObjectDataTypeName;
}

void SourceObject::SetSourceObjectDataTypeName(const string& _sourceObjectDataTypeName)
{
    m_sourceObjectDataTypeName = _sourceObjectDataTypeName;
    m_sourceObjectDataTypeNameHasBeenSet = true;
}

bool SourceObject::SourceObjectDataTypeNameHasBeenSet() const
{
    return m_sourceObjectDataTypeNameHasBeenSet;
}

string SourceObject::GetSourceObjectValue() const
{
    return m_sourceObjectValue;
}

void SourceObject::SetSourceObjectValue(const string& _sourceObjectValue)
{
    m_sourceObjectValue = _sourceObjectValue;
    m_sourceObjectValueHasBeenSet = true;
}

bool SourceObject::SourceObjectValueHasBeenSet() const
{
    return m_sourceObjectValueHasBeenSet;
}

string SourceObject::GetObjectDataTypeName() const
{
    return m_objectDataTypeName;
}

void SourceObject::SetObjectDataTypeName(const string& _objectDataTypeName)
{
    m_objectDataTypeName = _objectDataTypeName;
    m_objectDataTypeNameHasBeenSet = true;
}

bool SourceObject::ObjectDataTypeNameHasBeenSet() const
{
    return m_objectDataTypeNameHasBeenSet;
}

string SourceObject::GetObjectValue() const
{
    return m_objectValue;
}

void SourceObject::SetObjectValue(const string& _objectValue)
{
    m_objectValue = _objectValue;
    m_objectValueHasBeenSet = true;
}

bool SourceObject::ObjectValueHasBeenSet() const
{
    return m_objectValueHasBeenSet;
}

uint64_t SourceObject::GetObjectType() const
{
    return m_objectType;
}

void SourceObject::SetObjectType(const uint64_t& _objectType)
{
    m_objectType = _objectType;
    m_objectTypeHasBeenSet = true;
}

bool SourceObject::ObjectTypeHasBeenSet() const
{
    return m_objectTypeHasBeenSet;
}

