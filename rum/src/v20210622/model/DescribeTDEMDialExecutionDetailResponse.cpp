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

#include <tencentcloud/rum/v20210622/model/DescribeTDEMDialExecutionDetailResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

DescribeTDEMDialExecutionDetailResponse::DescribeTDEMDialExecutionDetailResponse() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskSessionIdHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_sessionIdHasBeenSet(false),
    m_successHasBeenSet(false),
    m_avgDurationHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_appVersionHasBeenSet(false),
    m_deviceHasBeenSet(false),
    m_netTypeHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_targetIpsHasBeenSet(false),
    m_probesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeTDEMDialExecutionDetailResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TaskId") && !rsp["TaskId"].IsNull())
    {
        if (!rsp["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(rsp["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (rsp.HasMember("TaskName") && !rsp["TaskName"].IsNull())
    {
        if (!rsp["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(rsp["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (rsp.HasMember("TaskSessionId") && !rsp["TaskSessionId"].IsNull())
    {
        if (!rsp["TaskSessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TaskSessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskSessionId = string(rsp["TaskSessionId"].GetString());
        m_taskSessionIdHasBeenSet = true;
    }

    if (rsp.HasMember("StartTime") && !rsp["StartTime"].IsNull())
    {
        if (!rsp["StartTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `StartTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_startTime = rsp["StartTime"].GetInt64();
        m_startTimeHasBeenSet = true;
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

    if (rsp.HasMember("Success") && !rsp["Success"].IsNull())
    {
        if (!rsp["Success"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Success` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_success = rsp["Success"].GetBool();
        m_successHasBeenSet = true;
    }

    if (rsp.HasMember("AvgDuration") && !rsp["AvgDuration"].IsNull())
    {
        if (!rsp["AvgDuration"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AvgDuration` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgDuration = rsp["AvgDuration"].GetDouble();
        m_avgDurationHasBeenSet = true;
    }

    if (rsp.HasMember("Platform") && !rsp["Platform"].IsNull())
    {
        if (!rsp["Platform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(rsp["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (rsp.HasMember("AppVersion") && !rsp["AppVersion"].IsNull())
    {
        if (!rsp["AppVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appVersion = string(rsp["AppVersion"].GetString());
        m_appVersionHasBeenSet = true;
    }

    if (rsp.HasMember("Device") && !rsp["Device"].IsNull())
    {
        if (!rsp["Device"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Device` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_device = string(rsp["Device"].GetString());
        m_deviceHasBeenSet = true;
    }

    if (rsp.HasMember("NetType") && !rsp["NetType"].IsNull())
    {
        if (!rsp["NetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_netType = string(rsp["NetType"].GetString());
        m_netTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Operator") && !rsp["Operator"].IsNull())
    {
        if (!rsp["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(rsp["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (rsp.HasMember("Region") && !rsp["Region"].IsNull())
    {
        if (!rsp["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(rsp["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (rsp.HasMember("TargetIps") && !rsp["TargetIps"].IsNull())
    {
        if (!rsp["TargetIps"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TargetIps` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TargetIps"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_targetIps.push_back((*itr).GetString());
        }
        m_targetIpsHasBeenSet = true;
    }

    if (rsp.HasMember("Probes") && !rsp["Probes"].IsNull())
    {
        if (!rsp["Probes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Probes` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Probes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DialProbe item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_probes.push_back(item);
        }
        m_probesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeTDEMDialExecutionDetailResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskSessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskSessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskSessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startTime, allocator);
    }

    if (m_sessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_successHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Success";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_success, allocator);
    }

    if (m_avgDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgDuration, allocator);
    }

    if (m_platformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_appVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Device";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_device.c_str(), allocator).Move(), allocator);
    }

    if (m_netTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_netType.c_str(), allocator).Move(), allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_targetIpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetIps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_targetIps.begin(); itr != m_targetIps.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_probesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Probes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_probes.begin(); itr != m_probes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
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


string DescribeTDEMDialExecutionDetailResponse::GetTaskId() const
{
    return m_taskId;
}

bool DescribeTDEMDialExecutionDetailResponse::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeTDEMDialExecutionDetailResponse::GetTaskName() const
{
    return m_taskName;
}

bool DescribeTDEMDialExecutionDetailResponse::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string DescribeTDEMDialExecutionDetailResponse::GetTaskSessionId() const
{
    return m_taskSessionId;
}

bool DescribeTDEMDialExecutionDetailResponse::TaskSessionIdHasBeenSet() const
{
    return m_taskSessionIdHasBeenSet;
}

int64_t DescribeTDEMDialExecutionDetailResponse::GetStartTime() const
{
    return m_startTime;
}

bool DescribeTDEMDialExecutionDetailResponse::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeTDEMDialExecutionDetailResponse::GetSessionId() const
{
    return m_sessionId;
}

bool DescribeTDEMDialExecutionDetailResponse::SessionIdHasBeenSet() const
{
    return m_sessionIdHasBeenSet;
}

bool DescribeTDEMDialExecutionDetailResponse::GetSuccess() const
{
    return m_success;
}

bool DescribeTDEMDialExecutionDetailResponse::SuccessHasBeenSet() const
{
    return m_successHasBeenSet;
}

double DescribeTDEMDialExecutionDetailResponse::GetAvgDuration() const
{
    return m_avgDuration;
}

bool DescribeTDEMDialExecutionDetailResponse::AvgDurationHasBeenSet() const
{
    return m_avgDurationHasBeenSet;
}

string DescribeTDEMDialExecutionDetailResponse::GetPlatform() const
{
    return m_platform;
}

bool DescribeTDEMDialExecutionDetailResponse::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string DescribeTDEMDialExecutionDetailResponse::GetAppVersion() const
{
    return m_appVersion;
}

bool DescribeTDEMDialExecutionDetailResponse::AppVersionHasBeenSet() const
{
    return m_appVersionHasBeenSet;
}

string DescribeTDEMDialExecutionDetailResponse::GetDevice() const
{
    return m_device;
}

bool DescribeTDEMDialExecutionDetailResponse::DeviceHasBeenSet() const
{
    return m_deviceHasBeenSet;
}

string DescribeTDEMDialExecutionDetailResponse::GetNetType() const
{
    return m_netType;
}

bool DescribeTDEMDialExecutionDetailResponse::NetTypeHasBeenSet() const
{
    return m_netTypeHasBeenSet;
}

string DescribeTDEMDialExecutionDetailResponse::GetOperator() const
{
    return m_operator;
}

bool DescribeTDEMDialExecutionDetailResponse::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string DescribeTDEMDialExecutionDetailResponse::GetRegion() const
{
    return m_region;
}

bool DescribeTDEMDialExecutionDetailResponse::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<string> DescribeTDEMDialExecutionDetailResponse::GetTargetIps() const
{
    return m_targetIps;
}

bool DescribeTDEMDialExecutionDetailResponse::TargetIpsHasBeenSet() const
{
    return m_targetIpsHasBeenSet;
}

vector<DialProbe> DescribeTDEMDialExecutionDetailResponse::GetProbes() const
{
    return m_probes;
}

bool DescribeTDEMDialExecutionDetailResponse::ProbesHasBeenSet() const
{
    return m_probesHasBeenSet;
}


