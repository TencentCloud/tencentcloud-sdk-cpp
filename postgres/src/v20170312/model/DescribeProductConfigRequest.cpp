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

#include <tencentcloud/postgres/v20170312/model/DescribeProductConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

DescribeProductConfigRequest::DescribeProductConfigRequest() :
    m_zoneHasBeenSet(false),
    m_dBEngineHasBeenSet(false)
{
}

string DescribeProductConfigRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }

    if (m_dBEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBEngine";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBEngine.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeProductConfigRequest::GetZone() const
{
    return m_zone;
}

void DescribeProductConfigRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DescribeProductConfigRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}

string DescribeProductConfigRequest::GetDBEngine() const
{
    return m_dBEngine;
}

void DescribeProductConfigRequest::SetDBEngine(const string& _dBEngine)
{
    m_dBEngine = _dBEngine;
    m_dBEngineHasBeenSet = true;
}

bool DescribeProductConfigRequest::DBEngineHasBeenSet() const
{
    return m_dBEngineHasBeenSet;
}


