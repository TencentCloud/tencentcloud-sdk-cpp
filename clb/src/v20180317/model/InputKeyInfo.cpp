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

#include <tencentcloud/clb/v20180317/model/InputKeyInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

InputKeyInfo::InputKeyInfo() :
    m_keyNameHasBeenSet(false),
    m_plainKeyHasBeenSet(false)
{
}

CoreInternalOutcome InputKeyInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyName") && !value["KeyName"].IsNull())
    {
        if (!value["KeyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputKeyInfo.KeyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyName = string(value["KeyName"].GetString());
        m_keyNameHasBeenSet = true;
    }

    if (value.HasMember("PlainKey") && !value["PlainKey"].IsNull())
    {
        if (!value["PlainKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputKeyInfo.PlainKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_plainKey = string(value["PlainKey"].GetString());
        m_plainKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputKeyInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyName.c_str(), allocator).Move(), allocator);
    }

    if (m_plainKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlainKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_plainKey.c_str(), allocator).Move(), allocator);
    }

}


string InputKeyInfo::GetKeyName() const
{
    return m_keyName;
}

void InputKeyInfo::SetKeyName(const string& _keyName)
{
    m_keyName = _keyName;
    m_keyNameHasBeenSet = true;
}

bool InputKeyInfo::KeyNameHasBeenSet() const
{
    return m_keyNameHasBeenSet;
}

string InputKeyInfo::GetPlainKey() const
{
    return m_plainKey;
}

void InputKeyInfo::SetPlainKey(const string& _plainKey)
{
    m_plainKey = _plainKey;
    m_plainKeyHasBeenSet = true;
}

bool InputKeyInfo::PlainKeyHasBeenSet() const
{
    return m_plainKeyHasBeenSet;
}

