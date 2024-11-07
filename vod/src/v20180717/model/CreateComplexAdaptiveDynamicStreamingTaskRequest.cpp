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

#include <tencentcloud/vod/v20180717/model/CreateComplexAdaptiveDynamicStreamingTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

CreateComplexAdaptiveDynamicStreamingTaskRequest::CreateComplexAdaptiveDynamicStreamingTaskRequest() :
    m_subAppIdHasBeenSet(false),
    m_fileIdHasBeenSet(false),
    m_streamParaSetHasBeenSet(false),
    m_headTailSetHasBeenSet(false),
    m_audioSetHasBeenSet(false),
    m_subtitleSetHasBeenSet(false)
{
}

string CreateComplexAdaptiveDynamicStreamingTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_fileIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_fileId.c_str(), allocator).Move(), allocator);
    }

    if (m_streamParaSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StreamParaSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_streamParaSet.begin(); itr != m_streamParaSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_headTailSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadTailSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_headTailSet.begin(); itr != m_headTailSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_audioSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AudioSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_audioSet.begin(); itr != m_audioSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_subtitleSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubtitleSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subtitleSet.begin(); itr != m_subtitleSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t CreateComplexAdaptiveDynamicStreamingTaskRequest::GetSubAppId() const
{
    return m_subAppId;
}

void CreateComplexAdaptiveDynamicStreamingTaskRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool CreateComplexAdaptiveDynamicStreamingTaskRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string CreateComplexAdaptiveDynamicStreamingTaskRequest::GetFileId() const
{
    return m_fileId;
}

void CreateComplexAdaptiveDynamicStreamingTaskRequest::SetFileId(const string& _fileId)
{
    m_fileId = _fileId;
    m_fileIdHasBeenSet = true;
}

bool CreateComplexAdaptiveDynamicStreamingTaskRequest::FileIdHasBeenSet() const
{
    return m_fileIdHasBeenSet;
}

vector<ComplexAdaptiveDynamicStreamingTaskStreamPara> CreateComplexAdaptiveDynamicStreamingTaskRequest::GetStreamParaSet() const
{
    return m_streamParaSet;
}

void CreateComplexAdaptiveDynamicStreamingTaskRequest::SetStreamParaSet(const vector<ComplexAdaptiveDynamicStreamingTaskStreamPara>& _streamParaSet)
{
    m_streamParaSet = _streamParaSet;
    m_streamParaSetHasBeenSet = true;
}

bool CreateComplexAdaptiveDynamicStreamingTaskRequest::StreamParaSetHasBeenSet() const
{
    return m_streamParaSetHasBeenSet;
}

vector<HeadTailTaskInput> CreateComplexAdaptiveDynamicStreamingTaskRequest::GetHeadTailSet() const
{
    return m_headTailSet;
}

void CreateComplexAdaptiveDynamicStreamingTaskRequest::SetHeadTailSet(const vector<HeadTailTaskInput>& _headTailSet)
{
    m_headTailSet = _headTailSet;
    m_headTailSetHasBeenSet = true;
}

bool CreateComplexAdaptiveDynamicStreamingTaskRequest::HeadTailSetHasBeenSet() const
{
    return m_headTailSetHasBeenSet;
}

vector<ComplexAdaptiveDynamicStreamingTaskAudioInput> CreateComplexAdaptiveDynamicStreamingTaskRequest::GetAudioSet() const
{
    return m_audioSet;
}

void CreateComplexAdaptiveDynamicStreamingTaskRequest::SetAudioSet(const vector<ComplexAdaptiveDynamicStreamingTaskAudioInput>& _audioSet)
{
    m_audioSet = _audioSet;
    m_audioSetHasBeenSet = true;
}

bool CreateComplexAdaptiveDynamicStreamingTaskRequest::AudioSetHasBeenSet() const
{
    return m_audioSetHasBeenSet;
}

vector<ComplexAdaptiveDynamicStreamingTaskSubtitleInput> CreateComplexAdaptiveDynamicStreamingTaskRequest::GetSubtitleSet() const
{
    return m_subtitleSet;
}

void CreateComplexAdaptiveDynamicStreamingTaskRequest::SetSubtitleSet(const vector<ComplexAdaptiveDynamicStreamingTaskSubtitleInput>& _subtitleSet)
{
    m_subtitleSet = _subtitleSet;
    m_subtitleSetHasBeenSet = true;
}

bool CreateComplexAdaptiveDynamicStreamingTaskRequest::SubtitleSetHasBeenSet() const
{
    return m_subtitleSetHasBeenSet;
}


