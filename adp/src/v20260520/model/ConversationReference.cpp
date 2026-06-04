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

#include <tencentcloud/adp/v20260520/model/ConversationReference.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ConversationReference::ConversationReference() :
    m_indexHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

CoreInternalOutcome ConversationReference::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationReference.Index` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetInt64();
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationReference.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationReference.Type` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetInt64();
        m_typeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConversationReference::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

}


int64_t ConversationReference::GetIndex() const
{
    return m_index;
}

void ConversationReference::SetIndex(const int64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool ConversationReference::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

string ConversationReference::GetName() const
{
    return m_name;
}

void ConversationReference::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ConversationReference::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ConversationReference::GetType() const
{
    return m_type;
}

void ConversationReference::SetType(const int64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ConversationReference::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

