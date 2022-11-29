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

#include <tencentcloud/tcm/v20210413/model/DescribeAccessLogConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

DescribeAccessLogConfigResponse::DescribeAccessLogConfigResponse() :
    m_fileHasBeenSet(false),
    m_formatHasBeenSet(false),
    m_encodingHasBeenSet(false),
    m_selectedRangeHasBeenSet(false),
    m_templateHasBeenSet(false),
    m_cLSHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_enableServerHasBeenSet(false),
    m_enableStdoutHasBeenSet(false),
    m_enableHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAccessLogConfigResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("File") && !rsp["File"].IsNull())
    {
        if (!rsp["File"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `File` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_file = string(rsp["File"].GetString());
        m_fileHasBeenSet = true;
    }

    if (rsp.HasMember("Format") && !rsp["Format"].IsNull())
    {
        if (!rsp["Format"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Format` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_format = string(rsp["Format"].GetString());
        m_formatHasBeenSet = true;
    }

    if (rsp.HasMember("Encoding") && !rsp["Encoding"].IsNull())
    {
        if (!rsp["Encoding"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Encoding` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encoding = string(rsp["Encoding"].GetString());
        m_encodingHasBeenSet = true;
    }

    if (rsp.HasMember("SelectedRange") && !rsp["SelectedRange"].IsNull())
    {
        if (!rsp["SelectedRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SelectedRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_selectedRange.Deserialize(rsp["SelectedRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_selectedRangeHasBeenSet = true;
    }

    if (rsp.HasMember("Template") && !rsp["Template"].IsNull())
    {
        if (!rsp["Template"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Template` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_template = string(rsp["Template"].GetString());
        m_templateHasBeenSet = true;
    }

    if (rsp.HasMember("CLS") && !rsp["CLS"].IsNull())
    {
        if (!rsp["CLS"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CLS` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cLS.Deserialize(rsp["CLS"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cLSHasBeenSet = true;
    }

    if (rsp.HasMember("Address") && !rsp["Address"].IsNull())
    {
        if (!rsp["Address"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Address` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_address = string(rsp["Address"].GetString());
        m_addressHasBeenSet = true;
    }

    if (rsp.HasMember("EnableServer") && !rsp["EnableServer"].IsNull())
    {
        if (!rsp["EnableServer"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnableServer` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableServer = rsp["EnableServer"].GetBool();
        m_enableServerHasBeenSet = true;
    }

    if (rsp.HasMember("EnableStdout") && !rsp["EnableStdout"].IsNull())
    {
        if (!rsp["EnableStdout"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnableStdout` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableStdout = rsp["EnableStdout"].GetBool();
        m_enableStdoutHasBeenSet = true;
    }

    if (rsp.HasMember("Enable") && !rsp["Enable"].IsNull())
    {
        if (!rsp["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = rsp["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAccessLogConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_fileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "File";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_file.c_str(), allocator).Move(), allocator);
    }

    if (m_formatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Format";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_format.c_str(), allocator).Move(), allocator);
    }

    if (m_encodingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Encoding";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encoding.c_str(), allocator).Move(), allocator);
    }

    if (m_selectedRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SelectedRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_selectedRange.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_templateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Template";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_template.c_str(), allocator).Move(), allocator);
    }

    if (m_cLSHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLS";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cLS.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeAccessLogConfigResponse::GetFile() const
{
    return m_file;
}

bool DescribeAccessLogConfigResponse::FileHasBeenSet() const
{
    return m_fileHasBeenSet;
}

string DescribeAccessLogConfigResponse::GetFormat() const
{
    return m_format;
}

bool DescribeAccessLogConfigResponse::FormatHasBeenSet() const
{
    return m_formatHasBeenSet;
}

string DescribeAccessLogConfigResponse::GetEncoding() const
{
    return m_encoding;
}

bool DescribeAccessLogConfigResponse::EncodingHasBeenSet() const
{
    return m_encodingHasBeenSet;
}

SelectedRange DescribeAccessLogConfigResponse::GetSelectedRange() const
{
    return m_selectedRange;
}

bool DescribeAccessLogConfigResponse::SelectedRangeHasBeenSet() const
{
    return m_selectedRangeHasBeenSet;
}

string DescribeAccessLogConfigResponse::GetTemplate() const
{
    return m_template;
}

bool DescribeAccessLogConfigResponse::TemplateHasBeenSet() const
{
    return m_templateHasBeenSet;
}

CLS DescribeAccessLogConfigResponse::GetCLS() const
{
    return m_cLS;
}

bool DescribeAccessLogConfigResponse::CLSHasBeenSet() const
{
    return m_cLSHasBeenSet;
}

string DescribeAccessLogConfigResponse::GetAddress() const
{
    return m_address;
}

bool DescribeAccessLogConfigResponse::AddressHasBeenSet() const
{
    return m_addressHasBeenSet;
}

bool DescribeAccessLogConfigResponse::GetEnableServer() const
{
    return m_enableServer;
}

bool DescribeAccessLogConfigResponse::EnableServerHasBeenSet() const
{
    return m_enableServerHasBeenSet;
}

bool DescribeAccessLogConfigResponse::GetEnableStdout() const
{
    return m_enableStdout;
}

bool DescribeAccessLogConfigResponse::EnableStdoutHasBeenSet() const
{
    return m_enableStdoutHasBeenSet;
}

bool DescribeAccessLogConfigResponse::GetEnable() const
{
    return m_enable;
}

bool DescribeAccessLogConfigResponse::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}


