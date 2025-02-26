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

#include <tencentcloud/lowcode/v20210108/model/KnowledgeSplitterPreprocess.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

KnowledgeSplitterPreprocess::KnowledgeSplitterPreprocess() :
    m_appendTitleToChunkHasBeenSet(false),
    m_appendKeywordsToChunkHasBeenSet(false)
{
}

CoreInternalOutcome KnowledgeSplitterPreprocess::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppendTitleToChunk") && !value["AppendTitleToChunk"].IsNull())
    {
        if (!value["AppendTitleToChunk"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeSplitterPreprocess.AppendTitleToChunk` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_appendTitleToChunk = value["AppendTitleToChunk"].GetBool();
        m_appendTitleToChunkHasBeenSet = true;
    }

    if (value.HasMember("AppendKeywordsToChunk") && !value["AppendKeywordsToChunk"].IsNull())
    {
        if (!value["AppendKeywordsToChunk"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KnowledgeSplitterPreprocess.AppendKeywordsToChunk` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_appendKeywordsToChunk = value["AppendKeywordsToChunk"].GetBool();
        m_appendKeywordsToChunkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KnowledgeSplitterPreprocess::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appendTitleToChunkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppendTitleToChunk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appendTitleToChunk, allocator);
    }

    if (m_appendKeywordsToChunkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppendKeywordsToChunk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appendKeywordsToChunk, allocator);
    }

}


bool KnowledgeSplitterPreprocess::GetAppendTitleToChunk() const
{
    return m_appendTitleToChunk;
}

void KnowledgeSplitterPreprocess::SetAppendTitleToChunk(const bool& _appendTitleToChunk)
{
    m_appendTitleToChunk = _appendTitleToChunk;
    m_appendTitleToChunkHasBeenSet = true;
}

bool KnowledgeSplitterPreprocess::AppendTitleToChunkHasBeenSet() const
{
    return m_appendTitleToChunkHasBeenSet;
}

bool KnowledgeSplitterPreprocess::GetAppendKeywordsToChunk() const
{
    return m_appendKeywordsToChunk;
}

void KnowledgeSplitterPreprocess::SetAppendKeywordsToChunk(const bool& _appendKeywordsToChunk)
{
    m_appendKeywordsToChunk = _appendKeywordsToChunk;
    m_appendKeywordsToChunkHasBeenSet = true;
}

bool KnowledgeSplitterPreprocess::AppendKeywordsToChunkHasBeenSet() const
{
    return m_appendKeywordsToChunkHasBeenSet;
}

