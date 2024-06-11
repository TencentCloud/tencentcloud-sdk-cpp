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

#include <tencentcloud/cam/v20190116/model/BuildDataFlowAuthTokenRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

BuildDataFlowAuthTokenRequest::BuildDataFlowAuthTokenRequest() :
    m_resourceIdHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourceAccountHasBeenSet(false)
{
}

string BuildDataFlowAuthTokenRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_resourceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceAccount";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_resourceAccount.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string BuildDataFlowAuthTokenRequest::GetResourceId() const
{
    return m_resourceId;
}

void BuildDataFlowAuthTokenRequest::SetResourceId(const string& _resourceId)
{
    m_resourceId = _resourceId;
    m_resourceIdHasBeenSet = true;
}

bool BuildDataFlowAuthTokenRequest::ResourceIdHasBeenSet() const
{
    return m_resourceIdHasBeenSet;
}

string BuildDataFlowAuthTokenRequest::GetResourceRegion() const
{
    return m_resourceRegion;
}

void BuildDataFlowAuthTokenRequest::SetResourceRegion(const string& _resourceRegion)
{
    m_resourceRegion = _resourceRegion;
    m_resourceRegionHasBeenSet = true;
}

bool BuildDataFlowAuthTokenRequest::ResourceRegionHasBeenSet() const
{
    return m_resourceRegionHasBeenSet;
}

string BuildDataFlowAuthTokenRequest::GetResourceAccount() const
{
    return m_resourceAccount;
}

void BuildDataFlowAuthTokenRequest::SetResourceAccount(const string& _resourceAccount)
{
    m_resourceAccount = _resourceAccount;
    m_resourceAccountHasBeenSet = true;
}

bool BuildDataFlowAuthTokenRequest::ResourceAccountHasBeenSet() const
{
    return m_resourceAccountHasBeenSet;
}


