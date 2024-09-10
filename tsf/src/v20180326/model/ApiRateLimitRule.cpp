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

#include <tencentcloud/tsf/v20180326/model/ApiRateLimitRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ApiRateLimitRule::ApiRateLimitRule() :
    m_ruleIdHasBeenSet(false),
    m_apiIdHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_maxQpsHasBeenSet(false),
    m_usableStatusHasBeenSet(false),
    m_ruleContentHasBeenSet(false),
    m_tsfRuleIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_updatedTimeHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_appIdHasBeenSet(false)
{
}

CoreInternalOutcome ApiRateLimitRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiRateLimitRule.RuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = string(value["RuleId"].GetString());
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("ApiId") && !value["ApiId"].IsNull())
    {
        if (!value["ApiId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiRateLimitRule.ApiId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiId = string(value["ApiId"].GetString());
        m_apiIdHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiRateLimitRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("MaxQps") && !value["MaxQps"].IsNull())
    {
        if (!value["MaxQps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiRateLimitRule.MaxQps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxQps = value["MaxQps"].GetUint64();
        m_maxQpsHasBeenSet = true;
    }

    if (value.HasMember("UsableStatus") && !value["UsableStatus"].IsNull())
    {
        if (!value["UsableStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiRateLimitRule.UsableStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usableStatus = string(value["UsableStatus"].GetString());
        m_usableStatusHasBeenSet = true;
    }

    if (value.HasMember("RuleContent") && !value["RuleContent"].IsNull())
    {
        if (!value["RuleContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiRateLimitRule.RuleContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleContent = string(value["RuleContent"].GetString());
        m_ruleContentHasBeenSet = true;
    }

    if (value.HasMember("TsfRuleId") && !value["TsfRuleId"].IsNull())
    {
        if (!value["TsfRuleId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiRateLimitRule.TsfRuleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tsfRuleId = string(value["TsfRuleId"].GetString());
        m_tsfRuleIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiRateLimitRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiRateLimitRule.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdatedTime") && !value["UpdatedTime"].IsNull())
    {
        if (!value["UpdatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiRateLimitRule.UpdatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updatedTime = string(value["UpdatedTime"].GetString());
        m_updatedTimeHasBeenSet = true;
    }

    if (value.HasMember("Limit") && !value["Limit"].IsNull())
    {
        if (!value["Limit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiRateLimitRule.Limit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_limit = value["Limit"].GetInt64();
        m_limitHasBeenSet = true;
    }

    if (value.HasMember("Offset") && !value["Offset"].IsNull())
    {
        if (!value["Offset"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ApiRateLimitRule.Offset` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_offset = value["Offset"].GetInt64();
        m_offsetHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApiRateLimitRule.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApiRateLimitRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleId.c_str(), allocator).Move(), allocator);
    }

    if (m_apiIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiId.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_maxQpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxQps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxQps, allocator);
    }

    if (m_usableStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsableStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usableStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleContent.c_str(), allocator).Move(), allocator);
    }

    if (m_tsfRuleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TsfRuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tsfRuleId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_offset, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

}


string ApiRateLimitRule::GetRuleId() const
{
    return m_ruleId;
}

void ApiRateLimitRule::SetRuleId(const string& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool ApiRateLimitRule::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string ApiRateLimitRule::GetApiId() const
{
    return m_apiId;
}

void ApiRateLimitRule::SetApiId(const string& _apiId)
{
    m_apiId = _apiId;
    m_apiIdHasBeenSet = true;
}

bool ApiRateLimitRule::ApiIdHasBeenSet() const
{
    return m_apiIdHasBeenSet;
}

string ApiRateLimitRule::GetRuleName() const
{
    return m_ruleName;
}

void ApiRateLimitRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ApiRateLimitRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

uint64_t ApiRateLimitRule::GetMaxQps() const
{
    return m_maxQps;
}

void ApiRateLimitRule::SetMaxQps(const uint64_t& _maxQps)
{
    m_maxQps = _maxQps;
    m_maxQpsHasBeenSet = true;
}

bool ApiRateLimitRule::MaxQpsHasBeenSet() const
{
    return m_maxQpsHasBeenSet;
}

string ApiRateLimitRule::GetUsableStatus() const
{
    return m_usableStatus;
}

void ApiRateLimitRule::SetUsableStatus(const string& _usableStatus)
{
    m_usableStatus = _usableStatus;
    m_usableStatusHasBeenSet = true;
}

bool ApiRateLimitRule::UsableStatusHasBeenSet() const
{
    return m_usableStatusHasBeenSet;
}

string ApiRateLimitRule::GetRuleContent() const
{
    return m_ruleContent;
}

void ApiRateLimitRule::SetRuleContent(const string& _ruleContent)
{
    m_ruleContent = _ruleContent;
    m_ruleContentHasBeenSet = true;
}

bool ApiRateLimitRule::RuleContentHasBeenSet() const
{
    return m_ruleContentHasBeenSet;
}

string ApiRateLimitRule::GetTsfRuleId() const
{
    return m_tsfRuleId;
}

void ApiRateLimitRule::SetTsfRuleId(const string& _tsfRuleId)
{
    m_tsfRuleId = _tsfRuleId;
    m_tsfRuleIdHasBeenSet = true;
}

bool ApiRateLimitRule::TsfRuleIdHasBeenSet() const
{
    return m_tsfRuleIdHasBeenSet;
}

string ApiRateLimitRule::GetDescription() const
{
    return m_description;
}

void ApiRateLimitRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ApiRateLimitRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ApiRateLimitRule::GetCreatedTime() const
{
    return m_createdTime;
}

void ApiRateLimitRule::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool ApiRateLimitRule::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string ApiRateLimitRule::GetUpdatedTime() const
{
    return m_updatedTime;
}

void ApiRateLimitRule::SetUpdatedTime(const string& _updatedTime)
{
    m_updatedTime = _updatedTime;
    m_updatedTimeHasBeenSet = true;
}

bool ApiRateLimitRule::UpdatedTimeHasBeenSet() const
{
    return m_updatedTimeHasBeenSet;
}

int64_t ApiRateLimitRule::GetLimit() const
{
    return m_limit;
}

void ApiRateLimitRule::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool ApiRateLimitRule::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

int64_t ApiRateLimitRule::GetOffset() const
{
    return m_offset;
}

void ApiRateLimitRule::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool ApiRateLimitRule::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

string ApiRateLimitRule::GetAppId() const
{
    return m_appId;
}

void ApiRateLimitRule::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool ApiRateLimitRule::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

