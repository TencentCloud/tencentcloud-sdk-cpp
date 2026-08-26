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

#include <tencentcloud/csip/v20221121/model/ModifyCosAuditObjectSampleRateResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ModifyCosAuditObjectSampleRateResponse::ModifyCosAuditObjectSampleRateResponse() :
    m_defaultSampleRateUpdatedHasBeenSet(false),
    m_defaultSampleRateHasBeenSet(false),
    m_updatedBucketCountHasBeenSet(false)
{
}

CoreInternalOutcome ModifyCosAuditObjectSampleRateResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DefaultSampleRateUpdated") && !rsp["DefaultSampleRateUpdated"].IsNull())
    {
        if (!rsp["DefaultSampleRateUpdated"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultSampleRateUpdated` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_defaultSampleRateUpdated = rsp["DefaultSampleRateUpdated"].GetBool();
        m_defaultSampleRateUpdatedHasBeenSet = true;
    }

    if (rsp.HasMember("DefaultSampleRate") && !rsp["DefaultSampleRate"].IsNull())
    {
        if (!rsp["DefaultSampleRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `DefaultSampleRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_defaultSampleRate = rsp["DefaultSampleRate"].GetDouble();
        m_defaultSampleRateHasBeenSet = true;
    }

    if (rsp.HasMember("UpdatedBucketCount") && !rsp["UpdatedBucketCount"].IsNull())
    {
        if (!rsp["UpdatedBucketCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UpdatedBucketCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updatedBucketCount = rsp["UpdatedBucketCount"].GetUint64();
        m_updatedBucketCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ModifyCosAuditObjectSampleRateResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_defaultSampleRateUpdatedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultSampleRateUpdated";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultSampleRateUpdated, allocator);
    }

    if (m_defaultSampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultSampleRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultSampleRate, allocator);
    }

    if (m_updatedBucketCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedBucketCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updatedBucketCount, allocator);
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


bool ModifyCosAuditObjectSampleRateResponse::GetDefaultSampleRateUpdated() const
{
    return m_defaultSampleRateUpdated;
}

bool ModifyCosAuditObjectSampleRateResponse::DefaultSampleRateUpdatedHasBeenSet() const
{
    return m_defaultSampleRateUpdatedHasBeenSet;
}

double ModifyCosAuditObjectSampleRateResponse::GetDefaultSampleRate() const
{
    return m_defaultSampleRate;
}

bool ModifyCosAuditObjectSampleRateResponse::DefaultSampleRateHasBeenSet() const
{
    return m_defaultSampleRateHasBeenSet;
}

uint64_t ModifyCosAuditObjectSampleRateResponse::GetUpdatedBucketCount() const
{
    return m_updatedBucketCount;
}

bool ModifyCosAuditObjectSampleRateResponse::UpdatedBucketCountHasBeenSet() const
{
    return m_updatedBucketCountHasBeenSet;
}


