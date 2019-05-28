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

#include <tencentcloud/ms/v20180408/model/CreateShieldPlanInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ms::V20180408::Model;
using namespace rapidjson;
using namespace std;

CreateShieldPlanInstanceRequest::CreateShieldPlanInstanceRequest() :
    m_resourceIdHasBeenSet(false),
    m_planNameHasBeenSet(false),
    m_planInfoHasBeenSet(false)
{
}

string CreateShieldPlanInstanceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_planNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PlanName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_planName.c_str(), allocator).Move(), allocator);
    }

    if (m_planInfoHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PlanInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_planInfo.ToJsonObject(d[key.c_str()], allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateShieldPlanInstanceRequest::GetResourceId() const
{
    return m_resourceId;
}

void CreateShieldPlanInstanceRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool CreateShieldPlanInstanceRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string CreateShieldPlanInstanceRequest::GetPlanName() const
{
    return m_planName;
}

void CreateShieldPlanInstanceRequest::SetPlanName(const string& _planName)
{
    m_planName = _planName;
    m_planNameHasBeenSet = true;
}

bool CreateShieldPlanInstanceRequest::PlanNameHasBeenSet() const
{
    return m_planNameHasBeenSet;
}

PlanInfo CreateShieldPlanInstanceRequest::GetPlanInfo() const
{
    return m_planInfo;
}

void CreateShieldPlanInstanceRequest::SetPlanInfo(const PlanInfo& _planInfo)
{
    m_planInfo = _planInfo;
    m_planInfoHasBeenSet = true;
}

bool CreateShieldPlanInstanceRequest::PlanInfoHasBeenSet() const
{
    return m_planInfoHasBeenSet;
}


