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

#include <tencentcloud/tem/v20210701/model/DescribeApplicationInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

DescribeApplicationInfoRequest::DescribeApplicationInfoRequest() :
    m_applicationIdHasBeenSet(false),
    m_sourceChannelHasBeenSet(false),
    m_environmentIdHasBeenSet(false)
{
}

string DescribeApplicationInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceChannel, allocator);
    }

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeApplicationInfoRequest::GetApplicationId() const
{
    return m_applicationId;
}

void DescribeApplicationInfoRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribeApplicationInfoRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

int64_t DescribeApplicationInfoRequest::GetSourceChannel() const
{
    return m_sourceChannel;
}

void DescribeApplicationInfoRequest::SetSourceChannel(const int64_t& _sourceChannel)
{
    m_sourceChannel = _sourceChannel;
    m_sourceChannelHasBeenSet = true;
}

bool DescribeApplicationInfoRequest::SourceChannelHasBeenSet() const
{
    return m_sourceChannelHasBeenSet;
}

string DescribeApplicationInfoRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void DescribeApplicationInfoRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool DescribeApplicationInfoRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}


