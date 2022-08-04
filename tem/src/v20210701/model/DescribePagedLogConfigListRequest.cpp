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

#include <tencentcloud/tem/v20210701/model/DescribePagedLogConfigListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

DescribePagedLogConfigListRequest::DescribePagedLogConfigListRequest() :
    m_environmentIdHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_continueTokenHasBeenSet(false)
{
}

string DescribePagedLogConfigListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_continueTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContinueToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_continueToken.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribePagedLogConfigListRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void DescribePagedLogConfigListRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool DescribePagedLogConfigListRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string DescribePagedLogConfigListRequest::GetApplicationId() const
{
    return m_applicationId;
}

void DescribePagedLogConfigListRequest::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool DescribePagedLogConfigListRequest::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string DescribePagedLogConfigListRequest::GetApplicationName() const
{
    return m_applicationName;
}

void DescribePagedLogConfigListRequest::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool DescribePagedLogConfigListRequest::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string DescribePagedLogConfigListRequest::GetName() const
{
    return m_name;
}

void DescribePagedLogConfigListRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool DescribePagedLogConfigListRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t DescribePagedLogConfigListRequest::GetLimit() const
{
    return m_limit;
}

void DescribePagedLogConfigListRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribePagedLogConfigListRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribePagedLogConfigListRequest::GetContinueToken() const
{
    return m_continueToken;
}

void DescribePagedLogConfigListRequest::SetContinueToken(const string& _continueToken)
{
    m_continueToken = _continueToken;
    m_continueTokenHasBeenSet = true;
}

bool DescribePagedLogConfigListRequest::ContinueTokenHasBeenSet() const
{
    return m_continueTokenHasBeenSet;
}


