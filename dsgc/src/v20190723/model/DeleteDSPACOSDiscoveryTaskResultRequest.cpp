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

#include <tencentcloud/dsgc/v20190723/model/DeleteDSPACOSDiscoveryTaskResultRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

DeleteDSPACOSDiscoveryTaskResultRequest::DeleteDSPACOSDiscoveryTaskResultRequest() :
    m_dspaIdHasBeenSet(false),
    m_bucketResultIdHasBeenSet(false)
{
}

string DeleteDSPACOSDiscoveryTaskResultRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dspaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DspaId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dspaId.c_str(), allocator).Move(), allocator);
    }

    if (m_bucketResultIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BucketResultId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_bucketResultId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteDSPACOSDiscoveryTaskResultRequest::GetDspaId() const
{
    return m_dspaId;
}

void DeleteDSPACOSDiscoveryTaskResultRequest::SetDspaId(const string& _dspaId)
{
    m_dspaId = _dspaId;
    m_dspaIdHasBeenSet = true;
}

bool DeleteDSPACOSDiscoveryTaskResultRequest::DspaIdHasBeenSet() const
{
    return m_dspaIdHasBeenSet;
}

int64_t DeleteDSPACOSDiscoveryTaskResultRequest::GetBucketResultId() const
{
    return m_bucketResultId;
}

void DeleteDSPACOSDiscoveryTaskResultRequest::SetBucketResultId(const int64_t& _bucketResultId)
{
    m_bucketResultId = _bucketResultId;
    m_bucketResultIdHasBeenSet = true;
}

bool DeleteDSPACOSDiscoveryTaskResultRequest::BucketResultIdHasBeenSet() const
{
    return m_bucketResultIdHasBeenSet;
}


