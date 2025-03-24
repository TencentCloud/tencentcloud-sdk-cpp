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

#include <tencentcloud/chc/v20230418/model/DescribeResourceUsageResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

DescribeResourceUsageResponse::DescribeResourceUsageResponse() :
    m_hostingServerCountHasBeenSet(false),
    m_rentServerCountHasBeenSet(false),
    m_netDeviceCountHasBeenSet(false),
    m_rackTotalCountHasBeenSet(false),
    m_rackPowerOnCountHasBeenSet(false),
    m_positionUsedCountHasBeenSet(false),
    m_positionTotalCountHasBeenSet(false),
    m_rackPowerOnRateHasBeenSet(false),
    m_positionUsedRateHasBeenSet(false)
{
}

CoreInternalOutcome DescribeResourceUsageResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("HostingServerCount") && !rsp["HostingServerCount"].IsNull())
    {
        if (!rsp["HostingServerCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HostingServerCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostingServerCount = rsp["HostingServerCount"].GetUint64();
        m_hostingServerCountHasBeenSet = true;
    }

    if (rsp.HasMember("RentServerCount") && !rsp["RentServerCount"].IsNull())
    {
        if (!rsp["RentServerCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RentServerCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rentServerCount = rsp["RentServerCount"].GetUint64();
        m_rentServerCountHasBeenSet = true;
    }

    if (rsp.HasMember("NetDeviceCount") && !rsp["NetDeviceCount"].IsNull())
    {
        if (!rsp["NetDeviceCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NetDeviceCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_netDeviceCount = rsp["NetDeviceCount"].GetUint64();
        m_netDeviceCountHasBeenSet = true;
    }

    if (rsp.HasMember("RackTotalCount") && !rsp["RackTotalCount"].IsNull())
    {
        if (!rsp["RackTotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RackTotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rackTotalCount = rsp["RackTotalCount"].GetUint64();
        m_rackTotalCountHasBeenSet = true;
    }

    if (rsp.HasMember("RackPowerOnCount") && !rsp["RackPowerOnCount"].IsNull())
    {
        if (!rsp["RackPowerOnCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RackPowerOnCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_rackPowerOnCount = rsp["RackPowerOnCount"].GetUint64();
        m_rackPowerOnCountHasBeenSet = true;
    }

    if (rsp.HasMember("PositionUsedCount") && !rsp["PositionUsedCount"].IsNull())
    {
        if (!rsp["PositionUsedCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PositionUsedCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_positionUsedCount = rsp["PositionUsedCount"].GetUint64();
        m_positionUsedCountHasBeenSet = true;
    }

    if (rsp.HasMember("PositionTotalCount") && !rsp["PositionTotalCount"].IsNull())
    {
        if (!rsp["PositionTotalCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PositionTotalCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_positionTotalCount = rsp["PositionTotalCount"].GetUint64();
        m_positionTotalCountHasBeenSet = true;
    }

    if (rsp.HasMember("RackPowerOnRate") && !rsp["RackPowerOnRate"].IsNull())
    {
        if (!rsp["RackPowerOnRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RackPowerOnRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_rackPowerOnRate = string(rsp["RackPowerOnRate"].GetString());
        m_rackPowerOnRateHasBeenSet = true;
    }

    if (rsp.HasMember("PositionUsedRate") && !rsp["PositionUsedRate"].IsNull())
    {
        if (!rsp["PositionUsedRate"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PositionUsedRate` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_positionUsedRate = string(rsp["PositionUsedRate"].GetString());
        m_positionUsedRateHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeResourceUsageResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_hostingServerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostingServerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostingServerCount, allocator);
    }

    if (m_rentServerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RentServerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rentServerCount, allocator);
    }

    if (m_netDeviceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetDeviceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_netDeviceCount, allocator);
    }

    if (m_rackTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RackTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rackTotalCount, allocator);
    }

    if (m_rackPowerOnCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RackPowerOnCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rackPowerOnCount, allocator);
    }

    if (m_positionUsedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PositionUsedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_positionUsedCount, allocator);
    }

    if (m_positionTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PositionTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_positionTotalCount, allocator);
    }

    if (m_rackPowerOnRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RackPowerOnRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_rackPowerOnRate.c_str(), allocator).Move(), allocator);
    }

    if (m_positionUsedRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PositionUsedRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_positionUsedRate.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeResourceUsageResponse::GetHostingServerCount() const
{
    return m_hostingServerCount;
}

bool DescribeResourceUsageResponse::HostingServerCountHasBeenSet() const
{
    return m_hostingServerCountHasBeenSet;
}

uint64_t DescribeResourceUsageResponse::GetRentServerCount() const
{
    return m_rentServerCount;
}

bool DescribeResourceUsageResponse::RentServerCountHasBeenSet() const
{
    return m_rentServerCountHasBeenSet;
}

uint64_t DescribeResourceUsageResponse::GetNetDeviceCount() const
{
    return m_netDeviceCount;
}

bool DescribeResourceUsageResponse::NetDeviceCountHasBeenSet() const
{
    return m_netDeviceCountHasBeenSet;
}

uint64_t DescribeResourceUsageResponse::GetRackTotalCount() const
{
    return m_rackTotalCount;
}

bool DescribeResourceUsageResponse::RackTotalCountHasBeenSet() const
{
    return m_rackTotalCountHasBeenSet;
}

uint64_t DescribeResourceUsageResponse::GetRackPowerOnCount() const
{
    return m_rackPowerOnCount;
}

bool DescribeResourceUsageResponse::RackPowerOnCountHasBeenSet() const
{
    return m_rackPowerOnCountHasBeenSet;
}

uint64_t DescribeResourceUsageResponse::GetPositionUsedCount() const
{
    return m_positionUsedCount;
}

bool DescribeResourceUsageResponse::PositionUsedCountHasBeenSet() const
{
    return m_positionUsedCountHasBeenSet;
}

uint64_t DescribeResourceUsageResponse::GetPositionTotalCount() const
{
    return m_positionTotalCount;
}

bool DescribeResourceUsageResponse::PositionTotalCountHasBeenSet() const
{
    return m_positionTotalCountHasBeenSet;
}

string DescribeResourceUsageResponse::GetRackPowerOnRate() const
{
    return m_rackPowerOnRate;
}

bool DescribeResourceUsageResponse::RackPowerOnRateHasBeenSet() const
{
    return m_rackPowerOnRateHasBeenSet;
}

string DescribeResourceUsageResponse::GetPositionUsedRate() const
{
    return m_positionUsedRate;
}

bool DescribeResourceUsageResponse::PositionUsedRateHasBeenSet() const
{
    return m_positionUsedRateHasBeenSet;
}


