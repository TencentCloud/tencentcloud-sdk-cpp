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

#include <tencentcloud/vpc/v20170312/model/DescribeBandwidthPackageBandwidthRangeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeBandwidthPackageBandwidthRangeRequest::DescribeBandwidthPackageBandwidthRangeRequest() :
    m_bandwidthPackageIdsHasBeenSet(false)
{
}

string DescribeBandwidthPackageBandwidthRangeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_bandwidthPackageIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BandwidthPackageIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bandwidthPackageIds.begin(); itr != m_bandwidthPackageIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> DescribeBandwidthPackageBandwidthRangeRequest::GetBandwidthPackageIds() const
{
    return m_bandwidthPackageIds;
}

void DescribeBandwidthPackageBandwidthRangeRequest::SetBandwidthPackageIds(const vector<string>& _bandwidthPackageIds)
{
    m_bandwidthPackageIds = _bandwidthPackageIds;
    m_bandwidthPackageIdsHasBeenSet = true;
}

bool DescribeBandwidthPackageBandwidthRangeRequest::BandwidthPackageIdsHasBeenSet() const
{
    return m_bandwidthPackageIdsHasBeenSet;
}


