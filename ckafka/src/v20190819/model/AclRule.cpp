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

#include <tencentcloud/ckafka/v20190819/model/AclRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

AclRule::AclRule() :
    m_ruleNameHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_patternTypeHasBeenSet(false),
    m_patternHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_aclListHasBeenSet(false),
    m_createTimeStampHasBeenSet(false),
    m_isAppliedHasBeenSet(false),
    m_updateTimeStampHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_topicCountHasBeenSet(false),
    m_patternTypeTitleHasBeenSet(false)
{
}

CoreInternalOutcome AclRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclRule.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("PatternType") && !value["PatternType"].IsNull())
    {
        if (!value["PatternType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclRule.PatternType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_patternType = string(value["PatternType"].GetString());
        m_patternTypeHasBeenSet = true;
    }

    if (value.HasMember("Pattern") && !value["Pattern"].IsNull())
    {
        if (!value["Pattern"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclRule.Pattern` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_pattern = string(value["Pattern"].GetString());
        m_patternHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclRule.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("AclList") && !value["AclList"].IsNull())
    {
        if (!value["AclList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclRule.AclList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aclList = string(value["AclList"].GetString());
        m_aclListHasBeenSet = true;
    }

    if (value.HasMember("CreateTimeStamp") && !value["CreateTimeStamp"].IsNull())
    {
        if (!value["CreateTimeStamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclRule.CreateTimeStamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTimeStamp = string(value["CreateTimeStamp"].GetString());
        m_createTimeStampHasBeenSet = true;
    }

    if (value.HasMember("IsApplied") && !value["IsApplied"].IsNull())
    {
        if (!value["IsApplied"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AclRule.IsApplied` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isApplied = value["IsApplied"].GetInt64();
        m_isAppliedHasBeenSet = true;
    }

    if (value.HasMember("UpdateTimeStamp") && !value["UpdateTimeStamp"].IsNull())
    {
        if (!value["UpdateTimeStamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclRule.UpdateTimeStamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTimeStamp = string(value["UpdateTimeStamp"].GetString());
        m_updateTimeStampHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclRule.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclRule.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("TopicCount") && !value["TopicCount"].IsNull())
    {
        if (!value["TopicCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AclRule.TopicCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_topicCount = value["TopicCount"].GetInt64();
        m_topicCountHasBeenSet = true;
    }

    if (value.HasMember("PatternTypeTitle") && !value["PatternTypeTitle"].IsNull())
    {
        if (!value["PatternTypeTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AclRule.PatternTypeTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_patternTypeTitle = string(value["PatternTypeTitle"].GetString());
        m_patternTypeTitleHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AclRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_patternTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PatternType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_patternType.c_str(), allocator).Move(), allocator);
    }

    if (m_patternHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Pattern";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_pattern.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_aclListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AclList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aclList.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTimeStamp.c_str(), allocator).Move(), allocator);
    }

    if (m_isAppliedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsApplied";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isApplied, allocator);
    }

    if (m_updateTimeStampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTimeStamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTimeStamp.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicCount, allocator);
    }

    if (m_patternTypeTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PatternTypeTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_patternTypeTitle.c_str(), allocator).Move(), allocator);
    }

}


string AclRule::GetRuleName() const
{
    return m_ruleName;
}

void AclRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool AclRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string AclRule::GetInstanceId() const
{
    return m_instanceId;
}

void AclRule::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AclRule::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AclRule::GetPatternType() const
{
    return m_patternType;
}

void AclRule::SetPatternType(const string& _patternType)
{
    m_patternType = _patternType;
    m_patternTypeHasBeenSet = true;
}

bool AclRule::PatternTypeHasBeenSet() const
{
    return m_patternTypeHasBeenSet;
}

string AclRule::GetPattern() const
{
    return m_pattern;
}

void AclRule::SetPattern(const string& _pattern)
{
    m_pattern = _pattern;
    m_patternHasBeenSet = true;
}

bool AclRule::PatternHasBeenSet() const
{
    return m_patternHasBeenSet;
}

string AclRule::GetResourceType() const
{
    return m_resourceType;
}

void AclRule::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool AclRule::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string AclRule::GetAclList() const
{
    return m_aclList;
}

void AclRule::SetAclList(const string& _aclList)
{
    m_aclList = _aclList;
    m_aclListHasBeenSet = true;
}

bool AclRule::AclListHasBeenSet() const
{
    return m_aclListHasBeenSet;
}

string AclRule::GetCreateTimeStamp() const
{
    return m_createTimeStamp;
}

void AclRule::SetCreateTimeStamp(const string& _createTimeStamp)
{
    m_createTimeStamp = _createTimeStamp;
    m_createTimeStampHasBeenSet = true;
}

bool AclRule::CreateTimeStampHasBeenSet() const
{
    return m_createTimeStampHasBeenSet;
}

int64_t AclRule::GetIsApplied() const
{
    return m_isApplied;
}

void AclRule::SetIsApplied(const int64_t& _isApplied)
{
    m_isApplied = _isApplied;
    m_isAppliedHasBeenSet = true;
}

bool AclRule::IsAppliedHasBeenSet() const
{
    return m_isAppliedHasBeenSet;
}

string AclRule::GetUpdateTimeStamp() const
{
    return m_updateTimeStamp;
}

void AclRule::SetUpdateTimeStamp(const string& _updateTimeStamp)
{
    m_updateTimeStamp = _updateTimeStamp;
    m_updateTimeStampHasBeenSet = true;
}

bool AclRule::UpdateTimeStampHasBeenSet() const
{
    return m_updateTimeStampHasBeenSet;
}

string AclRule::GetComment() const
{
    return m_comment;
}

void AclRule::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool AclRule::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

string AclRule::GetTopicName() const
{
    return m_topicName;
}

void AclRule::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool AclRule::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

int64_t AclRule::GetTopicCount() const
{
    return m_topicCount;
}

void AclRule::SetTopicCount(const int64_t& _topicCount)
{
    m_topicCount = _topicCount;
    m_topicCountHasBeenSet = true;
}

bool AclRule::TopicCountHasBeenSet() const
{
    return m_topicCountHasBeenSet;
}

string AclRule::GetPatternTypeTitle() const
{
    return m_patternTypeTitle;
}

void AclRule::SetPatternTypeTitle(const string& _patternTypeTitle)
{
    m_patternTypeTitle = _patternTypeTitle;
    m_patternTypeTitleHasBeenSet = true;
}

bool AclRule::PatternTypeTitleHasBeenSet() const
{
    return m_patternTypeTitleHasBeenSet;
}

