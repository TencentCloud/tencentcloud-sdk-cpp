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
using namespace rapidjson;
using namespace std;

DescribeStatisticSummaryResponse::DescribeStatisticSummaryResponse() :
    m_recordingDeviceHasBeenSet(false),
    m_nonRecordingDeviceHasBeenSet(false),
    m_watchFluxHasBeenSet(false),
    m_storageUsageHasBeenSet(false)
{
}

CoreInternalOutcome DescribeStatisticSummaryResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
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


    if (rsp.HasMember("RecordingDevice") && !rsp["RecordingDevice"].IsNull())
    {
        if (!rsp["RecordingDevice"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `RecordingDevice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_recordingDevice = rsp["RecordingDevice"].GetUint64();
        m_recordingDeviceHasBeenSet = true;
    }

    if (rsp.HasMember("NonRecordingDevice") && !rsp["NonRecordingDevice"].IsNull())
    {
        if (!rsp["NonRecordingDevice"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `NonRecordingDevice` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_nonRecordingDevice = rsp["NonRecordingDevice"].GetUint64();
        m_nonRecordingDeviceHasBeenSet = true;
    }

    if (rsp.HasMember("WatchFlux") && !rsp["WatchFlux"].IsNull())
    {
        if (!rsp["WatchFlux"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `WatchFlux` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_watchFlux = rsp["WatchFlux"].GetDouble();
        m_watchFluxHasBeenSet = true;
    }

    if (rsp.HasMember("StorageUsage") && !rsp["StorageUsage"].IsNull())
    {
        if (!rsp["StorageUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Error("response `StorageUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_storageUsage = rsp["StorageUsage"].GetDouble();
        m_storageUsageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
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


