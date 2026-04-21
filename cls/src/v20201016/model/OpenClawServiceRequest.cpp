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

#include <tencentcloud/cls/v20201016/model/OpenClawServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

OpenClawServiceRequest::OpenClawServiceRequest() :
    m_tagHasBeenSet(false),
    m_enableTraceHasBeenSet(false)
{
}

string OpenClawServiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_enableTraceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableTrace";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableTrace, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string OpenClawServiceRequest::GetTag() const
{
    return m_tag;
}

void OpenClawServiceRequest::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool OpenClawServiceRequest::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

bool OpenClawServiceRequest::GetEnableTrace() const
{
    return m_enableTrace;
}

void OpenClawServiceRequest::SetEnableTrace(const bool& _enableTrace)
{
    m_enableTrace = _enableTrace;
    m_enableTraceHasBeenSet = true;
}

bool OpenClawServiceRequest::EnableTraceHasBeenSet() const
{
    return m_enableTraceHasBeenSet;
}


