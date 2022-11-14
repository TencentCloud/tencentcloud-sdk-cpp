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

#include <tencentcloud/wedata/v20210820/model/RuleTemplateHistory.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

RuleTemplateHistory::RuleTemplateHistory() :
    m_templateIdHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_alterTypeHasBeenSet(false),
    m_alterContentHasBeenSet(false)
{
}

CoreInternalOutcome RuleTemplateHistory::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplateHistory.TemplateId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = value["TemplateId"].GetUint64();
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplateHistory.Version` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_version = value["Version"].GetUint64();
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplateHistory.UserId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_userId = value["UserId"].GetUint64();
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("UserName") && !value["UserName"].IsNull())
    {
        if (!value["UserName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplateHistory.UserName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userName = string(value["UserName"].GetString());
        m_userNameHasBeenSet = true;
    }

    if (value.HasMember("AlterType") && !value["AlterType"].IsNull())
    {
        if (!value["AlterType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplateHistory.AlterType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_alterType = value["AlterType"].GetUint64();
        m_alterTypeHasBeenSet = true;
    }

    if (value.HasMember("AlterContent") && !value["AlterContent"].IsNull())
    {
        if (!value["AlterContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleTemplateHistory.AlterContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_alterContent = string(value["AlterContent"].GetString());
        m_alterContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleTemplateHistory::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateId, allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_version, allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userId, allocator);
    }

    if (m_userNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userName.c_str(), allocator).Move(), allocator);
    }

    if (m_alterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alterType, allocator);
    }

    if (m_alterContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlterContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_alterContent.c_str(), allocator).Move(), allocator);
    }

}


uint64_t RuleTemplateHistory::GetTemplateId() const
{
    return m_templateId;
}

void RuleTemplateHistory::SetTemplateId(const uint64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool RuleTemplateHistory::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

uint64_t RuleTemplateHistory::GetVersion() const
{
    return m_version;
}

void RuleTemplateHistory::SetVersion(const uint64_t& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool RuleTemplateHistory::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

uint64_t RuleTemplateHistory::GetUserId() const
{
    return m_userId;
}

void RuleTemplateHistory::SetUserId(const uint64_t& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool RuleTemplateHistory::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string RuleTemplateHistory::GetUserName() const
{
    return m_userName;
}

void RuleTemplateHistory::SetUserName(const string& _userName)
{
    m_userName = _userName;
    m_userNameHasBeenSet = true;
}

bool RuleTemplateHistory::UserNameHasBeenSet() const
{
    return m_userNameHasBeenSet;
}

uint64_t RuleTemplateHistory::GetAlterType() const
{
    return m_alterType;
}

void RuleTemplateHistory::SetAlterType(const uint64_t& _alterType)
{
    m_alterType = _alterType;
    m_alterTypeHasBeenSet = true;
}

bool RuleTemplateHistory::AlterTypeHasBeenSet() const
{
    return m_alterTypeHasBeenSet;
}

string RuleTemplateHistory::GetAlterContent() const
{
    return m_alterContent;
}

void RuleTemplateHistory::SetAlterContent(const string& _alterContent)
{
    m_alterContent = _alterContent;
    m_alterContentHasBeenSet = true;
}

bool RuleTemplateHistory::AlterContentHasBeenSet() const
{
    return m_alterContentHasBeenSet;
}

