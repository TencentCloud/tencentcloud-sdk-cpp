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

#include <tencentcloud/emr/v20190103/model/DescribeResourceScheduleResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

DescribeResourceScheduleResponse::DescribeResourceScheduleResponse() :
    m_openSwitchHasBeenSet(false),
    m_schedulerHasBeenSet(false),
    m_fSInfoHasBeenSet(false),
    m_cSInfoHasBeenSet(false)
{
}

CoreInternalOutcome DescribeResourceScheduleResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("OpenSwitch") && !rsp["OpenSwitch"].IsNull())
    {
        if (!rsp["OpenSwitch"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OpenSwitch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_openSwitch = rsp["OpenSwitch"].GetBool();
        m_openSwitchHasBeenSet = true;
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

    if (rsp.HasMember("FSInfo") && !rsp["FSInfo"].IsNull())
    {
        if (!rsp["FSInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FSInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fSInfo = string(rsp["FSInfo"].GetString());
        m_fSInfoHasBeenSet = true;
    }

    if (rsp.HasMember("CSInfo") && !rsp["CSInfo"].IsNull())
    {
        if (!rsp["CSInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CSInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cSInfo = string(rsp["CSInfo"].GetString());
        m_cSInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeResourceScheduleResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_openSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpenSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_openSwitch, allocator);
    }

    if (m_schedulerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scheduler";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scheduler.c_str(), allocator).Move(), allocator);
    }

    if (m_fSInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FSInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fSInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_cSInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CSInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cSInfo.c_str(), allocator).Move(), allocator);
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


bool DescribeResourceScheduleResponse::GetOpenSwitch() const
{
    return m_openSwitch;
}

bool DescribeResourceScheduleResponse::OpenSwitchHasBeenSet() const
{
    return m_openSwitchHasBeenSet;
}

string DescribeResourceScheduleResponse::GetScheduler() const
{
    return m_scheduler;
}

bool DescribeResourceScheduleResponse::SchedulerHasBeenSet() const
{
    return m_schedulerHasBeenSet;
}

string DescribeResourceScheduleResponse::GetFSInfo() const
{
    return m_fSInfo;
}

bool DescribeResourceScheduleResponse::FSInfoHasBeenSet() const
{
    return m_fSInfoHasBeenSet;
}

string DescribeResourceScheduleResponse::GetCSInfo() const
{
    return m_cSInfo;
}

bool DescribeResourceScheduleResponse::CSInfoHasBeenSet() const
{
    return m_cSInfoHasBeenSet;
}


