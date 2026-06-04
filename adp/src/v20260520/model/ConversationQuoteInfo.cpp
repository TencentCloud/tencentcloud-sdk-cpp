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

#include <tencentcloud/adp/v20260520/model/ConversationQuoteInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

ConversationQuoteInfo::ConversationQuoteInfo() :
    m_indexHasBeenSet(false),
    m_positionHasBeenSet(false)
{
}

CoreInternalOutcome ConversationQuoteInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationQuoteInfo.Index` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetInt64();
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("Position") && !value["Position"].IsNull())
    {
        if (!value["Position"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ConversationQuoteInfo.Position` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_position = value["Position"].GetInt64();
        m_positionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConversationQuoteInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

    if (m_positionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_position, allocator);
    }

}


int64_t ConversationQuoteInfo::GetIndex() const
{
    return m_index;
}

void ConversationQuoteInfo::SetIndex(const int64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool ConversationQuoteInfo::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

int64_t ConversationQuoteInfo::GetPosition() const
{
    return m_position;
}

void ConversationQuoteInfo::SetPosition(const int64_t& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool ConversationQuoteInfo::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

