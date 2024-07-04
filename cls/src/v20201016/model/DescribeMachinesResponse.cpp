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

#include <tencentcloud/cls/v20201016/model/DescribeMachinesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DescribeMachinesResponse::DescribeMachinesResponse() :
    m_machinesHasBeenSet(false),
    m_autoUpdateHasBeenSet(false),
    m_updateStartTimeHasBeenSet(false),
    m_updateEndTimeHasBeenSet(false),
    m_latestAgentVersionHasBeenSet(false),
    m_serviceLoggingHasBeenSet(false),
    m_totalCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMachinesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Machines") && !rsp["Machines"].IsNull())
    {
        if (!rsp["Machines"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Machines` is not array type"));

        const rapidjson::Value &tmpValue = rsp["Machines"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MachineInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_machines.push_back(item);
        }
        m_machinesHasBeenSet = true;
    }

    if (rsp.HasMember("AutoUpdate") && !rsp["AutoUpdate"].IsNull())
    {
        if (!rsp["AutoUpdate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoUpdate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoUpdate = rsp["AutoUpdate"].GetInt64();
        m_autoUpdateHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateStartTime") && !rsp["UpdateStartTime"].IsNull())
    {
        if (!rsp["UpdateStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateStartTime = string(rsp["UpdateStartTime"].GetString());
        m_updateStartTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateEndTime") && !rsp["UpdateEndTime"].IsNull())
    {
        if (!rsp["UpdateEndTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdateEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateEndTime = string(rsp["UpdateEndTime"].GetString());
        m_updateEndTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LatestAgentVersion") && !rsp["LatestAgentVersion"].IsNull())
    {
        if (!rsp["LatestAgentVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LatestAgentVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestAgentVersion = string(rsp["LatestAgentVersion"].GetString());
        m_latestAgentVersionHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceLogging") && !rsp["ServiceLogging"].IsNull())
    {
        if (!rsp["ServiceLogging"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceLogging` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_serviceLogging = rsp["ServiceLogging"].GetBool();
        m_serviceLoggingHasBeenSet = true;
    }

    if (rsp.HasMember("TotalCount") && !rsp["TotalCount"].IsNull())
    {
        if (!rsp["TotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = rsp["TotalCount"].GetUint64();
        m_totalCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeMachinesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_machinesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Machines";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_machines.begin(); itr != m_machines.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_autoUpdateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoUpdate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoUpdate, allocator);
    }

    if (m_updateStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateEndTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateEndTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateEndTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestAgentVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestAgentVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestAgentVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceLoggingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceLogging";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_serviceLogging, allocator);
    }

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
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


vector<MachineInfo> DescribeMachinesResponse::GetMachines() const
{
    return m_machines;
}

bool DescribeMachinesResponse::MachinesHasBeenSet() const
{
    return m_machinesHasBeenSet;
}

int64_t DescribeMachinesResponse::GetAutoUpdate() const
{
    return m_autoUpdate;
}

bool DescribeMachinesResponse::AutoUpdateHasBeenSet() const
{
    return m_autoUpdateHasBeenSet;
}

string DescribeMachinesResponse::GetUpdateStartTime() const
{
    return m_updateStartTime;
}

bool DescribeMachinesResponse::UpdateStartTimeHasBeenSet() const
{
    return m_updateStartTimeHasBeenSet;
}

string DescribeMachinesResponse::GetUpdateEndTime() const
{
    return m_updateEndTime;
}

bool DescribeMachinesResponse::UpdateEndTimeHasBeenSet() const
{
    return m_updateEndTimeHasBeenSet;
}

string DescribeMachinesResponse::GetLatestAgentVersion() const
{
    return m_latestAgentVersion;
}

bool DescribeMachinesResponse::LatestAgentVersionHasBeenSet() const
{
    return m_latestAgentVersionHasBeenSet;
}

bool DescribeMachinesResponse::GetServiceLogging() const
{
    return m_serviceLogging;
}

bool DescribeMachinesResponse::ServiceLoggingHasBeenSet() const
{
    return m_serviceLoggingHasBeenSet;
}

uint64_t DescribeMachinesResponse::GetTotalCount() const
{
    return m_totalCount;
}

bool DescribeMachinesResponse::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}


