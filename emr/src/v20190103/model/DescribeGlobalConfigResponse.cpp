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

#include <tencentcloud/emr/v20190103/model/DescribeGlobalConfigResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeGlobalConfigResponse::DescribeGlobalConfigResponse() :
    m_enableResourceScheduleHasBeenSet(false),
    m_activeSchedulerHasBeenSet(false),
    m_capacityGlobalConfigHasBeenSet(false),
    m_fairGlobalConfigHasBeenSet(false),
    m_schedulerHasBeenSet(false)
{
}

CoreInternalOutcome DescribeGlobalConfigResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EnableResourceSchedule") && !rsp["EnableResourceSchedule"].IsNull())
    {
        if (!rsp["EnableResourceSchedule"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnableResourceSchedule` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableResourceSchedule = rsp["EnableResourceSchedule"].GetBool();
        m_enableResourceScheduleHasBeenSet = true;
    }

    if (rsp.HasMember("ActiveScheduler") && !rsp["ActiveScheduler"].IsNull())
    {
        if (!rsp["ActiveScheduler"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ActiveScheduler` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activeScheduler = string(rsp["ActiveScheduler"].GetString());
        m_activeSchedulerHasBeenSet = true;
    }

    if (rsp.HasMember("CapacityGlobalConfig") && !rsp["CapacityGlobalConfig"].IsNull())
    {
        if (!rsp["CapacityGlobalConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CapacityGlobalConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_capacityGlobalConfig.Deserialize(rsp["CapacityGlobalConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_capacityGlobalConfigHasBeenSet = true;
    }

    if (rsp.HasMember("FairGlobalConfig") && !rsp["FairGlobalConfig"].IsNull())
    {
        if (!rsp["FairGlobalConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FairGlobalConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fairGlobalConfig.Deserialize(rsp["FairGlobalConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fairGlobalConfigHasBeenSet = true;
    }

    if (rsp.HasMember("Scheduler") && !rsp["Scheduler"].IsNull())
    {
        if (!rsp["Scheduler"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Scheduler` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scheduler = string(rsp["Scheduler"].GetString());
        m_schedulerHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeGlobalConfigResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_enableResourceScheduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableResourceSchedule";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableResourceSchedule, allocator);
    }

    if (m_activeSchedulerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveScheduler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_activeScheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_capacityGlobalConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CapacityGlobalConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_capacityGlobalConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_fairGlobalConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FairGlobalConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fairGlobalConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_schedulerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduler.c_str(), allocator).Move(), allocator);
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


bool DescribeGlobalConfigResponse::GetEnableResourceSchedule() const
{
    return m_enableResourceSchedule;
}

bool DescribeGlobalConfigResponse::EnableResourceScheduleHasBeenSet() const
{
    return m_enableResourceScheduleHasBeenSet;
}

string DescribeGlobalConfigResponse::GetActiveScheduler() const
{
    return m_activeScheduler;
}

bool DescribeGlobalConfigResponse::ActiveSchedulerHasBeenSet() const
{
    return m_activeSchedulerHasBeenSet;
}

CapacityGlobalConfig DescribeGlobalConfigResponse::GetCapacityGlobalConfig() const
{
    return m_capacityGlobalConfig;
}

bool DescribeGlobalConfigResponse::CapacityGlobalConfigHasBeenSet() const
{
    return m_capacityGlobalConfigHasBeenSet;
}

FairGlobalConfig DescribeGlobalConfigResponse::GetFairGlobalConfig() const
{
    return m_fairGlobalConfig;
}

bool DescribeGlobalConfigResponse::FairGlobalConfigHasBeenSet() const
{
    return m_fairGlobalConfigHasBeenSet;
}

string DescribeGlobalConfigResponse::GetScheduler() const
{
    return m_scheduler;
}

bool DescribeGlobalConfigResponse::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}


