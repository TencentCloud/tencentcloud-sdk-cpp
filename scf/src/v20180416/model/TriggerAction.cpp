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

#include <tencentcloud/scf/v20180416/model/TriggerAction.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

TriggerAction::TriggerAction() :
    m_triggerNameHasBeenSet(false),
    m_triggerProvisionedConcurrencyNumHasBeenSet(false),
    m_triggerCronConfigHasBeenSet(false),
    m_provisionedTypeHasBeenSet(false)
{
}

CoreInternalOutcome TriggerAction::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TriggerName") && !value["TriggerName"].IsNull())
    {
        if (!value["TriggerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerAction.TriggerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerName = string(value["TriggerName"].GetString());
        m_triggerNameHasBeenSet = true;
    }

    if (value.HasMember("TriggerProvisionedConcurrencyNum") && !value["TriggerProvisionedConcurrencyNum"].IsNull())
    {
        if (!value["TriggerProvisionedConcurrencyNum"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerAction.TriggerProvisionedConcurrencyNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_triggerProvisionedConcurrencyNum = value["TriggerProvisionedConcurrencyNum"].GetUint64();
        m_triggerProvisionedConcurrencyNumHasBeenSet = true;
    }

    if (value.HasMember("TriggerCronConfig") && !value["TriggerCronConfig"].IsNull())
    {
        if (!value["TriggerCronConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerAction.TriggerCronConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerCronConfig = string(value["TriggerCronConfig"].GetString());
        m_triggerCronConfigHasBeenSet = true;
    }

    if (value.HasMember("ProvisionedType") && !value["ProvisionedType"].IsNull())
    {
        if (!value["ProvisionedType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerAction.ProvisionedType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_provisionedType = string(value["ProvisionedType"].GetString());
        m_provisionedTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TriggerAction::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_triggerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerName.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerProvisionedConcurrencyNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerProvisionedConcurrencyNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_triggerProvisionedConcurrencyNum, allocator);
    }

    if (m_triggerCronConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerCronConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerCronConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_provisionedTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProvisionedType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_provisionedType.c_str(), allocator).Move(), allocator);
    }

}


string TriggerAction::GetTriggerName() const
{
    return m_triggerName;
}

void TriggerAction::SetTriggerName(const string& _triggerName)
{
    m_triggerName = _triggerName;
    m_triggerNameHasBeenSet = true;
}

bool TriggerAction::TriggerNameHasBeenSet() const
{
    return m_triggerNameHasBeenSet;
}

uint64_t TriggerAction::GetTriggerProvisionedConcurrencyNum() const
{
    return m_triggerProvisionedConcurrencyNum;
}

void TriggerAction::SetTriggerProvisionedConcurrencyNum(const uint64_t& _triggerProvisionedConcurrencyNum)
{
    m_triggerProvisionedConcurrencyNum = _triggerProvisionedConcurrencyNum;
    m_triggerProvisionedConcurrencyNumHasBeenSet = true;
}

bool TriggerAction::TriggerProvisionedConcurrencyNumHasBeenSet() const
{
    return m_triggerProvisionedConcurrencyNumHasBeenSet;
}

string TriggerAction::GetTriggerCronConfig() const
{
    return m_triggerCronConfig;
}

void TriggerAction::SetTriggerCronConfig(const string& _triggerCronConfig)
{
    m_triggerCronConfig = _triggerCronConfig;
    m_triggerCronConfigHasBeenSet = true;
}

bool TriggerAction::TriggerCronConfigHasBeenSet() const
{
    return m_triggerCronConfigHasBeenSet;
}

string TriggerAction::GetProvisionedType() const
{
    return m_provisionedType;
}

void TriggerAction::SetProvisionedType(const string& _provisionedType)
{
    m_provisionedType = _provisionedType;
    m_provisionedTypeHasBeenSet = true;
}

bool TriggerAction::ProvisionedTypeHasBeenSet() const
{
    return m_provisionedTypeHasBeenSet;
}

