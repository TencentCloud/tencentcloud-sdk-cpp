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

#include <tencentcloud/bdrc/v20260330/model/DescribeDrillPairsDeniedActionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

DescribeDrillPairsDeniedActionsRequest::DescribeDrillPairsDeniedActionsRequest() :
    m_drillPairTypeHasBeenSet(false),
    m_drillPairIdsHasBeenSet(false)
{
}

string DescribeDrillPairsDeniedActionsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_drillPairTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillPairType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_drillPairType.c_str(), allocator).Move(), allocator);
    }

    if (m_drillPairIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillPairIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_drillPairIds.begin(); itr != m_drillPairIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDrillPairsDeniedActionsRequest::GetDrillPairType() const
{
    return m_drillPairType;
}

void DescribeDrillPairsDeniedActionsRequest::SetDrillPairType(const string& _drillPairType)
{
    m_drillPairType = _drillPairType;
    m_drillPairTypeHasBeenSet = true;
}

bool DescribeDrillPairsDeniedActionsRequest::DrillPairTypeHasBeenSet() const
{
    return m_drillPairTypeHasBeenSet;
}

vector<string> DescribeDrillPairsDeniedActionsRequest::GetDrillPairIds() const
{
    return m_drillPairIds;
}

void DescribeDrillPairsDeniedActionsRequest::SetDrillPairIds(const vector<string>& _drillPairIds)
{
    m_drillPairIds = _drillPairIds;
    m_drillPairIdsHasBeenSet = true;
}

bool DescribeDrillPairsDeniedActionsRequest::DrillPairIdsHasBeenSet() const
{
    return m_drillPairIdsHasBeenSet;
}


