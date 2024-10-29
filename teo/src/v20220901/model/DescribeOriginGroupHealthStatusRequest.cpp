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

#include <tencentcloud/teo/v20220901/model/DescribeOriginGroupHealthStatusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DescribeOriginGroupHealthStatusRequest::DescribeOriginGroupHealthStatusRequest() :
    m_zoneIdHasBeenSet(false),
    m_lBInstanceIdHasBeenSet(false),
    m_originGroupIdsHasBeenSet(false)
{
}

string DescribeOriginGroupHealthStatusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_lBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_lBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_originGroupIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginGroupIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_originGroupIds.begin(); itr != m_originGroupIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeOriginGroupHealthStatusRequest::GetZoneId() const
{
    return m_zoneId;
}

void DescribeOriginGroupHealthStatusRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool DescribeOriginGroupHealthStatusRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string DescribeOriginGroupHealthStatusRequest::GetLBInstanceId() const
{
    return m_lBInstanceId;
}

void DescribeOriginGroupHealthStatusRequest::SetLBInstanceId(const string& _lBInstanceId)
{
    m_lBInstanceId = _lBInstanceId;
    m_lBInstanceIdHasBeenSet = true;
}

bool DescribeOriginGroupHealthStatusRequest::LBInstanceIdHasBeenSet() const
{
    return m_lBInstanceIdHasBeenSet;
}

vector<string> DescribeOriginGroupHealthStatusRequest::GetOriginGroupIds() const
{
    return m_originGroupIds;
}

void DescribeOriginGroupHealthStatusRequest::SetOriginGroupIds(const vector<string>& _originGroupIds)
{
    m_originGroupIds = _originGroupIds;
    m_originGroupIdsHasBeenSet = true;
}

bool DescribeOriginGroupHealthStatusRequest::OriginGroupIdsHasBeenSet() const
{
    return m_originGroupIdsHasBeenSet;
}


