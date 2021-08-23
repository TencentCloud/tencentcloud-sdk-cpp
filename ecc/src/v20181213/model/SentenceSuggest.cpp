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

#include <tencentcloud/ecc/v20181213/model/SentenceSuggest.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ecc::V20181213::Model;
using namespace std;

SentenceSuggest::SentenceSuggest() :
    m_typeHasBeenSet(false),
    m_errorTypeHasBeenSet(false),
    m_originHasBeenSet(false),
    m_replaceHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_errorPositionHasBeenSet(false),
    m_errorCoordinatesHasBeenSet(false)
{
}

CoreInternalOutcome SentenceSuggest::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceSuggest.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("ErrorType") && !value["ErrorType"].IsNull())
    {
        if (!value["ErrorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceSuggest.ErrorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorType = string(value["ErrorType"].GetString());
        m_errorTypeHasBeenSet = true;
    }

    if (value.HasMember("Origin") && !value["Origin"].IsNull())
    {
        if (!value["Origin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceSuggest.Origin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_origin = string(value["Origin"].GetString());
        m_originHasBeenSet = true;
    }

    if (value.HasMember("Replace") && !value["Replace"].IsNull())
    {
        if (!value["Replace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceSuggest.Replace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replace = string(value["Replace"].GetString());
        m_replaceHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SentenceSuggest.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("ErrorPosition") && !value["ErrorPosition"].IsNull())
    {
        if (!value["ErrorPosition"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SentenceSuggest.ErrorPosition` is not array type"));

        const rapidjson::Value &tmpValue = value["ErrorPosition"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_errorPosition.push_back((*itr).GetInt64());
        }
        m_errorPositionHasBeenSet = true;
    }

    if (value.HasMember("ErrorCoordinates") && !value["ErrorCoordinates"].IsNull())
    {
        if (!value["ErrorCoordinates"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SentenceSuggest.ErrorCoordinates` is not array type"));

        const rapidjson::Value &tmpValue = value["ErrorCoordinates"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ErrorCoordinate item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_errorCoordinates.push_back(item);
        }
        m_errorCoordinatesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SentenceSuggest::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_errorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorType.c_str(), allocator).Move(), allocator);
    }

    if (m_originHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Origin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_origin.c_str(), allocator).Move(), allocator);
    }

    if (m_replaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Replace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_replace.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_errorPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorPosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_errorPosition.begin(); itr != m_errorPosition.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_errorCoordinatesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorCoordinates";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_errorCoordinates.begin(); itr != m_errorCoordinates.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SentenceSuggest::GetType() const
{
    return m_type;
}

void SentenceSuggest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool SentenceSuggest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string SentenceSuggest::GetErrorType() const
{
    return m_errorType;
}

void SentenceSuggest::SetErrorType(const string& _errorType)
{
    m_errorType = _errorType;
    m_errorTypeHasBeenSet = true;
}

bool SentenceSuggest::ErrorTypeHasBeenSet() const
{
    return m_errorTypeHasBeenSet;
}

string SentenceSuggest::GetOrigin() const
{
    return m_origin;
}

void SentenceSuggest::SetOrigin(const string& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool SentenceSuggest::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

string SentenceSuggest::GetReplace() const
{
    return m_replace;
}

void SentenceSuggest::SetReplace(const string& _replace)
{
    m_replace = _replace;
    m_replaceHasBeenSet = true;
}

bool SentenceSuggest::ReplaceHasBeenSet() const
{
    return m_replaceHasBeenSet;
}

string SentenceSuggest::GetMessage() const
{
    return m_message;
}

void SentenceSuggest::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool SentenceSuggest::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

vector<int64_t> SentenceSuggest::GetErrorPosition() const
{
    return m_errorPosition;
}

void SentenceSuggest::SetErrorPosition(const vector<int64_t>& _errorPosition)
{
    m_errorPosition = _errorPosition;
    m_errorPositionHasBeenSet = true;
}

bool SentenceSuggest::ErrorPositionHasBeenSet() const
{
    return m_errorPositionHasBeenSet;
}

vector<ErrorCoordinate> SentenceSuggest::GetErrorCoordinates() const
{
    return m_errorCoordinates;
}

void SentenceSuggest::SetErrorCoordinates(const vector<ErrorCoordinate>& _errorCoordinates)
{
    m_errorCoordinates = _errorCoordinates;
    m_errorCoordinatesHasBeenSet = true;
}

bool SentenceSuggest::ErrorCoordinatesHasBeenSet() const
{
    return m_errorCoordinatesHasBeenSet;
}

