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

#include <tencentcloud/vcg/v20240404/model/SubmitVideoStylizationJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vcg::V20240404::Model;
using namespace std;

SubmitVideoStylizationJobRequest::SubmitVideoStylizationJobRequest() :
    m_styleIdHasBeenSet(false),
    m_videoUrlHasBeenSet(false)
{
}

string SubmitVideoStylizationJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_styleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StyleId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_styleId.c_str(), allocator).Move(), allocator);
    }

    if (m_videoUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_videoUrl.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SubmitVideoStylizationJobRequest::GetStyleId() const
{
    return m_styleId;
}

void SubmitVideoStylizationJobRequest::SetStyleId(const string& _styleId)
{
    m_styleId = _styleId;
    m_styleIdHasBeenSet = true;
}

bool SubmitVideoStylizationJobRequest::StyleIdHasBeenSet() const
{
    return m_styleIdHasBeenSet;
}

string SubmitVideoStylizationJobRequest::GetVideoUrl() const
{
    return m_videoUrl;
}

void SubmitVideoStylizationJobRequest::SetVideoUrl(const string& _videoUrl)
{
    m_videoUrl = _videoUrl;
    m_videoUrlHasBeenSet = true;
}

bool SubmitVideoStylizationJobRequest::VideoUrlHasBeenSet() const
{
    return m_videoUrlHasBeenSet;
}


