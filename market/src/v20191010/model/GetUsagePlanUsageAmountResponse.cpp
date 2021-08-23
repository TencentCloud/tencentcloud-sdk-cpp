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

#include <tencentcloud/market/v20191010/model/GetUsagePlanUsageAmountResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Market::V20191010::Model;
using namespace std;

GetUsagePlanUsageAmountResponse::GetUsagePlanUsageAmountResponse() :
    m_maxRequestNumHasBeenSet(false),
    m_inUseRequestNumHasBeenSet(false),
    m_remainingRequestNumHasBeenSet(false)
{
}

CoreInternalOutcome GetUsagePlanUsageAmountResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("MaxRequestNum") && !rsp["MaxRequestNum"].IsNull())
    {
        if (!rsp["MaxRequestNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `MaxRequestNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRequestNum = rsp["MaxRequestNum"].GetInt64();
        m_maxRequestNumHasBeenSet = true;
    }

    if (rsp.HasMember("InUseRequestNum") && !rsp["InUseRequestNum"].IsNull())
    {
        if (!rsp["InUseRequestNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InUseRequestNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inUseRequestNum = rsp["InUseRequestNum"].GetInt64();
        m_inUseRequestNumHasBeenSet = true;
    }

    if (rsp.HasMember("RemainingRequestNum") && !rsp["RemainingRequestNum"].IsNull())
    {
        if (!rsp["RemainingRequestNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RemainingRequestNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remainingRequestNum = rsp["RemainingRequestNum"].GetInt64();
        m_remainingRequestNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetUsagePlanUsageAmountResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_maxRequestNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRequestNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRequestNum, allocator);
    }

    if (m_inUseRequestNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InUseRequestNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inUseRequestNum, allocator);
    }

    if (m_remainingRequestNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainingRequestNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainingRequestNum, allocator);
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


int64_t GetUsagePlanUsageAmountResponse::GetMaxRequestNum() const
{
    return m_maxRequestNum;
}

bool GetUsagePlanUsageAmountResponse::MaxRequestNumHasBeenSet() const
{
    return m_maxRequestNumHasBeenSet;
}

int64_t GetUsagePlanUsageAmountResponse::GetInUseRequestNum() const
{
    return m_inUseRequestNum;
}

bool GetUsagePlanUsageAmountResponse::InUseRequestNumHasBeenSet() const
{
    return m_inUseRequestNumHasBeenSet;
}

int64_t GetUsagePlanUsageAmountResponse::GetRemainingRequestNum() const
{
    return m_remainingRequestNum;
}

bool GetUsagePlanUsageAmountResponse::RemainingRequestNumHasBeenSet() const
{
    return m_remainingRequestNumHasBeenSet;
}


