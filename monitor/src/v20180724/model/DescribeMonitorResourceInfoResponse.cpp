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

#include <tencentcloud/monitor/v20180724/model/DescribeMonitorResourceInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribeMonitorResourceInfoResponse::DescribeMonitorResourceInfoResponse() :
    m_phoneAlarmNumberHasBeenSet(false),
    m_advancedMetricNumberHasBeenSet(false),
    m_aPIUsageNumberHasBeenSet(false),
    m_alarmSMSNumberHasBeenSet(false)
{
}

CoreInternalOutcome DescribeMonitorResourceInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("PhoneAlarmNumber") && !rsp["PhoneAlarmNumber"].IsNull())
    {
        if (!rsp["PhoneAlarmNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PhoneAlarmNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_phoneAlarmNumber = rsp["PhoneAlarmNumber"].GetInt64();
        m_phoneAlarmNumberHasBeenSet = true;
    }

    if (rsp.HasMember("AdvancedMetricNumber") && !rsp["AdvancedMetricNumber"].IsNull())
    {
        if (!rsp["AdvancedMetricNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedMetricNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_advancedMetricNumber = rsp["AdvancedMetricNumber"].GetInt64();
        m_advancedMetricNumberHasBeenSet = true;
    }

    if (rsp.HasMember("APIUsageNumber") && !rsp["APIUsageNumber"].IsNull())
    {
        if (!rsp["APIUsageNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `APIUsageNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_aPIUsageNumber = rsp["APIUsageNumber"].GetInt64();
        m_aPIUsageNumberHasBeenSet = true;
    }

    if (rsp.HasMember("AlarmSMSNumber") && !rsp["AlarmSMSNumber"].IsNull())
    {
        if (!rsp["AlarmSMSNumber"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AlarmSMSNumber` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_alarmSMSNumber = rsp["AlarmSMSNumber"].GetInt64();
        m_alarmSMSNumberHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeMonitorResourceInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_phoneAlarmNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PhoneAlarmNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_phoneAlarmNumber, allocator);
    }

    if (m_advancedMetricNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdvancedMetricNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_advancedMetricNumber, allocator);
    }

    if (m_aPIUsageNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "APIUsageNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_aPIUsageNumber, allocator);
    }

    if (m_alarmSMSNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmSMSNumber";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmSMSNumber, allocator);
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


int64_t DescribeMonitorResourceInfoResponse::GetPhoneAlarmNumber() const
{
    return m_phoneAlarmNumber;
}

bool DescribeMonitorResourceInfoResponse::PhoneAlarmNumberHasBeenSet() const
{
    return m_phoneAlarmNumberHasBeenSet;
}

int64_t DescribeMonitorResourceInfoResponse::GetAdvancedMetricNumber() const
{
    return m_advancedMetricNumber;
}

bool DescribeMonitorResourceInfoResponse::AdvancedMetricNumberHasBeenSet() const
{
    return m_advancedMetricNumberHasBeenSet;
}

int64_t DescribeMonitorResourceInfoResponse::GetAPIUsageNumber() const
{
    return m_aPIUsageNumber;
}

bool DescribeMonitorResourceInfoResponse::APIUsageNumberHasBeenSet() const
{
    return m_aPIUsageNumberHasBeenSet;
}

int64_t DescribeMonitorResourceInfoResponse::GetAlarmSMSNumber() const
{
    return m_alarmSMSNumber;
}

bool DescribeMonitorResourceInfoResponse::AlarmSMSNumberHasBeenSet() const
{
    return m_alarmSMSNumberHasBeenSet;
}


