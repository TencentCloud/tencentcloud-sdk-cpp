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

#include <tencentcloud/apis/v20240801/model/SensitiveDataCheckConfigDTO.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

SensitiveDataCheckConfigDTO::SensitiveDataCheckConfigDTO() :
    m_actionHasBeenSet(false),
    m_interceptMessageHasBeenSet(false),
    m_checkItemsHasBeenSet(false)
{
}

CoreInternalOutcome SensitiveDataCheckConfigDTO::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveDataCheckConfigDTO.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("InterceptMessage") && !value["InterceptMessage"].IsNull())
    {
        if (!value["InterceptMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SensitiveDataCheckConfigDTO.InterceptMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_interceptMessage = string(value["InterceptMessage"].GetString());
        m_interceptMessageHasBeenSet = true;
    }

    if (value.HasMember("CheckItems") && !value["CheckItems"].IsNull())
    {
        if (!value["CheckItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SensitiveDataCheckConfigDTO.CheckItems` is not array type"));

        const rapidjson::Value &tmpValue = value["CheckItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_checkItems.push_back((*itr).GetString());
        }
        m_checkItemsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SensitiveDataCheckConfigDTO::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_interceptMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InterceptMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_interceptMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_checkItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_checkItems.begin(); itr != m_checkItems.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string SensitiveDataCheckConfigDTO::GetAction() const
{
    return m_action;
}

void SensitiveDataCheckConfigDTO::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool SensitiveDataCheckConfigDTO::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string SensitiveDataCheckConfigDTO::GetInterceptMessage() const
{
    return m_interceptMessage;
}

void SensitiveDataCheckConfigDTO::SetInterceptMessage(const string& _interceptMessage)
{
    m_interceptMessage = _interceptMessage;
    m_interceptMessageHasBeenSet = true;
}

bool SensitiveDataCheckConfigDTO::InterceptMessageHasBeenSet() const
{
    return m_interceptMessageHasBeenSet;
}

vector<string> SensitiveDataCheckConfigDTO::GetCheckItems() const
{
    return m_checkItems;
}

void SensitiveDataCheckConfigDTO::SetCheckItems(const vector<string>& _checkItems)
{
    m_checkItems = _checkItems;
    m_checkItemsHasBeenSet = true;
}

bool SensitiveDataCheckConfigDTO::CheckItemsHasBeenSet() const
{
    return m_checkItemsHasBeenSet;
}

