/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/tdmysql/v20211122/model/DescribeInstanceDataReservedSpaceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

DescribeInstanceDataReservedSpaceResponse::DescribeInstanceDataReservedSpaceResponse() :
    m_reservedRateHasBeenSet(false),
    m_reservedSpaceGBHasBeenSet(false),
    m_usableSpaceGBHasBeenSet(false),
    m_isLegacyHasBeenSet(false),
    m_kernelVersionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeInstanceDataReservedSpaceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ReservedRate") && !rsp["ReservedRate"].IsNull())
    {
        if (!rsp["ReservedRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_reservedRate = rsp["ReservedRate"].GetDouble();
        m_reservedRateHasBeenSet = true;
    }

    if (rsp.HasMember("ReservedSpaceGB") && !rsp["ReservedSpaceGB"].IsNull())
    {
        if (!rsp["ReservedSpaceGB"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReservedSpaceGB` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_reservedSpaceGB = rsp["ReservedSpaceGB"].GetDouble();
        m_reservedSpaceGBHasBeenSet = true;
    }

    if (rsp.HasMember("UsableSpaceGB") && !rsp["UsableSpaceGB"].IsNull())
    {
        if (!rsp["UsableSpaceGB"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `UsableSpaceGB` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_usableSpaceGB = rsp["UsableSpaceGB"].GetDouble();
        m_usableSpaceGBHasBeenSet = true;
    }

    if (rsp.HasMember("IsLegacy") && !rsp["IsLegacy"].IsNull())
    {
        if (!rsp["IsLegacy"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `IsLegacy` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isLegacy = rsp["IsLegacy"].GetBool();
        m_isLegacyHasBeenSet = true;
    }

    if (rsp.HasMember("KernelVersion") && !rsp["KernelVersion"].IsNull())
    {
        if (!rsp["KernelVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KernelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kernelVersion = string(rsp["KernelVersion"].GetString());
        m_kernelVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeInstanceDataReservedSpaceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_reservedRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reservedRate, allocator);
    }

    if (m_reservedSpaceGBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReservedSpaceGB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reservedSpaceGB, allocator);
    }

    if (m_usableSpaceGBHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsableSpaceGB";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usableSpaceGB, allocator);
    }

    if (m_isLegacyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsLegacy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isLegacy, allocator);
    }

    if (m_kernelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KernelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kernelVersion.c_str(), allocator).Move(), allocator);
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


double DescribeInstanceDataReservedSpaceResponse::GetReservedRate() const
{
    return m_reservedRate;
}

bool DescribeInstanceDataReservedSpaceResponse::ReservedRateHasBeenSet() const
{
    return m_reservedRateHasBeenSet;
}

double DescribeInstanceDataReservedSpaceResponse::GetReservedSpaceGB() const
{
    return m_reservedSpaceGB;
}

bool DescribeInstanceDataReservedSpaceResponse::ReservedSpaceGBHasBeenSet() const
{
    return m_reservedSpaceGBHasBeenSet;
}

double DescribeInstanceDataReservedSpaceResponse::GetUsableSpaceGB() const
{
    return m_usableSpaceGB;
}

bool DescribeInstanceDataReservedSpaceResponse::UsableSpaceGBHasBeenSet() const
{
    return m_usableSpaceGBHasBeenSet;
}

bool DescribeInstanceDataReservedSpaceResponse::GetIsLegacy() const
{
    return m_isLegacy;
}

bool DescribeInstanceDataReservedSpaceResponse::IsLegacyHasBeenSet() const
{
    return m_isLegacyHasBeenSet;
}

string DescribeInstanceDataReservedSpaceResponse::GetKernelVersion() const
{
    return m_kernelVersion;
}

bool DescribeInstanceDataReservedSpaceResponse::KernelVersionHasBeenSet() const
{
    return m_kernelVersionHasBeenSet;
}


