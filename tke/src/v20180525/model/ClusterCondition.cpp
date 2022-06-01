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

#include <tencentcloud/tke/v20180525/model/ClusterCondition.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

ClusterCondition::ClusterCondition() :
    m_typeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_lastProbeTimeHasBeenSet(false),
    m_lastTransitionTimeHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

CoreInternalOutcome ClusterCondition::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCondition.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCondition.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("LastProbeTime") && !value["LastProbeTime"].IsNull())
    {
        if (!value["LastProbeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCondition.LastProbeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastProbeTime = string(value["LastProbeTime"].GetString());
        m_lastProbeTimeHasBeenSet = true;
    }

    if (value.HasMember("LastTransitionTime") && !value["LastTransitionTime"].IsNull())
    {
        if (!value["LastTransitionTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCondition.LastTransitionTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastTransitionTime = string(value["LastTransitionTime"].GetString());
        m_lastTransitionTimeHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCondition.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ClusterCondition.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ClusterCondition::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_lastProbeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastProbeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastProbeTime.c_str(), allocator).Move(), allocator);
    }

    if (m_lastTransitionTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastTransitionTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastTransitionTime.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

}


string ClusterCondition::GetType() const
{
    return m_type;
}

void ClusterCondition::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ClusterCondition::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ClusterCondition::GetStatus() const
{
    return m_status;
}

void ClusterCondition::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ClusterCondition::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ClusterCondition::GetLastProbeTime() const
{
    return m_lastProbeTime;
}

void ClusterCondition::SetLastProbeTime(const string& _lastProbeTime)
{
    m_lastProbeTime = _lastProbeTime;
    m_lastProbeTimeHasBeenSet = true;
}

bool ClusterCondition::LastProbeTimeHasBeenSet() const
{
    return m_lastProbeTimeHasBeenSet;
}

string ClusterCondition::GetLastTransitionTime() const
{
    return m_lastTransitionTime;
}

void ClusterCondition::SetLastTransitionTime(const string& _lastTransitionTime)
{
    m_lastTransitionTime = _lastTransitionTime;
    m_lastTransitionTimeHasBeenSet = true;
}

bool ClusterCondition::LastTransitionTimeHasBeenSet() const
{
    return m_lastTransitionTimeHasBeenSet;
}

string ClusterCondition::GetReason() const
{
    return m_reason;
}

void ClusterCondition::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool ClusterCondition::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

string ClusterCondition::GetMessage() const
{
    return m_message;
}

void ClusterCondition::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool ClusterCondition::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

