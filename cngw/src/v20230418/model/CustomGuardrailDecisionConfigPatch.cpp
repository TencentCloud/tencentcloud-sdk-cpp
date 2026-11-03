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

#include <tencentcloud/cngw/v20230418/model/CustomGuardrailDecisionConfigPatch.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cngw::V20230418::Model;
using namespace std;

CustomGuardrailDecisionConfigPatch::CustomGuardrailDecisionConfigPatch() :
    m_contractModeHasBeenSet(false),
    m_blockMessageModeHasBeenSet(false),
    m_blockMessageHasBeenSet(false),
    m_rewriteEnabledHasBeenSet(false),
    m_fieldMappingHasBeenSet(false)
{
}

CoreInternalOutcome CustomGuardrailDecisionConfigPatch::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContractMode") && !value["ContractMode"].IsNull())
    {
        if (!value["ContractMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailDecisionConfigPatch.ContractMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractMode = string(value["ContractMode"].GetString());
        m_contractModeHasBeenSet = true;
    }

    if (value.HasMember("BlockMessageMode") && !value["BlockMessageMode"].IsNull())
    {
        if (!value["BlockMessageMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailDecisionConfigPatch.BlockMessageMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockMessageMode = string(value["BlockMessageMode"].GetString());
        m_blockMessageModeHasBeenSet = true;
    }

    if (value.HasMember("BlockMessage") && !value["BlockMessage"].IsNull())
    {
        if (!value["BlockMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailDecisionConfigPatch.BlockMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blockMessage = string(value["BlockMessage"].GetString());
        m_blockMessageHasBeenSet = true;
    }

    if (value.HasMember("RewriteEnabled") && !value["RewriteEnabled"].IsNull())
    {
        if (!value["RewriteEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailDecisionConfigPatch.RewriteEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_rewriteEnabled = value["RewriteEnabled"].GetBool();
        m_rewriteEnabledHasBeenSet = true;
    }

    if (value.HasMember("FieldMapping") && !value["FieldMapping"].IsNull())
    {
        if (!value["FieldMapping"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CustomGuardrailDecisionConfigPatch.FieldMapping` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_fieldMapping.Deserialize(value["FieldMapping"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_fieldMappingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomGuardrailDecisionConfigPatch::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contractModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractMode.c_str(), allocator).Move(), allocator);
    }

    if (m_blockMessageModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockMessageMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockMessageMode.c_str(), allocator).Move(), allocator);
    }

    if (m_blockMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BlockMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_blockMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_rewriteEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RewriteEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rewriteEnabled, allocator);
    }

    if (m_fieldMappingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FieldMapping";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_fieldMapping.ToJsonObject(value[key.c_str()], allocator);
    }

}


string CustomGuardrailDecisionConfigPatch::GetContractMode() const
{
    return m_contractMode;
}

void CustomGuardrailDecisionConfigPatch::SetContractMode(const string& _contractMode)
{
    m_contractMode = _contractMode;
    m_contractModeHasBeenSet = true;
}

bool CustomGuardrailDecisionConfigPatch::ContractModeHasBeenSet() const
{
    return m_contractModeHasBeenSet;
}

string CustomGuardrailDecisionConfigPatch::GetBlockMessageMode() const
{
    return m_blockMessageMode;
}

void CustomGuardrailDecisionConfigPatch::SetBlockMessageMode(const string& _blockMessageMode)
{
    m_blockMessageMode = _blockMessageMode;
    m_blockMessageModeHasBeenSet = true;
}

bool CustomGuardrailDecisionConfigPatch::BlockMessageModeHasBeenSet() const
{
    return m_blockMessageModeHasBeenSet;
}

string CustomGuardrailDecisionConfigPatch::GetBlockMessage() const
{
    return m_blockMessage;
}

void CustomGuardrailDecisionConfigPatch::SetBlockMessage(const string& _blockMessage)
{
    m_blockMessage = _blockMessage;
    m_blockMessageHasBeenSet = true;
}

bool CustomGuardrailDecisionConfigPatch::BlockMessageHasBeenSet() const
{
    return m_blockMessageHasBeenSet;
}

bool CustomGuardrailDecisionConfigPatch::GetRewriteEnabled() const
{
    return m_rewriteEnabled;
}

void CustomGuardrailDecisionConfigPatch::SetRewriteEnabled(const bool& _rewriteEnabled)
{
    m_rewriteEnabled = _rewriteEnabled;
    m_rewriteEnabledHasBeenSet = true;
}

bool CustomGuardrailDecisionConfigPatch::RewriteEnabledHasBeenSet() const
{
    return m_rewriteEnabledHasBeenSet;
}

CustomGuardrailFieldMappingPatch CustomGuardrailDecisionConfigPatch::GetFieldMapping() const
{
    return m_fieldMapping;
}

void CustomGuardrailDecisionConfigPatch::SetFieldMapping(const CustomGuardrailFieldMappingPatch& _fieldMapping)
{
    m_fieldMapping = _fieldMapping;
    m_fieldMappingHasBeenSet = true;
}

bool CustomGuardrailDecisionConfigPatch::FieldMappingHasBeenSet() const
{
    return m_fieldMappingHasBeenSet;
}

