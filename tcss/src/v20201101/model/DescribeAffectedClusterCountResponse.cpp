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

#include <tencentcloud/tcss/v20201101/model/DescribeAffectedClusterCountResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeAffectedClusterCountResponse::DescribeAffectedClusterCountResponse() :
    m_seriousRiskClusterCountHasBeenSet(false),
    m_highRiskClusterCountHasBeenSet(false),
    m_middleRiskClusterCountHasBeenSet(false),
    m_hintRiskClusterCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAffectedClusterCountResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SeriousRiskClusterCount") && !rsp["SeriousRiskClusterCount"].IsNull())
    {
        if (!rsp["SeriousRiskClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SeriousRiskClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_seriousRiskClusterCount = rsp["SeriousRiskClusterCount"].GetUint64();
        m_seriousRiskClusterCountHasBeenSet = true;
    }

    if (rsp.HasMember("HighRiskClusterCount") && !rsp["HighRiskClusterCount"].IsNull())
    {
        if (!rsp["HighRiskClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HighRiskClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_highRiskClusterCount = rsp["HighRiskClusterCount"].GetUint64();
        m_highRiskClusterCountHasBeenSet = true;
    }

    if (rsp.HasMember("MiddleRiskClusterCount") && !rsp["MiddleRiskClusterCount"].IsNull())
    {
        if (!rsp["MiddleRiskClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `MiddleRiskClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_middleRiskClusterCount = rsp["MiddleRiskClusterCount"].GetUint64();
        m_middleRiskClusterCountHasBeenSet = true;
    }

    if (rsp.HasMember("HintRiskClusterCount") && !rsp["HintRiskClusterCount"].IsNull())
    {
        if (!rsp["HintRiskClusterCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `HintRiskClusterCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hintRiskClusterCount = rsp["HintRiskClusterCount"].GetUint64();
        m_hintRiskClusterCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAffectedClusterCountResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_seriousRiskClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SeriousRiskClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_seriousRiskClusterCount, allocator);
    }

    if (m_highRiskClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HighRiskClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_highRiskClusterCount, allocator);
    }

    if (m_middleRiskClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MiddleRiskClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_middleRiskClusterCount, allocator);
    }

    if (m_hintRiskClusterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HintRiskClusterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hintRiskClusterCount, allocator);
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


uint64_t DescribeAffectedClusterCountResponse::GetSeriousRiskClusterCount() const
{
    return m_seriousRiskClusterCount;
}

bool DescribeAffectedClusterCountResponse::SeriousRiskClusterCountHasBeenSet() const
{
    return m_seriousRiskClusterCountHasBeenSet;
}

uint64_t DescribeAffectedClusterCountResponse::GetHighRiskClusterCount() const
{
    return m_highRiskClusterCount;
}

bool DescribeAffectedClusterCountResponse::HighRiskClusterCountHasBeenSet() const
{
    return m_highRiskClusterCountHasBeenSet;
}

uint64_t DescribeAffectedClusterCountResponse::GetMiddleRiskClusterCount() const
{
    return m_middleRiskClusterCount;
}

bool DescribeAffectedClusterCountResponse::MiddleRiskClusterCountHasBeenSet() const
{
    return m_middleRiskClusterCountHasBeenSet;
}

uint64_t DescribeAffectedClusterCountResponse::GetHintRiskClusterCount() const
{
    return m_hintRiskClusterCount;
}

bool DescribeAffectedClusterCountResponse::HintRiskClusterCountHasBeenSet() const
{
    return m_hintRiskClusterCountHasBeenSet;
}


