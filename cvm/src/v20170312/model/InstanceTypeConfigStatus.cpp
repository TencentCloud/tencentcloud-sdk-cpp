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

#include <tencentcloud/cvm/v20170312/model/InstanceTypeConfigStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

InstanceTypeConfigStatus::InstanceTypeConfigStatus() :
    m_statusHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_instanceTypeConfigHasBeenSet(false)
{
}

CoreInternalOutcome InstanceTypeConfigStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeConfigStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeConfigStatus.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("InstanceTypeConfig") && !value["InstanceTypeConfig"].IsNull())
    {
        if (!value["InstanceTypeConfig"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `InstanceTypeConfigStatus.InstanceTypeConfig` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceTypeConfig.Deserialize(value["InstanceTypeConfig"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceTypeConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void InstanceTypeConfigStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTypeConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceTypeConfig.ToJsonObject(value[key.c_str()], allocator);
    }

}


string InstanceTypeConfigStatus::GetStatus() const
{
    return m_status;
}

void InstanceTypeConfigStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool InstanceTypeConfigStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string InstanceTypeConfigStatus::GetMessage() const
{
    return m_message;
}

void InstanceTypeConfigStatus::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool InstanceTypeConfigStatus::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

InstanceTypeConfig InstanceTypeConfigStatus::GetInstanceTypeConfig() const
{
    return m_instanceTypeConfig;
}

void InstanceTypeConfigStatus::SetInstanceTypeConfig(const InstanceTypeConfig& _instanceTypeConfig)
{
    m_instanceTypeConfig = _instanceTypeConfig;
    m_instanceTypeConfigHasBeenSet = true;
}

bool InstanceTypeConfigStatus::InstanceTypeConfigHasBeenSet() const
{
    return m_instanceTypeConfigHasBeenSet;
}

