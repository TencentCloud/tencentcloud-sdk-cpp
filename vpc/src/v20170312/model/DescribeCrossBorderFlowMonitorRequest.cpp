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

#include <tencentcloud/vpc/v20170312/model/DescribeCrossBorderFlowMonitorRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

DescribeCrossBorderFlowMonitorRequest::DescribeCrossBorderFlowMonitorRequest() :
    m_sourceRegionHasBeenSet(false),
    m_destinationRegionHasBeenSet(false),
    m_ccnIdHasBeenSet(false),
    m_ccnUinHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false)
{
}

string DescribeCrossBorderFlowMonitorRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DestinationRegion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_destinationRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CcnUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_ccnUin.c_str(), allocator).Move(), allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_period, allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCrossBorderFlowMonitorRequest::GetSourceRegion() const
{
    return m_sourceRegion;
}

void DescribeCrossBorderFlowMonitorRequest::SetSourceRegion(const string& _sourceRegion)
{
    m_sourceRegion = _sourceRegion;
    m_sourceRegionHasBeenSet = true;
}

bool DescribeCrossBorderFlowMonitorRequest::SourceRegionHasBeenSet() const
{
    return m_sourceRegionHasBeenSet;
}

string DescribeCrossBorderFlowMonitorRequest::GetDestinationRegion() const
{
    return m_destinationRegion;
}

void DescribeCrossBorderFlowMonitorRequest::SetDestinationRegion(const string& _destinationRegion)
{
    m_destinationRegion = _destinationRegion;
    m_destinationRegionHasBeenSet = true;
}

bool DescribeCrossBorderFlowMonitorRequest::DestinationRegionHasBeenSet() const
{
    return m_destinationRegionHasBeenSet;
}

string DescribeCrossBorderFlowMonitorRequest::GetCcnId() const
{
    return m_ccnId;
}

void DescribeCrossBorderFlowMonitorRequest::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool DescribeCrossBorderFlowMonitorRequest::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string DescribeCrossBorderFlowMonitorRequest::GetCcnUin() const
{
    return m_ccnUin;
}

void DescribeCrossBorderFlowMonitorRequest::SetCcnUin(const string& _ccnUin)
{
    m_ccnUin = _ccnUin;
    m_ccnUinHasBeenSet = true;
}

bool DescribeCrossBorderFlowMonitorRequest::CcnUinHasBeenSet() const
{
    return m_ccnUinHasBeenSet;
}

int64_t DescribeCrossBorderFlowMonitorRequest::GetPeriod() const
{
    return m_period;
}

void DescribeCrossBorderFlowMonitorRequest::SetPeriod(const int64_t& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool DescribeCrossBorderFlowMonitorRequest::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

string DescribeCrossBorderFlowMonitorRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeCrossBorderFlowMonitorRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeCrossBorderFlowMonitorRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeCrossBorderFlowMonitorRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeCrossBorderFlowMonitorRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeCrossBorderFlowMonitorRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}


