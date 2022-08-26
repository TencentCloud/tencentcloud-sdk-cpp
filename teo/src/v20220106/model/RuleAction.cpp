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

#include <tencentcloud/teo/v20220106/model/RuleAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

RuleAction::RuleAction() :
    m_normalActionHasBeenSet(false),
    m_rewriteActionHasBeenSet(false),
    m_codeActionHasBeenSet(false)
{
}

CoreInternalOutcome RuleAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("NormalAction") && !value["NormalAction"].IsNull())
    {
        if (!value["NormalAction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleAction.NormalAction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_normalAction.Deserialize(value["NormalAction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_normalActionHasBeenSet = true;
    }

    if (value.HasMember("RewriteAction") && !value["RewriteAction"].IsNull())
    {
        if (!value["RewriteAction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleAction.RewriteAction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_rewriteAction.Deserialize(value["RewriteAction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_rewriteActionHasBeenSet = true;
    }

    if (value.HasMember("CodeAction") && !value["CodeAction"].IsNull())
    {
        if (!value["CodeAction"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RuleAction.CodeAction` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_codeAction.Deserialize(value["CodeAction"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_codeActionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_normalActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NormalAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_normalAction.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_rewriteActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RewriteAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_rewriteAction.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_codeActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CodeAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_codeAction.ToJsonObject(value[key.c_str()], allocator);
    }

}


RuleNormalAction RuleAction::GetNormalAction() const
{
    return m_normalAction;
}

void RuleAction::SetNormalAction(const RuleNormalAction& _normalAction)
{
    m_normalAction = _normalAction;
    m_normalActionHasBeenSet = true;
}

bool RuleAction::NormalActionHasBeenSet() const
{
    return m_normalActionHasBeenSet;
}

RuleRewriteAction RuleAction::GetRewriteAction() const
{
    return m_rewriteAction;
}

void RuleAction::SetRewriteAction(const RuleRewriteAction& _rewriteAction)
{
    m_rewriteAction = _rewriteAction;
    m_rewriteActionHasBeenSet = true;
}

bool RuleAction::RewriteActionHasBeenSet() const
{
    return m_rewriteActionHasBeenSet;
}

RuleCodeAction RuleAction::GetCodeAction() const
{
    return m_codeAction;
}

void RuleAction::SetCodeAction(const RuleCodeAction& _codeAction)
{
    m_codeAction = _codeAction;
    m_codeActionHasBeenSet = true;
}

bool RuleAction::CodeActionHasBeenSet() const
{
    return m_codeActionHasBeenSet;
}

