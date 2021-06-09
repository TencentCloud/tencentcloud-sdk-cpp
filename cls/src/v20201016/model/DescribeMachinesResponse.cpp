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
    m_serviceLoggingHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMachinesResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("Machines") && !rsp["Machines"].IsNull())
    {
        if (!rsp["Machines"].IsArray())
            return CoreInternalOutcome(Error("response `Machines` is not array type"));

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
            return CoreInternalOutcome(Error("response `AutoUpdate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoUpdate = rsp["AutoUpdate"].GetInt64();
        m_autoUpdateHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateStartTime") && !rsp["UpdateStartTime"].IsNull())
    {
        if (!rsp["UpdateStartTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `UpdateStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateStartTime = string(rsp["UpdateStartTime"].GetString());
        m_updateStartTimeHasBeenSet = true;
    }

    if (rsp.HasMember("UpdateEndTime") && !rsp["UpdateEndTime"].IsNull())
    {
        if (!rsp["UpdateEndTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `UpdateEndTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateEndTime = string(rsp["UpdateEndTime"].GetString());
        m_updateEndTimeHasBeenSet = true;
    }

    if (rsp.HasMember("LatestAgentVersion") && !rsp["LatestAgentVersion"].IsNull())
    {
        if (!rsp["LatestAgentVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `LatestAgentVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestAgentVersion = string(rsp["LatestAgentVersion"].GetString());
        m_latestAgentVersionHasBeenSet = true;
    }

    if (rsp.HasMember("ServiceLogging") && !rsp["ServiceLogging"].IsNull())
    {
        if (!rsp["ServiceLogging"].IsBool())
        {
            return CoreInternalOutcome(Error("response `ServiceLogging` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_serviceLogging = rsp["ServiceLogging"].GetBool();
        m_serviceLoggingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


