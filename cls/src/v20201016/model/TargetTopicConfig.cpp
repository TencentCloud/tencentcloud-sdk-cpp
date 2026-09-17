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

#include <tencentcloud/cls/v20201016/model/TargetTopicConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

TargetTopicConfig::TargetTopicConfig() :
    m_accountTypeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_logsetIdHasBeenSet(false),
    m_topicIdHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_externalIdHasBeenSet(false)
{
}

CoreInternalOutcome TargetTopicConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccountType") && !value["AccountType"].IsNull())
    {
        if (!value["AccountType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TargetTopicConfig.AccountType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_accountType = value["AccountType"].GetUint64();
        m_accountTypeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetTopicConfig.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("LogsetId") && !value["LogsetId"].IsNull())
    {
        if (!value["LogsetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetTopicConfig.LogsetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logsetId = string(value["LogsetId"].GetString());
        m_logsetIdHasBeenSet = true;
    }

    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetTopicConfig.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("RoleArn") && !value["RoleArn"].IsNull())
    {
        if (!value["RoleArn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetTopicConfig.RoleArn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleArn = string(value["RoleArn"].GetString());
        m_roleArnHasBeenSet = true;
    }

    if (value.HasMember("ExternalId") && !value["ExternalId"].IsNull())
    {
        if (!value["ExternalId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TargetTopicConfig.ExternalId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalId = string(value["ExternalId"].GetString());
        m_externalIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TargetTopicConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accountTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccountType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accountType, allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_logsetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogsetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logsetId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_roleArnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleArn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleArn.c_str(), allocator).Move(), allocator);
    }

    if (m_externalIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalId.c_str(), allocator).Move(), allocator);
    }

}


uint64_t TargetTopicConfig::GetAccountType() const
{
    return m_accountType;
}

void TargetTopicConfig::SetAccountType(const uint64_t& _accountType)
{
    m_accountType = _accountType;
    m_accountTypeHasBeenSet = true;
}

bool TargetTopicConfig::AccountTypeHasBeenSet() const
{
    return m_accountTypeHasBeenSet;
}

string TargetTopicConfig::GetRegion() const
{
    return m_region;
}

void TargetTopicConfig::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool TargetTopicConfig::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string TargetTopicConfig::GetLogsetId() const
{
    return m_logsetId;
}

void TargetTopicConfig::SetLogsetId(const string& _logsetId)
{
    m_logsetId = _logsetId;
    m_logsetIdHasBeenSet = true;
}

bool TargetTopicConfig::LogsetIdHasBeenSet() const
{
    return m_logsetIdHasBeenSet;
}

string TargetTopicConfig::GetTopicId() const
{
    return m_topicId;
}

void TargetTopicConfig::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool TargetTopicConfig::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string TargetTopicConfig::GetRoleArn() const
{
    return m_roleArn;
}

void TargetTopicConfig::SetRoleArn(const string& _roleArn)
{
    m_roleArn = _roleArn;
    m_roleArnHasBeenSet = true;
}

bool TargetTopicConfig::RoleArnHasBeenSet() const
{
    return m_roleArnHasBeenSet;
}

string TargetTopicConfig::GetExternalId() const
{
    return m_externalId;
}

void TargetTopicConfig::SetExternalId(const string& _externalId)
{
    m_externalId = _externalId;
    m_externalIdHasBeenSet = true;
}

bool TargetTopicConfig::ExternalIdHasBeenSet() const
{
    return m_externalIdHasBeenSet;
}

