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

#include <tencentcloud/vod/v20180717/model/FastEditMediaRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

FastEditMediaRequest::FastEditMediaRequest() :
    m_fileInfosHasBeenSet(false),
    m_clipModeHasBeenSet(false),
    m_subAppIdHasBeenSet(false)
{
}

string FastEditMediaRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileInfos";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_fileInfos.begin(); itr != m_fileInfos.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_clipModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClipMode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clipMode.c_str(), allocator).Move(), allocator);
    }

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_subAppId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<FastEditMediaFileInfo> FastEditMediaRequest::GetFileInfos() const
{
    return m_fileInfos;
}

void FastEditMediaRequest::SetFileInfos(const vector<FastEditMediaFileInfo>& _fileInfos)
{
    m_fileInfos = _fileInfos;
    m_fileInfosHasBeenSet = true;
}

bool FastEditMediaRequest::FileInfosHasBeenSet() const
{
    return m_fileInfosHasBeenSet;
}

string FastEditMediaRequest::GetClipMode() const
{
    return m_clipMode;
}

void FastEditMediaRequest::SetClipMode(const string& _clipMode)
{
    m_clipMode = _clipMode;
    m_clipModeHasBeenSet = true;
}

bool FastEditMediaRequest::ClipModeHasBeenSet() const
{
    return m_clipModeHasBeenSet;
}

uint64_t FastEditMediaRequest::GetSubAppId() const
{
    return m_subAppId;
}

void FastEditMediaRequest::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool FastEditMediaRequest::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}


