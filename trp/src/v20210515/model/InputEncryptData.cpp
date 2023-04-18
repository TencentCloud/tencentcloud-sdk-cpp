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

#include <tencentcloud/trp/v20210515/model/InputEncryptData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

InputEncryptData::InputEncryptData() :
    m_encryptMethodHasBeenSet(false),
    m_encryptModeHasBeenSet(false),
    m_paddingTypeHasBeenSet(false),
    m_encryptDataHasBeenSet(false),
    m_isAuthorizedHasBeenSet(false)
{
}

CoreInternalOutcome InputEncryptData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EncryptMethod") && !value["EncryptMethod"].IsNull())
    {
        if (!value["EncryptMethod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputEncryptData.EncryptMethod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptMethod = value["EncryptMethod"].GetInt64();
        m_encryptMethodHasBeenSet = true;
    }

    if (value.HasMember("EncryptMode") && !value["EncryptMode"].IsNull())
    {
        if (!value["EncryptMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputEncryptData.EncryptMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptMode = value["EncryptMode"].GetInt64();
        m_encryptModeHasBeenSet = true;
    }

    if (value.HasMember("PaddingType") && !value["PaddingType"].IsNull())
    {
        if (!value["PaddingType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputEncryptData.PaddingType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_paddingType = value["PaddingType"].GetInt64();
        m_paddingTypeHasBeenSet = true;
    }

    if (value.HasMember("EncryptData") && !value["EncryptData"].IsNull())
    {
        if (!value["EncryptData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputEncryptData.EncryptData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptData = string(value["EncryptData"].GetString());
        m_encryptDataHasBeenSet = true;
    }

    if (value.HasMember("IsAuthorized") && !value["IsAuthorized"].IsNull())
    {
        if (!value["IsAuthorized"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputEncryptData.IsAuthorized` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isAuthorized = value["IsAuthorized"].GetInt64();
        m_isAuthorizedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputEncryptData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_encryptMethodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptMethod";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_encryptMethod, allocator);
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

    if (m_encryptDataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncryptData";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_encryptData.c_str(), allocator).Move(), allocator);
    }

    if (m_isAuthorizedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAuthorized";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAuthorized, allocator);
    }

}


int64_t InputEncryptData::GetEncryptMethod() const
{
    return m_encryptMethod;
}

void InputEncryptData::SetEncryptMethod(const int64_t& _encryptMethod)
{
    m_encryptMethod = _encryptMethod;
    m_encryptMethodHasBeenSet = true;
}

bool InputEncryptData::EncryptMethodHasBeenSet() const
{
    return m_encryptMethodHasBeenSet;
}

int64_t InputEncryptData::GetEncryptMode() const
{
    return m_encryptMode;
}

void InputEncryptData::SetEncryptMode(const int64_t& _encryptMode)
{
    m_encryptMode = _encryptMode;
    m_encryptModeHasBeenSet = true;
}

bool InputEncryptData::EncryptModeHasBeenSet() const
{
    return m_encryptModeHasBeenSet;
}

int64_t InputEncryptData::GetPaddingType() const
{
    return m_paddingType;
}

void InputEncryptData::SetPaddingType(const int64_t& _paddingType)
{
    m_paddingType = _paddingType;
    m_paddingTypeHasBeenSet = true;
}

bool InputEncryptData::PaddingTypeHasBeenSet() const
{
    return m_paddingTypeHasBeenSet;
}

string InputEncryptData::GetEncryptData() const
{
    return m_encryptData;
}

void InputEncryptData::SetEncryptData(const string& _encryptData)
{
    m_encryptData = _encryptData;
    m_encryptDataHasBeenSet = true;
}

bool InputEncryptData::EncryptDataHasBeenSet() const
{
    return m_encryptDataHasBeenSet;
}

int64_t InputEncryptData::GetIsAuthorized() const
{
    return m_isAuthorized;
}

void InputEncryptData::SetIsAuthorized(const int64_t& _isAuthorized)
{
    m_isAuthorized = _isAuthorized;
    m_isAuthorizedHasBeenSet = true;
}

bool InputEncryptData::IsAuthorizedHasBeenSet() const
{
    return m_isAuthorizedHasBeenSet;
}

