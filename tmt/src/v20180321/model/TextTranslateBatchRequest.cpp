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

#include <tencentcloud/tmt/v20180321/model/TextTranslateBatchRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tmt::V20180321::Model;
using namespace rapidjson;
using namespace std;

TextTranslateBatchRequest::TextTranslateBatchRequest() :
    m_sourceHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_sourceTextListHasBeenSet(false)
{
}

string TextTranslateBatchRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sourceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_targetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Target";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_target.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_projectId, allocator);
    }

    if (m_sourceTextListHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SourceTextList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_sourceTextList.begin(); itr != m_sourceTextList.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string TextTranslateBatchRequest::GetSource() const
{
    return m_source;
}

void TextTranslateBatchRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool TextTranslateBatchRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string TextTranslateBatchRequest::GetTarget() const
{
    return m_target;
}

void TextTranslateBatchRequest::SetTarget(const string& _target)
{
    m_target = _target;
    m_targetHasBeenSet = true;
}

bool TextTranslateBatchRequest::TargetHasBeenSet() const
{
    return m_targetHasBeenSet;
}

int64_t TextTranslateBatchRequest::GetProjectId() const
{
    return m_projectId;
}

void TextTranslateBatchRequest::SetProjectId(const int64_t& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool TextTranslateBatchRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<string> TextTranslateBatchRequest::GetSourceTextList() const
{
    return m_sourceTextList;
}

void TextTranslateBatchRequest::SetSourceTextList(const vector<string>& _sourceTextList)
{
    m_sourceTextList = _sourceTextList;
    m_sourceTextListHasBeenSet = true;
}

bool TextTranslateBatchRequest::SourceTextListHasBeenSet() const
{
    return m_sourceTextListHasBeenSet;
}


