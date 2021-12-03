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

#include <tencentcloud/iotvideoindustry/v20201201/model/DescribeStatisticSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideoindustry::V20201201::Model;
using namespace std;

DescribeStatisticSummaryResponse::DescribeStatisticSummaryResponse() :
    m_recordingDeviceHasBeenSet(false),
    m_nonRecordingDeviceHasBeenSet(false),
    m_watchFluxHasBeenSet(false),
    m_storageUsageHasBeenSet(false),
    m_p2PFluxTotalHasBeenSet(false),
    m_p2PPeakValueHasBeenSet(false),
    m_livePushTotalHasBeenSet(false)
{
}

CoreInternalOutcome DescribeStatisticSummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RecordingDevice") && !rsp["RecordingDevice"].IsNull())
    {
        if (!rsp["RecordingDevice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RecordingDevice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordingDevice = rsp["RecordingDevice"].GetUint64();
        m_recordingDeviceHasBeenSet = true;
    }

    if (rsp.HasMember("NonRecordingDevice") && !rsp["NonRecordingDevice"].IsNull())
    {
        if (!rsp["NonRecordingDevice"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `NonRecordingDevice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nonRecordingDevice = rsp["NonRecordingDevice"].GetUint64();
        m_nonRecordingDeviceHasBeenSet = true;
    }

    if (rsp.HasMember("WatchFlux") && !rsp["WatchFlux"].IsNull())
    {
        if (!rsp["WatchFlux"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `WatchFlux` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_watchFlux = rsp["WatchFlux"].GetDouble();
        m_watchFluxHasBeenSet = true;
    }

    if (rsp.HasMember("StorageUsage") && !rsp["StorageUsage"].IsNull())
    {
        if (!rsp["StorageUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `StorageUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_storageUsage = rsp["StorageUsage"].GetDouble();
        m_storageUsageHasBeenSet = true;
    }

    if (rsp.HasMember("P2PFluxTotal") && !rsp["P2PFluxTotal"].IsNull())
    {
        if (!rsp["P2PFluxTotal"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `P2PFluxTotal` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_p2PFluxTotal = rsp["P2PFluxTotal"].GetDouble();
        m_p2PFluxTotalHasBeenSet = true;
    }

    if (rsp.HasMember("P2PPeakValue") && !rsp["P2PPeakValue"].IsNull())
    {
        if (!rsp["P2PPeakValue"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `P2PPeakValue` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_p2PPeakValue = rsp["P2PPeakValue"].GetDouble();
        m_p2PPeakValueHasBeenSet = true;
    }

    if (rsp.HasMember("LivePushTotal") && !rsp["LivePushTotal"].IsNull())
    {
        if (!rsp["LivePushTotal"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LivePushTotal` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_livePushTotal = rsp["LivePushTotal"].GetInt64();
        m_livePushTotalHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeStatisticSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_recordingDeviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordingDevice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordingDevice, allocator);
    }

    if (m_nonRecordingDeviceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NonRecordingDevice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_nonRecordingDevice, allocator);
    }

    if (m_watchFluxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WatchFlux";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_watchFlux, allocator);
    }

    if (m_storageUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageUsage, allocator);
    }

    if (m_p2PFluxTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P2PFluxTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_p2PFluxTotal, allocator);
    }

    if (m_p2PPeakValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P2PPeakValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_p2PPeakValue, allocator);
    }

    if (m_livePushTotalHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LivePushTotal";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_livePushTotal, allocator);
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


uint64_t DescribeStatisticSummaryResponse::GetRecordingDevice() const
{
    return m_recordingDevice;
}

bool DescribeStatisticSummaryResponse::RecordingDeviceHasBeenSet() const
{
    return m_recordingDeviceHasBeenSet;
}

uint64_t DescribeStatisticSummaryResponse::GetNonRecordingDevice() const
{
    return m_nonRecordingDevice;
}

bool DescribeStatisticSummaryResponse::NonRecordingDeviceHasBeenSet() const
{
    return m_nonRecordingDeviceHasBeenSet;
}

double DescribeStatisticSummaryResponse::GetWatchFlux() const
{
    return m_watchFlux;
}

bool DescribeStatisticSummaryResponse::WatchFluxHasBeenSet() const
{
    return m_watchFluxHasBeenSet;
}

double DescribeStatisticSummaryResponse::GetStorageUsage() const
{
    return m_storageUsage;
}

bool DescribeStatisticSummaryResponse::StorageUsageHasBeenSet() const
{
    return m_storageUsageHasBeenSet;
}

double DescribeStatisticSummaryResponse::GetP2PFluxTotal() const
{
    return m_p2PFluxTotal;
}

bool DescribeStatisticSummaryResponse::P2PFluxTotalHasBeenSet() const
{
    return m_p2PFluxTotalHasBeenSet;
}

double DescribeStatisticSummaryResponse::GetP2PPeakValue() const
{
    return m_p2PPeakValue;
}

bool DescribeStatisticSummaryResponse::P2PPeakValueHasBeenSet() const
{
    return m_p2PPeakValueHasBeenSet;
}

int64_t DescribeStatisticSummaryResponse::GetLivePushTotal() const
{
    return m_livePushTotal;
}

bool DescribeStatisticSummaryResponse::LivePushTotalHasBeenSet() const
{
    return m_livePushTotalHasBeenSet;
}


