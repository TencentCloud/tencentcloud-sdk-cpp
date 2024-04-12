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

#include <tencentcloud/lke/v20231130/model/DescribeAppRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

DescribeAppRequest::DescribeAppRequest() :
    m_appBizIdHasBeenSet(false),
    m_appTypeHasBeenSet(false),
    m_isReleaseHasBeenSet(false)
{
}

string DescribeAppRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_appBizIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppBizId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appBizId.c_str(), allocator).Move(), allocator);
    }

    if (m_appTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_appType.c_str(), allocator).Move(), allocator);
    }

    if (m_isReleaseHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsRelease";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isRelease, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeAppRequest::GetAppBizId() const
{
    return m_appBizId;
}

void DescribeAppRequest::SetAppBizId(const string& _appBizId)
{
    m_appBizId = _appBizId;
    m_appBizIdHasBeenSet = true;
}

bool DescribeAppRequest::AppBizIdHasBeenSet() const
{
    return m_appBizIdHasBeenSet;
}

string DescribeAppRequest::GetAppType() const
{
    return m_appType;
}

void DescribeAppRequest::SetAppType(const string& _appType)
{
    m_appType = _appType;
    m_appTypeHasBeenSet = true;
}

bool DescribeAppRequest::AppTypeHasBeenSet() const
{
    return m_appTypeHasBeenSet;
}

bool DescribeAppRequest::GetIsRelease() const
{
    return m_isRelease;
}

void DescribeAppRequest::SetIsRelease(const bool& _isRelease)
{
    m_isRelease = _isRelease;
    m_isReleaseHasBeenSet = true;
}

bool DescribeAppRequest::IsReleaseHasBeenSet() const
{
    return m_isReleaseHasBeenSet;
}


