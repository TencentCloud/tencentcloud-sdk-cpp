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

#include <tencentcloud/iottid/v20190411/model/VerifyChipBurnInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iottid::V20190411::Model;
using namespace std;

VerifyChipBurnInfoResponse::VerifyChipBurnInfoResponse() :
    m_passHasBeenSet(false),
    m_verifiedTimesHasBeenSet(false),
    m_leftTimesHasBeenSet(false)
{
}

CoreInternalOutcome VerifyChipBurnInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Pass") && !rsp["Pass"].IsNull())
    {
        if (!rsp["Pass"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Pass` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_pass = rsp["Pass"].GetBool();
        m_passHasBeenSet = true;
    }

    if (rsp.HasMember("VerifiedTimes") && !rsp["VerifiedTimes"].IsNull())
    {
        if (!rsp["VerifiedTimes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `VerifiedTimes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_verifiedTimes = rsp["VerifiedTimes"].GetUint64();
        m_verifiedTimesHasBeenSet = true;
    }

    if (rsp.HasMember("LeftTimes") && !rsp["LeftTimes"].IsNull())
    {
        if (!rsp["LeftTimes"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `LeftTimes` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_leftTimes = rsp["LeftTimes"].GetUint64();
        m_leftTimesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string VerifyChipBurnInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_passHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pass";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pass, allocator);
    }

    if (m_verifiedTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VerifiedTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_verifiedTimes, allocator);
    }

    if (m_leftTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LeftTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_leftTimes, allocator);
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


bool VerifyChipBurnInfoResponse::GetPass() const
{
    return m_pass;
}

bool VerifyChipBurnInfoResponse::PassHasBeenSet() const
{
    return m_passHasBeenSet;
}

uint64_t VerifyChipBurnInfoResponse::GetVerifiedTimes() const
{
    return m_verifiedTimes;
}

bool VerifyChipBurnInfoResponse::VerifiedTimesHasBeenSet() const
{
    return m_verifiedTimesHasBeenSet;
}

uint64_t VerifyChipBurnInfoResponse::GetLeftTimes() const
{
    return m_leftTimes;
}

bool VerifyChipBurnInfoResponse::LeftTimesHasBeenSet() const
{
    return m_leftTimesHasBeenSet;
}


