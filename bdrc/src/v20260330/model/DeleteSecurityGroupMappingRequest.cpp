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

#include <tencentcloud/bdrc/v20260330/model/DeleteSecurityGroupMappingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

DeleteSecurityGroupMappingRequest::DeleteSecurityGroupMappingRequest() :
    m_sitePairIdHasBeenSet(false),
    m_securityGroupMappingIdsHasBeenSet(false)
{
}

string DeleteSecurityGroupMappingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sitePairIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SitePairId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sitePairId.c_str(), allocator).Move(), allocator);
    }

    if (m_securityGroupMappingIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityGroupMappingIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_securityGroupMappingIds.begin(); itr != m_securityGroupMappingIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteSecurityGroupMappingRequest::GetSitePairId() const
{
    return m_sitePairId;
}

void DeleteSecurityGroupMappingRequest::SetSitePairId(const string& _sitePairId)
{
    m_sitePairId = _sitePairId;
    m_sitePairIdHasBeenSet = true;
}

bool DeleteSecurityGroupMappingRequest::SitePairIdHasBeenSet() const
{
    return m_sitePairIdHasBeenSet;
}

vector<string> DeleteSecurityGroupMappingRequest::GetSecurityGroupMappingIds() const
{
    return m_securityGroupMappingIds;
}

void DeleteSecurityGroupMappingRequest::SetSecurityGroupMappingIds(const vector<string>& _securityGroupMappingIds)
{
    m_securityGroupMappingIds = _securityGroupMappingIds;
    m_securityGroupMappingIdsHasBeenSet = true;
}

bool DeleteSecurityGroupMappingRequest::SecurityGroupMappingIdsHasBeenSet() const
{
    return m_securityGroupMappingIdsHasBeenSet;
}


