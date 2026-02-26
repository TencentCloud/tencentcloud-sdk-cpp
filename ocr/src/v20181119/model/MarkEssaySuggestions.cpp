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

#include <tencentcloud/ocr/v20181119/model/MarkEssaySuggestions.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

MarkEssaySuggestions::MarkEssaySuggestions() :
    m_iDHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_subTypeHasBeenSet(false),
    m_originHasBeenSet(false),
    m_replaceHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_positionsHasBeenSet(false)
{
}

CoreInternalOutcome MarkEssaySuggestions::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MarkEssaySuggestions.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MarkEssaySuggestions.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("SubType") && !value["SubType"].IsNull())
    {
        if (!value["SubType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MarkEssaySuggestions.SubType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subType = string(value["SubType"].GetString());
        m_subTypeHasBeenSet = true;
    }

    if (value.HasMember("Origin") && !value["Origin"].IsNull())
    {
        if (!value["Origin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MarkEssaySuggestions.Origin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_origin = string(value["Origin"].GetString());
        m_originHasBeenSet = true;
    }

    if (value.HasMember("Replace") && !value["Replace"].IsNull())
    {
        if (!value["Replace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MarkEssaySuggestions.Replace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_replace = string(value["Replace"].GetString());
        m_replaceHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MarkEssaySuggestions.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("Positions") && !value["Positions"].IsNull())
    {
        if (!value["Positions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MarkEssaySuggestions.Positions` is not array type"));

        const rapidjson::Value &tmpValue = value["Positions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Positions item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_positions.push_back(item);
        }
        m_positionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MarkEssaySuggestions::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_subTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subType.c_str(), allocator).Move(), allocator);
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

    if (m_positionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Positions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_positions.begin(); itr != m_positions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t MarkEssaySuggestions::GetID() const
{
    return m_iD;
}

void MarkEssaySuggestions::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool MarkEssaySuggestions::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string MarkEssaySuggestions::GetType() const
{
    return m_type;
}

void MarkEssaySuggestions::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool MarkEssaySuggestions::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string MarkEssaySuggestions::GetSubType() const
{
    return m_subType;
}

void MarkEssaySuggestions::SetSubType(const string& _subType)
{
    m_subType = _subType;
    m_subTypeHasBeenSet = true;
}

bool MarkEssaySuggestions::SubTypeHasBeenSet() const
{
    return m_subTypeHasBeenSet;
}

string MarkEssaySuggestions::GetOrigin() const
{
    return m_origin;
}

void MarkEssaySuggestions::SetOrigin(const string& _origin)
{
    m_origin = _origin;
    m_originHasBeenSet = true;
}

bool MarkEssaySuggestions::OriginHasBeenSet() const
{
    return m_originHasBeenSet;
}

string MarkEssaySuggestions::GetReplace() const
{
    return m_replace;
}

void MarkEssaySuggestions::SetReplace(const string& _replace)
{
    m_replace = _replace;
    m_replaceHasBeenSet = true;
}

bool MarkEssaySuggestions::ReplaceHasBeenSet() const
{
    return m_replaceHasBeenSet;
}

string MarkEssaySuggestions::GetMessage() const
{
    return m_message;
}

void MarkEssaySuggestions::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool MarkEssaySuggestions::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

vector<Positions> MarkEssaySuggestions::GetPositions() const
{
    return m_positions;
}

void MarkEssaySuggestions::SetPositions(const vector<Positions>& _positions)
{
    m_positions = _positions;
    m_positionsHasBeenSet = true;
}

bool MarkEssaySuggestions::PositionsHasBeenSet() const
{
    return m_positionsHasBeenSet;
}

