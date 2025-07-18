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

#include <tencentcloud/waf/v20180125/model/CreatePostCLSFlowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

CreatePostCLSFlowRequest::CreatePostCLSFlowRequest() :
    m_cLSRegionHasBeenSet(false),
    m_logsetNameHasBeenSet(false),
    m_logTypeHasBeenSet(false),
    m_logTopicNameHasBeenSet(false)
{
}

string CreatePostCLSFlowRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cLSRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CLSRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cLSRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logsetName.c_str(), allocator).Move(), allocator);
    }

    if (m_logTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_logType, allocator);
    }

    if (m_logTopicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogTopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logTopicName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreatePostCLSFlowRequest::GetCLSRegion() const
{
    return m_cLSRegion;
}

void CreatePostCLSFlowRequest::SetCLSRegion(const string& _cLSRegion)
{
    m_cLSRegion = _cLSRegion;
    m_cLSRegionHasBeenSet = true;
}

bool CreatePostCLSFlowRequest::CLSRegionHasBeenSet() const
{
    return m_cLSRegionHasBeenSet;
}

string CreatePostCLSFlowRequest::GetLogsetName() const
{
    return m_logsetName;
}

void CreatePostCLSFlowRequest::SetLogsetName(const string& _logsetName)
{
    m_logsetName = _logsetName;
    m_logsetNameHasBeenSet = true;
}

bool CreatePostCLSFlowRequest::LogsetNameHasBeenSet() const
{
    return m_logsetNameHasBeenSet;
}

int64_t CreatePostCLSFlowRequest::GetLogType() const
{
    return m_logType;
}

void CreatePostCLSFlowRequest::SetLogType(const int64_t& _logType)
{
    m_logType = _logType;
    m_logTypeHasBeenSet = true;
}

bool CreatePostCLSFlowRequest::LogTypeHasBeenSet() const
{
    return m_logTypeHasBeenSet;
}

string CreatePostCLSFlowRequest::GetLogTopicName() const
{
    return m_logTopicName;
}

void CreatePostCLSFlowRequest::SetLogTopicName(const string& _logTopicName)
{
    m_logTopicName = _logTopicName;
    m_logTopicNameHasBeenSet = true;
}

bool CreatePostCLSFlowRequest::LogTopicNameHasBeenSet() const
{
    return m_logTopicNameHasBeenSet;
}


