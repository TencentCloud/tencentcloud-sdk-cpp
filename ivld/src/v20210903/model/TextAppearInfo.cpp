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

#include <tencentcloud/ivld/v20210903/model/TextAppearInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

TextAppearInfo::TextAppearInfo() :
    m_indexHasBeenSet(false),
    m_startPositionHasBeenSet(false),
    m_endPositionHasBeenSet(false)
{
}

CoreInternalOutcome TextAppearInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Index") && !value["Index"].IsNull())
    {
        if (!value["Index"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextAppearInfo.Index` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_index = value["Index"].GetInt64();
        m_indexHasBeenSet = true;
    }

    if (value.HasMember("StartPosition") && !value["StartPosition"].IsNull())
    {
        if (!value["StartPosition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextAppearInfo.StartPosition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startPosition = value["StartPosition"].GetInt64();
        m_startPositionHasBeenSet = true;
    }

    if (value.HasMember("EndPosition") && !value["EndPosition"].IsNull())
    {
        if (!value["EndPosition"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TextAppearInfo.EndPosition` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_endPosition = value["EndPosition"].GetInt64();
        m_endPositionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TextAppearInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_indexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Index";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_index, allocator);
    }

    if (m_startPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartPosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startPosition, allocator);
    }

    if (m_endPositionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPosition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endPosition, allocator);
    }

}


int64_t TextAppearInfo::GetIndex() const
{
    return m_index;
}

void TextAppearInfo::SetIndex(const int64_t& _index)
{
    m_index = _index;
    m_indexHasBeenSet = true;
}

bool TextAppearInfo::IndexHasBeenSet() const
{
    return m_indexHasBeenSet;
}

int64_t TextAppearInfo::GetStartPosition() const
{
    return m_startPosition;
}

void TextAppearInfo::SetStartPosition(const int64_t& _startPosition)
{
    m_startPosition = _startPosition;
    m_startPositionHasBeenSet = true;
}

bool TextAppearInfo::StartPositionHasBeenSet() const
{
    return m_startPositionHasBeenSet;
}

int64_t TextAppearInfo::GetEndPosition() const
{
    return m_endPosition;
}

void TextAppearInfo::SetEndPosition(const int64_t& _endPosition)
{
    m_endPosition = _endPosition;
    m_endPositionHasBeenSet = true;
}

bool TextAppearInfo::EndPositionHasBeenSet() const
{
    return m_endPositionHasBeenSet;
}

