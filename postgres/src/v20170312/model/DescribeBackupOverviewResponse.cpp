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

#include <tencentcloud/postgres/v20170312/model/DescribeBackupOverviewResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

DescribeBackupOverviewResponse::DescribeBackupOverviewResponse() :
    m_totalFreeSizeHasBeenSet(false),
    m_usedFreeSizeHasBeenSet(false),
    m_usedBillingSizeHasBeenSet(false),
    m_logBackupCountHasBeenSet(false),
    m_logBackupSizeHasBeenSet(false),
    m_manualBaseBackupCountHasBeenSet(false),
    m_manualBaseBackupSizeHasBeenSet(false),
    m_autoBaseBackupCountHasBeenSet(false),
    m_autoBaseBackupSizeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBackupOverviewResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TotalFreeSize") && !rsp["TotalFreeSize"].IsNull())
    {
        if (!rsp["TotalFreeSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TotalFreeSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_totalFreeSize = rsp["TotalFreeSize"].GetUint64();
        m_totalFreeSizeHasBeenSet = true;
    }

    if (rsp.HasMember("UsedFreeSize") && !rsp["UsedFreeSize"].IsNull())
    {
        if (!rsp["UsedFreeSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsedFreeSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedFreeSize = rsp["UsedFreeSize"].GetUint64();
        m_usedFreeSizeHasBeenSet = true;
    }

    if (rsp.HasMember("UsedBillingSize") && !rsp["UsedBillingSize"].IsNull())
    {
        if (!rsp["UsedBillingSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UsedBillingSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_usedBillingSize = rsp["UsedBillingSize"].GetUint64();
        m_usedBillingSizeHasBeenSet = true;
    }

    if (rsp.HasMember("LogBackupCount") && !rsp["LogBackupCount"].IsNull())
    {
        if (!rsp["LogBackupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogBackupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logBackupCount = rsp["LogBackupCount"].GetUint64();
        m_logBackupCountHasBeenSet = true;
    }

    if (rsp.HasMember("LogBackupSize") && !rsp["LogBackupSize"].IsNull())
    {
        if (!rsp["LogBackupSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LogBackupSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_logBackupSize = rsp["LogBackupSize"].GetUint64();
        m_logBackupSizeHasBeenSet = true;
    }

    if (rsp.HasMember("ManualBaseBackupCount") && !rsp["ManualBaseBackupCount"].IsNull())
    {
        if (!rsp["ManualBaseBackupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ManualBaseBackupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_manualBaseBackupCount = rsp["ManualBaseBackupCount"].GetUint64();
        m_manualBaseBackupCountHasBeenSet = true;
    }

    if (rsp.HasMember("ManualBaseBackupSize") && !rsp["ManualBaseBackupSize"].IsNull())
    {
        if (!rsp["ManualBaseBackupSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ManualBaseBackupSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_manualBaseBackupSize = rsp["ManualBaseBackupSize"].GetUint64();
        m_manualBaseBackupSizeHasBeenSet = true;
    }

    if (rsp.HasMember("AutoBaseBackupCount") && !rsp["AutoBaseBackupCount"].IsNull())
    {
        if (!rsp["AutoBaseBackupCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBaseBackupCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoBaseBackupCount = rsp["AutoBaseBackupCount"].GetUint64();
        m_autoBaseBackupCountHasBeenSet = true;
    }

    if (rsp.HasMember("AutoBaseBackupSize") && !rsp["AutoBaseBackupSize"].IsNull())
    {
        if (!rsp["AutoBaseBackupSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AutoBaseBackupSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_autoBaseBackupSize = rsp["AutoBaseBackupSize"].GetUint64();
        m_autoBaseBackupSizeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBackupOverviewResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_totalFreeSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalFreeSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalFreeSize, allocator);
    }

    if (m_usedFreeSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedFreeSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedFreeSize, allocator);
    }

    if (m_usedBillingSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedBillingSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedBillingSize, allocator);
    }

    if (m_logBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logBackupCount, allocator);
    }

    if (m_logBackupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogBackupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_logBackupSize, allocator);
    }

    if (m_manualBaseBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualBaseBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_manualBaseBackupCount, allocator);
    }

    if (m_manualBaseBackupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManualBaseBackupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_manualBaseBackupSize, allocator);
    }

    if (m_autoBaseBackupCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBaseBackupCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoBaseBackupCount, allocator);
    }

    if (m_autoBaseBackupSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoBaseBackupSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoBaseBackupSize, allocator);
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


uint64_t DescribeBackupOverviewResponse::GetTotalFreeSize() const
{
    return m_totalFreeSize;
}

bool DescribeBackupOverviewResponse::TotalFreeSizeHasBeenSet() const
{
    return m_totalFreeSizeHasBeenSet;
}

uint64_t DescribeBackupOverviewResponse::GetUsedFreeSize() const
{
    return m_usedFreeSize;
}

bool DescribeBackupOverviewResponse::UsedFreeSizeHasBeenSet() const
{
    return m_usedFreeSizeHasBeenSet;
}

uint64_t DescribeBackupOverviewResponse::GetUsedBillingSize() const
{
    return m_usedBillingSize;
}

bool DescribeBackupOverviewResponse::UsedBillingSizeHasBeenSet() const
{
    return m_usedBillingSizeHasBeenSet;
}

uint64_t DescribeBackupOverviewResponse::GetLogBackupCount() const
{
    return m_logBackupCount;
}

bool DescribeBackupOverviewResponse::LogBackupCountHasBeenSet() const
{
    return m_logBackupCountHasBeenSet;
}

uint64_t DescribeBackupOverviewResponse::GetLogBackupSize() const
{
    return m_logBackupSize;
}

bool DescribeBackupOverviewResponse::LogBackupSizeHasBeenSet() const
{
    return m_logBackupSizeHasBeenSet;
}

uint64_t DescribeBackupOverviewResponse::GetManualBaseBackupCount() const
{
    return m_manualBaseBackupCount;
}

bool DescribeBackupOverviewResponse::ManualBaseBackupCountHasBeenSet() const
{
    return m_manualBaseBackupCountHasBeenSet;
}

uint64_t DescribeBackupOverviewResponse::GetManualBaseBackupSize() const
{
    return m_manualBaseBackupSize;
}

bool DescribeBackupOverviewResponse::ManualBaseBackupSizeHasBeenSet() const
{
    return m_manualBaseBackupSizeHasBeenSet;
}

uint64_t DescribeBackupOverviewResponse::GetAutoBaseBackupCount() const
{
    return m_autoBaseBackupCount;
}

bool DescribeBackupOverviewResponse::AutoBaseBackupCountHasBeenSet() const
{
    return m_autoBaseBackupCountHasBeenSet;
}

uint64_t DescribeBackupOverviewResponse::GetAutoBaseBackupSize() const
{
    return m_autoBaseBackupSize;
}

bool DescribeBackupOverviewResponse::AutoBaseBackupSizeHasBeenSet() const
{
    return m_autoBaseBackupSizeHasBeenSet;
}


