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

#include <tencentcloud/clb/v20180317/model/KeyDetailItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

KeyDetailItem::KeyDetailItem() :
    m_keyIdHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CoreInternalOutcome KeyDetailItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyId") && !value["KeyId"].IsNull())
    {
        if (!value["KeyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyDetailItem.KeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyId = string(value["KeyId"].GetString());
        m_keyIdHasBeenSet = true;
    }

    if (value.HasMember("CreatedAt") && !value["CreatedAt"].IsNull())
    {
        if (!value["CreatedAt"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyDetailItem.CreatedAt` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdAt = string(value["CreatedAt"].GetString());
        m_createdAtHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KeyDetailItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KeyDetailItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyId.c_str(), allocator).Move(), allocator);
    }

    if (m_createdAtHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedAt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdAt.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

}


string KeyDetailItem::GetKeyId() const
{
    return m_keyId;
}

void KeyDetailItem::SetKeyId(const string& _keyId)
{
    m_keyId = _keyId;
    m_keyIdHasBeenSet = true;
}

bool KeyDetailItem::KeyIdHasBeenSet() const
{
    return m_keyIdHasBeenSet;
}

string KeyDetailItem::GetCreatedAt() const
{
    return m_createdAt;
}

void KeyDetailItem::SetCreatedAt(const string& _createdAt)
{
    m_createdAt = _createdAt;
    m_createdAtHasBeenSet = true;
}

bool KeyDetailItem::CreatedAtHasBeenSet() const
{
    return m_createdAtHasBeenSet;
}

string KeyDetailItem::GetName() const
{
    return m_name;
}

void KeyDetailItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool KeyDetailItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

