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

#include <tencentcloud/iotexplorer/v20190423/model/DescribeFirmwareUpdateStatusResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

DescribeFirmwareUpdateStatusResponse::DescribeFirmwareUpdateStatusResponse() :
    m_oriVersionHasBeenSet(false),
    m_dstVersionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_percentHasBeenSet(false)
{
}

CoreInternalOutcome DescribeFirmwareUpdateStatusResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("OriVersion") && !rsp["OriVersion"].IsNull())
    {
        if (!rsp["OriVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OriVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oriVersion = string(rsp["OriVersion"].GetString());
        m_oriVersionHasBeenSet = true;
    }

    if (rsp.HasMember("DstVersion") && !rsp["DstVersion"].IsNull())
    {
        if (!rsp["DstVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DstVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstVersion = string(rsp["DstVersion"].GetString());
        m_dstVersionHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = rsp["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Percent") && !rsp["Percent"].IsNull())
    {
        if (!rsp["Percent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Percent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_percent = rsp["Percent"].GetInt64();
        m_percentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeFirmwareUpdateStatusResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_oriVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oriVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_dstVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_percentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Percent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_percent, allocator);
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


string DescribeFirmwareUpdateStatusResponse::GetOriVersion() const
{
    return m_oriVersion;
}

bool DescribeFirmwareUpdateStatusResponse::OriVersionHasBeenSet() const
{
    return m_oriVersionHasBeenSet;
}

string DescribeFirmwareUpdateStatusResponse::GetDstVersion() const
{
    return m_dstVersion;
}

bool DescribeFirmwareUpdateStatusResponse::DstVersionHasBeenSet() const
{
    return m_dstVersionHasBeenSet;
}

int64_t DescribeFirmwareUpdateStatusResponse::GetStatus() const
{
    return m_status;
}

bool DescribeFirmwareUpdateStatusResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t DescribeFirmwareUpdateStatusResponse::GetPercent() const
{
    return m_percent;
}

bool DescribeFirmwareUpdateStatusResponse::PercentHasBeenSet() const
{
    return m_percentHasBeenSet;
}


