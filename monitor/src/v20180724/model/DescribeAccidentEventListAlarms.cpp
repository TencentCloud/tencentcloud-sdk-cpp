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

#include <tencentcloud/monitor/v20180724/model/DescribeAccidentEventListAlarms.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribeAccidentEventListAlarms::DescribeAccidentEventListAlarms() :
    m_businessTypeDescHasBeenSet(false),
    m_accidentTypeDescHasBeenSet(false),
    m_businessIDHasBeenSet(false),
    m_eventStatusHasBeenSet(false),
    m_affectResourceHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_occurTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAccidentEventListAlarms::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BusinessTypeDesc") && !value["BusinessTypeDesc"].IsNull())
    {
        if (!value["BusinessTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccidentEventListAlarms.BusinessTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessTypeDesc = string(value["BusinessTypeDesc"].GetString());
        m_businessTypeDescHasBeenSet = true;
    }

    if (value.HasMember("AccidentTypeDesc") && !value["AccidentTypeDesc"].IsNull())
    {
        if (!value["AccidentTypeDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccidentEventListAlarms.AccidentTypeDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accidentTypeDesc = string(value["AccidentTypeDesc"].GetString());
        m_accidentTypeDescHasBeenSet = true;
    }

    if (value.HasMember("BusinessID") && !value["BusinessID"].IsNull())
    {
        if (!value["BusinessID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccidentEventListAlarms.BusinessID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_businessID = value["BusinessID"].GetInt64();
        m_businessIDHasBeenSet = true;
    }

    if (value.HasMember("EventStatus") && !value["EventStatus"].IsNull())
    {
        if (!value["EventStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccidentEventListAlarms.EventStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventStatus = value["EventStatus"].GetInt64();
        m_eventStatusHasBeenSet = true;
    }

    if (value.HasMember("AffectResource") && !value["AffectResource"].IsNull())
    {
        if (!value["AffectResource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccidentEventListAlarms.AffectResource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_affectResource = string(value["AffectResource"].GetString());
        m_affectResourceHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccidentEventListAlarms.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("OccurTime") && !value["OccurTime"].IsNull())
    {
        if (!value["OccurTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccidentEventListAlarms.OccurTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_occurTime = string(value["OccurTime"].GetString());
        m_occurTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeAccidentEventListAlarms.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeAccidentEventListAlarms::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_businessTypeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessTypeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessTypeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_accidentTypeDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccidentTypeDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accidentTypeDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_businessIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_businessID, allocator);
    }

    if (m_eventStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventStatus, allocator);
    }

    if (m_affectResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_affectResource.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_occurTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OccurTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_occurTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string DescribeAccidentEventListAlarms::GetBusinessTypeDesc() const
{
    return m_businessTypeDesc;
}

void DescribeAccidentEventListAlarms::SetBusinessTypeDesc(const string& _businessTypeDesc)
{
    m_businessTypeDesc = _businessTypeDesc;
    m_businessTypeDescHasBeenSet = true;
}

bool DescribeAccidentEventListAlarms::BusinessTypeDescHasBeenSet() const
{
    return m_businessTypeDescHasBeenSet;
}

string DescribeAccidentEventListAlarms::GetAccidentTypeDesc() const
{
    return m_accidentTypeDesc;
}

void DescribeAccidentEventListAlarms::SetAccidentTypeDesc(const string& _accidentTypeDesc)
{
    m_accidentTypeDesc = _accidentTypeDesc;
    m_accidentTypeDescHasBeenSet = true;
}

bool DescribeAccidentEventListAlarms::AccidentTypeDescHasBeenSet() const
{
    return m_accidentTypeDescHasBeenSet;
}

int64_t DescribeAccidentEventListAlarms::GetBusinessID() const
{
    return m_businessID;
}

void DescribeAccidentEventListAlarms::SetBusinessID(const int64_t& _businessID)
{
    m_businessID = _businessID;
    m_businessIDHasBeenSet = true;
}

bool DescribeAccidentEventListAlarms::BusinessIDHasBeenSet() const
{
    return m_businessIDHasBeenSet;
}

int64_t DescribeAccidentEventListAlarms::GetEventStatus() const
{
    return m_eventStatus;
}

void DescribeAccidentEventListAlarms::SetEventStatus(const int64_t& _eventStatus)
{
    m_eventStatus = _eventStatus;
    m_eventStatusHasBeenSet = true;
}

bool DescribeAccidentEventListAlarms::EventStatusHasBeenSet() const
{
    return m_eventStatusHasBeenSet;
}

string DescribeAccidentEventListAlarms::GetAffectResource() const
{
    return m_affectResource;
}

void DescribeAccidentEventListAlarms::SetAffectResource(const string& _affectResource)
{
    m_affectResource = _affectResource;
    m_affectResourceHasBeenSet = true;
}

bool DescribeAccidentEventListAlarms::AffectResourceHasBeenSet() const
{
    return m_affectResourceHasBeenSet;
}

string DescribeAccidentEventListAlarms::GetRegion() const
{
    return m_region;
}

void DescribeAccidentEventListAlarms::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DescribeAccidentEventListAlarms::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DescribeAccidentEventListAlarms::GetOccurTime() const
{
    return m_occurTime;
}

void DescribeAccidentEventListAlarms::SetOccurTime(const string& _occurTime)
{
    m_occurTime = _occurTime;
    m_occurTimeHasBeenSet = true;
}

bool DescribeAccidentEventListAlarms::OccurTimeHasBeenSet() const
{
    return m_occurTimeHasBeenSet;
}

string DescribeAccidentEventListAlarms::GetUpdateTime() const
{
    return m_updateTime;
}

void DescribeAccidentEventListAlarms::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DescribeAccidentEventListAlarms::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

