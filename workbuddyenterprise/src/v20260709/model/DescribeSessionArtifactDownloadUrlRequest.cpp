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

#include <tencentcloud/workbuddyenterprise/v20260709/model/DescribeSessionArtifactDownloadUrlRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Workbuddyenterprise::V20260709::Model;
using namespace std;

DescribeSessionArtifactDownloadUrlRequest::DescribeSessionArtifactDownloadUrlRequest() :
    m_artifactIdHasBeenSet(false),
    m_expiredSecondsHasBeenSet(false)
{
}

string DescribeSessionArtifactDownloadUrlRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_artifactIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ArtifactId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_artifactId.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpiredSeconds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_expiredSeconds, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeSessionArtifactDownloadUrlRequest::GetArtifactId() const
{
    return m_artifactId;
}

void DescribeSessionArtifactDownloadUrlRequest::SetArtifactId(const string& _artifactId)
{
    m_artifactId = _artifactId;
    m_artifactIdHasBeenSet = true;
}

bool DescribeSessionArtifactDownloadUrlRequest::ArtifactIdHasBeenSet() const
{
    return m_artifactIdHasBeenSet;
}

int64_t DescribeSessionArtifactDownloadUrlRequest::GetExpiredSeconds() const
{
    return m_expiredSeconds;
}

void DescribeSessionArtifactDownloadUrlRequest::SetExpiredSeconds(const int64_t& _expiredSeconds)
{
    m_expiredSeconds = _expiredSeconds;
    m_expiredSecondsHasBeenSet = true;
}

bool DescribeSessionArtifactDownloadUrlRequest::ExpiredSecondsHasBeenSet() const
{
    return m_expiredSecondsHasBeenSet;
}


