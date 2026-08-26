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

#include <tencentcloud/monitor/v20180724/model/DescribeAlarmHistoryShieldResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribeAlarmHistoryShieldResponse::DescribeAlarmHistoryShieldResponse() :
    m_shieldIdHasBeenSet(false),
    m_monitorTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_monitorTypeShowNameHasBeenSet(false),
    m_nameSpaceHasBeenSet(false),
    m_nameSpaceShowNameHasBeenSet(false),
    m_shieldObjectHasBeenSet(false),
    m_shieldMetricHasBeenSet(false),
    m_shieldTimeTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_loopStartDateHasBeenSet(false),
    m_loopEndDateHasBeenSet(false),
    m_currentStatusHasBeenSet(false),
    m_shieldPolicyIdHasBeenSet(false),
    m_shieldAlarmLevelHasBeenSet(false),
    m_shieldTagHasBeenSet(false),
    m_metricNameHasBeenSet(false),
    m_timeZoneHasBeenSet(false),
    m_sessionIdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAlarmHistoryShieldResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("ShieldId") && !rsp["ShieldId"].IsNull())
    {
        if (!rsp["ShieldId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShieldId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shieldId = string(rsp["ShieldId"].GetString());
        m_shieldIdHasBeenSet = true;
    }

    if (rsp.HasMember("MonitorType") && !rsp["MonitorType"].IsNull())
    {
        if (!rsp["MonitorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorType = string(rsp["MonitorType"].GetString());
        m_monitorTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Name") && !rsp["Name"].IsNull())
    {
        if (!rsp["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(rsp["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (rsp.HasMember("Enable") && !rsp["Enable"].IsNull())
    {
        if (!rsp["Enable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `Enable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_enable = rsp["Enable"].GetUint64();
        m_enableHasBeenSet = true;
    }

    if (rsp.HasMember("MonitorTypeShowName") && !rsp["MonitorTypeShowName"].IsNull())
    {
        if (!rsp["MonitorTypeShowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MonitorTypeShowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_monitorTypeShowName = string(rsp["MonitorTypeShowName"].GetString());
        m_monitorTypeShowNameHasBeenSet = true;
    }

    if (rsp.HasMember("NameSpace") && !rsp["NameSpace"].IsNull())
    {
        if (!rsp["NameSpace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NameSpace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameSpace = string(rsp["NameSpace"].GetString());
        m_nameSpaceHasBeenSet = true;
    }

    if (rsp.HasMember("NameSpaceShowName") && !rsp["NameSpaceShowName"].IsNull())
    {
        if (!rsp["NameSpaceShowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NameSpaceShowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameSpaceShowName = string(rsp["NameSpaceShowName"].GetString());
        m_nameSpaceShowNameHasBeenSet = true;
    }

    if (rsp.HasMember("ShieldObject") && !rsp["ShieldObject"].IsNull())
    {
        if (!rsp["ShieldObject"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ShieldObject` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ShieldObject"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_shieldObject.push_back((*itr).GetString());
        }
        m_shieldObjectHasBeenSet = true;
    }

    if (rsp.HasMember("ShieldMetric") && !rsp["ShieldMetric"].IsNull())
    {
        if (!rsp["ShieldMetric"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ShieldMetric` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ShieldMetric"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ShieldMetric item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_shieldMetric.push_back(item);
        }
        m_shieldMetricHasBeenSet = true;
    }

    if (rsp.HasMember("ShieldTimeType") && !rsp["ShieldTimeType"].IsNull())
    {
        if (!rsp["ShieldTimeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShieldTimeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shieldTimeType = string(rsp["ShieldTimeType"].GetString());
        m_shieldTimeTypeHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = rsp["StartTime"].GetUint64();
        m_startTimeHasBeenSet = true;
    }

    if (rsp.HasMember("EndTime") && !rsp["EndTime"].IsNull())
    {
        if (!rsp["EndTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EndTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_endTime = rsp["EndTime"].GetUint64();
        m_endTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LoopStartDate") && !rsp["LoopStartDate"].IsNull())
    {
        if (!rsp["LoopStartDate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoopStartDate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_loopStartDate = rsp["LoopStartDate"].GetUint64();
        m_loopStartDateHasBeenSet = true;
    }

    if (rsp.HasMember("LoopEndDate") && !rsp["LoopEndDate"].IsNull())
    {
        if (!rsp["LoopEndDate"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LoopEndDate` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_loopEndDate = rsp["LoopEndDate"].GetUint64();
        m_loopEndDateHasBeenSet = true;
    }

    if (rsp.HasMember("CurrentStatus") && !rsp["CurrentStatus"].IsNull())
    {
        if (!rsp["CurrentStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CurrentStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_currentStatus = string(rsp["CurrentStatus"].GetString());
        m_currentStatusHasBeenSet = true;
    }

    if (rsp.HasMember("ShieldPolicyId") && !rsp["ShieldPolicyId"].IsNull())
    {
        if (!rsp["ShieldPolicyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShieldPolicyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shieldPolicyId = string(rsp["ShieldPolicyId"].GetString());
        m_shieldPolicyIdHasBeenSet = true;
    }

    if (rsp.HasMember("ShieldAlarmLevel") && !rsp["ShieldAlarmLevel"].IsNull())
    {
        if (!rsp["ShieldAlarmLevel"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ShieldAlarmLevel` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ShieldAlarmLevel"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_shieldAlarmLevel.push_back((*itr).GetString());
        }
        m_shieldAlarmLevelHasBeenSet = true;
    }

    if (rsp.HasMember("ShieldTag") && !rsp["ShieldTag"].IsNull())
    {
        if (!rsp["ShieldTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ShieldTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_shieldTag = string(rsp["ShieldTag"].GetString());
        m_shieldTagHasBeenSet = true;
    }

    if (rsp.HasMember("MetricName") && !rsp["MetricName"].IsNull())
    {
        if (!rsp["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(rsp["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (rsp.HasMember("TimeZone") && !rsp["TimeZone"].IsNull())
    {
        if (!rsp["TimeZone"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TimeZone` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_timeZone = rsp["TimeZone"].GetDouble();
        m_timeZoneHasBeenSet = true;
    }

    if (rsp.HasMember("SessionId") && !rsp["SessionId"].IsNull())
    {
        if (!rsp["SessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sessionId = string(rsp["SessionId"].GetString());
        m_sessionIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAlarmHistoryShieldResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_shieldIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shieldId.c_str(), allocator).Move(), allocator);
    }

    if (m_monitorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monitorType.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_monitorTypeShowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MonitorTypeShowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_monitorTypeShowName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameSpace.c_str(), allocator).Move(), allocator);
    }

    if (m_nameSpaceShowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameSpaceShowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameSpaceShowName.c_str(), allocator).Move(), allocator);
    }

    if (m_shieldObjectHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldObject";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_shieldObject.begin(); itr != m_shieldObject.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_shieldMetricHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldMetric";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_shieldMetric.begin(); itr != m_shieldMetric.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_shieldTimeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldTimeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shieldTimeType.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_endTime, allocator);
    }

    if (m_loopStartDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoopStartDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loopStartDate, allocator);
    }

    if (m_loopEndDateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoopEndDate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loopEndDate, allocator);
    }

    if (m_currentStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_currentStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_shieldPolicyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldPolicyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shieldPolicyId.c_str(), allocator).Move(), allocator);
    }

    if (m_shieldAlarmLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldAlarmLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_shieldAlarmLevel.begin(); itr != m_shieldAlarmLevel.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_shieldTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShieldTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_shieldTag.c_str(), allocator).Move(), allocator);
    }

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_timeZoneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeZone";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timeZone, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


string DescribeAlarmHistoryShieldResponse::GetShieldId() const
{
    return m_shieldId;
}

bool DescribeAlarmHistoryShieldResponse::ShieldIdHasBeenSet() const
{
    return m_shieldIdHasBeenSet;
}

string DescribeAlarmHistoryShieldResponse::GetMonitorType() const
{
    return m_monitorType;
}

bool DescribeAlarmHistoryShieldResponse::MonitorTypeHasBeenSet() const
{
    return m_monitorTypeHasBeenSet;
}

string DescribeAlarmHistoryShieldResponse::GetName() const
{
    return m_name;
}

bool DescribeAlarmHistoryShieldResponse::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

uint64_t DescribeAlarmHistoryShieldResponse::GetEnable() const
{
    return m_enable;
}

bool DescribeAlarmHistoryShieldResponse::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string DescribeAlarmHistoryShieldResponse::GetMonitorTypeShowName() const
{
    return m_monitorTypeShowName;
}

bool DescribeAlarmHistoryShieldResponse::MonitorTypeShowNameHasBeenSet() const
{
    return m_monitorTypeShowNameHasBeenSet;
}

string DescribeAlarmHistoryShieldResponse::GetNameSpace() const
{
    return m_nameSpace;
}

bool DescribeAlarmHistoryShieldResponse::NameSpaceHasBeenSet() const
{
    return m_nameSpaceHasBeenSet;
}

string DescribeAlarmHistoryShieldResponse::GetNameSpaceShowName() const
{
    return m_nameSpaceShowName;
}

bool DescribeAlarmHistoryShieldResponse::NameSpaceShowNameHasBeenSet() const
{
    return m_nameSpaceShowNameHasBeenSet;
}

vector<string> DescribeAlarmHistoryShieldResponse::GetShieldObject() const
{
    return m_shieldObject;
}

bool DescribeAlarmHistoryShieldResponse::ShieldObjectHasBeenSet() const
{
    return m_shieldObjectHasBeenSet;
}

vector<ShieldMetric> DescribeAlarmHistoryShieldResponse::GetShieldMetric() const
{
    return m_shieldMetric;
}

bool DescribeAlarmHistoryShieldResponse::ShieldMetricHasBeenSet() const
{
    return m_shieldMetricHasBeenSet;
}

string DescribeAlarmHistoryShieldResponse::GetShieldTimeType() const
{
    return m_shieldTimeType;
}

bool DescribeAlarmHistoryShieldResponse::ShieldTimeTypeHasBeenSet() const
{
    return m_shieldTimeTypeHasBeenSet;
}

uint64_t DescribeAlarmHistoryShieldResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeAlarmHistoryShieldResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

uint64_t DescribeAlarmHistoryShieldResponse::GetEndTime() const
{
    return m_endTime;
}

bool DescribeAlarmHistoryShieldResponse::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t DescribeAlarmHistoryShieldResponse::GetLoopStartDate() const
{
    return m_loopStartDate;
}

bool DescribeAlarmHistoryShieldResponse::LoopStartDateHasBeenSet() const
{
    return m_loopStartDateHasBeenSet;
}

uint64_t DescribeAlarmHistoryShieldResponse::GetLoopEndDate() const
{
    return m_loopEndDate;
}

bool DescribeAlarmHistoryShieldResponse::LoopEndDateHasBeenSet() const
{
    return m_loopEndDateHasBeenSet;
}

string DescribeAlarmHistoryShieldResponse::GetCurrentStatus() const
{
    return m_currentStatus;
}

bool DescribeAlarmHistoryShieldResponse::CurrentStatusHasBeenSet() const
{
    return m_currentStatusHasBeenSet;
}

string DescribeAlarmHistoryShieldResponse::GetShieldPolicyId() const
{
    return m_shieldPolicyId;
}

bool DescribeAlarmHistoryShieldResponse::ShieldPolicyIdHasBeenSet() const
{
    return m_shieldPolicyIdHasBeenSet;
}

vector<string> DescribeAlarmHistoryShieldResponse::GetShieldAlarmLevel() const
{
    return m_shieldAlarmLevel;
}

bool DescribeAlarmHistoryShieldResponse::ShieldAlarmLevelHasBeenSet() const
{
    return m_shieldAlarmLevelHasBeenSet;
}

string DescribeAlarmHistoryShieldResponse::GetShieldTag() const
{
    return m_shieldTag;
}

bool DescribeAlarmHistoryShieldResponse::ShieldTagHasBeenSet() const
{
    return m_shieldTagHasBeenSet;
}

string DescribeAlarmHistoryShieldResponse::GetMetricName() const
{
    return m_metricName;
}

bool DescribeAlarmHistoryShieldResponse::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

double DescribeAlarmHistoryShieldResponse::GetTimeZone() const
{
    return m_timeZone;
}

bool DescribeAlarmHistoryShieldResponse::TimeZoneHasBeenSet() const
{
    return m_timeZoneHasBeenSet;
}

string DescribeAlarmHistoryShieldResponse::GetSessionId() const
{
    return m_sessionId;
}

bool DescribeAlarmHistoryShieldResponse::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}


