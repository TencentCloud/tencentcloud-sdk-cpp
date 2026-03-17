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

#include <tencentcloud/tcss/v20201101/model/ImageDenyRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcss::V20201101::Model;
using namespace std;

ImageDenyRule::ImageDenyRule() :
    m_ruleIDHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_effectImageCountHasBeenSet(false),
    m_isEffectAllImageHasBeenSet(false),
    m_effectTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_operationUinHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_effectStatusHasBeenSet(false),
    m_iDHasBeenSet(false)
{
}

CoreInternalOutcome ImageDenyRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleID") && !value["RuleID"].IsNull())
    {
        if (!value["RuleID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyRule.RuleID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleID = string(value["RuleID"].GetString());
        m_ruleIDHasBeenSet = true;
    }

    if (value.HasMember("RuleName") && !value["RuleName"].IsNull())
    {
        if (!value["RuleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyRule.RuleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleName = string(value["RuleName"].GetString());
        m_ruleNameHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyRule.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("EffectImageCount") && !value["EffectImageCount"].IsNull())
    {
        if (!value["EffectImageCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyRule.EffectImageCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_effectImageCount = value["EffectImageCount"].GetInt64();
        m_effectImageCountHasBeenSet = true;
    }

    if (value.HasMember("IsEffectAllImage") && !value["IsEffectAllImage"].IsNull())
    {
        if (!value["IsEffectAllImage"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyRule.IsEffectAllImage` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isEffectAllImage = value["IsEffectAllImage"].GetInt64();
        m_isEffectAllImageHasBeenSet = true;
    }

    if (value.HasMember("EffectTime") && !value["EffectTime"].IsNull())
    {
        if (!value["EffectTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyRule.EffectTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectTime = string(value["EffectTime"].GetString());
        m_effectTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyRule.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("OperationUin") && !value["OperationUin"].IsNull())
    {
        if (!value["OperationUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyRule.OperationUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationUin = string(value["OperationUin"].GetString());
        m_operationUinHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyRule.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("EffectStatus") && !value["EffectStatus"].IsNull())
    {
        if (!value["EffectStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyRule.EffectStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_effectStatus = string(value["EffectStatus"].GetString());
        m_effectStatusHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageDenyRule.ID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetInt64();
        m_iDHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageDenyRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleID.c_str(), allocator).Move(), allocator);
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

    if (m_effectImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectImageCount, allocator);
    }

    if (m_isEffectAllImageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsEffectAllImage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isEffectAllImage, allocator);
    }

    if (m_effectTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effectTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_operationUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationUin.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_effectStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_effectStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

}


string ImageDenyRule::GetRuleID() const
{
    return m_ruleID;
}

void ImageDenyRule::SetRuleID(const string& _ruleID)
{
    m_ruleID = _ruleID;
    m_ruleIDHasBeenSet = true;
}

bool ImageDenyRule::RuleIDHasBeenSet() const
{
    return m_ruleIDHasBeenSet;
}

string ImageDenyRule::GetRuleName() const
{
    return m_ruleName;
}

void ImageDenyRule::SetRuleName(const string& _ruleName)
{
    m_ruleName = _ruleName;
    m_ruleNameHasBeenSet = true;
}

bool ImageDenyRule::RuleNameHasBeenSet() const
{
    return m_ruleNameHasBeenSet;
}

string ImageDenyRule::GetRuleType() const
{
    return m_ruleType;
}

void ImageDenyRule::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool ImageDenyRule::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

int64_t ImageDenyRule::GetEffectImageCount() const
{
    return m_effectImageCount;
}

void ImageDenyRule::SetEffectImageCount(const int64_t& _effectImageCount)
{
    m_effectImageCount = _effectImageCount;
    m_effectImageCountHasBeenSet = true;
}

bool ImageDenyRule::EffectImageCountHasBeenSet() const
{
    return m_effectImageCountHasBeenSet;
}

int64_t ImageDenyRule::GetIsEffectAllImage() const
{
    return m_isEffectAllImage;
}

void ImageDenyRule::SetIsEffectAllImage(const int64_t& _isEffectAllImage)
{
    m_isEffectAllImage = _isEffectAllImage;
    m_isEffectAllImageHasBeenSet = true;
}

bool ImageDenyRule::IsEffectAllImageHasBeenSet() const
{
    return m_isEffectAllImageHasBeenSet;
}

string ImageDenyRule::GetEffectTime() const
{
    return m_effectTime;
}

void ImageDenyRule::SetEffectTime(const string& _effectTime)
{
    m_effectTime = _effectTime;
    m_effectTimeHasBeenSet = true;
}

bool ImageDenyRule::EffectTimeHasBeenSet() const
{
    return m_effectTimeHasBeenSet;
}

string ImageDenyRule::GetUpdateTime() const
{
    return m_updateTime;
}

void ImageDenyRule::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ImageDenyRule::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ImageDenyRule::GetOperationUin() const
{
    return m_operationUin;
}

void ImageDenyRule::SetOperationUin(const string& _operationUin)
{
    m_operationUin = _operationUin;
    m_operationUinHasBeenSet = true;
}

bool ImageDenyRule::OperationUinHasBeenSet() const
{
    return m_operationUinHasBeenSet;
}

int64_t ImageDenyRule::GetStatus() const
{
    return m_status;
}

void ImageDenyRule::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ImageDenyRule::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ImageDenyRule::GetEffectStatus() const
{
    return m_effectStatus;
}

void ImageDenyRule::SetEffectStatus(const string& _effectStatus)
{
    m_effectStatus = _effectStatus;
    m_effectStatusHasBeenSet = true;
}

bool ImageDenyRule::EffectStatusHasBeenSet() const
{
    return m_effectStatusHasBeenSet;
}

int64_t ImageDenyRule::GetID() const
{
    return m_iD;
}

void ImageDenyRule::SetID(const int64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ImageDenyRule::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

