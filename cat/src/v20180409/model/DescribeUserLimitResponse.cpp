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

#include <tencentcloud/cat/v20180409/model/DescribeUserLimitResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cat::V20180409::Model;
using namespace std;

DescribeUserLimitResponse::DescribeUserLimitResponse() :
    m_maxTaskNumHasBeenSet(false),
    m_maxAgentNumHasBeenSet(false),
    m_maxGroupNumHasBeenSet(false),
    m_minPeriodHasBeenSet(false)
{
}

CoreInternalOutcome DescribeUserLimitResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
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


    if (rsp.HasMember("MaxTaskNum") && !rsp["MaxTaskNum"].IsNull())
    {
        if (!rsp["MaxTaskNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `MaxTaskNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTaskNum = rsp["MaxTaskNum"].GetUint64();
        m_maxTaskNumHasBeenSet = true;
    }

    if (rsp.HasMember("MaxAgentNum") && !rsp["MaxAgentNum"].IsNull())
    {
        if (!rsp["MaxAgentNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `MaxAgentNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxAgentNum = rsp["MaxAgentNum"].GetUint64();
        m_maxAgentNumHasBeenSet = true;
    }

    if (rsp.HasMember("MaxGroupNum") && !rsp["MaxGroupNum"].IsNull())
    {
        if (!rsp["MaxGroupNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `MaxGroupNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxGroupNum = rsp["MaxGroupNum"].GetUint64();
        m_maxGroupNumHasBeenSet = true;
    }

    if (rsp.HasMember("MinPeriod") && !rsp["MinPeriod"].IsNull())
    {
        if (!rsp["MinPeriod"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `MinPeriod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minPeriod = rsp["MinPeriod"].GetUint64();
        m_minPeriodHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeUserLimitResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_maxTaskNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTaskNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTaskNum, allocator);
    }

    if (m_maxAgentNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAgentNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxAgentNum, allocator);
    }

    if (m_maxGroupNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxGroupNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxGroupNum, allocator);
    }

    if (m_minPeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinPeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minPeriod, allocator);
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


uint64_t DescribeUserLimitResponse::GetMaxTaskNum() const
{
    return m_maxTaskNum;
}

bool DescribeUserLimitResponse::MaxTaskNumHasBeenSet() const
{
    return m_maxTaskNumHasBeenSet;
}

uint64_t DescribeUserLimitResponse::GetMaxAgentNum() const
{
    return m_maxAgentNum;
}

bool DescribeUserLimitResponse::MaxAgentNumHasBeenSet() const
{
    return m_maxAgentNumHasBeenSet;
}

uint64_t DescribeUserLimitResponse::GetMaxGroupNum() const
{
    return m_maxGroupNum;
}

bool DescribeUserLimitResponse::MaxGroupNumHasBeenSet() const
{
    return m_maxGroupNumHasBeenSet;
}

uint64_t DescribeUserLimitResponse::GetMinPeriod() const
{
    return m_minPeriod;
}

bool DescribeUserLimitResponse::MinPeriodHasBeenSet() const
{
    return m_minPeriodHasBeenSet;
}


