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

#include <tencentcloud/taf/v20200210/model/InputBusinessEncryptData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Taf::V20200210::Model;
using namespace std;

InputBusinessEncryptData::InputBusinessEncryptData() :
    m_encryptMethodHasBeenSet(false),
    m_encryptDataHasBeenSet(false),
    m_encryptModeHasBeenSet(false),
    m_paddingTypeHasBeenSet(false)
{
}

CoreInternalOutcome InputBusinessEncryptData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EncryptMethod") && !value["EncryptMethod"].IsNull())
    {
        if (!value["EncryptMethod"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InputBusinessEncryptData.EncryptMethod` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptMethod = value["EncryptMethod"].GetUint64();
        m_encryptMethodHasBeenSet = true;
    }

    if (value.HasMember("EncryptData") && !value["EncryptData"].IsNull())
    {
        if (!value["EncryptData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputBusinessEncryptData.EncryptData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptData = string(value["EncryptData"].GetString());
        m_encryptDataHasBeenSet = true;
    }

    if (value.HasMember("EncryptMode") && !value["EncryptMode"].IsNull())
    {
        if (!value["EncryptMode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InputBusinessEncryptData.EncryptMode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptMode = value["EncryptMode"].GetUint64();
        m_encryptModeHasBeenSet = true;
    }

    if (value.HasMember("PaddingType") && !value["PaddingType"].IsNull())
    {
        if (!value["PaddingType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `InputBusinessEncryptData.PaddingType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_paddingType = value["PaddingType"].GetUint64();
        m_paddingTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputBusinessEncryptData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_encryptMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encryptMethod, allocator);
    }

    if (m_encryptDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptData.c_str(), allocator).Move(), allocator);
    }

    if (m_encryptModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encryptMode, allocator);
    }

    if (m_paddingTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PaddingType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_paddingType, allocator);
    }

}


uint64_t InputBusinessEncryptData::GetEncryptMethod() const
{
    return m_encryptMethod;
}

void InputBusinessEncryptData::SetEncryptMethod(const uint64_t& _encryptMethod)
{
    m_encryptMethod = _encryptMethod;
    m_encryptMethodHasBeenSet = true;
}

bool InputBusinessEncryptData::EncryptMethodHasBeenSet() const
{
    return m_encryptMethodHasBeenSet;
}

string InputBusinessEncryptData::GetEncryptData() const
{
    return m_encryptData;
}

void InputBusinessEncryptData::SetEncryptData(const string& _encryptData)
{
    m_encryptData = _encryptData;
    m_encryptDataHasBeenSet = true;
}

bool InputBusinessEncryptData::EncryptDataHasBeenSet() const
{
    return m_encryptDataHasBeenSet;
}

uint64_t InputBusinessEncryptData::GetEncryptMode() const
{
    return m_encryptMode;
}

void InputBusinessEncryptData::SetEncryptMode(const uint64_t& _encryptMode)
{
    m_encryptMode = _encryptMode;
    m_encryptModeHasBeenSet = true;
}

bool InputBusinessEncryptData::EncryptModeHasBeenSet() const
{
    return m_encryptModeHasBeenSet;
}

uint64_t InputBusinessEncryptData::GetPaddingType() const
{
    return m_paddingType;
}

void InputBusinessEncryptData::SetPaddingType(const uint64_t& _paddingType)
{
    m_paddingType = _paddingType;
    m_paddingTypeHasBeenSet = true;
}

bool InputBusinessEncryptData::PaddingTypeHasBeenSet() const
{
    return m_paddingTypeHasBeenSet;
}

