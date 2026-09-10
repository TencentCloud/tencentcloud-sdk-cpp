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

#include <tencentcloud/cfw/v20190904/model/DataLeakOutAlertEvent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

DataLeakOutAlertEvent::DataLeakOutAlertEvent() :
    m_riskIDHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_srcIPHasBeenSet(false),
    m_dstIPPortHasBeenSet(false),
    m_hostnameHasBeenSet(false),
    m_dstServiceTypeHasBeenSet(false),
    m_dstServiceNameHasBeenSet(false),
    m_leakTypeSetHasBeenSet(false),
    m_eventCountHasBeenSet(false),
    m_firstIdentificationTimeHasBeenSet(false),
    m_latestIdentificationTimeHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_apiPatternHasBeenSet(false),
    m_analysisStatusHasBeenSet(false),
    m_analysisFailReasonHasBeenSet(false),
    m_apiBizTypeHasBeenSet(false),
    m_riskScenarioHasBeenSet(false),
    m_aiSuggestedLevelHasBeenSet(false),
    m_dstGeoLocationHasBeenSet(false),
    m_highestLevelHasBeenSet(false)
{
}

CoreInternalOutcome DataLeakOutAlertEvent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RiskID") && !value["RiskID"].IsNull())
    {
        if (!value["RiskID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.RiskID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskID = string(value["RiskID"].GetString());
        m_riskIDHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("SrcIP") && !value["SrcIP"].IsNull())
    {
        if (!value["SrcIP"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.SrcIP` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcIP = string(value["SrcIP"].GetString());
        m_srcIPHasBeenSet = true;
    }

    if (value.HasMember("DstIPPort") && !value["DstIPPort"].IsNull())
    {
        if (!value["DstIPPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.DstIPPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstIPPort = string(value["DstIPPort"].GetString());
        m_dstIPPortHasBeenSet = true;
    }

    if (value.HasMember("Hostname") && !value["Hostname"].IsNull())
    {
        if (!value["Hostname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.Hostname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hostname = string(value["Hostname"].GetString());
        m_hostnameHasBeenSet = true;
    }

    if (value.HasMember("DstServiceType") && !value["DstServiceType"].IsNull())
    {
        if (!value["DstServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.DstServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstServiceType = string(value["DstServiceType"].GetString());
        m_dstServiceTypeHasBeenSet = true;
    }

    if (value.HasMember("DstServiceName") && !value["DstServiceName"].IsNull())
    {
        if (!value["DstServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.DstServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstServiceName = string(value["DstServiceName"].GetString());
        m_dstServiceNameHasBeenSet = true;
    }

    if (value.HasMember("LeakTypeSet") && !value["LeakTypeSet"].IsNull())
    {
        if (!value["LeakTypeSet"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.LeakTypeSet` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_leakTypeSet = string(value["LeakTypeSet"].GetString());
        m_leakTypeSetHasBeenSet = true;
    }

    if (value.HasMember("EventCount") && !value["EventCount"].IsNull())
    {
        if (!value["EventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.EventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_eventCount = value["EventCount"].GetUint64();
        m_eventCountHasBeenSet = true;
    }

    if (value.HasMember("FirstIdentificationTime") && !value["FirstIdentificationTime"].IsNull())
    {
        if (!value["FirstIdentificationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.FirstIdentificationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstIdentificationTime = string(value["FirstIdentificationTime"].GetString());
        m_firstIdentificationTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestIdentificationTime") && !value["LatestIdentificationTime"].IsNull())
    {
        if (!value["LatestIdentificationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.LatestIdentificationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestIdentificationTime = string(value["LatestIdentificationTime"].GetString());
        m_latestIdentificationTimeHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.Level` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_level = value["Level"].GetUint64();
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("ApiPattern") && !value["ApiPattern"].IsNull())
    {
        if (!value["ApiPattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.ApiPattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiPattern = string(value["ApiPattern"].GetString());
        m_apiPatternHasBeenSet = true;
    }

    if (value.HasMember("AnalysisStatus") && !value["AnalysisStatus"].IsNull())
    {
        if (!value["AnalysisStatus"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.AnalysisStatus` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_analysisStatus = value["AnalysisStatus"].GetUint64();
        m_analysisStatusHasBeenSet = true;
    }

    if (value.HasMember("AnalysisFailReason") && !value["AnalysisFailReason"].IsNull())
    {
        if (!value["AnalysisFailReason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.AnalysisFailReason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_analysisFailReason = string(value["AnalysisFailReason"].GetString());
        m_analysisFailReasonHasBeenSet = true;
    }

    if (value.HasMember("ApiBizType") && !value["ApiBizType"].IsNull())
    {
        if (!value["ApiBizType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.ApiBizType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiBizType = string(value["ApiBizType"].GetString());
        m_apiBizTypeHasBeenSet = true;
    }

    if (value.HasMember("RiskScenario") && !value["RiskScenario"].IsNull())
    {
        if (!value["RiskScenario"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.RiskScenario` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskScenario = string(value["RiskScenario"].GetString());
        m_riskScenarioHasBeenSet = true;
    }

    if (value.HasMember("AiSuggestedLevel") && !value["AiSuggestedLevel"].IsNull())
    {
        if (!value["AiSuggestedLevel"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.AiSuggestedLevel` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aiSuggestedLevel = value["AiSuggestedLevel"].GetInt64();
        m_aiSuggestedLevelHasBeenSet = true;
    }

    if (value.HasMember("DstGeoLocation") && !value["DstGeoLocation"].IsNull())
    {
        if (!value["DstGeoLocation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.DstGeoLocation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstGeoLocation = string(value["DstGeoLocation"].GetString());
        m_dstGeoLocationHasBeenSet = true;
    }

    if (value.HasMember("HighestLevel") && !value["HighestLevel"].IsNull())
    {
        if (!value["HighestLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataLeakOutAlertEvent.HighestLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_highestLevel = string(value["HighestLevel"].GetString());
        m_highestLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataLeakOutAlertEvent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_riskIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskID.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_srcIPHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcIP";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcIP.c_str(), allocator).Move(), allocator);
    }

    if (m_dstIPPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstIPPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstIPPort.c_str(), allocator).Move(), allocator);
    }

    if (m_hostnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Hostname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hostname.c_str(), allocator).Move(), allocator);
    }

    if (m_dstServiceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstServiceType.c_str(), allocator).Move(), allocator);
    }

    if (m_dstServiceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstServiceName.c_str(), allocator).Move(), allocator);
    }

    if (m_leakTypeSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeakTypeSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_leakTypeSet.c_str(), allocator).Move(), allocator);
    }

    if (m_eventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventCount, allocator);
    }

    if (m_firstIdentificationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstIdentificationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstIdentificationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestIdentificationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestIdentificationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestIdentificationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_level, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_apiPatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiPattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiPattern.c_str(), allocator).Move(), allocator);
    }

    if (m_analysisStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_analysisStatus, allocator);
    }

    if (m_analysisFailReasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AnalysisFailReason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_analysisFailReason.c_str(), allocator).Move(), allocator);
    }

    if (m_apiBizTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiBizType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiBizType.c_str(), allocator).Move(), allocator);
    }

    if (m_riskScenarioHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskScenario";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskScenario.c_str(), allocator).Move(), allocator);
    }

    if (m_aiSuggestedLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AiSuggestedLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aiSuggestedLevel, allocator);
    }

    if (m_dstGeoLocationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstGeoLocation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstGeoLocation.c_str(), allocator).Move(), allocator);
    }

    if (m_highestLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighestLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_highestLevel.c_str(), allocator).Move(), allocator);
    }

}


string DataLeakOutAlertEvent::GetRiskID() const
{
    return m_riskID;
}

void DataLeakOutAlertEvent::SetRiskID(const string& _riskID)
{
    m_riskID = _riskID;
    m_riskIDHasBeenSet = true;
}

bool DataLeakOutAlertEvent::RiskIDHasBeenSet() const
{
    return m_riskIDHasBeenSet;
}

string DataLeakOutAlertEvent::GetInstanceId() const
{
    return m_instanceId;
}

void DataLeakOutAlertEvent::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DataLeakOutAlertEvent::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DataLeakOutAlertEvent::GetInstanceName() const
{
    return m_instanceName;
}

void DataLeakOutAlertEvent::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool DataLeakOutAlertEvent::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string DataLeakOutAlertEvent::GetInstanceType() const
{
    return m_instanceType;
}

void DataLeakOutAlertEvent::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool DataLeakOutAlertEvent::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string DataLeakOutAlertEvent::GetRegion() const
{
    return m_region;
}

void DataLeakOutAlertEvent::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool DataLeakOutAlertEvent::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string DataLeakOutAlertEvent::GetSrcIP() const
{
    return m_srcIP;
}

void DataLeakOutAlertEvent::SetSrcIP(const string& _srcIP)
{
    m_srcIP = _srcIP;
    m_srcIPHasBeenSet = true;
}

bool DataLeakOutAlertEvent::SrcIPHasBeenSet() const
{
    return m_srcIPHasBeenSet;
}

string DataLeakOutAlertEvent::GetDstIPPort() const
{
    return m_dstIPPort;
}

void DataLeakOutAlertEvent::SetDstIPPort(const string& _dstIPPort)
{
    m_dstIPPort = _dstIPPort;
    m_dstIPPortHasBeenSet = true;
}

bool DataLeakOutAlertEvent::DstIPPortHasBeenSet() const
{
    return m_dstIPPortHasBeenSet;
}

string DataLeakOutAlertEvent::GetHostname() const
{
    return m_hostname;
}

void DataLeakOutAlertEvent::SetHostname(const string& _hostname)
{
    m_hostname = _hostname;
    m_hostnameHasBeenSet = true;
}

bool DataLeakOutAlertEvent::HostnameHasBeenSet() const
{
    return m_hostnameHasBeenSet;
}

string DataLeakOutAlertEvent::GetDstServiceType() const
{
    return m_dstServiceType;
}

void DataLeakOutAlertEvent::SetDstServiceType(const string& _dstServiceType)
{
    m_dstServiceType = _dstServiceType;
    m_dstServiceTypeHasBeenSet = true;
}

bool DataLeakOutAlertEvent::DstServiceTypeHasBeenSet() const
{
    return m_dstServiceTypeHasBeenSet;
}

string DataLeakOutAlertEvent::GetDstServiceName() const
{
    return m_dstServiceName;
}

void DataLeakOutAlertEvent::SetDstServiceName(const string& _dstServiceName)
{
    m_dstServiceName = _dstServiceName;
    m_dstServiceNameHasBeenSet = true;
}

bool DataLeakOutAlertEvent::DstServiceNameHasBeenSet() const
{
    return m_dstServiceNameHasBeenSet;
}

string DataLeakOutAlertEvent::GetLeakTypeSet() const
{
    return m_leakTypeSet;
}

void DataLeakOutAlertEvent::SetLeakTypeSet(const string& _leakTypeSet)
{
    m_leakTypeSet = _leakTypeSet;
    m_leakTypeSetHasBeenSet = true;
}

bool DataLeakOutAlertEvent::LeakTypeSetHasBeenSet() const
{
    return m_leakTypeSetHasBeenSet;
}

uint64_t DataLeakOutAlertEvent::GetEventCount() const
{
    return m_eventCount;
}

void DataLeakOutAlertEvent::SetEventCount(const uint64_t& _eventCount)
{
    m_eventCount = _eventCount;
    m_eventCountHasBeenSet = true;
}

bool DataLeakOutAlertEvent::EventCountHasBeenSet() const
{
    return m_eventCountHasBeenSet;
}

string DataLeakOutAlertEvent::GetFirstIdentificationTime() const
{
    return m_firstIdentificationTime;
}

void DataLeakOutAlertEvent::SetFirstIdentificationTime(const string& _firstIdentificationTime)
{
    m_firstIdentificationTime = _firstIdentificationTime;
    m_firstIdentificationTimeHasBeenSet = true;
}

bool DataLeakOutAlertEvent::FirstIdentificationTimeHasBeenSet() const
{
    return m_firstIdentificationTimeHasBeenSet;
}

string DataLeakOutAlertEvent::GetLatestIdentificationTime() const
{
    return m_latestIdentificationTime;
}

void DataLeakOutAlertEvent::SetLatestIdentificationTime(const string& _latestIdentificationTime)
{
    m_latestIdentificationTime = _latestIdentificationTime;
    m_latestIdentificationTimeHasBeenSet = true;
}

bool DataLeakOutAlertEvent::LatestIdentificationTimeHasBeenSet() const
{
    return m_latestIdentificationTimeHasBeenSet;
}

uint64_t DataLeakOutAlertEvent::GetLevel() const
{
    return m_level;
}

void DataLeakOutAlertEvent::SetLevel(const uint64_t& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool DataLeakOutAlertEvent::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

uint64_t DataLeakOutAlertEvent::GetStatus() const
{
    return m_status;
}

void DataLeakOutAlertEvent::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DataLeakOutAlertEvent::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string DataLeakOutAlertEvent::GetComment() const
{
    return m_comment;
}

void DataLeakOutAlertEvent::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool DataLeakOutAlertEvent::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string DataLeakOutAlertEvent::GetApiPattern() const
{
    return m_apiPattern;
}

void DataLeakOutAlertEvent::SetApiPattern(const string& _apiPattern)
{
    m_apiPattern = _apiPattern;
    m_apiPatternHasBeenSet = true;
}

bool DataLeakOutAlertEvent::ApiPatternHasBeenSet() const
{
    return m_apiPatternHasBeenSet;
}

uint64_t DataLeakOutAlertEvent::GetAnalysisStatus() const
{
    return m_analysisStatus;
}

void DataLeakOutAlertEvent::SetAnalysisStatus(const uint64_t& _analysisStatus)
{
    m_analysisStatus = _analysisStatus;
    m_analysisStatusHasBeenSet = true;
}

bool DataLeakOutAlertEvent::AnalysisStatusHasBeenSet() const
{
    return m_analysisStatusHasBeenSet;
}

string DataLeakOutAlertEvent::GetAnalysisFailReason() const
{
    return m_analysisFailReason;
}

void DataLeakOutAlertEvent::SetAnalysisFailReason(const string& _analysisFailReason)
{
    m_analysisFailReason = _analysisFailReason;
    m_analysisFailReasonHasBeenSet = true;
}

bool DataLeakOutAlertEvent::AnalysisFailReasonHasBeenSet() const
{
    return m_analysisFailReasonHasBeenSet;
}

string DataLeakOutAlertEvent::GetApiBizType() const
{
    return m_apiBizType;
}

void DataLeakOutAlertEvent::SetApiBizType(const string& _apiBizType)
{
    m_apiBizType = _apiBizType;
    m_apiBizTypeHasBeenSet = true;
}

bool DataLeakOutAlertEvent::ApiBizTypeHasBeenSet() const
{
    return m_apiBizTypeHasBeenSet;
}

string DataLeakOutAlertEvent::GetRiskScenario() const
{
    return m_riskScenario;
}

void DataLeakOutAlertEvent::SetRiskScenario(const string& _riskScenario)
{
    m_riskScenario = _riskScenario;
    m_riskScenarioHasBeenSet = true;
}

bool DataLeakOutAlertEvent::RiskScenarioHasBeenSet() const
{
    return m_riskScenarioHasBeenSet;
}

int64_t DataLeakOutAlertEvent::GetAiSuggestedLevel() const
{
    return m_aiSuggestedLevel;
}

void DataLeakOutAlertEvent::SetAiSuggestedLevel(const int64_t& _aiSuggestedLevel)
{
    m_aiSuggestedLevel = _aiSuggestedLevel;
    m_aiSuggestedLevelHasBeenSet = true;
}

bool DataLeakOutAlertEvent::AiSuggestedLevelHasBeenSet() const
{
    return m_aiSuggestedLevelHasBeenSet;
}

string DataLeakOutAlertEvent::GetDstGeoLocation() const
{
    return m_dstGeoLocation;
}

void DataLeakOutAlertEvent::SetDstGeoLocation(const string& _dstGeoLocation)
{
    m_dstGeoLocation = _dstGeoLocation;
    m_dstGeoLocationHasBeenSet = true;
}

bool DataLeakOutAlertEvent::DstGeoLocationHasBeenSet() const
{
    return m_dstGeoLocationHasBeenSet;
}

string DataLeakOutAlertEvent::GetHighestLevel() const
{
    return m_highestLevel;
}

void DataLeakOutAlertEvent::SetHighestLevel(const string& _highestLevel)
{
    m_highestLevel = _highestLevel;
    m_highestLevelHasBeenSet = true;
}

bool DataLeakOutAlertEvent::HighestLevelHasBeenSet() const
{
    return m_highestLevelHasBeenSet;
}

