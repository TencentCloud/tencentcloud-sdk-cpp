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

#include <tencentcloud/oceanus/v20190422/model/CreateVariableRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

CreateVariableRequest::CreateVariableRequest() :
    m_nameHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_workSpaceIdHasBeenSet(false),
    m_valueTypeHasBeenSet(false),
    m_secretRegionHasBeenSet(false),
    m_secretNameHasBeenSet(false),
    m_secretVersionIdHasBeenSet(false),
    m_secretValueMd5HasBeenSet(false)
{
}

string CreateVariableRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_type, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_workSpaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkSpaceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workSpaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_valueTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ValueType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_valueType, allocator);
    }

    if (m_secretRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_secretNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretName.c_str(), allocator).Move(), allocator);
    }

    if (m_secretVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretVersionId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_secretValueMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretValueMd5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_secretValueMd5.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateVariableRequest::GetName() const
{
    return m_name;
}

void CreateVariableRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateVariableRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateVariableRequest::GetValue() const
{
    return m_value;
}

void CreateVariableRequest::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool CreateVariableRequest::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

int64_t CreateVariableRequest::GetType() const
{
    return m_type;
}

void CreateVariableRequest::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateVariableRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateVariableRequest::GetRemark() const
{
    return m_remark;
}

void CreateVariableRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateVariableRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateVariableRequest::GetWorkSpaceId() const
{
    return m_workSpaceId;
}

void CreateVariableRequest::SetWorkSpaceId(const string& _workSpaceId)
{
    m_workSpaceId = _workSpaceId;
    m_workSpaceIdHasBeenSet = true;
}

bool CreateVariableRequest::WorkSpaceIdHasBeenSet() const
{
    return m_workSpaceIdHasBeenSet;
}

int64_t CreateVariableRequest::GetValueType() const
{
    return m_valueType;
}

void CreateVariableRequest::SetValueType(const int64_t& _valueType)
{
    m_valueType = _valueType;
    m_valueTypeHasBeenSet = true;
}

bool CreateVariableRequest::ValueTypeHasBeenSet() const
{
    return m_valueTypeHasBeenSet;
}

string CreateVariableRequest::GetSecretRegion() const
{
    return m_secretRegion;
}

void CreateVariableRequest::SetSecretRegion(const string& _secretRegion)
{
    m_secretRegion = _secretRegion;
    m_secretRegionHasBeenSet = true;
}

bool CreateVariableRequest::SecretRegionHasBeenSet() const
{
    return m_secretRegionHasBeenSet;
}

string CreateVariableRequest::GetSecretName() const
{
    return m_secretName;
}

void CreateVariableRequest::SetSecretName(const string& _secretName)
{
    m_secretName = _secretName;
    m_secretNameHasBeenSet = true;
}

bool CreateVariableRequest::SecretNameHasBeenSet() const
{
    return m_secretNameHasBeenSet;
}

string CreateVariableRequest::GetSecretVersionId() const
{
    return m_secretVersionId;
}

void CreateVariableRequest::SetSecretVersionId(const string& _secretVersionId)
{
    m_secretVersionId = _secretVersionId;
    m_secretVersionIdHasBeenSet = true;
}

bool CreateVariableRequest::SecretVersionIdHasBeenSet() const
{
    return m_secretVersionIdHasBeenSet;
}

string CreateVariableRequest::GetSecretValueMd5() const
{
    return m_secretValueMd5;
}

void CreateVariableRequest::SetSecretValueMd5(const string& _secretValueMd5)
{
    m_secretValueMd5 = _secretValueMd5;
    m_secretValueMd5HasBeenSet = true;
}

bool CreateVariableRequest::SecretValueMd5HasBeenSet() const
{
    return m_secretValueMd5HasBeenSet;
}


