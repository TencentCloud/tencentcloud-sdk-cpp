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

#include <tencentcloud/tcr/v20190924/model/TriggerResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

TriggerResp::TriggerResp() :
    m_triggerNameHasBeenSet(false),
    m_invokeSourceHasBeenSet(false),
    m_invokeActionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_invokeConditionHasBeenSet(false),
    m_invokeParaHasBeenSet(false)
{
}

CoreInternalOutcome TriggerResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TriggerName") && !value["TriggerName"].IsNull())
    {
        if (!value["TriggerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerResp.TriggerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerName = string(value["TriggerName"].GetString());
        m_triggerNameHasBeenSet = true;
    }

    if (value.HasMember("InvokeSource") && !value["InvokeSource"].IsNull())
    {
        if (!value["InvokeSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerResp.InvokeSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invokeSource = string(value["InvokeSource"].GetString());
        m_invokeSourceHasBeenSet = true;
    }

    if (value.HasMember("InvokeAction") && !value["InvokeAction"].IsNull())
    {
        if (!value["InvokeAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerResp.InvokeAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invokeAction = string(value["InvokeAction"].GetString());
        m_invokeActionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerResp.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerResp.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("InvokeCondition") && !value["InvokeCondition"].IsNull())
    {
        if (!value["InvokeCondition"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerResp.InvokeCondition` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_invokeCondition.Deserialize(value["InvokeCondition"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_invokeConditionHasBeenSet = true;
    }

    if (value.HasMember("InvokePara") && !value["InvokePara"].IsNull())
    {
        if (!value["InvokePara"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerResp.InvokePara` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_invokePara.Deserialize(value["InvokePara"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_invokeParaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TriggerResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_triggerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerName.c_str(), allocator).Move(), allocator);
    }

    if (m_invokeSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invokeSource.c_str(), allocator).Move(), allocator);
    }

    if (m_invokeActionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeAction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invokeAction.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_invokeConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_invokeCondition.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_invokeParaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokePara";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_invokePara.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TriggerResp::GetTriggerName() const
{
    return m_triggerName;
}

void TriggerResp::SetTriggerName(const string& _triggerName)
{
    m_triggerName = _triggerName;
    m_triggerNameHasBeenSet = true;
}

bool TriggerResp::TriggerNameHasBeenSet() const
{
    return m_triggerNameHasBeenSet;
}

string TriggerResp::GetInvokeSource() const
{
    return m_invokeSource;
}

void TriggerResp::SetInvokeSource(const string& _invokeSource)
{
    m_invokeSource = _invokeSource;
    m_invokeSourceHasBeenSet = true;
}

bool TriggerResp::InvokeSourceHasBeenSet() const
{
    return m_invokeSourceHasBeenSet;
}

string TriggerResp::GetInvokeAction() const
{
    return m_invokeAction;
}

void TriggerResp::SetInvokeAction(const string& _invokeAction)
{
    m_invokeAction = _invokeAction;
    m_invokeActionHasBeenSet = true;
}

bool TriggerResp::InvokeActionHasBeenSet() const
{
    return m_invokeActionHasBeenSet;
}

string TriggerResp::GetCreateTime() const
{
    return m_createTime;
}

void TriggerResp::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool TriggerResp::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string TriggerResp::GetUpdateTime() const
{
    return m_updateTime;
}

void TriggerResp::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool TriggerResp::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

TriggerInvokeCondition TriggerResp::GetInvokeCondition() const
{
    return m_invokeCondition;
}

void TriggerResp::SetInvokeCondition(const TriggerInvokeCondition& _invokeCondition)
{
    m_invokeCondition = _invokeCondition;
    m_invokeConditionHasBeenSet = true;
}

bool TriggerResp::InvokeConditionHasBeenSet() const
{
    return m_invokeConditionHasBeenSet;
}

TriggerInvokePara TriggerResp::GetInvokePara() const
{
    return m_invokePara;
}

void TriggerResp::SetInvokePara(const TriggerInvokePara& _invokePara)
{
    m_invokePara = _invokePara;
    m_invokeParaHasBeenSet = true;
}

bool TriggerResp::InvokeParaHasBeenSet() const
{
    return m_invokeParaHasBeenSet;
}

