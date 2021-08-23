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

#include <tencentcloud/mariadb/v20170312/model/DescribeDBResourceUsageResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mariadb::V20170312::Model;
using namespace std;

DescribeDBResourceUsageResponse::DescribeDBResourceUsageResponse() :
    m_binlogDiskAvailableHasBeenSet(false),
    m_dataDiskAvailableHasBeenSet(false),
    m_cpuUsageRateHasBeenSet(false),
    m_memAvailableHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDBResourceUsageResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("BinlogDiskAvailable") && !rsp["BinlogDiskAvailable"].IsNull())
    {
        if (!rsp["BinlogDiskAvailable"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BinlogDiskAvailable` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_binlogDiskAvailable.Deserialize(rsp["BinlogDiskAvailable"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_binlogDiskAvailableHasBeenSet = true;
    }

    if (rsp.HasMember("DataDiskAvailable") && !rsp["DataDiskAvailable"].IsNull())
    {
        if (!rsp["DataDiskAvailable"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataDiskAvailable` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dataDiskAvailable.Deserialize(rsp["DataDiskAvailable"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dataDiskAvailableHasBeenSet = true;
    }

    if (rsp.HasMember("CpuUsageRate") && !rsp["CpuUsageRate"].IsNull())
    {
        if (!rsp["CpuUsageRate"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CpuUsageRate` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_cpuUsageRate.Deserialize(rsp["CpuUsageRate"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_cpuUsageRateHasBeenSet = true;
    }

    if (rsp.HasMember("MemAvailable") && !rsp["MemAvailable"].IsNull())
    {
        if (!rsp["MemAvailable"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MemAvailable` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_memAvailable.Deserialize(rsp["MemAvailable"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_memAvailableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDBResourceUsageResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_binlogDiskAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BinlogDiskAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_binlogDiskAvailable.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_dataDiskAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataDiskAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dataDiskAvailable.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_cpuUsageRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuUsageRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_cpuUsageRate.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_memAvailableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MemAvailable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_memAvailable.ToJsonObject(value[key.c_str()], allocator);
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


MonitorData DescribeDBResourceUsageResponse::GetBinlogDiskAvailable() const
{
    return m_binlogDiskAvailable;
}

bool DescribeDBResourceUsageResponse::BinlogDiskAvailableHasBeenSet() const
{
    return m_binlogDiskAvailableHasBeenSet;
}

MonitorData DescribeDBResourceUsageResponse::GetDataDiskAvailable() const
{
    return m_dataDiskAvailable;
}

bool DescribeDBResourceUsageResponse::DataDiskAvailableHasBeenSet() const
{
    return m_dataDiskAvailableHasBeenSet;
}

MonitorData DescribeDBResourceUsageResponse::GetCpuUsageRate() const
{
    return m_cpuUsageRate;
}

bool DescribeDBResourceUsageResponse::CpuUsageRateHasBeenSet() const
{
    return m_cpuUsageRateHasBeenSet;
}

MonitorData DescribeDBResourceUsageResponse::GetMemAvailable() const
{
    return m_memAvailable;
}

bool DescribeDBResourceUsageResponse::MemAvailableHasBeenSet() const
{
    return m_memAvailableHasBeenSet;
}


