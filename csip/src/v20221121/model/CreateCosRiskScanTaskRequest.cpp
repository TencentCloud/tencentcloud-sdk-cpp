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

#include <tencentcloud/csip/v20221121/model/CreateCosRiskScanTaskRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CreateCosRiskScanTaskRequest::CreateCosRiskScanTaskRequest() :
    m_memberIdHasBeenSet(false),
    m_bucketNameSetHasBeenSet(false),
    m_isScanAllBucketHasBeenSet(false)
{
}

string CreateCosRiskScanTaskRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_memberIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemberId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_memberId.begin(); itr != m_memberId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_bucketNameSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketNameSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bucketNameSet.begin(); itr != m_bucketNameSet.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_isScanAllBucketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsScanAllBucket";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isScanAllBucket, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> CreateCosRiskScanTaskRequest::GetMemberId() const
{
    return m_memberId;
}

void CreateCosRiskScanTaskRequest::SetMemberId(const vector<string>& _memberId)
{
    m_memberId = _memberId;
    m_memberIdHasBeenSet = true;
}

bool CreateCosRiskScanTaskRequest::MemberIdHasBeenSet() const
{
    return m_memberIdHasBeenSet;
}

vector<CosBucketInfo> CreateCosRiskScanTaskRequest::GetBucketNameSet() const
{
    return m_bucketNameSet;
}

void CreateCosRiskScanTaskRequest::SetBucketNameSet(const vector<CosBucketInfo>& _bucketNameSet)
{
    m_bucketNameSet = _bucketNameSet;
    m_bucketNameSetHasBeenSet = true;
}

bool CreateCosRiskScanTaskRequest::BucketNameSetHasBeenSet() const
{
    return m_bucketNameSetHasBeenSet;
}

bool CreateCosRiskScanTaskRequest::GetIsScanAllBucket() const
{
    return m_isScanAllBucket;
}

void CreateCosRiskScanTaskRequest::SetIsScanAllBucket(const bool& _isScanAllBucket)
{
    m_isScanAllBucket = _isScanAllBucket;
    m_isScanAllBucketHasBeenSet = true;
}

bool CreateCosRiskScanTaskRequest::IsScanAllBucketHasBeenSet() const
{
    return m_isScanAllBucketHasBeenSet;
}


