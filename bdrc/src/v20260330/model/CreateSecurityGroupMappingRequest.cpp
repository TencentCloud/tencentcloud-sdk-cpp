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

#include <tencentcloud/bdrc/v20260330/model/CreateSecurityGroupMappingRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

CreateSecurityGroupMappingRequest::CreateSecurityGroupMappingRequest() :
    m_srcSecurityGroupIdHasBeenSet(false),
    m_targetSecurityGroupIdHasBeenSet(false),
    m_sitePairIdHasBeenSet(false)
{
}

string CreateSecurityGroupMappingRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_srcSecurityGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcSecurityGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_srcSecurityGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_targetSecurityGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetSecurityGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetSecurityGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_sitePairIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SitePairId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sitePairId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSecurityGroupMappingRequest::GetSrcSecurityGroupId() const
{
    return m_srcSecurityGroupId;
}

void CreateSecurityGroupMappingRequest::SetSrcSecurityGroupId(const string& _srcSecurityGroupId)
{
    m_srcSecurityGroupId = _srcSecurityGroupId;
    m_srcSecurityGroupIdHasBeenSet = true;
}

bool CreateSecurityGroupMappingRequest::SrcSecurityGroupIdHasBeenSet() const
{
    return m_srcSecurityGroupIdHasBeenSet;
}

string CreateSecurityGroupMappingRequest::GetTargetSecurityGroupId() const
{
    return m_targetSecurityGroupId;
}

void CreateSecurityGroupMappingRequest::SetTargetSecurityGroupId(const string& _targetSecurityGroupId)
{
    m_targetSecurityGroupId = _targetSecurityGroupId;
    m_targetSecurityGroupIdHasBeenSet = true;
}

bool CreateSecurityGroupMappingRequest::TargetSecurityGroupIdHasBeenSet() const
{
    return m_targetSecurityGroupIdHasBeenSet;
}

string CreateSecurityGroupMappingRequest::GetSitePairId() const
{
    return m_sitePairId;
}

void CreateSecurityGroupMappingRequest::SetSitePairId(const string& _sitePairId)
{
    m_sitePairId = _sitePairId;
    m_sitePairIdHasBeenSet = true;
}

bool CreateSecurityGroupMappingRequest::SitePairIdHasBeenSet() const
{
    return m_sitePairIdHasBeenSet;
}


