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

#include <tencentcloud/cls/v20201016/model/EstimateRebuildIndexTaskResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

EstimateRebuildIndexTaskResponse::EstimateRebuildIndexTaskResponse() :
    m_remainTimeHasBeenSet(false),
    m_writeTrafficHasBeenSet(false)
{
}

CoreInternalOutcome EstimateRebuildIndexTaskResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RemainTime") && !rsp["RemainTime"].IsNull())
    {
        if (!rsp["RemainTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RemainTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_remainTime = rsp["RemainTime"].GetUint64();
        m_remainTimeHasBeenSet = true;
    }

    if (rsp.HasMember("WriteTraffic") && !rsp["WriteTraffic"].IsNull())
    {
        if (!rsp["WriteTraffic"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `WriteTraffic` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_writeTraffic = rsp["WriteTraffic"].GetUint64();
        m_writeTrafficHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string EstimateRebuildIndexTaskResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_remainTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemainTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remainTime, allocator);
    }

    if (m_writeTrafficHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WriteTraffic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_writeTraffic, allocator);
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


uint64_t EstimateRebuildIndexTaskResponse::GetRemainTime() const
{
    return m_remainTime;
}

bool EstimateRebuildIndexTaskResponse::RemainTimeHasBeenSet() const
{
    return m_remainTimeHasBeenSet;
}

uint64_t EstimateRebuildIndexTaskResponse::GetWriteTraffic() const
{
    return m_writeTraffic;
}

bool EstimateRebuildIndexTaskResponse::WriteTrafficHasBeenSet() const
{
    return m_writeTrafficHasBeenSet;
}


