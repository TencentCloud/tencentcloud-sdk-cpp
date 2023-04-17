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

#include <tencentcloud/cfs/v20190719/model/DescribeBucketListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfs::V20190719::Model;
using namespace std;

DescribeBucketListRequest::DescribeBucketListRequest() :
    m_srcServiceHasBeenSet(false),
    m_srcSecretIdHasBeenSet(false),
    m_srcSecretKeyHasBeenSet(false)
{
}

string DescribeBucketListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_srcServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcService";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcService.c_str(), allocator).Move(), allocator);
    }

    if (m_srcSecretIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcSecretId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcSecretId.c_str(), allocator).Move(), allocator);
    }

    if (m_srcSecretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcSecretKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcSecretKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBucketListRequest::GetSrcService() const
{
    return m_srcService;
}

void DescribeBucketListRequest::SetSrcService(const string& _srcService)
{
    m_srcService = _srcService;
    m_srcServiceHasBeenSet = true;
}

bool DescribeBucketListRequest::SrcServiceHasBeenSet() const
{
    return m_srcServiceHasBeenSet;
}

string DescribeBucketListRequest::GetSrcSecretId() const
{
    return m_srcSecretId;
}

void DescribeBucketListRequest::SetSrcSecretId(const string& _srcSecretId)
{
    m_srcSecretId = _srcSecretId;
    m_srcSecretIdHasBeenSet = true;
}

bool DescribeBucketListRequest::SrcSecretIdHasBeenSet() const
{
    return m_srcSecretIdHasBeenSet;
}

string DescribeBucketListRequest::GetSrcSecretKey() const
{
    return m_srcSecretKey;
}

void DescribeBucketListRequest::SetSrcSecretKey(const string& _srcSecretKey)
{
    m_srcSecretKey = _srcSecretKey;
    m_srcSecretKeyHasBeenSet = true;
}

bool DescribeBucketListRequest::SrcSecretKeyHasBeenSet() const
{
    return m_srcSecretKeyHasBeenSet;
}


