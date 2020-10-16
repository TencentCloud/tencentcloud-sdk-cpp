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

#include <tencentcloud/faceid/v20180301/model/GetFaceIdResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace rapidjson;
using namespace std;

GetFaceIdResultRequest::GetFaceIdResultRequest() :
    m_faceIdTokenHasBeenSet(false),
    m_isNeedVideoHasBeenSet(false),
    m_isNeedBestFrameHasBeenSet(false)
{
}

string GetFaceIdResultRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_faceIdTokenHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FaceIdToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_faceIdToken.c_str(), allocator).Move(), allocator);
    }

    if (m_isNeedVideoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsNeedVideo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isNeedVideo, allocator);
    }

    if (m_isNeedBestFrameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsNeedBestFrame";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isNeedBestFrame, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string GetFaceIdResultRequest::GetFaceIdToken() const
{
    return m_faceIdToken;
}

void GetFaceIdResultRequest::SetFaceIdToken(const string& _faceIdToken)
{
    m_faceIdToken = _faceIdToken;
    m_faceIdTokenHasBeenSet = true;
}

bool GetFaceIdResultRequest::FaceIdTokenHasBeenSet() const
{
    return m_faceIdTokenHasBeenSet;
}

bool GetFaceIdResultRequest::GetIsNeedVideo() const
{
    return m_isNeedVideo;
}

void GetFaceIdResultRequest::SetIsNeedVideo(const bool& _isNeedVideo)
{
    m_isNeedVideo = _isNeedVideo;
    m_isNeedVideoHasBeenSet = true;
}

bool GetFaceIdResultRequest::IsNeedVideoHasBeenSet() const
{
    return m_isNeedVideoHasBeenSet;
}

bool GetFaceIdResultRequest::GetIsNeedBestFrame() const
{
    return m_isNeedBestFrame;
}

void GetFaceIdResultRequest::SetIsNeedBestFrame(const bool& _isNeedBestFrame)
{
    m_isNeedBestFrame = _isNeedBestFrame;
    m_isNeedBestFrameHasBeenSet = true;
}

bool GetFaceIdResultRequest::IsNeedBestFrameHasBeenSet() const
{
    return m_isNeedBestFrameHasBeenSet;
}


