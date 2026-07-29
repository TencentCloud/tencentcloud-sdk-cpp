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

#include <tencentcloud/tcb/v20180608/model/DescribeCloudAppCosInfoRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

DescribeCloudAppCosInfoRequest::DescribeCloudAppCosInfoRequest() :
    m_envIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_deployTypeHasBeenSet(false),
    m_unixTimestampHasBeenSet(false),
    m_suffixHasBeenSet(false),
    m_needDownloadHasBeenSet(false)
{
}

string DescribeCloudAppCosInfoRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_deployTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeployType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deployType.c_str(), allocator).Move(), allocator);
    }

    if (m_unixTimestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnixTimestamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_unixTimestamp.c_str(), allocator).Move(), allocator);
    }

    if (m_suffixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suffix";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_suffix.c_str(), allocator).Move(), allocator);
    }

    if (m_needDownloadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedDownload";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_needDownload, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCloudAppCosInfoRequest::GetEnvId() const
{
    return m_envId;
}

void DescribeCloudAppCosInfoRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool DescribeCloudAppCosInfoRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string DescribeCloudAppCosInfoRequest::GetServiceName() const
{
    return m_serviceName;
}

void DescribeCloudAppCosInfoRequest::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool DescribeCloudAppCosInfoRequest::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string DescribeCloudAppCosInfoRequest::GetDeployType() const
{
    return m_deployType;
}

void DescribeCloudAppCosInfoRequest::SetDeployType(const string& _deployType)
{
    m_deployType = _deployType;
    m_deployTypeHasBeenSet = true;
}

bool DescribeCloudAppCosInfoRequest::DeployTypeHasBeenSet() const
{
    return m_deployTypeHasBeenSet;
}

string DescribeCloudAppCosInfoRequest::GetUnixTimestamp() const
{
    return m_unixTimestamp;
}

void DescribeCloudAppCosInfoRequest::SetUnixTimestamp(const string& _unixTimestamp)
{
    m_unixTimestamp = _unixTimestamp;
    m_unixTimestampHasBeenSet = true;
}

bool DescribeCloudAppCosInfoRequest::UnixTimestampHasBeenSet() const
{
    return m_unixTimestampHasBeenSet;
}

string DescribeCloudAppCosInfoRequest::GetSuffix() const
{
    return m_suffix;
}

void DescribeCloudAppCosInfoRequest::SetSuffix(const string& _suffix)
{
    m_suffix = _suffix;
    m_suffixHasBeenSet = true;
}

bool DescribeCloudAppCosInfoRequest::SuffixHasBeenSet() const
{
    return m_suffixHasBeenSet;
}

bool DescribeCloudAppCosInfoRequest::GetNeedDownload() const
{
    return m_needDownload;
}

void DescribeCloudAppCosInfoRequest::SetNeedDownload(const bool& _needDownload)
{
    m_needDownload = _needDownload;
    m_needDownloadHasBeenSet = true;
}

bool DescribeCloudAppCosInfoRequest::NeedDownloadHasBeenSet() const
{
    return m_needDownloadHasBeenSet;
}


