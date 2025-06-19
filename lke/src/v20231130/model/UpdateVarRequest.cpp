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

#include <tencentcloud/lke/v20231130/model/UpdateVarRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

UpdateVarRequest::UpdateVarRequest() :
    m_appBizIdHasBeenSet(false),
    m_varIdHasBeenSet(false),
    m_varNameHasBeenSet(false),
    m_varDescHasBeenSet(false),
    m_varTypeHasBeenSet(false),
    m_varDefaultValueHasBeenSet(false),
    m_varDefaultFileNameHasBeenSet(false)
{
}

string UpdateVarRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_varIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VarId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_varId.c_str(), allocator).Move(), allocator);
    }

    if (m_varNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VarName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_varName.c_str(), allocator).Move(), allocator);
    }

    if (m_varDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VarDesc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_varDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_varTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VarType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_varType.c_str(), allocator).Move(), allocator);
    }

    if (m_varDefaultValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VarDefaultValue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_varDefaultValue.c_str(), allocator).Move(), allocator);
    }

    if (m_varDefaultFileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VarDefaultFileName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_varDefaultFileName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateVarRequest::GetAppBizId() const
{
    return m_appBizId;
}

void UpdateVarRequest::SetAppBizId(const string& _appBizId)
{
    m_appBizId = _appBizId;
    m_appBizIdHasBeenSet = true;
}

bool UpdateVarRequest::AppBizIdHasBeenSet() const
{
    return m_appBizIdHasBeenSet;
}

string UpdateVarRequest::GetVarId() const
{
    return m_varId;
}

void UpdateVarRequest::SetVarId(const string& _varId)
{
    m_varId = _varId;
    m_varIdHasBeenSet = true;
}

bool UpdateVarRequest::VarIdHasBeenSet() const
{
    return m_varIdHasBeenSet;
}

string UpdateVarRequest::GetVarName() const
{
    return m_varName;
}

void UpdateVarRequest::SetVarName(const string& _varName)
{
    m_varName = _varName;
    m_varNameHasBeenSet = true;
}

bool UpdateVarRequest::VarNameHasBeenSet() const
{
    return m_varNameHasBeenSet;
}

string UpdateVarRequest::GetVarDesc() const
{
    return m_varDesc;
}

void UpdateVarRequest::SetVarDesc(const string& _varDesc)
{
    m_varDesc = _varDesc;
    m_varDescHasBeenSet = true;
}

bool UpdateVarRequest::VarDescHasBeenSet() const
{
    return m_varDescHasBeenSet;
}

string UpdateVarRequest::GetVarType() const
{
    return m_varType;
}

void UpdateVarRequest::SetVarType(const string& _varType)
{
    m_varType = _varType;
    m_varTypeHasBeenSet = true;
}

bool UpdateVarRequest::VarTypeHasBeenSet() const
{
    return m_varTypeHasBeenSet;
}

string UpdateVarRequest::GetVarDefaultValue() const
{
    return m_varDefaultValue;
}

void UpdateVarRequest::SetVarDefaultValue(const string& _varDefaultValue)
{
    m_varDefaultValue = _varDefaultValue;
    m_varDefaultValueHasBeenSet = true;
}

bool UpdateVarRequest::VarDefaultValueHasBeenSet() const
{
    return m_varDefaultValueHasBeenSet;
}

string UpdateVarRequest::GetVarDefaultFileName() const
{
    return m_varDefaultFileName;
}

void UpdateVarRequest::SetVarDefaultFileName(const string& _varDefaultFileName)
{
    m_varDefaultFileName = _varDefaultFileName;
    m_varDefaultFileNameHasBeenSet = true;
}

bool UpdateVarRequest::VarDefaultFileNameHasBeenSet() const
{
    return m_varDefaultFileNameHasBeenSet;
}


