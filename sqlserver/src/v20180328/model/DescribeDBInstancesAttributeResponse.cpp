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

#include <tencentcloud/sqlserver/v20180328/model/DescribeDBInstancesAttributeResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Sqlserver::V20180328::Model;
using namespace std;

DescribeDBInstancesAttributeResponse::DescribeDBInstancesAttributeResponse() :
    m_instanceIdHasBeenSet(false),
    m_regularBackupEnableHasBeenSet(false),
    m_regularBackupSaveDaysHasBeenSet(false),
    m_regularBackupStrategyHasBeenSet(false),
    m_regularBackupCountsHasBeenSet(false),
    m_regularBackupStartTimeHasBeenSet(false),
    m_blockedThresholdHasBeenSet(false),
    m_eventSaveDaysHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBInstancesAttributeResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("InstanceId") && !rsp["InstanceId"].IsNull())
    {
        if (!rsp["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(rsp["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (rsp.HasMember("RegularBackupEnable") && !rsp["RegularBackupEnable"].IsNull())
    {
        if (!rsp["RegularBackupEnable"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegularBackupEnable` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regularBackupEnable = string(rsp["RegularBackupEnable"].GetString());
        m_regularBackupEnableHasBeenSet = true;
    }

    if (rsp.HasMember("RegularBackupSaveDays") && !rsp["RegularBackupSaveDays"].IsNull())
    {
        if (!rsp["RegularBackupSaveDays"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RegularBackupSaveDays` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regularBackupSaveDays = rsp["RegularBackupSaveDays"].GetUint64();
        m_regularBackupSaveDaysHasBeenSet = true;
    }

    if (rsp.HasMember("RegularBackupStrategy") && !rsp["RegularBackupStrategy"].IsNull())
    {
        if (!rsp["RegularBackupStrategy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegularBackupStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regularBackupStrategy = string(rsp["RegularBackupStrategy"].GetString());
        m_regularBackupStrategyHasBeenSet = true;
    }

    if (rsp.HasMember("RegularBackupCounts") && !rsp["RegularBackupCounts"].IsNull())
    {
        if (!rsp["RegularBackupCounts"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RegularBackupCounts` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_regularBackupCounts = rsp["RegularBackupCounts"].GetUint64();
        m_regularBackupCountsHasBeenSet = true;
    }

    if (rsp.HasMember("RegularBackupStartTime") && !rsp["RegularBackupStartTime"].IsNull())
    {
        if (!rsp["RegularBackupStartTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegularBackupStartTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_regularBackupStartTime = string(rsp["RegularBackupStartTime"].GetString());
        m_regularBackupStartTimeHasBeenSet = true;
    }

    if (rsp.HasMember("BlockedThreshold") && !rsp["BlockedThreshold"].IsNull())
    {
        if (!rsp["BlockedThreshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BlockedThreshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_blockedThreshold = rsp["BlockedThreshold"].GetInt64();
        m_blockedThresholdHasBeenSet = true;
    }

    if (rsp.HasMember("EventSaveDays") && !rsp["EventSaveDays"].IsNull())
    {
        if (!rsp["EventSaveDays"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventSaveDays` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_eventSaveDays = rsp["EventSaveDays"].GetInt64();
        m_eventSaveDaysHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDBInstancesAttributeResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_regularBackupEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegularBackupEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regularBackupEnable.c_str(), allocator).Move(), allocator);
    }

    if (m_regularBackupSaveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegularBackupSaveDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regularBackupSaveDays, allocator);
    }

    if (m_regularBackupStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegularBackupStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regularBackupStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_regularBackupCountsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegularBackupCounts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regularBackupCounts, allocator);
    }

    if (m_regularBackupStartTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegularBackupStartTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_regularBackupStartTime.c_str(), allocator).Move(), allocator);
    }

    if (m_blockedThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockedThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_blockedThreshold, allocator);
    }

    if (m_eventSaveDaysHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventSaveDays";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_eventSaveDays, allocator);
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


string DescribeDBInstancesAttributeResponse::GetInstanceId() const
{
    return m_instanceId;
}

bool DescribeDBInstancesAttributeResponse::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeDBInstancesAttributeResponse::GetRegularBackupEnable() const
{
    return m_regularBackupEnable;
}

bool DescribeDBInstancesAttributeResponse::RegularBackupEnableHasBeenSet() const
{
    return m_regularBackupEnableHasBeenSet;
}

uint64_t DescribeDBInstancesAttributeResponse::GetRegularBackupSaveDays() const
{
    return m_regularBackupSaveDays;
}

bool DescribeDBInstancesAttributeResponse::RegularBackupSaveDaysHasBeenSet() const
{
    return m_regularBackupSaveDaysHasBeenSet;
}

string DescribeDBInstancesAttributeResponse::GetRegularBackupStrategy() const
{
    return m_regularBackupStrategy;
}

bool DescribeDBInstancesAttributeResponse::RegularBackupStrategyHasBeenSet() const
{
    return m_regularBackupStrategyHasBeenSet;
}

uint64_t DescribeDBInstancesAttributeResponse::GetRegularBackupCounts() const
{
    return m_regularBackupCounts;
}

bool DescribeDBInstancesAttributeResponse::RegularBackupCountsHasBeenSet() const
{
    return m_regularBackupCountsHasBeenSet;
}

string DescribeDBInstancesAttributeResponse::GetRegularBackupStartTime() const
{
    return m_regularBackupStartTime;
}

bool DescribeDBInstancesAttributeResponse::RegularBackupStartTimeHasBeenSet() const
{
    return m_regularBackupStartTimeHasBeenSet;
}

int64_t DescribeDBInstancesAttributeResponse::GetBlockedThreshold() const
{
    return m_blockedThreshold;
}

bool DescribeDBInstancesAttributeResponse::BlockedThresholdHasBeenSet() const
{
    return m_blockedThresholdHasBeenSet;
}

int64_t DescribeDBInstancesAttributeResponse::GetEventSaveDays() const
{
    return m_eventSaveDays;
}

bool DescribeDBInstancesAttributeResponse::EventSaveDaysHasBeenSet() const
{
    return m_eventSaveDaysHasBeenSet;
}


