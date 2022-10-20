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

#include <tencentcloud/tcss/v20201101/model/DescribeAbnormalProcessLevelSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeAbnormalProcessLevelSummaryResponse::DescribeAbnormalProcessLevelSummaryResponse() :
    m_highLevelEventCountHasBeenSet(false),
    m_mediumLevelEventCountHasBeenSet(false),
    m_lowLevelEventCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAbnormalProcessLevelSummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("HighLevelEventCount") && !rsp["HighLevelEventCount"].IsNull())
    {
        if (!rsp["HighLevelEventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HighLevelEventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_highLevelEventCount = rsp["HighLevelEventCount"].GetInt64();
        m_highLevelEventCountHasBeenSet = true;
    }

    if (rsp.HasMember("MediumLevelEventCount") && !rsp["MediumLevelEventCount"].IsNull())
    {
        if (!rsp["MediumLevelEventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MediumLevelEventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mediumLevelEventCount = rsp["MediumLevelEventCount"].GetInt64();
        m_mediumLevelEventCountHasBeenSet = true;
    }

    if (rsp.HasMember("LowLevelEventCount") && !rsp["LowLevelEventCount"].IsNull())
    {
        if (!rsp["LowLevelEventCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LowLevelEventCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_lowLevelEventCount = rsp["LowLevelEventCount"].GetInt64();
        m_lowLevelEventCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAbnormalProcessLevelSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_highLevelEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighLevelEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highLevelEventCount, allocator);
    }

    if (m_mediumLevelEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MediumLevelEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mediumLevelEventCount, allocator);
    }

    if (m_lowLevelEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LowLevelEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lowLevelEventCount, allocator);
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


int64_t DescribeAbnormalProcessLevelSummaryResponse::GetHighLevelEventCount() const
{
    return m_highLevelEventCount;
}

bool DescribeAbnormalProcessLevelSummaryResponse::HighLevelEventCountHasBeenSet() const
{
    return m_highLevelEventCountHasBeenSet;
}

int64_t DescribeAbnormalProcessLevelSummaryResponse::GetMediumLevelEventCount() const
{
    return m_mediumLevelEventCount;
}

bool DescribeAbnormalProcessLevelSummaryResponse::MediumLevelEventCountHasBeenSet() const
{
    return m_mediumLevelEventCountHasBeenSet;
}

int64_t DescribeAbnormalProcessLevelSummaryResponse::GetLowLevelEventCount() const
{
    return m_lowLevelEventCount;
}

bool DescribeAbnormalProcessLevelSummaryResponse::LowLevelEventCountHasBeenSet() const
{
    return m_lowLevelEventCountHasBeenSet;
}


