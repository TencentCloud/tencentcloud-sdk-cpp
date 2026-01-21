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

#include <tencentcloud/ai3d/v20250513/model/SubmitProfileTo3DJobRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ai3d::V20250513::Model;
using namespace std;

SubmitProfileTo3DJobRequest::SubmitProfileTo3DJobRequest() :
    m_profileHasBeenSet(false),
    m_templateHasBeenSet(false)
{
}

string SubmitProfileTo3DJobRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_profileHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Profile";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_profile.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_templateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Template";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_template.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Image SubmitProfileTo3DJobRequest::GetProfile() const
{
    return m_profile;
}

void SubmitProfileTo3DJobRequest::SetProfile(const Image& _profile)
{
    m_profile = _profile;
    m_profileHasBeenSet = true;
}

bool SubmitProfileTo3DJobRequest::ProfileHasBeenSet() const
{
    return m_profileHasBeenSet;
}

string SubmitProfileTo3DJobRequest::GetTemplate() const
{
    return m_template;
}

void SubmitProfileTo3DJobRequest::SetTemplate(const string& _template)
{
    m_template = _template;
    m_templateHasBeenSet = true;
}

bool SubmitProfileTo3DJobRequest::TemplateHasBeenSet() const
{
    return m_templateHasBeenSet;
}


