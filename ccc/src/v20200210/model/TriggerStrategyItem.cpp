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

#include <tencentcloud/ccc/v20200210/model/TriggerStrategyItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

TriggerStrategyItem::TriggerStrategyItem() :
    m_interfaceConfigHasBeenSet(false),
    m_hangupTypesHasBeenSet(false),
    m_callTagsHasBeenSet(false),
    m_triggerModeHasBeenSet(false)
{
}

CoreInternalOutcome TriggerStrategyItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InterfaceConfig") && !value["InterfaceConfig"].IsNull())
    {
        if (!value["InterfaceConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerStrategyItem.InterfaceConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_interfaceConfig.Deserialize(value["InterfaceConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_interfaceConfigHasBeenSet = true;
    }

    if (value.HasMember("HangupTypes") && !value["HangupTypes"].IsNull())
    {
        if (!value["HangupTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TriggerStrategyItem.HangupTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["HangupTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_hangupTypes.push_back((*itr).GetString());
        }
        m_hangupTypesHasBeenSet = true;
    }

    if (value.HasMember("CallTags") && !value["CallTags"].IsNull())
    {
        if (!value["CallTags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TriggerStrategyItem.CallTags` is not array type"));

        const rapidjson::Value &tmpValue = value["CallTags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RetryTagItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_callTags.push_back(item);
        }
        m_callTagsHasBeenSet = true;
    }

    if (value.HasMember("TriggerMode") && !value["TriggerMode"].IsNull())
    {
        if (!value["TriggerMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerStrategyItem.TriggerMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerMode = string(value["TriggerMode"].GetString());
        m_triggerModeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TriggerStrategyItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_interfaceConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterfaceConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_interfaceConfig.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_hangupTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HangupTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_hangupTypes.begin(); itr != m_hangupTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_callTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_callTags.begin(); itr != m_callTags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_triggerModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerMode.c_str(), allocator).Move(), allocator);
    }

}


HttpCallbackConfig TriggerStrategyItem::GetInterfaceConfig() const
{
    return m_interfaceConfig;
}

void TriggerStrategyItem::SetInterfaceConfig(const HttpCallbackConfig& _interfaceConfig)
{
    m_interfaceConfig = _interfaceConfig;
    m_interfaceConfigHasBeenSet = true;
}

bool TriggerStrategyItem::InterfaceConfigHasBeenSet() const
{
    return m_interfaceConfigHasBeenSet;
}

vector<string> TriggerStrategyItem::GetHangupTypes() const
{
    return m_hangupTypes;
}

void TriggerStrategyItem::SetHangupTypes(const vector<string>& _hangupTypes)
{
    m_hangupTypes = _hangupTypes;
    m_hangupTypesHasBeenSet = true;
}

bool TriggerStrategyItem::HangupTypesHasBeenSet() const
{
    return m_hangupTypesHasBeenSet;
}

vector<RetryTagItem> TriggerStrategyItem::GetCallTags() const
{
    return m_callTags;
}

void TriggerStrategyItem::SetCallTags(const vector<RetryTagItem>& _callTags)
{
    m_callTags = _callTags;
    m_callTagsHasBeenSet = true;
}

bool TriggerStrategyItem::CallTagsHasBeenSet() const
{
    return m_callTagsHasBeenSet;
}

string TriggerStrategyItem::GetTriggerMode() const
{
    return m_triggerMode;
}

void TriggerStrategyItem::SetTriggerMode(const string& _triggerMode)
{
    m_triggerMode = _triggerMode;
    m_triggerModeHasBeenSet = true;
}

bool TriggerStrategyItem::TriggerModeHasBeenSet() const
{
    return m_triggerModeHasBeenSet;
}

