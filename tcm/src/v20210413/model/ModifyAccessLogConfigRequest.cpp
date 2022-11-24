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

#include <tencentcloud/tcm/v20210413/model/ModifyAccessLogConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

ModifyAccessLogConfigRequest::ModifyAccessLogConfigRequest() :
    m_meshIdHasBeenSet(false),
    m_selectedRangeHasBeenSet(false),
    m_templateHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_cLSHasBeenSet(false),
    m_encodingHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_enableStdoutHasBeenSet(false),
    m_enableServerHasBeenSet(false),
    m_addressHasBeenSet(false)
{
}

string ModifyAccessLogConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_meshIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MeshId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_meshId.c_str(), allocator).Move(), allocator);
    }

    if (m_selectedRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedRange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_selectedRange.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_templateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Template";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_template.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enable, allocator);
    }

    if (m_cLSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLS";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cLS.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_encodingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encoding";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encoding.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_enableStdoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableStdout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableStdout, allocator);
    }

    if (m_enableServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableServer";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableServer, allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAccessLogConfigRequest::GetMeshId() const
{
    return m_meshId;
}

void ModifyAccessLogConfigRequest::SetMeshId(const string& _meshId)
{
    m_meshId = _meshId;
    m_meshIdHasBeenSet = true;
}

bool ModifyAccessLogConfigRequest::MeshIdHasBeenSet() const
{
    return m_meshIdHasBeenSet;
}

SelectedRange ModifyAccessLogConfigRequest::GetSelectedRange() const
{
    return m_selectedRange;
}

void ModifyAccessLogConfigRequest::SetSelectedRange(const SelectedRange& _selectedRange)
{
    m_selectedRange = _selectedRange;
    m_selectedRangeHasBeenSet = true;
}

bool ModifyAccessLogConfigRequest::SelectedRangeHasBeenSet() const
{
    return m_selectedRangeHasBeenSet;
}

string ModifyAccessLogConfigRequest::GetTemplate() const
{
    return m_template;
}

void ModifyAccessLogConfigRequest::SetTemplate(const string& _template)
{
    m_template = _template;
    m_templateHasBeenSet = true;
}

bool ModifyAccessLogConfigRequest::TemplateHasBeenSet() const
{
    return m_templateHasBeenSet;
}

bool ModifyAccessLogConfigRequest::GetEnable() const
{
    return m_enable;
}

void ModifyAccessLogConfigRequest::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool ModifyAccessLogConfigRequest::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

CLS ModifyAccessLogConfigRequest::GetCLS() const
{
    return m_cLS;
}

void ModifyAccessLogConfigRequest::SetCLS(const CLS& _cLS)
{
    m_cLS = _cLS;
    m_cLSHasBeenSet = true;
}

bool ModifyAccessLogConfigRequest::CLSHasBeenSet() const
{
    return m_cLSHasBeenSet;
}

string ModifyAccessLogConfigRequest::GetEncoding() const
{
    return m_encoding;
}

void ModifyAccessLogConfigRequest::SetEncoding(const string& _encoding)
{
    m_encoding = _encoding;
    m_encodingHasBeenSet = true;
}

bool ModifyAccessLogConfigRequest::EncodingHasBeenSet() const
{
    return m_encodingHasBeenSet;
}

string ModifyAccessLogConfigRequest::GetFormat() const
{
    return m_format;
}

void ModifyAccessLogConfigRequest::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool ModifyAccessLogConfigRequest::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

bool ModifyAccessLogConfigRequest::GetEnableStdout() const
{
    return m_enableStdout;
}

void ModifyAccessLogConfigRequest::SetEnableStdout(const bool& _enableStdout)
{
    m_enableStdout = _enableStdout;
    m_enableStdoutHasBeenSet = true;
}

bool ModifyAccessLogConfigRequest::EnableStdoutHasBeenSet() const
{
    return m_enableStdoutHasBeenSet;
}

bool ModifyAccessLogConfigRequest::GetEnableServer() const
{
    return m_enableServer;
}

void ModifyAccessLogConfigRequest::SetEnableServer(const bool& _enableServer)
{
    m_enableServer = _enableServer;
    m_enableServerHasBeenSet = true;
}

bool ModifyAccessLogConfigRequest::EnableServerHasBeenSet() const
{
    return m_enableServerHasBeenSet;
}

string ModifyAccessLogConfigRequest::GetAddress() const
{
    return m_address;
}

void ModifyAccessLogConfigRequest::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool ModifyAccessLogConfigRequest::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}


