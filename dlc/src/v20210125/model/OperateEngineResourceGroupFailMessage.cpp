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

#include <tencentcloud/dlc/v20210125/model/OperateEngineResourceGroupFailMessage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

OperateEngineResourceGroupFailMessage::OperateEngineResourceGroupFailMessage() :
    m_engineResourceGroupNameHasBeenSet(false),
    m_failMessageHasBeenSet(false)
{
}

CoreInternalOutcome OperateEngineResourceGroupFailMessage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EngineResourceGroupName") && !value["EngineResourceGroupName"].IsNull())
    {
        if (!value["EngineResourceGroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperateEngineResourceGroupFailMessage.EngineResourceGroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineResourceGroupName = string(value["EngineResourceGroupName"].GetString());
        m_engineResourceGroupNameHasBeenSet = true;
    }

    if (value.HasMember("FailMessage") && !value["FailMessage"].IsNull())
    {
        if (!value["FailMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperateEngineResourceGroupFailMessage.FailMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_failMessage = string(value["FailMessage"].GetString());
        m_failMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OperateEngineResourceGroupFailMessage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_engineResourceGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineResourceGroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineResourceGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_failMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_failMessage.c_str(), allocator).Move(), allocator);
    }

}


string OperateEngineResourceGroupFailMessage::GetEngineResourceGroupName() const
{
    return m_engineResourceGroupName;
}

void OperateEngineResourceGroupFailMessage::SetEngineResourceGroupName(const string& _engineResourceGroupName)
{
    m_engineResourceGroupName = _engineResourceGroupName;
    m_engineResourceGroupNameHasBeenSet = true;
}

bool OperateEngineResourceGroupFailMessage::EngineResourceGroupNameHasBeenSet() const
{
    return m_engineResourceGroupNameHasBeenSet;
}

string OperateEngineResourceGroupFailMessage::GetFailMessage() const
{
    return m_failMessage;
}

void OperateEngineResourceGroupFailMessage::SetFailMessage(const string& _failMessage)
{
    m_failMessage = _failMessage;
    m_failMessageHasBeenSet = true;
}

bool OperateEngineResourceGroupFailMessage::FailMessageHasBeenSet() const
{
    return m_failMessageHasBeenSet;
}

