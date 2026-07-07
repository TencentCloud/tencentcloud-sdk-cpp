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

#include <tencentcloud/clb/v20180317/model/DisassociateGuardrailConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

DisassociateGuardrailConfig::DisassociateGuardrailConfig() :
    m_guardrailIdHasBeenSet(false)
{
}

CoreInternalOutcome DisassociateGuardrailConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GuardrailId") && !value["GuardrailId"].IsNull())
    {
        if (!value["GuardrailId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DisassociateGuardrailConfig.GuardrailId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_guardrailId = string(value["GuardrailId"].GetString());
        m_guardrailIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DisassociateGuardrailConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_guardrailIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GuardrailId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_guardrailId.c_str(), allocator).Move(), allocator);
    }

}


string DisassociateGuardrailConfig::GetGuardrailId() const
{
    return m_guardrailId;
}

void DisassociateGuardrailConfig::SetGuardrailId(const string& _guardrailId)
{
    m_guardrailId = _guardrailId;
    m_guardrailIdHasBeenSet = true;
}

bool DisassociateGuardrailConfig::GuardrailIdHasBeenSet() const
{
    return m_guardrailIdHasBeenSet;
}

