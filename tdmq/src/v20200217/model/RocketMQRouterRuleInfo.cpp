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

#include <tencentcloud/tdmq/v20200217/model/RocketMQRouterRuleInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RocketMQRouterRuleInfo::RocketMQRouterRuleInfo() :
    m_sourceTypeHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_remarkNameHasBeenSet(false),
    m_aliRocketMQSourceHasBeenSet(false),
    m_aliRocketMQTargetHasBeenSet(false),
    m_aliMessageServiceSourceHasBeenSet(false),
    m_aliMessageServiceTargetHasBeenSet(false),
    m_tenRocketMQSourceHasBeenSet(false),
    m_tenRocketMQTargetHasBeenSet(false),
    m_aliasNameHasBeenSet(false),
    m_tenMQTTSourceHasBeenSet(false),
    m_tenMQTTTargetHasBeenSet(false)
{
}

CoreInternalOutcome RocketMQRouterRuleInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceType") && !value["SourceType"].IsNull())
    {
        if (!value["SourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQRouterRuleInfo.SourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceType = string(value["SourceType"].GetString());
        m_sourceTypeHasBeenSet = true;
    }

    if (value.HasMember("TargetType") && !value["TargetType"].IsNull())
    {
        if (!value["TargetType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQRouterRuleInfo.TargetType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetType = string(value["TargetType"].GetString());
        m_targetTypeHasBeenSet = true;
    }

    if (value.HasMember("RemarkName") && !value["RemarkName"].IsNull())
    {
        if (!value["RemarkName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQRouterRuleInfo.RemarkName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remarkName = string(value["RemarkName"].GetString());
        m_remarkNameHasBeenSet = true;
    }

    if (value.HasMember("AliRocketMQSource") && !value["AliRocketMQSource"].IsNull())
    {
        if (!value["AliRocketMQSource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQRouterRuleInfo.AliRocketMQSource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aliRocketMQSource.Deserialize(value["AliRocketMQSource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aliRocketMQSourceHasBeenSet = true;
    }

    if (value.HasMember("AliRocketMQTarget") && !value["AliRocketMQTarget"].IsNull())
    {
        if (!value["AliRocketMQTarget"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQRouterRuleInfo.AliRocketMQTarget` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aliRocketMQTarget.Deserialize(value["AliRocketMQTarget"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aliRocketMQTargetHasBeenSet = true;
    }

    if (value.HasMember("AliMessageServiceSource") && !value["AliMessageServiceSource"].IsNull())
    {
        if (!value["AliMessageServiceSource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQRouterRuleInfo.AliMessageServiceSource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aliMessageServiceSource.Deserialize(value["AliMessageServiceSource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aliMessageServiceSourceHasBeenSet = true;
    }

    if (value.HasMember("AliMessageServiceTarget") && !value["AliMessageServiceTarget"].IsNull())
    {
        if (!value["AliMessageServiceTarget"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQRouterRuleInfo.AliMessageServiceTarget` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_aliMessageServiceTarget.Deserialize(value["AliMessageServiceTarget"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_aliMessageServiceTargetHasBeenSet = true;
    }

    if (value.HasMember("TenRocketMQSource") && !value["TenRocketMQSource"].IsNull())
    {
        if (!value["TenRocketMQSource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQRouterRuleInfo.TenRocketMQSource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tenRocketMQSource.Deserialize(value["TenRocketMQSource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tenRocketMQSourceHasBeenSet = true;
    }

    if (value.HasMember("TenRocketMQTarget") && !value["TenRocketMQTarget"].IsNull())
    {
        if (!value["TenRocketMQTarget"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQRouterRuleInfo.TenRocketMQTarget` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tenRocketMQTarget.Deserialize(value["TenRocketMQTarget"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tenRocketMQTargetHasBeenSet = true;
    }

    if (value.HasMember("AliasName") && !value["AliasName"].IsNull())
    {
        if (!value["AliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQRouterRuleInfo.AliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasName = string(value["AliasName"].GetString());
        m_aliasNameHasBeenSet = true;
    }

    if (value.HasMember("TenMQTTSource") && !value["TenMQTTSource"].IsNull())
    {
        if (!value["TenMQTTSource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQRouterRuleInfo.TenMQTTSource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tenMQTTSource.Deserialize(value["TenMQTTSource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tenMQTTSourceHasBeenSet = true;
    }

    if (value.HasMember("TenMQTTTarget") && !value["TenMQTTTarget"].IsNull())
    {
        if (!value["TenMQTTTarget"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQRouterRuleInfo.TenMQTTTarget` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tenMQTTTarget.Deserialize(value["TenMQTTTarget"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tenMQTTTargetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RocketMQRouterRuleInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_targetTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemarkName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remarkName.c_str(), allocator).Move(), allocator);
    }

    if (m_aliRocketMQSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliRocketMQSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aliRocketMQSource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aliRocketMQTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliRocketMQTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aliRocketMQTarget.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aliMessageServiceSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliMessageServiceSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aliMessageServiceSource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aliMessageServiceTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliMessageServiceTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_aliMessageServiceTarget.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tenRocketMQSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenRocketMQSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tenRocketMQSource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tenRocketMQTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenRocketMQTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tenRocketMQTarget.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_aliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasName.c_str(), allocator).Move(), allocator);
    }

    if (m_tenMQTTSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenMQTTSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tenMQTTSource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tenMQTTTargetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenMQTTTarget";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tenMQTTTarget.ToJsonObject(value[key.c_str()], allocator);
    }

}


string RocketMQRouterRuleInfo::GetSourceType() const
{
    return m_sourceType;
}

void RocketMQRouterRuleInfo::SetSourceType(const string& _sourceType)
{
    m_sourceType = _sourceType;
    m_sourceTypeHasBeenSet = true;
}

bool RocketMQRouterRuleInfo::SourceTypeHasBeenSet() const
{
    return m_sourceTypeHasBeenSet;
}

string RocketMQRouterRuleInfo::GetTargetType() const
{
    return m_targetType;
}

void RocketMQRouterRuleInfo::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool RocketMQRouterRuleInfo::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

string RocketMQRouterRuleInfo::GetRemarkName() const
{
    return m_remarkName;
}

void RocketMQRouterRuleInfo::SetRemarkName(const string& _remarkName)
{
    m_remarkName = _remarkName;
    m_remarkNameHasBeenSet = true;
}

bool RocketMQRouterRuleInfo::RemarkNameHasBeenSet() const
{
    return m_remarkNameHasBeenSet;
}

RouterRocketMQSource RocketMQRouterRuleInfo::GetAliRocketMQSource() const
{
    return m_aliRocketMQSource;
}

void RocketMQRouterRuleInfo::SetAliRocketMQSource(const RouterRocketMQSource& _aliRocketMQSource)
{
    m_aliRocketMQSource = _aliRocketMQSource;
    m_aliRocketMQSourceHasBeenSet = true;
}

bool RocketMQRouterRuleInfo::AliRocketMQSourceHasBeenSet() const
{
    return m_aliRocketMQSourceHasBeenSet;
}

RouterRocketMQTarget RocketMQRouterRuleInfo::GetAliRocketMQTarget() const
{
    return m_aliRocketMQTarget;
}

void RocketMQRouterRuleInfo::SetAliRocketMQTarget(const RouterRocketMQTarget& _aliRocketMQTarget)
{
    m_aliRocketMQTarget = _aliRocketMQTarget;
    m_aliRocketMQTargetHasBeenSet = true;
}

bool RocketMQRouterRuleInfo::AliRocketMQTargetHasBeenSet() const
{
    return m_aliRocketMQTargetHasBeenSet;
}

RouterMessageServiceSource RocketMQRouterRuleInfo::GetAliMessageServiceSource() const
{
    return m_aliMessageServiceSource;
}

void RocketMQRouterRuleInfo::SetAliMessageServiceSource(const RouterMessageServiceSource& _aliMessageServiceSource)
{
    m_aliMessageServiceSource = _aliMessageServiceSource;
    m_aliMessageServiceSourceHasBeenSet = true;
}

bool RocketMQRouterRuleInfo::AliMessageServiceSourceHasBeenSet() const
{
    return m_aliMessageServiceSourceHasBeenSet;
}

RouterMessageServiceTarget RocketMQRouterRuleInfo::GetAliMessageServiceTarget() const
{
    return m_aliMessageServiceTarget;
}

void RocketMQRouterRuleInfo::SetAliMessageServiceTarget(const RouterMessageServiceTarget& _aliMessageServiceTarget)
{
    m_aliMessageServiceTarget = _aliMessageServiceTarget;
    m_aliMessageServiceTargetHasBeenSet = true;
}

bool RocketMQRouterRuleInfo::AliMessageServiceTargetHasBeenSet() const
{
    return m_aliMessageServiceTargetHasBeenSet;
}

RouterTencentRocketMQSource RocketMQRouterRuleInfo::GetTenRocketMQSource() const
{
    return m_tenRocketMQSource;
}

void RocketMQRouterRuleInfo::SetTenRocketMQSource(const RouterTencentRocketMQSource& _tenRocketMQSource)
{
    m_tenRocketMQSource = _tenRocketMQSource;
    m_tenRocketMQSourceHasBeenSet = true;
}

bool RocketMQRouterRuleInfo::TenRocketMQSourceHasBeenSet() const
{
    return m_tenRocketMQSourceHasBeenSet;
}

RouterTencentRocketMQTarget RocketMQRouterRuleInfo::GetTenRocketMQTarget() const
{
    return m_tenRocketMQTarget;
}

void RocketMQRouterRuleInfo::SetTenRocketMQTarget(const RouterTencentRocketMQTarget& _tenRocketMQTarget)
{
    m_tenRocketMQTarget = _tenRocketMQTarget;
    m_tenRocketMQTargetHasBeenSet = true;
}

bool RocketMQRouterRuleInfo::TenRocketMQTargetHasBeenSet() const
{
    return m_tenRocketMQTargetHasBeenSet;
}

string RocketMQRouterRuleInfo::GetAliasName() const
{
    return m_aliasName;
}

void RocketMQRouterRuleInfo::SetAliasName(const string& _aliasName)
{
    m_aliasName = _aliasName;
    m_aliasNameHasBeenSet = true;
}

bool RocketMQRouterRuleInfo::AliasNameHasBeenSet() const
{
    return m_aliasNameHasBeenSet;
}

RouterTencentMQTTSource RocketMQRouterRuleInfo::GetTenMQTTSource() const
{
    return m_tenMQTTSource;
}

void RocketMQRouterRuleInfo::SetTenMQTTSource(const RouterTencentMQTTSource& _tenMQTTSource)
{
    m_tenMQTTSource = _tenMQTTSource;
    m_tenMQTTSourceHasBeenSet = true;
}

bool RocketMQRouterRuleInfo::TenMQTTSourceHasBeenSet() const
{
    return m_tenMQTTSourceHasBeenSet;
}

RouterTencentMQTTTarget RocketMQRouterRuleInfo::GetTenMQTTTarget() const
{
    return m_tenMQTTTarget;
}

void RocketMQRouterRuleInfo::SetTenMQTTTarget(const RouterTencentMQTTTarget& _tenMQTTTarget)
{
    m_tenMQTTTarget = _tenMQTTTarget;
    m_tenMQTTTargetHasBeenSet = true;
}

bool RocketMQRouterRuleInfo::TenMQTTTargetHasBeenSet() const
{
    return m_tenMQTTTargetHasBeenSet;
}

