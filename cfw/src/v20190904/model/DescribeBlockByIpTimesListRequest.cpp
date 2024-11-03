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

#include <tencentcloud/cfw/v20190904/model/DescribeBlockByIpTimesListRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DescribeBlockByIpTimesListRequest::DescribeBlockByIpTimesListRequest() :
    m_endTimeHasBeenSet(false),
    m_ipHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_edgeIdHasBeenSet(false),
    m_logSourceHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_zoneHasBeenSet(false)
{
}

string DescribeBlockByIpTimesListRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ip";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ip.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_direction.c_str(), allocator).Move(), allocator);
    }

    if (m_edgeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_edgeId.c_str(), allocator).Move(), allocator);
    }

    if (m_logSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogSource";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_logSource.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_source.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zone";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zone.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeBlockByIpTimesListRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeBlockByIpTimesListRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeBlockByIpTimesListRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeBlockByIpTimesListRequest::GetIp() const
{
    return m_ip;
}

void DescribeBlockByIpTimesListRequest::SetIp(const string& _ip)
{
    m_ip = _ip;
    m_ipHasBeenSet = true;
}

bool DescribeBlockByIpTimesListRequest::IpHasBeenSet() const
{
    return m_ipHasBeenSet;
}

string DescribeBlockByIpTimesListRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeBlockByIpTimesListRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeBlockByIpTimesListRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeBlockByIpTimesListRequest::GetDirection() const
{
    return m_direction;
}

void DescribeBlockByIpTimesListRequest::SetDirection(const string& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool DescribeBlockByIpTimesListRequest::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

string DescribeBlockByIpTimesListRequest::GetEdgeId() const
{
    return m_edgeId;
}

void DescribeBlockByIpTimesListRequest::SetEdgeId(const string& _edgeId)
{
    m_edgeId = _edgeId;
    m_edgeIdHasBeenSet = true;
}

bool DescribeBlockByIpTimesListRequest::EdgeIdHasBeenSet() const
{
    return m_edgeIdHasBeenSet;
}

string DescribeBlockByIpTimesListRequest::GetLogSource() const
{
    return m_logSource;
}

void DescribeBlockByIpTimesListRequest::SetLogSource(const string& _logSource)
{
    m_logSource = _logSource;
    m_logSourceHasBeenSet = true;
}

bool DescribeBlockByIpTimesListRequest::LogSourceHasBeenSet() const
{
    return m_logSourceHasBeenSet;
}

string DescribeBlockByIpTimesListRequest::GetSource() const
{
    return m_source;
}

void DescribeBlockByIpTimesListRequest::SetSource(const string& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool DescribeBlockByIpTimesListRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string DescribeBlockByIpTimesListRequest::GetZone() const
{
    return m_zone;
}

void DescribeBlockByIpTimesListRequest::SetZone(const string& _zone)
{
    m_zone = _zone;
    m_zoneHasBeenSet = true;
}

bool DescribeBlockByIpTimesListRequest::ZoneHasBeenSet() const
{
    return m_zoneHasBeenSet;
}


