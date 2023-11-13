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

#include <tencentcloud/faceid/v20180301/model/DetectAIFakeFacesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Faceid::V20180301::Model;
using namespace std;

DetectAIFakeFacesRequest::DetectAIFakeFacesRequest() :
    m_faceInputHasBeenSet(false),
    m_faceInputTypeHasBeenSet(false)
{
}

string DetectAIFakeFacesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_faceInputHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceInput";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_faceInput.c_str(), allocator).Move(), allocator);
    }

    if (m_faceInputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceInputType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_faceInputType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DetectAIFakeFacesRequest::GetFaceInput() const
{
    return m_faceInput;
}

void DetectAIFakeFacesRequest::SetFaceInput(const string& _faceInput)
{
    m_faceInput = _faceInput;
    m_faceInputHasBeenSet = true;
}

bool DetectAIFakeFacesRequest::FaceInputHasBeenSet() const
{
    return m_faceInputHasBeenSet;
}

int64_t DetectAIFakeFacesRequest::GetFaceInputType() const
{
    return m_faceInputType;
}

void DetectAIFakeFacesRequest::SetFaceInputType(const int64_t& _faceInputType)
{
    m_faceInputType = _faceInputType;
    m_faceInputTypeHasBeenSet = true;
}

bool DetectAIFakeFacesRequest::FaceInputTypeHasBeenSet() const
{
    return m_faceInputTypeHasBeenSet;
}


