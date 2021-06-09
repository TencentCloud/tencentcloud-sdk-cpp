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

#include <tencentcloud/ie/v20200304/model/CreateMediaProcessTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ie::V20200304::Model;
using namespace std;

CreateMediaProcessTaskRequest::CreateMediaProcessTaskRequest() :
    m_mediaProcessInfoHasBeenSet(false),
    m_sourceInfoSetHasBeenSet(false),
    m_saveInfoSetHasBeenSet(false),
    m_callbackInfoSetHasBeenSet(false)
{
}

string CreateMediaProcessTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mediaProcessInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediaProcessInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_mediaProcessInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sourceInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceInfoSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceInfoSet.begin(); itr != m_sourceInfoSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_saveInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaveInfoSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_saveInfoSet.begin(); itr != m_saveInfoSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_callbackInfoSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallbackInfoSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_callbackInfoSet.begin(); itr != m_callbackInfoSet.end(); ++itr, ++i)
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


MediaProcessInfo CreateMediaProcessTaskRequest::GetMediaProcessInfo() const
{
    return m_mediaProcessInfo;
}

void CreateMediaProcessTaskRequest::SetMediaProcessInfo(const MediaProcessInfo& _mediaProcessInfo)
{
    m_mediaProcessInfo = _mediaProcessInfo;
    m_mediaProcessInfoHasBeenSet = true;
}

bool CreateMediaProcessTaskRequest::MediaProcessInfoHasBeenSet() const
{
    return m_mediaProcessInfoHasBeenSet;
}

vector<MediaSourceInfo> CreateMediaProcessTaskRequest::GetSourceInfoSet() const
{
    return m_sourceInfoSet;
}

void CreateMediaProcessTaskRequest::SetSourceInfoSet(const vector<MediaSourceInfo>& _sourceInfoSet)
{
    m_sourceInfoSet = _sourceInfoSet;
    m_sourceInfoSetHasBeenSet = true;
}

bool CreateMediaProcessTaskRequest::SourceInfoSetHasBeenSet() const
{
    return m_sourceInfoSetHasBeenSet;
}

vector<SaveInfo> CreateMediaProcessTaskRequest::GetSaveInfoSet() const
{
    return m_saveInfoSet;
}

void CreateMediaProcessTaskRequest::SetSaveInfoSet(const vector<SaveInfo>& _saveInfoSet)
{
    m_saveInfoSet = _saveInfoSet;
    m_saveInfoSetHasBeenSet = true;
}

bool CreateMediaProcessTaskRequest::SaveInfoSetHasBeenSet() const
{
    return m_saveInfoSetHasBeenSet;
}

vector<CallbackInfo> CreateMediaProcessTaskRequest::GetCallbackInfoSet() const
{
    return m_callbackInfoSet;
}

void CreateMediaProcessTaskRequest::SetCallbackInfoSet(const vector<CallbackInfo>& _callbackInfoSet)
{
    m_callbackInfoSet = _callbackInfoSet;
    m_callbackInfoSetHasBeenSet = true;
}

bool CreateMediaProcessTaskRequest::CallbackInfoSetHasBeenSet() const
{
    return m_callbackInfoSetHasBeenSet;
}


