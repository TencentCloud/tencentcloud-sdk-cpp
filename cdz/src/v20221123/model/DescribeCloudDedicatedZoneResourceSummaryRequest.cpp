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

#include <tencentcloud/cdz/v20221123/model/DescribeCloudDedicatedZoneResourceSummaryRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdz::V20221123::Model;
using namespace std;

DescribeCloudDedicatedZoneResourceSummaryRequest::DescribeCloudDedicatedZoneResourceSummaryRequest() :
    m_cdzIdHasBeenSet(false)
{
}

string DescribeCloudDedicatedZoneResourceSummaryRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_cdzIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CdzId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cdzId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCloudDedicatedZoneResourceSummaryRequest::GetCdzId() const
{
    return m_cdzId;
}

void DescribeCloudDedicatedZoneResourceSummaryRequest::SetCdzId(const string& _cdzId)
{
    m_cdzId = _cdzId;
    m_cdzIdHasBeenSet = true;
}

bool DescribeCloudDedicatedZoneResourceSummaryRequest::CdzIdHasBeenSet() const
{
    return m_cdzIdHasBeenSet;
}


