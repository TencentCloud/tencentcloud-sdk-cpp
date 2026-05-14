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

#include <tencentcloud/ai3d/v20250513/model/SubmitAutoRiggingJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ai3d::V20250513::Model;
using namespace std;

SubmitAutoRiggingJobRequest::SubmitAutoRiggingJobRequest() :
    m_file3DHasBeenSet(false),
    m_motionTypeHasBeenSet(false)
{
}

string SubmitAutoRiggingJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_file3DHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "File3D";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_file3D.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_motionTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MotionType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_motionType, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


InputFile3D SubmitAutoRiggingJobRequest::GetFile3D() const
{
    return m_file3D;
}

void SubmitAutoRiggingJobRequest::SetFile3D(const InputFile3D& _file3D)
{
    m_file3D = _file3D;
    m_file3DHasBeenSet = true;
}

bool SubmitAutoRiggingJobRequest::File3DHasBeenSet() const
{
    return m_file3DHasBeenSet;
}

int64_t SubmitAutoRiggingJobRequest::GetMotionType() const
{
    return m_motionType;
}

void SubmitAutoRiggingJobRequest::SetMotionType(const int64_t& _motionType)
{
    m_motionType = _motionType;
    m_motionTypeHasBeenSet = true;
}

bool SubmitAutoRiggingJobRequest::MotionTypeHasBeenSet() const
{
    return m_motionTypeHasBeenSet;
}


