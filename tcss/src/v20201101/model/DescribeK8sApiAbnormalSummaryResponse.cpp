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

#include <tencentcloud/tcss/v20201101/model/DescribeK8sApiAbnormalSummaryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

DescribeK8sApiAbnormalSummaryResponse::DescribeK8sApiAbnormalSummaryResponse() :
    m_unhandleEventCountHasBeenSet(false),
    m_unhandleHighLevelEventCountHasBeenSet(false),
    m_unhandleMediumLevelEventCountHasBeenSet(false),
    m_unhandleLowLevelEventCountHasBeenSet(false),
    m_unhandleNoticeLevelEventCountHasBeenSet(false)
{
}

CoreInternalOutcome DescribeK8sApiAbnormalSummaryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("UnhandleEventCount") && !rsp["UnhandleEventCount"].IsNull())
    {
        if (!rsp["UnhandleEventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnhandleEventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unhandleEventCount = rsp["UnhandleEventCount"].GetUint64();
        m_unhandleEventCountHasBeenSet = true;
    }

    if (rsp.HasMember("UnhandleHighLevelEventCount") && !rsp["UnhandleHighLevelEventCount"].IsNull())
    {
        if (!rsp["UnhandleHighLevelEventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnhandleHighLevelEventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unhandleHighLevelEventCount = rsp["UnhandleHighLevelEventCount"].GetUint64();
        m_unhandleHighLevelEventCountHasBeenSet = true;
    }

    if (rsp.HasMember("UnhandleMediumLevelEventCount") && !rsp["UnhandleMediumLevelEventCount"].IsNull())
    {
        if (!rsp["UnhandleMediumLevelEventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnhandleMediumLevelEventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unhandleMediumLevelEventCount = rsp["UnhandleMediumLevelEventCount"].GetUint64();
        m_unhandleMediumLevelEventCountHasBeenSet = true;
    }

    if (rsp.HasMember("UnhandleLowLevelEventCount") && !rsp["UnhandleLowLevelEventCount"].IsNull())
    {
        if (!rsp["UnhandleLowLevelEventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnhandleLowLevelEventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unhandleLowLevelEventCount = rsp["UnhandleLowLevelEventCount"].GetUint64();
        m_unhandleLowLevelEventCountHasBeenSet = true;
    }

    if (rsp.HasMember("UnhandleNoticeLevelEventCount") && !rsp["UnhandleNoticeLevelEventCount"].IsNull())
    {
        if (!rsp["UnhandleNoticeLevelEventCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UnhandleNoticeLevelEventCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_unhandleNoticeLevelEventCount = rsp["UnhandleNoticeLevelEventCount"].GetUint64();
        m_unhandleNoticeLevelEventCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeK8sApiAbnormalSummaryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_unhandleEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhandleEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhandleEventCount, allocator);
    }

    if (m_unhandleHighLevelEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhandleHighLevelEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhandleHighLevelEventCount, allocator);
    }

    if (m_unhandleMediumLevelEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhandleMediumLevelEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhandleMediumLevelEventCount, allocator);
    }

    if (m_unhandleLowLevelEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhandleLowLevelEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhandleLowLevelEventCount, allocator);
    }

    if (m_unhandleNoticeLevelEventCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UnhandleNoticeLevelEventCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_unhandleNoticeLevelEventCount, allocator);
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


uint64_t DescribeK8sApiAbnormalSummaryResponse::GetUnhandleEventCount() const
{
    return m_unhandleEventCount;
}

bool DescribeK8sApiAbnormalSummaryResponse::UnhandleEventCountHasBeenSet() const
{
    return m_unhandleEventCountHasBeenSet;
}

uint64_t DescribeK8sApiAbnormalSummaryResponse::GetUnhandleHighLevelEventCount() const
{
    return m_unhandleHighLevelEventCount;
}

bool DescribeK8sApiAbnormalSummaryResponse::UnhandleHighLevelEventCountHasBeenSet() const
{
    return m_unhandleHighLevelEventCountHasBeenSet;
}

uint64_t DescribeK8sApiAbnormalSummaryResponse::GetUnhandleMediumLevelEventCount() const
{
    return m_unhandleMediumLevelEventCount;
}

bool DescribeK8sApiAbnormalSummaryResponse::UnhandleMediumLevelEventCountHasBeenSet() const
{
    return m_unhandleMediumLevelEventCountHasBeenSet;
}

uint64_t DescribeK8sApiAbnormalSummaryResponse::GetUnhandleLowLevelEventCount() const
{
    return m_unhandleLowLevelEventCount;
}

bool DescribeK8sApiAbnormalSummaryResponse::UnhandleLowLevelEventCountHasBeenSet() const
{
    return m_unhandleLowLevelEventCountHasBeenSet;
}

uint64_t DescribeK8sApiAbnormalSummaryResponse::GetUnhandleNoticeLevelEventCount() const
{
    return m_unhandleNoticeLevelEventCount;
}

bool DescribeK8sApiAbnormalSummaryResponse::UnhandleNoticeLevelEventCountHasBeenSet() const
{
    return m_unhandleNoticeLevelEventCountHasBeenSet;
}


