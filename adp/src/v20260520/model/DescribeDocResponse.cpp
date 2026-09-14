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

#include <tencentcloud/adp/v20260520/model/DescribeDocResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DescribeDocResponse::DescribeDocResponse() :
    m_docLinkHasBeenSet(false),
    m_parseConfigHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_switchHasBeenSet(false),
    m_updatePeriodHasBeenSet(false),
    m_userAccessConfigHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDocResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("DocLink") && !rsp["DocLink"].IsNull())
    {
        if (!rsp["DocLink"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DocLink` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_docLink.Deserialize(rsp["DocLink"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_docLinkHasBeenSet = true;
    }

    if (rsp.HasMember("ParseConfig") && !rsp["ParseConfig"].IsNull())
    {
        if (!rsp["ParseConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ParseConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_parseConfig.Deserialize(rsp["ParseConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_parseConfigHasBeenSet = true;
    }

    if (rsp.HasMember("Summary") && !rsp["Summary"].IsNull())
    {
        if (!rsp["Summary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Summary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_summary.Deserialize(rsp["Summary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_summaryHasBeenSet = true;
    }

    if (rsp.HasMember("Switch") && !rsp["Switch"].IsNull())
    {
        if (!rsp["Switch"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Switch` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_switch.Deserialize(rsp["Switch"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_switchHasBeenSet = true;
    }

    if (rsp.HasMember("UpdatePeriod") && !rsp["UpdatePeriod"].IsNull())
    {
        if (!rsp["UpdatePeriod"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UpdatePeriod` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_updatePeriod.Deserialize(rsp["UpdatePeriod"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_updatePeriodHasBeenSet = true;
    }

    if (rsp.HasMember("UserAccessConfig") && !rsp["UserAccessConfig"].IsNull())
    {
        if (!rsp["UserAccessConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `UserAccessConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_userAccessConfig.Deserialize(rsp["UserAccessConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_userAccessConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeDocResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_docLinkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocLink";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_docLink.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_parseConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParseConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_parseConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_summaryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Summary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_summary.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_switchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Switch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_switch.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_updatePeriodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatePeriod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_updatePeriod.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_userAccessConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAccessConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_userAccessConfig.ToJsonObject(value[key.c_str()], allocator);
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


DocLink DescribeDocResponse::GetDocLink() const
{
    return m_docLink;
}

bool DescribeDocResponse::DocLinkHasBeenSet() const
{
    return m_docLinkHasBeenSet;
}

DocParseConfig DescribeDocResponse::GetParseConfig() const
{
    return m_parseConfig;
}

bool DescribeDocResponse::ParseConfigHasBeenSet() const
{
    return m_parseConfigHasBeenSet;
}

DocSummary DescribeDocResponse::GetSummary() const
{
    return m_summary;
}

bool DescribeDocResponse::SummaryHasBeenSet() const
{
    return m_summaryHasBeenSet;
}

DocSwitch DescribeDocResponse::GetSwitch() const
{
    return m_switch;
}

bool DescribeDocResponse::SwitchHasBeenSet() const
{
    return m_switchHasBeenSet;
}

DocUpdatePeriod DescribeDocResponse::GetUpdatePeriod() const
{
    return m_updatePeriod;
}

bool DescribeDocResponse::UpdatePeriodHasBeenSet() const
{
    return m_updatePeriodHasBeenSet;
}

UserAccessConfig DescribeDocResponse::GetUserAccessConfig() const
{
    return m_userAccessConfig;
}

bool DescribeDocResponse::UserAccessConfigHasBeenSet() const
{
    return m_userAccessConfigHasBeenSet;
}


