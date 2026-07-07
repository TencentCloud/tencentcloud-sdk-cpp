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

#include <tencentcloud/clb/v20180317/model/KeyItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

KeyItem::KeyItem() :
    m_apiKeyHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome KeyItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApiKey") && !value["ApiKey"].IsNull())
    {
        if (!value["ApiKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyItem.ApiKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apiKey = string(value["ApiKey"].GetString());
        m_apiKeyHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KeyItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_apiKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apiKey.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

}


string KeyItem::GetApiKey() const
{
    return m_apiKey;
}

void KeyItem::SetApiKey(const string& _apiKey)
{
    m_apiKey = _apiKey;
    m_apiKeyHasBeenSet = true;
}

bool KeyItem::ApiKeyHasBeenSet() const
{
    return m_apiKeyHasBeenSet;
}

string KeyItem::GetName() const
{
    return m_name;
}

void KeyItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool KeyItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

