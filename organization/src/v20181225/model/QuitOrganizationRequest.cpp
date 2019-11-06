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

#include <tencentcloud/organization/v20181225/model/QuitOrganizationRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Organization::V20181225::Model;
using namespace rapidjson;
using namespace std;

QuitOrganizationRequest::QuitOrganizationRequest() :
    m_orgIdHasBeenSet(false)
{
}

string QuitOrganizationRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_orgIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OrgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_orgId, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t QuitOrganizationRequest::GetOrgId() const
{
    return m_orgId;
}

void QuitOrganizationRequest::SetOrgId(const uint64_t& _orgId)
{
    m_orgId = _orgId;
    m_orgIdHasBeenSet = true;
}

bool QuitOrganizationRequest::OrgIdHasBeenSet() const
{
    return m_orgIdHasBeenSet;
}


