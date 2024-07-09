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

#include <tencentcloud/ivld/v20210903/model/DescribeUsageAmountResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

DescribeUsageAmountResponse::DescribeUsageAmountResponse() :
    m_usedHoursHasBeenSet(false),
    m_totalHoursHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUsageAmountResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("UsedHours") && !rsp["UsedHours"].IsNull())
    {
        if (!rsp["UsedHours"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `UsedHours` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_usedHours = rsp["UsedHours"].GetDouble();
        m_usedHoursHasBeenSet = true;
    }

    if (rsp.HasMember("TotalHours") && !rsp["TotalHours"].IsNull())
    {
        if (!rsp["TotalHours"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `TotalHours` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalHours = rsp["TotalHours"].GetDouble();
        m_totalHoursHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUsageAmountResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_usedHoursHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedHours";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedHours, allocator);
    }

    if (m_totalHoursHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalHours";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalHours, allocator);
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


double DescribeUsageAmountResponse::GetUsedHours() const
{
    return m_usedHours;
}

bool DescribeUsageAmountResponse::UsedHoursHasBeenSet() const
{
    return m_usedHoursHasBeenSet;
}

double DescribeUsageAmountResponse::GetTotalHours() const
{
    return m_totalHours;
}

bool DescribeUsageAmountResponse::TotalHoursHasBeenSet() const
{
    return m_totalHoursHasBeenSet;
}


