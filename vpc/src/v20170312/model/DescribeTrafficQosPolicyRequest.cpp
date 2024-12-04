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

#include <tencentcloud/vpc/v20170312/model/DescribeTrafficQosPolicyRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeTrafficQosPolicyRequest::DescribeTrafficQosPolicyRequest() :
    m_ccnIdHasBeenSet(false),
    m_localRegionHasBeenSet(false),
    m_remoteRegionHasBeenSet(false)
{
}

string DescribeTrafficQosPolicyRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_localRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocalRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_localRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_remoteRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoteRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remoteRegion.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeTrafficQosPolicyRequest::GetCcnId() const
{
    return m_ccnId;
}

void DescribeTrafficQosPolicyRequest::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool DescribeTrafficQosPolicyRequest::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string DescribeTrafficQosPolicyRequest::GetLocalRegion() const
{
    return m_localRegion;
}

void DescribeTrafficQosPolicyRequest::SetLocalRegion(const string& _localRegion)
{
    m_localRegion = _localRegion;
    m_localRegionHasBeenSet = true;
}

bool DescribeTrafficQosPolicyRequest::LocalRegionHasBeenSet() const
{
    return m_localRegionHasBeenSet;
}

string DescribeTrafficQosPolicyRequest::GetRemoteRegion() const
{
    return m_remoteRegion;
}

void DescribeTrafficQosPolicyRequest::SetRemoteRegion(const string& _remoteRegion)
{
    m_remoteRegion = _remoteRegion;
    m_remoteRegionHasBeenSet = true;
}

bool DescribeTrafficQosPolicyRequest::RemoteRegionHasBeenSet() const
{
    return m_remoteRegionHasBeenSet;
}


