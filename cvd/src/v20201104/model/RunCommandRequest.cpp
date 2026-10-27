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

#include <tencentcloud/cvd/v20201104/model/RunCommandRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cvd::V20201104::Model;
using namespace std;

RunCommandRequest::RunCommandRequest() :
    m_instanceIdHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_waitUntilDoneHasBeenSet(false),
    m_contentEncodingHasBeenSet(false),
    m_mergeOutputLinesHasBeenSet(false),
    m_runAsHasBeenSet(false),
    m_runForegroundHasBeenSet(false)
{
}

string RunCommandRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_content.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_waitUntilDoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaitUntilDone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_waitUntilDone, allocator);
    }

    if (m_contentEncodingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentEncoding";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_contentEncoding.c_str(), allocator).Move(), allocator);
    }

    if (m_mergeOutputLinesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MergeOutputLines";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mergeOutputLines, allocator);
    }

    if (m_runAsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunAs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_runAs.c_str(), allocator).Move(), allocator);
    }

    if (m_runForegroundHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunForeground";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_runForeground, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string RunCommandRequest::GetInstanceId() const
{
    return m_instanceId;
}

void RunCommandRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool RunCommandRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string RunCommandRequest::GetContent() const
{
    return m_content;
}

void RunCommandRequest::SetContent(const string& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool RunCommandRequest::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

string RunCommandRequest::GetType() const
{
    return m_type;
}

void RunCommandRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RunCommandRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

bool RunCommandRequest::GetWaitUntilDone() const
{
    return m_waitUntilDone;
}

void RunCommandRequest::SetWaitUntilDone(const bool& _waitUntilDone)
{
    m_waitUntilDone = _waitUntilDone;
    m_waitUntilDoneHasBeenSet = true;
}

bool RunCommandRequest::WaitUntilDoneHasBeenSet() const
{
    return m_waitUntilDoneHasBeenSet;
}

string RunCommandRequest::GetContentEncoding() const
{
    return m_contentEncoding;
}

void RunCommandRequest::SetContentEncoding(const string& _contentEncoding)
{
    m_contentEncoding = _contentEncoding;
    m_contentEncodingHasBeenSet = true;
}

bool RunCommandRequest::ContentEncodingHasBeenSet() const
{
    return m_contentEncodingHasBeenSet;
}

bool RunCommandRequest::GetMergeOutputLines() const
{
    return m_mergeOutputLines;
}

void RunCommandRequest::SetMergeOutputLines(const bool& _mergeOutputLines)
{
    m_mergeOutputLines = _mergeOutputLines;
    m_mergeOutputLinesHasBeenSet = true;
}

bool RunCommandRequest::MergeOutputLinesHasBeenSet() const
{
    return m_mergeOutputLinesHasBeenSet;
}

string RunCommandRequest::GetRunAs() const
{
    return m_runAs;
}

void RunCommandRequest::SetRunAs(const string& _runAs)
{
    m_runAs = _runAs;
    m_runAsHasBeenSet = true;
}

bool RunCommandRequest::RunAsHasBeenSet() const
{
    return m_runAsHasBeenSet;
}

bool RunCommandRequest::GetRunForeground() const
{
    return m_runForeground;
}

void RunCommandRequest::SetRunForeground(const bool& _runForeground)
{
    m_runForeground = _runForeground;
    m_runForegroundHasBeenSet = true;
}

bool RunCommandRequest::RunForegroundHasBeenSet() const
{
    return m_runForegroundHasBeenSet;
}


