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

#include <tencentcloud/live/v20180801/model/CreateVideoRedrawTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

CreateVideoRedrawTaskRequest::CreateVideoRedrawTaskRequest() :
    m_inputHasBeenSet(false),
    m_cosInfoHasBeenSet(false)
{
}

string CreateVideoRedrawTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_inputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Input";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_input.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_cosInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CosInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cosInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


VideoRedrawInput CreateVideoRedrawTaskRequest::GetInput() const
{
    return m_input;
}

void CreateVideoRedrawTaskRequest::SetInput(const VideoRedrawInput& _input)
{
    m_input = _input;
    m_inputHasBeenSet = true;
}

bool CreateVideoRedrawTaskRequest::InputHasBeenSet() const
{
    return m_inputHasBeenSet;
}

VideoRedrawCosInfo CreateVideoRedrawTaskRequest::GetCosInfo() const
{
    return m_cosInfo;
}

void CreateVideoRedrawTaskRequest::SetCosInfo(const VideoRedrawCosInfo& _cosInfo)
{
    m_cosInfo = _cosInfo;
    m_cosInfoHasBeenSet = true;
}

bool CreateVideoRedrawTaskRequest::CosInfoHasBeenSet() const
{
    return m_cosInfoHasBeenSet;
}


