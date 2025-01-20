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

#include <tencentcloud/vpc/v20170312/model/TranslationNatRule.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

TranslationNatRule::TranslationNatRule() :
    m_translationDirectionHasBeenSet(false),
    m_translationTypeHasBeenSet(false),
    m_translationIpHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_originalIpHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome TranslationNatRule::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TranslationDirection") && !value["TranslationDirection"].IsNull())
    {
        if (!value["TranslationDirection"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranslationNatRule.TranslationDirection` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translationDirection = string(value["TranslationDirection"].GetString());
        m_translationDirectionHasBeenSet = true;
    }

    if (value.HasMember("TranslationType") && !value["TranslationType"].IsNull())
    {
        if (!value["TranslationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranslationNatRule.TranslationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translationType = string(value["TranslationType"].GetString());
        m_translationTypeHasBeenSet = true;
    }

    if (value.HasMember("TranslationIp") && !value["TranslationIp"].IsNull())
    {
        if (!value["TranslationIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranslationNatRule.TranslationIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_translationIp = string(value["TranslationIp"].GetString());
        m_translationIpHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranslationNatRule.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("OriginalIp") && !value["OriginalIp"].IsNull())
    {
        if (!value["OriginalIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranslationNatRule.OriginalIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_originalIp = string(value["OriginalIp"].GetString());
        m_originalIpHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranslationNatRule.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TranslationNatRule.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TranslationNatRule::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_translationDirectionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslationDirection";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_translationDirection.c_str(), allocator).Move(), allocator);
    }

    if (m_translationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_translationType.c_str(), allocator).Move(), allocator);
    }

    if (m_translationIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TranslationIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_translationIp.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_originalIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OriginalIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_originalIp.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

}


string TranslationNatRule::GetTranslationDirection() const
{
    return m_translationDirection;
}

void TranslationNatRule::SetTranslationDirection(const string& _translationDirection)
{
    m_translationDirection = _translationDirection;
    m_translationDirectionHasBeenSet = true;
}

bool TranslationNatRule::TranslationDirectionHasBeenSet() const
{
    return m_translationDirectionHasBeenSet;
}

string TranslationNatRule::GetTranslationType() const
{
    return m_translationType;
}

void TranslationNatRule::SetTranslationType(const string& _translationType)
{
    m_translationType = _translationType;
    m_translationTypeHasBeenSet = true;
}

bool TranslationNatRule::TranslationTypeHasBeenSet() const
{
    return m_translationTypeHasBeenSet;
}

string TranslationNatRule::GetTranslationIp() const
{
    return m_translationIp;
}

void TranslationNatRule::SetTranslationIp(const string& _translationIp)
{
    m_translationIp = _translationIp;
    m_translationIpHasBeenSet = true;
}

bool TranslationNatRule::TranslationIpHasBeenSet() const
{
    return m_translationIpHasBeenSet;
}

string TranslationNatRule::GetDescription() const
{
    return m_description;
}

void TranslationNatRule::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TranslationNatRule::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string TranslationNatRule::GetOriginalIp() const
{
    return m_originalIp;
}

void TranslationNatRule::SetOriginalIp(const string& _originalIp)
{
    m_originalIp = _originalIp;
    m_originalIpHasBeenSet = true;
}

bool TranslationNatRule::OriginalIpHasBeenSet() const
{
    return m_originalIpHasBeenSet;
}

string TranslationNatRule::GetCreateTime() const
{
    return m_createTime;
}

void TranslationNatRule::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TranslationNatRule::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TranslationNatRule::GetUpdateTime() const
{
    return m_updateTime;
}

void TranslationNatRule::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TranslationNatRule::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

