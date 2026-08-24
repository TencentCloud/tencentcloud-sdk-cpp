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

#include <tencentcloud/bdrc/v20260330/model/DeleteDisasterRecoveryVpcMappingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

DeleteDisasterRecoveryVpcMappingRequest::DeleteDisasterRecoveryVpcMappingRequest() :
    m_vpcMappingIdsHasBeenSet(false)
{
}

string DeleteDisasterRecoveryVpcMappingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_vpcMappingIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcMappingIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_vpcMappingIds.begin(); itr != m_vpcMappingIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetUint64(*itr), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<uint64_t> DeleteDisasterRecoveryVpcMappingRequest::GetVpcMappingIds() const
{
    return m_vpcMappingIds;
}

void DeleteDisasterRecoveryVpcMappingRequest::SetVpcMappingIds(const vector<uint64_t>& _vpcMappingIds)
{
    m_vpcMappingIds = _vpcMappingIds;
    m_vpcMappingIdsHasBeenSet = true;
}

bool DeleteDisasterRecoveryVpcMappingRequest::VpcMappingIdsHasBeenSet() const
{
    return m_vpcMappingIdsHasBeenSet;
}


