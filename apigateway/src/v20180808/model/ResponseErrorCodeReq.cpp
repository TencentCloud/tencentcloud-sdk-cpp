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

#include <tencentcloud/apigateway/v20180808/model/ResponseErrorCodeReq.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

ResponseErrorCodeReq::ResponseErrorCodeReq() :
    m_codeHasBeenSet(false),
    m_msgHasBeenSet(false),
    m_descHasBeenSet(false),
    m_convertedCodeHasBeenSet(false),
    m_needConvertHasBeenSet(false)
{
}

CoreInternalOutcome ResponseErrorCodeReq::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Code") && !value["Code"].IsNull())
    {
        if (!value["Code"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResponseErrorCodeReq.Code` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_code = value["Code"].GetInt64();
        m_codeHasBeenSet = true;
    }

    if (value.HasMember("Msg") && !value["Msg"].IsNull())
    {
        if (!value["Msg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResponseErrorCodeReq.Msg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_msg = string(value["Msg"].GetString());
        m_msgHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResponseErrorCodeReq.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("ConvertedCode") && !value["ConvertedCode"].IsNull())
    {
        if (!value["ConvertedCode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResponseErrorCodeReq.ConvertedCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_convertedCode = value["ConvertedCode"].GetInt64();
        m_convertedCodeHasBeenSet = true;
    }

    if (value.HasMember("NeedConvert") && !value["NeedConvert"].IsNull())
    {
        if (!value["NeedConvert"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ResponseErrorCodeReq.NeedConvert` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needConvert = value["NeedConvert"].GetBool();
        m_needConvertHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResponseErrorCodeReq::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_codeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Code";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_code, allocator);
    }

    if (m_msgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Msg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_msg.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_convertedCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConvertedCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_convertedCode, allocator);
    }

    if (m_needConvertHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedConvert";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needConvert, allocator);
    }

}


int64_t ResponseErrorCodeReq::GetCode() const
{
    return m_code;
}

void ResponseErrorCodeReq::SetCode(const int64_t& _code)
{
    m_code = _code;
    m_codeHasBeenSet = true;
}

bool ResponseErrorCodeReq::CodeHasBeenSet() const
{
    return m_codeHasBeenSet;
}

string ResponseErrorCodeReq::GetMsg() const
{
    return m_msg;
}

void ResponseErrorCodeReq::SetMsg(const string& _msg)
{
    m_msg = _msg;
    m_msgHasBeenSet = true;
}

bool ResponseErrorCodeReq::MsgHasBeenSet() const
{
    return m_msgHasBeenSet;
}

string ResponseErrorCodeReq::GetDesc() const
{
    return m_desc;
}

void ResponseErrorCodeReq::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool ResponseErrorCodeReq::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

int64_t ResponseErrorCodeReq::GetConvertedCode() const
{
    return m_convertedCode;
}

void ResponseErrorCodeReq::SetConvertedCode(const int64_t& _convertedCode)
{
    m_convertedCode = _convertedCode;
    m_convertedCodeHasBeenSet = true;
}

bool ResponseErrorCodeReq::ConvertedCodeHasBeenSet() const
{
    return m_convertedCodeHasBeenSet;
}

bool ResponseErrorCodeReq::GetNeedConvert() const
{
    return m_needConvert;
}

void ResponseErrorCodeReq::SetNeedConvert(const bool& _needConvert)
{
    m_needConvert = _needConvert;
    m_needConvertHasBeenSet = true;
}

bool ResponseErrorCodeReq::NeedConvertHasBeenSet() const
{
    return m_needConvertHasBeenSet;
}

