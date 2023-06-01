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

#include <tencentcloud/cms/v20190321/model/CodeDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cms::V20190321::Model;
using namespace std;

CodeDetail::CodeDetail() :
    m_strCharsetHasBeenSet(false),
    m_qrCodePositionHasBeenSet(false),
    m_strQrCodeTextHasBeenSet(false),
    m_uint32QrCodeTypeHasBeenSet(false),
    m_codeCharsetHasBeenSet(false),
    m_codePositionHasBeenSet(false),
    m_codeTextHasBeenSet(false),
    m_codeTypeHasBeenSet(false)
{
}

CoreInternalOutcome CodeDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("StrCharset") && !value["StrCharset"].IsNull())
    {
        if (!value["StrCharset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeDetail.StrCharset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strCharset = string(value["StrCharset"].GetString());
        m_strCharsetHasBeenSet = true;
    }

    if (value.HasMember("QrCodePosition") && !value["QrCodePosition"].IsNull())
    {
        if (!value["QrCodePosition"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CodeDetail.QrCodePosition` is not array type"));

        const rapidjson::Value &tmpValue = value["QrCodePosition"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CodePosition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_qrCodePosition.push_back(item);
        }
        m_qrCodePositionHasBeenSet = true;
    }

    if (value.HasMember("StrQrCodeText") && !value["StrQrCodeText"].IsNull())
    {
        if (!value["StrQrCodeText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeDetail.StrQrCodeText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strQrCodeText = string(value["StrQrCodeText"].GetString());
        m_strQrCodeTextHasBeenSet = true;
    }

    if (value.HasMember("Uint32QrCodeType") && !value["Uint32QrCodeType"].IsNull())
    {
        if (!value["Uint32QrCodeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CodeDetail.Uint32QrCodeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_uint32QrCodeType = value["Uint32QrCodeType"].GetInt64();
        m_uint32QrCodeTypeHasBeenSet = true;
    }

    if (value.HasMember("CodeCharset") && !value["CodeCharset"].IsNull())
    {
        if (!value["CodeCharset"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeDetail.CodeCharset` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeCharset = string(value["CodeCharset"].GetString());
        m_codeCharsetHasBeenSet = true;
    }

    if (value.HasMember("CodePosition") && !value["CodePosition"].IsNull())
    {
        if (!value["CodePosition"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CodeDetail.CodePosition` is not array type"));

        const rapidjson::Value &tmpValue = value["CodePosition"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CodePosition item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_codePosition.push_back(item);
        }
        m_codePositionHasBeenSet = true;
    }

    if (value.HasMember("CodeText") && !value["CodeText"].IsNull())
    {
        if (!value["CodeText"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CodeDetail.CodeText` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_codeText = string(value["CodeText"].GetString());
        m_codeTextHasBeenSet = true;
    }

    if (value.HasMember("CodeType") && !value["CodeType"].IsNull())
    {
        if (!value["CodeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CodeDetail.CodeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_codeType = value["CodeType"].GetInt64();
        m_codeTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CodeDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_strCharsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrCharset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strCharset.c_str(), allocator).Move(), allocator);
    }

    if (m_qrCodePositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QrCodePosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_qrCodePosition.begin(); itr != m_qrCodePosition.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_strQrCodeTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrQrCodeText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strQrCodeText.c_str(), allocator).Move(), allocator);
    }

    if (m_uint32QrCodeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uint32QrCodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_uint32QrCodeType, allocator);
    }

    if (m_codeCharsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeCharset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeCharset.c_str(), allocator).Move(), allocator);
    }

    if (m_codePositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodePosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_codePosition.begin(); itr != m_codePosition.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_codeTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeText";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_codeText.c_str(), allocator).Move(), allocator);
    }

    if (m_codeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_codeType, allocator);
    }

}


string CodeDetail::GetStrCharset() const
{
    return m_strCharset;
}

void CodeDetail::SetStrCharset(const string& _strCharset)
{
    m_strCharset = _strCharset;
    m_strCharsetHasBeenSet = true;
}

bool CodeDetail::StrCharsetHasBeenSet() const
{
    return m_strCharsetHasBeenSet;
}

vector<CodePosition> CodeDetail::GetQrCodePosition() const
{
    return m_qrCodePosition;
}

void CodeDetail::SetQrCodePosition(const vector<CodePosition>& _qrCodePosition)
{
    m_qrCodePosition = _qrCodePosition;
    m_qrCodePositionHasBeenSet = true;
}

bool CodeDetail::QrCodePositionHasBeenSet() const
{
    return m_qrCodePositionHasBeenSet;
}

string CodeDetail::GetStrQrCodeText() const
{
    return m_strQrCodeText;
}

void CodeDetail::SetStrQrCodeText(const string& _strQrCodeText)
{
    m_strQrCodeText = _strQrCodeText;
    m_strQrCodeTextHasBeenSet = true;
}

bool CodeDetail::StrQrCodeTextHasBeenSet() const
{
    return m_strQrCodeTextHasBeenSet;
}

int64_t CodeDetail::GetUint32QrCodeType() const
{
    return m_uint32QrCodeType;
}

void CodeDetail::SetUint32QrCodeType(const int64_t& _uint32QrCodeType)
{
    m_uint32QrCodeType = _uint32QrCodeType;
    m_uint32QrCodeTypeHasBeenSet = true;
}

bool CodeDetail::Uint32QrCodeTypeHasBeenSet() const
{
    return m_uint32QrCodeTypeHasBeenSet;
}

string CodeDetail::GetCodeCharset() const
{
    return m_codeCharset;
}

void CodeDetail::SetCodeCharset(const string& _codeCharset)
{
    m_codeCharset = _codeCharset;
    m_codeCharsetHasBeenSet = true;
}

bool CodeDetail::CodeCharsetHasBeenSet() const
{
    return m_codeCharsetHasBeenSet;
}

vector<CodePosition> CodeDetail::GetCodePosition() const
{
    return m_codePosition;
}

void CodeDetail::SetCodePosition(const vector<CodePosition>& _codePosition)
{
    m_codePosition = _codePosition;
    m_codePositionHasBeenSet = true;
}

bool CodeDetail::CodePositionHasBeenSet() const
{
    return m_codePositionHasBeenSet;
}

string CodeDetail::GetCodeText() const
{
    return m_codeText;
}

void CodeDetail::SetCodeText(const string& _codeText)
{
    m_codeText = _codeText;
    m_codeTextHasBeenSet = true;
}

bool CodeDetail::CodeTextHasBeenSet() const
{
    return m_codeTextHasBeenSet;
}

int64_t CodeDetail::GetCodeType() const
{
    return m_codeType;
}

void CodeDetail::SetCodeType(const int64_t& _codeType)
{
    m_codeType = _codeType;
    m_codeTypeHasBeenSet = true;
}

bool CodeDetail::CodeTypeHasBeenSet() const
{
    return m_codeTypeHasBeenSet;
}

