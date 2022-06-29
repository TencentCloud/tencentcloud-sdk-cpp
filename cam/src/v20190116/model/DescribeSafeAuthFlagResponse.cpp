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

#include <tencentcloud/cam/v20190116/model/DescribeSafeAuthFlagResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

DescribeSafeAuthFlagResponse::DescribeSafeAuthFlagResponse() :
    m_loginFlagHasBeenSet(false),
    m_actionFlagHasBeenSet(false),
    m_offsiteFlagHasBeenSet(false),
    m_promptTrustHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSafeAuthFlagResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LoginFlag") && !rsp["LoginFlag"].IsNull())
    {
        if (!rsp["LoginFlag"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LoginFlag` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_loginFlag.Deserialize(rsp["LoginFlag"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_loginFlagHasBeenSet = true;
    }

    if (rsp.HasMember("ActionFlag") && !rsp["ActionFlag"].IsNull())
    {
        if (!rsp["ActionFlag"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ActionFlag` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_actionFlag.Deserialize(rsp["ActionFlag"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_actionFlagHasBeenSet = true;
    }

    if (rsp.HasMember("OffsiteFlag") && !rsp["OffsiteFlag"].IsNull())
    {
        if (!rsp["OffsiteFlag"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `OffsiteFlag` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_offsiteFlag.Deserialize(rsp["OffsiteFlag"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_offsiteFlagHasBeenSet = true;
    }

    if (rsp.HasMember("PromptTrust") && !rsp["PromptTrust"].IsNull())
    {
        if (!rsp["PromptTrust"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PromptTrust` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_promptTrust = rsp["PromptTrust"].GetUint64();
        m_promptTrustHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSafeAuthFlagResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_loginFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoginFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_loginFlag.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_actionFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_actionFlag.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_offsiteFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OffsiteFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_offsiteFlag.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_promptTrustHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptTrust";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_promptTrust, allocator);
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


LoginActionFlag DescribeSafeAuthFlagResponse::GetLoginFlag() const
{
    return m_loginFlag;
}

bool DescribeSafeAuthFlagResponse::LoginFlagHasBeenSet() const
{
    return m_loginFlagHasBeenSet;
}

LoginActionFlag DescribeSafeAuthFlagResponse::GetActionFlag() const
{
    return m_actionFlag;
}

bool DescribeSafeAuthFlagResponse::ActionFlagHasBeenSet() const
{
    return m_actionFlagHasBeenSet;
}

OffsiteFlag DescribeSafeAuthFlagResponse::GetOffsiteFlag() const
{
    return m_offsiteFlag;
}

bool DescribeSafeAuthFlagResponse::OffsiteFlagHasBeenSet() const
{
    return m_offsiteFlagHasBeenSet;
}

uint64_t DescribeSafeAuthFlagResponse::GetPromptTrust() const
{
    return m_promptTrust;
}

bool DescribeSafeAuthFlagResponse::PromptTrustHasBeenSet() const
{
    return m_promptTrustHasBeenSet;
}


