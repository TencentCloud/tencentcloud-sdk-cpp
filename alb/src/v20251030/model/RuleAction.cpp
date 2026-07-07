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

#include <tencentcloud/alb/v20251030/model/RuleAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Alb::V20251030::Model;
using namespace std;

RuleAction::RuleAction() :
    m_orderHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_fixedResponseConfigHasBeenSet(false),
    m_insertHeaderConfigHasBeenSet(false),
    m_redirectConfigHasBeenSet(false),
    m_removeHeaderConfigHasBeenSet(false),
    m_rewriteConfigHasBeenSet(false),
    m_targetGroupConfigHasBeenSet(false)
{
}

CoreInternalOutcome RuleAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Order") && !value["Order"].IsNull())
    {
        if (!value["Order"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleAction.Order` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_order = value["Order"].GetInt64();
        m_orderHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleAction.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("FixedResponseConfig") && !value["FixedResponseConfig"].IsNull())
    {
        if (!value["FixedResponseConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleAction.FixedResponseConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fixedResponseConfig.Deserialize(value["FixedResponseConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fixedResponseConfigHasBeenSet = true;
    }

    if (value.HasMember("InsertHeaderConfig") && !value["InsertHeaderConfig"].IsNull())
    {
        if (!value["InsertHeaderConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleAction.InsertHeaderConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_insertHeaderConfig.Deserialize(value["InsertHeaderConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_insertHeaderConfigHasBeenSet = true;
    }

    if (value.HasMember("RedirectConfig") && !value["RedirectConfig"].IsNull())
    {
        if (!value["RedirectConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleAction.RedirectConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_redirectConfig.Deserialize(value["RedirectConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_redirectConfigHasBeenSet = true;
    }

    if (value.HasMember("RemoveHeaderConfig") && !value["RemoveHeaderConfig"].IsNull())
    {
        if (!value["RemoveHeaderConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleAction.RemoveHeaderConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_removeHeaderConfig.Deserialize(value["RemoveHeaderConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_removeHeaderConfigHasBeenSet = true;
    }

    if (value.HasMember("RewriteConfig") && !value["RewriteConfig"].IsNull())
    {
        if (!value["RewriteConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleAction.RewriteConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rewriteConfig.Deserialize(value["RewriteConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rewriteConfigHasBeenSet = true;
    }

    if (value.HasMember("TargetGroupConfig") && !value["TargetGroupConfig"].IsNull())
    {
        if (!value["TargetGroupConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleAction.TargetGroupConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetGroupConfig.Deserialize(value["TargetGroupConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetGroupConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_orderHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Order";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_order, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_fixedResponseConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FixedResponseConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fixedResponseConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_insertHeaderConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertHeaderConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_insertHeaderConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_redirectConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RedirectConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_redirectConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_removeHeaderConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemoveHeaderConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_removeHeaderConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rewriteConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RewriteConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rewriteConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_targetGroupConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetGroupConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetGroupConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


int64_t RuleAction::GetOrder() const
{
    return m_order;
}

void RuleAction::SetOrder(const int64_t& _order)
{
    m_order = _order;
    m_orderHasBeenSet = true;
}

bool RuleAction::OrderHasBeenSet() const
{
    return m_orderHasBeenSet;
}

string RuleAction::GetType() const
{
    return m_type;
}

void RuleAction::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RuleAction::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

FixedResponseInfo RuleAction::GetFixedResponseConfig() const
{
    return m_fixedResponseConfig;
}

void RuleAction::SetFixedResponseConfig(const FixedResponseInfo& _fixedResponseConfig)
{
    m_fixedResponseConfig = _fixedResponseConfig;
    m_fixedResponseConfigHasBeenSet = true;
}

bool RuleAction::FixedResponseConfigHasBeenSet() const
{
    return m_fixedResponseConfigHasBeenSet;
}

InsertHTTPHeaderInfo RuleAction::GetInsertHeaderConfig() const
{
    return m_insertHeaderConfig;
}

void RuleAction::SetInsertHeaderConfig(const InsertHTTPHeaderInfo& _insertHeaderConfig)
{
    m_insertHeaderConfig = _insertHeaderConfig;
    m_insertHeaderConfigHasBeenSet = true;
}

bool RuleAction::InsertHeaderConfigHasBeenSet() const
{
    return m_insertHeaderConfigHasBeenSet;
}

HTTPRedirectInfo RuleAction::GetRedirectConfig() const
{
    return m_redirectConfig;
}

void RuleAction::SetRedirectConfig(const HTTPRedirectInfo& _redirectConfig)
{
    m_redirectConfig = _redirectConfig;
    m_redirectConfigHasBeenSet = true;
}

bool RuleAction::RedirectConfigHasBeenSet() const
{
    return m_redirectConfigHasBeenSet;
}

RemoveHTTPHeaderInfo RuleAction::GetRemoveHeaderConfig() const
{
    return m_removeHeaderConfig;
}

void RuleAction::SetRemoveHeaderConfig(const RemoveHTTPHeaderInfo& _removeHeaderConfig)
{
    m_removeHeaderConfig = _removeHeaderConfig;
    m_removeHeaderConfigHasBeenSet = true;
}

bool RuleAction::RemoveHeaderConfigHasBeenSet() const
{
    return m_removeHeaderConfigHasBeenSet;
}

HTTPRewriteInfo RuleAction::GetRewriteConfig() const
{
    return m_rewriteConfig;
}

void RuleAction::SetRewriteConfig(const HTTPRewriteInfo& _rewriteConfig)
{
    m_rewriteConfig = _rewriteConfig;
    m_rewriteConfigHasBeenSet = true;
}

bool RuleAction::RewriteConfigHasBeenSet() const
{
    return m_rewriteConfigHasBeenSet;
}

TargetGroupConfig RuleAction::GetTargetGroupConfig() const
{
    return m_targetGroupConfig;
}

void RuleAction::SetTargetGroupConfig(const TargetGroupConfig& _targetGroupConfig)
{
    m_targetGroupConfig = _targetGroupConfig;
    m_targetGroupConfigHasBeenSet = true;
}

bool RuleAction::TargetGroupConfigHasBeenSet() const
{
    return m_targetGroupConfigHasBeenSet;
}

