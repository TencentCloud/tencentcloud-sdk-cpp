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

#include <tencentcloud/dsgc/v20190723/model/GetTrialVersionResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dsgc::V20190723::Model;
using namespace std;

GetTrialVersionResponse::GetTrialVersionResponse() :
    m_trialVersionHasBeenSet(false),
    m_trialEndAtHasBeenSet(false)
{
}

CoreInternalOutcome GetTrialVersionResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TrialVersion") && !rsp["TrialVersion"].IsNull())
    {
        if (!rsp["TrialVersion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TrialVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_trialVersion = string(rsp["TrialVersion"].GetString());
        m_trialVersionHasBeenSet = true;
    }

    if (rsp.HasMember("TrialEndAt") && !rsp["TrialEndAt"].IsNull())
    {
        if (!rsp["TrialEndAt"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TrialEndAt` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_trialEndAt = rsp["TrialEndAt"].GetUint64();
        m_trialEndAtHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetTrialVersionResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_trialVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrialVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_trialVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_trialEndAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrialEndAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trialEndAt, allocator);
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


string GetTrialVersionResponse::GetTrialVersion() const
{
    return m_trialVersion;
}

bool GetTrialVersionResponse::TrialVersionHasBeenSet() const
{
    return m_trialVersionHasBeenSet;
}

uint64_t GetTrialVersionResponse::GetTrialEndAt() const
{
    return m_trialEndAt;
}

bool GetTrialVersionResponse::TrialEndAtHasBeenSet() const
{
    return m_trialEndAtHasBeenSet;
}


