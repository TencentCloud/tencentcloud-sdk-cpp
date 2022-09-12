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

#include <tencentcloud/ms/v20180408/model/DescribeApkDetectionResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ms::V20180408::Model;
using namespace std;

DescribeApkDetectionResultRequest::DescribeApkDetectionResultRequest() :
    m_apkUrlHasBeenSet(false),
    m_apkMd5HasBeenSet(false)
{
}

string DescribeApkDetectionResultRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_apkUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApkUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apkUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_apkMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApkMd5";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_apkMd5.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeApkDetectionResultRequest::GetApkUrl() const
{
    return m_apkUrl;
}

void DescribeApkDetectionResultRequest::SetApkUrl(const string& _apkUrl)
{
    m_apkUrl = _apkUrl;
    m_apkUrlHasBeenSet = true;
}

bool DescribeApkDetectionResultRequest::ApkUrlHasBeenSet() const
{
    return m_apkUrlHasBeenSet;
}

string DescribeApkDetectionResultRequest::GetApkMd5() const
{
    return m_apkMd5;
}

void DescribeApkDetectionResultRequest::SetApkMd5(const string& _apkMd5)
{
    m_apkMd5 = _apkMd5;
    m_apkMd5HasBeenSet = true;
}

bool DescribeApkDetectionResultRequest::ApkMd5HasBeenSet() const
{
    return m_apkMd5HasBeenSet;
}


