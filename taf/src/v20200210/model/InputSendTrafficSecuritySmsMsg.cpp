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

#include <tencentcloud/taf/v20200210/model/InputSendTrafficSecuritySmsMsg.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Taf::V20200210::Model;
using namespace std;

InputSendTrafficSecuritySmsMsg::InputSendTrafficSecuritySmsMsg() :
    m_taskIdHasBeenSet(false),
    m_mobilesHasBeenSet(false),
    m_isAuthorizedHasBeenSet(false),
    m_encryptMethodHasBeenSet(false),
    m_encryptModeHasBeenSet(false),
    m_paddingTypeHasBeenSet(false),
    m_encryptDataHasBeenSet(false)
{
}

CoreInternalOutcome InputSendTrafficSecuritySmsMsg::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputSendTrafficSecuritySmsMsg.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("Mobiles") && !value["Mobiles"].IsNull())
    {
        if (!value["Mobiles"].IsArray())
            return CoreInternalOutcome(Core::Error("response `InputSendTrafficSecuritySmsMsg.Mobiles` is not array type"));

        const rapidjson::Value &tmpValue = value["Mobiles"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_mobiles.push_back((*itr).GetString());
        }
        m_mobilesHasBeenSet = true;
    }

    if (value.HasMember("IsAuthorized") && !value["IsAuthorized"].IsNull())
    {
        if (!value["IsAuthorized"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputSendTrafficSecuritySmsMsg.IsAuthorized` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isAuthorized = value["IsAuthorized"].GetInt64();
        m_isAuthorizedHasBeenSet = true;
    }

    if (value.HasMember("EncryptMethod") && !value["EncryptMethod"].IsNull())
    {
        if (!value["EncryptMethod"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputSendTrafficSecuritySmsMsg.EncryptMethod` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptMethod = value["EncryptMethod"].GetInt64();
        m_encryptMethodHasBeenSet = true;
    }

    if (value.HasMember("EncryptMode") && !value["EncryptMode"].IsNull())
    {
        if (!value["EncryptMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputSendTrafficSecuritySmsMsg.EncryptMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_encryptMode = value["EncryptMode"].GetInt64();
        m_encryptModeHasBeenSet = true;
    }

    if (value.HasMember("PaddingType") && !value["PaddingType"].IsNull())
    {
        if (!value["PaddingType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `InputSendTrafficSecuritySmsMsg.PaddingType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_paddingType = value["PaddingType"].GetInt64();
        m_paddingTypeHasBeenSet = true;
    }

    if (value.HasMember("EncryptData") && !value["EncryptData"].IsNull())
    {
        if (!value["EncryptData"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InputSendTrafficSecuritySmsMsg.EncryptData` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_encryptData = string(value["EncryptData"].GetString());
        m_encryptDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InputSendTrafficSecuritySmsMsg::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_mobilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mobiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_mobiles.begin(); itr != m_mobiles.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isAuthorizedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsAuthorized";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isAuthorized, allocator);
    }

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

}


string InputSendTrafficSecuritySmsMsg::GetTaskId() const
{
    return m_taskId;
}

void InputSendTrafficSecuritySmsMsg::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool InputSendTrafficSecuritySmsMsg::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

vector<string> InputSendTrafficSecuritySmsMsg::GetMobiles() const
{
    return m_mobiles;
}

void InputSendTrafficSecuritySmsMsg::SetMobiles(const vector<string>& _mobiles)
{
    m_mobiles = _mobiles;
    m_mobilesHasBeenSet = true;
}

bool InputSendTrafficSecuritySmsMsg::MobilesHasBeenSet() const
{
    return m_mobilesHasBeenSet;
}

int64_t InputSendTrafficSecuritySmsMsg::GetIsAuthorized() const
{
    return m_isAuthorized;
}

void InputSendTrafficSecuritySmsMsg::SetIsAuthorized(const int64_t& _isAuthorized)
{
    m_isAuthorized = _isAuthorized;
    m_isAuthorizedHasBeenSet = true;
}

bool InputSendTrafficSecuritySmsMsg::IsAuthorizedHasBeenSet() const
{
    return m_isAuthorizedHasBeenSet;
}

int64_t InputSendTrafficSecuritySmsMsg::GetEncryptMethod() const
{
    return m_encryptMethod;
}

void InputSendTrafficSecuritySmsMsg::SetEncryptMethod(const int64_t& _encryptMethod)
{
    m_encryptMethod = _encryptMethod;
    m_encryptMethodHasBeenSet = true;
}

bool InputSendTrafficSecuritySmsMsg::EncryptMethodHasBeenSet() const
{
    return m_encryptMethodHasBeenSet;
}

int64_t InputSendTrafficSecuritySmsMsg::GetEncryptMode() const
{
    return m_encryptMode;
}

void InputSendTrafficSecuritySmsMsg::SetEncryptMode(const int64_t& _encryptMode)
{
    m_encryptMode = _encryptMode;
    m_encryptModeHasBeenSet = true;
}

bool InputSendTrafficSecuritySmsMsg::EncryptModeHasBeenSet() const
{
    return m_encryptModeHasBeenSet;
}

int64_t InputSendTrafficSecuritySmsMsg::GetPaddingType() const
{
    return m_paddingType;
}

void InputSendTrafficSecuritySmsMsg::SetPaddingType(const int64_t& _paddingType)
{
    m_paddingType = _paddingType;
    m_paddingTypeHasBeenSet = true;
}

bool InputSendTrafficSecuritySmsMsg::PaddingTypeHasBeenSet() const
{
    return m_paddingTypeHasBeenSet;
}

string InputSendTrafficSecuritySmsMsg::GetEncryptData() const
{
    return m_encryptData;
}

void InputSendTrafficSecuritySmsMsg::SetEncryptData(const string& _encryptData)
{
    m_encryptData = _encryptData;
    m_encryptDataHasBeenSet = true;
}

bool InputSendTrafficSecuritySmsMsg::EncryptDataHasBeenSet() const
{
    return m_encryptDataHasBeenSet;
}

