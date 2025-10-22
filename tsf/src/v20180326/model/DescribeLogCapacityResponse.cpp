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

#include <tencentcloud/tsf/v20180326/model/DescribeLogCapacityResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

DescribeLogCapacityResponse::DescribeLogCapacityResponse() :
    m_usedSpaceHasBeenSet(false),
    m_capacityHasBeenSet(false)
{
}

CoreInternalOutcome DescribeLogCapacityResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("UsedSpace") && !rsp["UsedSpace"].IsNull())
    {
        if (!rsp["UsedSpace"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `UsedSpace` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_usedSpace = rsp["UsedSpace"].GetDouble();
        m_usedSpaceHasBeenSet = true;
    }

    if (rsp.HasMember("Capacity") && !rsp["Capacity"].IsNull())
    {
        if (!rsp["Capacity"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `Capacity` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_capacity = rsp["Capacity"].GetDouble();
        m_capacityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeLogCapacityResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_usedSpaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedSpace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedSpace, allocator);
    }

    if (m_capacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Capacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_capacity, allocator);
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


double DescribeLogCapacityResponse::GetUsedSpace() const
{
    return m_usedSpace;
}

bool DescribeLogCapacityResponse::UsedSpaceHasBeenSet() const
{
    return m_usedSpaceHasBeenSet;
}

double DescribeLogCapacityResponse::GetCapacity() const
{
    return m_capacity;
}

bool DescribeLogCapacityResponse::CapacityHasBeenSet() const
{
    return m_capacityHasBeenSet;
}


