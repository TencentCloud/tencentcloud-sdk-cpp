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

#include <tencentcloud/teo/v20220901/model/DescribeLogSetsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DescribeLogSetsRequest::DescribeLogSetsRequest() :
    m_logSetRegionHasBeenSet(false),
    m_logSetIdHasBeenSet(false),
    m_logSetNameHasBeenSet(false)
{
}

string DescribeLogSetsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_logSetRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logSetRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logSetId.c_str(), allocator).Move(), allocator);
    }

    if (m_logSetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logSetName.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeLogSetsRequest::GetLogSetRegion() const
{
    return m_logSetRegion;
}

void DescribeLogSetsRequest::SetLogSetRegion(const string& _logSetRegion)
{
    m_logSetRegion = _logSetRegion;
    m_logSetRegionHasBeenSet = true;
}

bool DescribeLogSetsRequest::LogSetRegionHasBeenSet() const
{
    return m_logSetRegionHasBeenSet;
}

string DescribeLogSetsRequest::GetLogSetId() const
{
    return m_logSetId;
}

void DescribeLogSetsRequest::SetLogSetId(const string& _logSetId)
{
    m_logSetId = _logSetId;
    m_logSetIdHasBeenSet = true;
}

bool DescribeLogSetsRequest::LogSetIdHasBeenSet() const
{
    return m_logSetIdHasBeenSet;
}

string DescribeLogSetsRequest::GetLogSetName() const
{
    return m_logSetName;
}

void DescribeLogSetsRequest::SetLogSetName(const string& _logSetName)
{
    m_logSetName = _logSetName;
    m_logSetNameHasBeenSet = true;
}

bool DescribeLogSetsRequest::LogSetNameHasBeenSet() const
{
    return m_logSetNameHasBeenSet;
}


