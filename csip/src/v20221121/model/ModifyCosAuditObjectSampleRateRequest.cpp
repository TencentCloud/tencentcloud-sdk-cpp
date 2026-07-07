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

#include <tencentcloud/csip/v20221121/model/ModifyCosAuditObjectSampleRateRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyCosAuditObjectSampleRateRequest::ModifyCosAuditObjectSampleRateRequest() :
    m_bucketIdSetHasBeenSet(false),
    m_sampleRateSetHasBeenSet(false)
{
}

string ModifyCosAuditObjectSampleRateRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bucketIdSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketIdSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bucketIdSet.begin(); itr != m_bucketIdSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }

    if (m_sampleRateSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleRateSet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sampleRateSet.begin(); itr != m_sampleRateSet.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> ModifyCosAuditObjectSampleRateRequest::GetBucketIdSet() const
{
    return m_bucketIdSet;
}

void ModifyCosAuditObjectSampleRateRequest::SetBucketIdSet(const vector<uint64_t>& _bucketIdSet)
{
    m_bucketIdSet = _bucketIdSet;
    m_bucketIdSetHasBeenSet = true;
}

bool ModifyCosAuditObjectSampleRateRequest::BucketIdSetHasBeenSet() const
{
    return m_bucketIdSetHasBeenSet;
}

vector<double> ModifyCosAuditObjectSampleRateRequest::GetSampleRateSet() const
{
    return m_sampleRateSet;
}

void ModifyCosAuditObjectSampleRateRequest::SetSampleRateSet(const vector<double>& _sampleRateSet)
{
    m_sampleRateSet = _sampleRateSet;
    m_sampleRateSetHasBeenSet = true;
}

bool ModifyCosAuditObjectSampleRateRequest::SampleRateSetHasBeenSet() const
{
    return m_sampleRateSetHasBeenSet;
}


