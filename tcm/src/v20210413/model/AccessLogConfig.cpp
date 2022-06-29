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

#include <tencentcloud/tcm/v20210413/model/AccessLogConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

AccessLogConfig::AccessLogConfig() :
    m_enableHasBeenSet(false),
    m_templateHasBeenSet(false),
    m_selectedRangeHasBeenSet(false),
    m_cLSHasBeenSet(false),
    m_encodingHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_enableServerHasBeenSet(false),
    m_enableStdoutHasBeenSet(false)
{
}

CoreInternalOutcome AccessLogConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Enable") && !value["Enable"].IsNull())
    {
        if (!value["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AccessLogConfig.Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = value["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (value.HasMember("Template") && !value["Template"].IsNull())
    {
        if (!value["Template"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessLogConfig.Template` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_template = string(value["Template"].GetString());
        m_templateHasBeenSet = true;
    }

    if (value.HasMember("SelectedRange") && !value["SelectedRange"].IsNull())
    {
        if (!value["SelectedRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccessLogConfig.SelectedRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_selectedRange.Deserialize(value["SelectedRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_selectedRangeHasBeenSet = true;
    }

    if (value.HasMember("CLS") && !value["CLS"].IsNull())
    {
        if (!value["CLS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `AccessLogConfig.CLS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cLS.Deserialize(value["CLS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cLSHasBeenSet = true;
    }

    if (value.HasMember("Encoding") && !value["Encoding"].IsNull())
    {
        if (!value["Encoding"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessLogConfig.Encoding` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encoding = string(value["Encoding"].GetString());
        m_encodingHasBeenSet = true;
    }

    if (value.HasMember("Format") && !value["Format"].IsNull())
    {
        if (!value["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessLogConfig.Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(value["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (value.HasMember("Address") && !value["Address"].IsNull())
    {
        if (!value["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccessLogConfig.Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(value["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (value.HasMember("EnableServer") && !value["EnableServer"].IsNull())
    {
        if (!value["EnableServer"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AccessLogConfig.EnableServer` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableServer = value["EnableServer"].GetBool();
        m_enableServerHasBeenSet = true;
    }

    if (value.HasMember("EnableStdout") && !value["EnableStdout"].IsNull())
    {
        if (!value["EnableStdout"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AccessLogConfig.EnableStdout` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableStdout = value["EnableStdout"].GetBool();
        m_enableStdoutHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccessLogConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_templateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Template";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_template.c_str(), allocator).Move(), allocator);
    }

    if (m_selectedRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_selectedRange.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cLSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cLS.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_encodingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encoding";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encoding.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_addressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Address";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_address.c_str(), allocator).Move(), allocator);
    }

    if (m_enableServerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableServer";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableServer, allocator);
    }

    if (m_enableStdoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableStdout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableStdout, allocator);
    }

}


bool AccessLogConfig::GetEnable() const
{
    return m_enable;
}

void AccessLogConfig::SetEnable(const bool& _enable)
{
    m_enable = _enable;
    m_enableHasBeenSet = true;
}

bool AccessLogConfig::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string AccessLogConfig::GetTemplate() const
{
    return m_template;
}

void AccessLogConfig::SetTemplate(const string& _template)
{
    m_template = _template;
    m_templateHasBeenSet = true;
}

bool AccessLogConfig::TemplateHasBeenSet() const
{
    return m_templateHasBeenSet;
}

SelectedRange AccessLogConfig::GetSelectedRange() const
{
    return m_selectedRange;
}

void AccessLogConfig::SetSelectedRange(const SelectedRange& _selectedRange)
{
    m_selectedRange = _selectedRange;
    m_selectedRangeHasBeenSet = true;
}

bool AccessLogConfig::SelectedRangeHasBeenSet() const
{
    return m_selectedRangeHasBeenSet;
}

CLS AccessLogConfig::GetCLS() const
{
    return m_cLS;
}

void AccessLogConfig::SetCLS(const CLS& _cLS)
{
    m_cLS = _cLS;
    m_cLSHasBeenSet = true;
}

bool AccessLogConfig::CLSHasBeenSet() const
{
    return m_cLSHasBeenSet;
}

string AccessLogConfig::GetEncoding() const
{
    return m_encoding;
}

void AccessLogConfig::SetEncoding(const string& _encoding)
{
    m_encoding = _encoding;
    m_encodingHasBeenSet = true;
}

bool AccessLogConfig::EncodingHasBeenSet() const
{
    return m_encodingHasBeenSet;
}

string AccessLogConfig::GetFormat() const
{
    return m_format;
}

void AccessLogConfig::SetFormat(const string& _format)
{
    m_format = _format;
    m_formatHasBeenSet = true;
}

bool AccessLogConfig::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string AccessLogConfig::GetAddress() const
{
    return m_address;
}

void AccessLogConfig::SetAddress(const string& _address)
{
    m_address = _address;
    m_addressHasBeenSet = true;
}

bool AccessLogConfig::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

bool AccessLogConfig::GetEnableServer() const
{
    return m_enableServer;
}

void AccessLogConfig::SetEnableServer(const bool& _enableServer)
{
    m_enableServer = _enableServer;
    m_enableServerHasBeenSet = true;
}

bool AccessLogConfig::EnableServerHasBeenSet() const
{
    return m_enableServerHasBeenSet;
}

bool AccessLogConfig::GetEnableStdout() const
{
    return m_enableStdout;
}

void AccessLogConfig::SetEnableStdout(const bool& _enableStdout)
{
    m_enableStdout = _enableStdout;
    m_enableStdoutHasBeenSet = true;
}

bool AccessLogConfig::EnableStdoutHasBeenSet() const
{
    return m_enableStdoutHasBeenSet;
}

