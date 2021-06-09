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

#include <tencentcloud/cdb/v20170320/model/DescribeRoMinScaleRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdb::V20170320::Model;
using namespace std;

DescribeRoMinScaleRequest::DescribeRoMinScaleRequest() :
    m_roInstanceIdHasBeenSet(false),
    m_masterInstanceIdHasBeenSet(false)
{
}

string DescribeRoMinScaleRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_roInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_roInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_masterInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MasterInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_masterInstanceId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRoMinScaleRequest::GetRoInstanceId() const
{
    return m_roInstanceId;
}

void DescribeRoMinScaleRequest::SetRoInstanceId(const string& _roInstanceId)
{
    m_roInstanceId = _roInstanceId;
    m_roInstanceIdHasBeenSet = true;
}

bool DescribeRoMinScaleRequest::RoInstanceIdHasBeenSet() const
{
    return m_roInstanceIdHasBeenSet;
}

string DescribeRoMinScaleRequest::GetMasterInstanceId() const
{
    return m_masterInstanceId;
}

void DescribeRoMinScaleRequest::SetMasterInstanceId(const string& _masterInstanceId)
{
    m_masterInstanceId = _masterInstanceId;
    m_masterInstanceIdHasBeenSet = true;
}

bool DescribeRoMinScaleRequest::MasterInstanceIdHasBeenSet() const
{
    return m_masterInstanceIdHasBeenSet;
}


