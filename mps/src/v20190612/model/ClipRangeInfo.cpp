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

#include <tencentcloud/mps/v20190612/model/ClipRangeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

ClipRangeInfo::ClipRangeInfo() :
    m_typeHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_startOffsetHasBeenSet(false),
    m_endOffsetHasBeenSet(false)
{
}

CoreInternalOutcome ClipRangeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClipRangeInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClipRangeInfo.Offset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetUint64();
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("StartOffset") && !value["StartOffset"].IsNull())
    {
        if (!value["StartOffset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClipRangeInfo.StartOffset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startOffset = value["StartOffset"].GetUint64();
        m_startOffsetHasBeenSet = true;
    }

    if (value.HasMember("EndOffset") && !value["EndOffset"].IsNull())
    {
        if (!value["EndOffset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ClipRangeInfo.EndOffset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endOffset = value["EndOffset"].GetUint64();
        m_endOffsetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClipRangeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_startOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startOffset, allocator);
    }

    if (m_endOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endOffset, allocator);
    }

}


string ClipRangeInfo::GetType() const
{
    return m_type;
}

void ClipRangeInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ClipRangeInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t ClipRangeInfo::GetOffset() const
{
    return m_offset;
}

void ClipRangeInfo::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ClipRangeInfo::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t ClipRangeInfo::GetStartOffset() const
{
    return m_startOffset;
}

void ClipRangeInfo::SetStartOffset(const uint64_t& _startOffset)
{
    m_startOffset = _startOffset;
    m_startOffsetHasBeenSet = true;
}

bool ClipRangeInfo::StartOffsetHasBeenSet() const
{
    return m_startOffsetHasBeenSet;
}

uint64_t ClipRangeInfo::GetEndOffset() const
{
    return m_endOffset;
}

void ClipRangeInfo::SetEndOffset(const uint64_t& _endOffset)
{
    m_endOffset = _endOffset;
    m_endOffsetHasBeenSet = true;
}

bool ClipRangeInfo::EndOffsetHasBeenSet() const
{
    return m_endOffsetHasBeenSet;
}

