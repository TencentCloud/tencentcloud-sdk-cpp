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

#include <tencentcloud/ess/v20201111/model/RemindFlowRecords.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

RemindFlowRecords::RemindFlowRecords() :
    m_canRemindHasBeenSet(false),
    m_flowIdHasBeenSet(false),
    m_remindMessageHasBeenSet(false)
{
}

CoreInternalOutcome RemindFlowRecords::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CanRemind") && !value["CanRemind"].IsNull())
    {
        if (!value["CanRemind"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RemindFlowRecords.CanRemind` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canRemind = value["CanRemind"].GetBool();
        m_canRemindHasBeenSet = true;
    }

    if (value.HasMember("FlowId") && !value["FlowId"].IsNull())
    {
        if (!value["FlowId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemindFlowRecords.FlowId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_flowId = string(value["FlowId"].GetString());
        m_flowIdHasBeenSet = true;
    }

    if (value.HasMember("RemindMessage") && !value["RemindMessage"].IsNull())
    {
        if (!value["RemindMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RemindFlowRecords.RemindMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remindMessage = string(value["RemindMessage"].GetString());
        m_remindMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RemindFlowRecords::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_canRemindHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanRemind";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canRemind, allocator);
    }

    if (m_flowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FlowId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_flowId.c_str(), allocator).Move(), allocator);
    }

    if (m_remindMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemindMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remindMessage.c_str(), allocator).Move(), allocator);
    }

}


bool RemindFlowRecords::GetCanRemind() const
{
    return m_canRemind;
}

void RemindFlowRecords::SetCanRemind(const bool& _canRemind)
{
    m_canRemind = _canRemind;
    m_canRemindHasBeenSet = true;
}

bool RemindFlowRecords::CanRemindHasBeenSet() const
{
    return m_canRemindHasBeenSet;
}

string RemindFlowRecords::GetFlowId() const
{
    return m_flowId;
}

void RemindFlowRecords::SetFlowId(const string& _flowId)
{
    m_flowId = _flowId;
    m_flowIdHasBeenSet = true;
}

bool RemindFlowRecords::FlowIdHasBeenSet() const
{
    return m_flowIdHasBeenSet;
}

string RemindFlowRecords::GetRemindMessage() const
{
    return m_remindMessage;
}

void RemindFlowRecords::SetRemindMessage(const string& _remindMessage)
{
    m_remindMessage = _remindMessage;
    m_remindMessageHasBeenSet = true;
}

bool RemindFlowRecords::RemindMessageHasBeenSet() const
{
    return m_remindMessageHasBeenSet;
}

