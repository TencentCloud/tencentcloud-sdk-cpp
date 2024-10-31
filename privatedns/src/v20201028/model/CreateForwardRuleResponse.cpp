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

#include <tencentcloud/privatedns/v20201028/model/CreateForwardRuleResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Privatedns::V20201028::Model;
using namespace std;

CreateForwardRuleResponse::CreateForwardRuleResponse() :
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_endPointIdHasBeenSet(false)
{
}

CoreInternalOutcome CreateForwardRuleResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("RuleId") && !rsp["RuleId"].IsNull())
    {
        if (!rsp["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(rsp["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (rsp.HasMember("RuleName") && !rsp["RuleName"].IsNull())
    {
        if (!rsp["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(rsp["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (rsp.HasMember("RuleType") && !rsp["RuleType"].IsNull())
    {
        if (!rsp["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(rsp["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ZoneId") && !rsp["ZoneId"].IsNull())
    {
        if (!rsp["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(rsp["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (rsp.HasMember("EndPointId") && !rsp["EndPointId"].IsNull())
    {
        if (!rsp["EndPointId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EndPointId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endPointId = string(rsp["EndPointId"].GetString());
        m_endPointIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateForwardRuleResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_endPointIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndPointId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_endPointId.c_str(), allocator).Move(), allocator);
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


string CreateForwardRuleResponse::GetRuleId() const
{
    return m_ruleId;
}

bool CreateForwardRuleResponse::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string CreateForwardRuleResponse::GetRuleName() const
{
    return m_ruleName;
}

bool CreateForwardRuleResponse::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string CreateForwardRuleResponse::GetRuleType() const
{
    return m_ruleType;
}

bool CreateForwardRuleResponse::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

string CreateForwardRuleResponse::GetZoneId() const
{
    return m_zoneId;
}

bool CreateForwardRuleResponse::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string CreateForwardRuleResponse::GetEndPointId() const
{
    return m_endPointId;
}

bool CreateForwardRuleResponse::EndPointIdHasBeenSet() const
{
    return m_endPointIdHasBeenSet;
}


