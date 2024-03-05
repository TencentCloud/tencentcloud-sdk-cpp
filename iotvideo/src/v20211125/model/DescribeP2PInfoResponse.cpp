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

#include <tencentcloud/iotvideo/v20211125/model/DescribeP2PInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20211125::Model;
using namespace std;

DescribeP2PInfoResponse::DescribeP2PInfoResponse() :
    m_p2PInfoHasBeenSet(false),
    m_reportTimeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeP2PInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("P2PInfo") && !rsp["P2PInfo"].IsNull())
    {
        if (!rsp["P2PInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `P2PInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_p2PInfo = string(rsp["P2PInfo"].GetString());
        m_p2PInfoHasBeenSet = true;
    }

    if (rsp.HasMember("ReportTime") && !rsp["ReportTime"].IsNull())
    {
        if (!rsp["ReportTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ReportTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_reportTime = rsp["ReportTime"].GetInt64();
        m_reportTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeP2PInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_p2PInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "P2PInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_p2PInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_reportTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReportTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_reportTime, allocator);
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


string DescribeP2PInfoResponse::GetP2PInfo() const
{
    return m_p2PInfo;
}

bool DescribeP2PInfoResponse::P2PInfoHasBeenSet() const
{
    return m_p2PInfoHasBeenSet;
}

int64_t DescribeP2PInfoResponse::GetReportTime() const
{
    return m_reportTime;
}

bool DescribeP2PInfoResponse::ReportTimeHasBeenSet() const
{
    return m_reportTimeHasBeenSet;
}


