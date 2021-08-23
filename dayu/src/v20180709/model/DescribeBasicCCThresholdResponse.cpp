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

#include <tencentcloud/dayu/v20180709/model/DescribeBasicCCThresholdResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dayu::V20180709::Model;
using namespace std;

DescribeBasicCCThresholdResponse::DescribeBasicCCThresholdResponse() :
    m_cCEnableHasBeenSet(false),
    m_cCThresholdHasBeenSet(false)
{
}

CoreInternalOutcome DescribeBasicCCThresholdResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("CCEnable") && !rsp["CCEnable"].IsNull())
    {
        if (!rsp["CCEnable"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCEnable` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cCEnable = rsp["CCEnable"].GetUint64();
        m_cCEnableHasBeenSet = true;
    }

    if (rsp.HasMember("CCThreshold") && !rsp["CCThreshold"].IsNull())
    {
        if (!rsp["CCThreshold"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CCThreshold` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cCThreshold = rsp["CCThreshold"].GetUint64();
        m_cCThresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeBasicCCThresholdResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_cCEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CCEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cCEnable, allocator);
    }

    if (m_cCThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CCThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cCThreshold, allocator);
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


uint64_t DescribeBasicCCThresholdResponse::GetCCEnable() const
{
    return m_cCEnable;
}

bool DescribeBasicCCThresholdResponse::CCEnableHasBeenSet() const
{
    return m_cCEnableHasBeenSet;
}

uint64_t DescribeBasicCCThresholdResponse::GetCCThreshold() const
{
    return m_cCThreshold;
}

bool DescribeBasicCCThresholdResponse::CCThresholdHasBeenSet() const
{
    return m_cCThresholdHasBeenSet;
}


