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

#include <tencentcloud/eb/v20210416/model/GetRuleResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Eb::V20210416::Model;
using namespace std;

GetRuleResponse::GetRuleResponse() :
    m_eventBusIdHasBeenSet(false),
    m_ruleIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_enableHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_eventPatternHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_modTimeHasBeenSet(false)
{
}

CoreInternalOutcome GetRuleResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("EventBusId") && !rsp["EventBusId"].IsNull())
    {
        if (!rsp["EventBusId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventBusId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventBusId = string(rsp["EventBusId"].GetString());
        m_eventBusIdHasBeenSet = true;
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

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("Enable") && !rsp["Enable"].IsNull())
    {
        if (!rsp["Enable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Enable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enable = rsp["Enable"].GetBool();
        m_enableHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (rsp.HasMember("EventPattern") && !rsp["EventPattern"].IsNull())
    {
        if (!rsp["EventPattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventPattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_eventPattern = string(rsp["EventPattern"].GetString());
        m_eventPatternHasBeenSet = true;
    }

    if (rsp.HasMember("AddTime") && !rsp["AddTime"].IsNull())
    {
        if (!rsp["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(rsp["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (rsp.HasMember("ModTime") && !rsp["ModTime"].IsNull())
    {
        if (!rsp["ModTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modTime = string(rsp["ModTime"].GetString());
        m_modTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string GetRuleResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_eventBusIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventBusId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventBusId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_enableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enable, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_eventPatternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EventPattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_eventPattern.c_str(), allocator).Move(), allocator);
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_modTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modTime.c_str(), allocator).Move(), allocator);
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


string GetRuleResponse::GetEventBusId() const
{
    return m_eventBusId;
}

bool GetRuleResponse::EventBusIdHasBeenSet() const
{
    return m_eventBusIdHasBeenSet;
}

string GetRuleResponse::GetRuleId() const
{
    return m_ruleId;
}

bool GetRuleResponse::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string GetRuleResponse::GetRuleName() const
{
    return m_ruleName;
}

bool GetRuleResponse::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string GetRuleResponse::GetStatus() const
{
    return m_status;
}

bool GetRuleResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

bool GetRuleResponse::GetEnable() const
{
    return m_enable;
}

bool GetRuleResponse::EnableHasBeenSet() const
{
    return m_enableHasBeenSet;
}

string GetRuleResponse::GetDescription() const
{
    return m_description;
}

bool GetRuleResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string GetRuleResponse::GetEventPattern() const
{
    return m_eventPattern;
}

bool GetRuleResponse::EventPatternHasBeenSet() const
{
    return m_eventPatternHasBeenSet;
}

string GetRuleResponse::GetAddTime() const
{
    return m_addTime;
}

bool GetRuleResponse::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string GetRuleResponse::GetModTime() const
{
    return m_modTime;
}

bool GetRuleResponse::ModTimeHasBeenSet() const
{
    return m_modTimeHasBeenSet;
}


