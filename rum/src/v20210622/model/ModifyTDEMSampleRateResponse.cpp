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

#include <tencentcloud/rum/v20210622/model/ModifyTDEMSampleRateResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Rum::V20210622::Model;
using namespace std;

ModifyTDEMSampleRateResponse::ModifyTDEMSampleRateResponse() :
    m_appIdHasBeenSet(false),
    m_sampleRateHasBeenSet(false),
    m_replaySampleRateHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

CoreInternalOutcome ModifyTDEMSampleRateResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("AppId") && !rsp["AppId"].IsNull())
    {
        if (!rsp["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(rsp["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (rsp.HasMember("SampleRate") && !rsp["SampleRate"].IsNull())
    {
        if (!rsp["SampleRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `SampleRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_sampleRate = rsp["SampleRate"].GetDouble();
        m_sampleRateHasBeenSet = true;
    }

    if (rsp.HasMember("ReplaySampleRate") && !rsp["ReplaySampleRate"].IsNull())
    {
        if (!rsp["ReplaySampleRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ReplaySampleRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_replaySampleRate = rsp["ReplaySampleRate"].GetDouble();
        m_replaySampleRateHasBeenSet = true;
    }

    if (rsp.HasMember("UpdatedAt") && !rsp["UpdatedAt"].IsNull())
    {
        if (!rsp["UpdatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UpdatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedAt = string(rsp["UpdatedAt"].GetString());
        m_updatedAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ModifyTDEMSampleRateResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_sampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SampleRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sampleRate, allocator);
    }

    if (m_replaySampleRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReplaySampleRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_replaySampleRate, allocator);
    }

    if (m_updatedAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedAt.c_str(), allocator).Move(), allocator);
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


string ModifyTDEMSampleRateResponse::GetAppId() const
{
    return m_appId;
}

bool ModifyTDEMSampleRateResponse::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

double ModifyTDEMSampleRateResponse::GetSampleRate() const
{
    return m_sampleRate;
}

bool ModifyTDEMSampleRateResponse::SampleRateHasBeenSet() const
{
    return m_sampleRateHasBeenSet;
}

double ModifyTDEMSampleRateResponse::GetReplaySampleRate() const
{
    return m_replaySampleRate;
}

bool ModifyTDEMSampleRateResponse::ReplaySampleRateHasBeenSet() const
{
    return m_replaySampleRateHasBeenSet;
}

string ModifyTDEMSampleRateResponse::GetUpdatedAt() const
{
    return m_updatedAt;
}

bool ModifyTDEMSampleRateResponse::UpdatedAtHasBeenSet() const
{
    return m_updatedAtHasBeenSet;
}


