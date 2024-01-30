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

#include <tencentcloud/bi/v20220105/model/ErrorInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

ErrorInfo::ErrorInfo() :
    m_errorTipHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_errorLevelHasBeenSet(false),
    m_docLinkHasBeenSet(false),
    m_fAQHasBeenSet(false),
    m_reservedFieldHasBeenSet(false)
{
}

CoreInternalOutcome ErrorInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ErrorTip") && !value["ErrorTip"].IsNull())
    {
        if (!value["ErrorTip"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorInfo.ErrorTip` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorTip = string(value["ErrorTip"].GetString());
        m_errorTipHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorInfo.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("ErrorLevel") && !value["ErrorLevel"].IsNull())
    {
        if (!value["ErrorLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorInfo.ErrorLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorLevel = string(value["ErrorLevel"].GetString());
        m_errorLevelHasBeenSet = true;
    }

    if (value.HasMember("DocLink") && !value["DocLink"].IsNull())
    {
        if (!value["DocLink"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorInfo.DocLink` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docLink = string(value["DocLink"].GetString());
        m_docLinkHasBeenSet = true;
    }

    if (value.HasMember("FAQ") && !value["FAQ"].IsNull())
    {
        if (!value["FAQ"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorInfo.FAQ` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fAQ = string(value["FAQ"].GetString());
        m_fAQHasBeenSet = true;
    }

    if (value.HasMember("ReservedField") && !value["ReservedField"].IsNull())
    {
        if (!value["ReservedField"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ErrorInfo.ReservedField` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reservedField = string(value["ReservedField"].GetString());
        m_reservedFieldHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ErrorInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_errorTipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorTip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorTip.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_errorLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_docLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocLink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docLink.c_str(), allocator).Move(), allocator);
    }

    if (m_fAQHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FAQ";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fAQ.c_str(), allocator).Move(), allocator);
    }

    if (m_reservedFieldHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedField";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reservedField.c_str(), allocator).Move(), allocator);
    }

}


string ErrorInfo::GetErrorTip() const
{
    return m_errorTip;
}

void ErrorInfo::SetErrorTip(const string& _errorTip)
{
    m_errorTip = _errorTip;
    m_errorTipHasBeenSet = true;
}

bool ErrorInfo::ErrorTipHasBeenSet() const
{
    return m_errorTipHasBeenSet;
}

string ErrorInfo::GetErrorMessage() const
{
    return m_errorMessage;
}

void ErrorInfo::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool ErrorInfo::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

string ErrorInfo::GetErrorLevel() const
{
    return m_errorLevel;
}

void ErrorInfo::SetErrorLevel(const string& _errorLevel)
{
    m_errorLevel = _errorLevel;
    m_errorLevelHasBeenSet = true;
}

bool ErrorInfo::ErrorLevelHasBeenSet() const
{
    return m_errorLevelHasBeenSet;
}

string ErrorInfo::GetDocLink() const
{
    return m_docLink;
}

void ErrorInfo::SetDocLink(const string& _docLink)
{
    m_docLink = _docLink;
    m_docLinkHasBeenSet = true;
}

bool ErrorInfo::DocLinkHasBeenSet() const
{
    return m_docLinkHasBeenSet;
}

string ErrorInfo::GetFAQ() const
{
    return m_fAQ;
}

void ErrorInfo::SetFAQ(const string& _fAQ)
{
    m_fAQ = _fAQ;
    m_fAQHasBeenSet = true;
}

bool ErrorInfo::FAQHasBeenSet() const
{
    return m_fAQHasBeenSet;
}

string ErrorInfo::GetReservedField() const
{
    return m_reservedField;
}

void ErrorInfo::SetReservedField(const string& _reservedField)
{
    m_reservedField = _reservedField;
    m_reservedFieldHasBeenSet = true;
}

bool ErrorInfo::ReservedFieldHasBeenSet() const
{
    return m_reservedFieldHasBeenSet;
}

