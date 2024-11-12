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

#include <tencentcloud/vpc/v20170312/model/ModifyBandwidthPackageBandwidthRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

ModifyBandwidthPackageBandwidthRequest::ModifyBandwidthPackageBandwidthRequest() :
    m_internetMaxBandwidthHasBeenSet(false),
    m_bandwidthPackageIdHasBeenSet(false)
{
}

string ModifyBandwidthPackageBandwidthRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_internetMaxBandwidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InternetMaxBandwidth";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_internetMaxBandwidth, allocator);
    }

    if (m_bandwidthPackageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthPackageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_bandwidthPackageId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t ModifyBandwidthPackageBandwidthRequest::GetInternetMaxBandwidth() const
{
    return m_internetMaxBandwidth;
}

void ModifyBandwidthPackageBandwidthRequest::SetInternetMaxBandwidth(const int64_t& _internetMaxBandwidth)
{
    m_internetMaxBandwidth = _internetMaxBandwidth;
    m_internetMaxBandwidthHasBeenSet = true;
}

bool ModifyBandwidthPackageBandwidthRequest::InternetMaxBandwidthHasBeenSet() const
{
    return m_internetMaxBandwidthHasBeenSet;
}

string ModifyBandwidthPackageBandwidthRequest::GetBandwidthPackageId() const
{
    return m_bandwidthPackageId;
}

void ModifyBandwidthPackageBandwidthRequest::SetBandwidthPackageId(const string& _bandwidthPackageId)
{
    m_bandwidthPackageId = _bandwidthPackageId;
    m_bandwidthPackageIdHasBeenSet = true;
}

bool ModifyBandwidthPackageBandwidthRequest::BandwidthPackageIdHasBeenSet() const
{
    return m_bandwidthPackageIdHasBeenSet;
}


