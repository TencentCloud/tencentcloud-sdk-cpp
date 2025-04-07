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

#include <tencentcloud/cfw/v20190904/model/CfwInsStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

CfwInsStatus::CfwInsStatus() :
    m_cfwInsIdHasBeenSet(false),
    m_fwTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_eventTimeHasBeenSet(false),
    m_recoverTimeHasBeenSet(false),
    m_cfwInsNameHasBeenSet(false),
    m_trafficModeHasBeenSet(false)
{
}

CoreInternalOutcome CfwInsStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CfwInsId") && !value["CfwInsId"].IsNull())
    {
        if (!value["CfwInsId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CfwInsStatus.CfwInsId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cfwInsId = string(value["CfwInsId"].GetString());
        m_cfwInsIdHasBeenSet = true;
    }

    if (value.HasMember("FwType") && !value["FwType"].IsNull())
    {
        if (!value["FwType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CfwInsStatus.FwType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fwType = string(value["FwType"].GetString());
        m_fwTypeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CfwInsStatus.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CfwInsStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EventTime") && !value["EventTime"].IsNull())
    {
        if (!value["EventTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CfwInsStatus.EventTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventTime = string(value["EventTime"].GetString());
        m_eventTimeHasBeenSet = true;
    }

    if (value.HasMember("RecoverTime") && !value["RecoverTime"].IsNull())
    {
        if (!value["RecoverTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CfwInsStatus.RecoverTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recoverTime = string(value["RecoverTime"].GetString());
        m_recoverTimeHasBeenSet = true;
    }

    if (value.HasMember("CfwInsName") && !value["CfwInsName"].IsNull())
    {
        if (!value["CfwInsName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CfwInsStatus.CfwInsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cfwInsName = string(value["CfwInsName"].GetString());
        m_cfwInsNameHasBeenSet = true;
    }

    if (value.HasMember("TrafficMode") && !value["TrafficMode"].IsNull())
    {
        if (!value["TrafficMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CfwInsStatus.TrafficMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trafficMode = string(value["TrafficMode"].GetString());
        m_trafficModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CfwInsStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_cfwInsIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfwInsId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cfwInsId.c_str(), allocator).Move(), allocator);
    }

    if (m_fwTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FwType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fwType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_eventTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventTime.c_str(), allocator).Move(), allocator);
    }

    if (m_recoverTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecoverTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recoverTime.c_str(), allocator).Move(), allocator);
    }

    if (m_cfwInsNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CfwInsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cfwInsName.c_str(), allocator).Move(), allocator);
    }

    if (m_trafficModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrafficMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trafficMode.c_str(), allocator).Move(), allocator);
    }

}


string CfwInsStatus::GetCfwInsId() const
{
    return m_cfwInsId;
}

void CfwInsStatus::SetCfwInsId(const string& _cfwInsId)
{
    m_cfwInsId = _cfwInsId;
    m_cfwInsIdHasBeenSet = true;
}

bool CfwInsStatus::CfwInsIdHasBeenSet() const
{
    return m_cfwInsIdHasBeenSet;
}

string CfwInsStatus::GetFwType() const
{
    return m_fwType;
}

void CfwInsStatus::SetFwType(const string& _fwType)
{
    m_fwType = _fwType;
    m_fwTypeHasBeenSet = true;
}

bool CfwInsStatus::FwTypeHasBeenSet() const
{
    return m_fwTypeHasBeenSet;
}

string CfwInsStatus::GetRegion() const
{
    return m_region;
}

void CfwInsStatus::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CfwInsStatus::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string CfwInsStatus::GetStatus() const
{
    return m_status;
}

void CfwInsStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CfwInsStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CfwInsStatus::GetEventTime() const
{
    return m_eventTime;
}

void CfwInsStatus::SetEventTime(const string& _eventTime)
{
    m_eventTime = _eventTime;
    m_eventTimeHasBeenSet = true;
}

bool CfwInsStatus::EventTimeHasBeenSet() const
{
    return m_eventTimeHasBeenSet;
}

string CfwInsStatus::GetRecoverTime() const
{
    return m_recoverTime;
}

void CfwInsStatus::SetRecoverTime(const string& _recoverTime)
{
    m_recoverTime = _recoverTime;
    m_recoverTimeHasBeenSet = true;
}

bool CfwInsStatus::RecoverTimeHasBeenSet() const
{
    return m_recoverTimeHasBeenSet;
}

string CfwInsStatus::GetCfwInsName() const
{
    return m_cfwInsName;
}

void CfwInsStatus::SetCfwInsName(const string& _cfwInsName)
{
    m_cfwInsName = _cfwInsName;
    m_cfwInsNameHasBeenSet = true;
}

bool CfwInsStatus::CfwInsNameHasBeenSet() const
{
    return m_cfwInsNameHasBeenSet;
}

string CfwInsStatus::GetTrafficMode() const
{
    return m_trafficMode;
}

void CfwInsStatus::SetTrafficMode(const string& _trafficMode)
{
    m_trafficMode = _trafficMode;
    m_trafficModeHasBeenSet = true;
}

bool CfwInsStatus::TrafficModeHasBeenSet() const
{
    return m_trafficModeHasBeenSet;
}

