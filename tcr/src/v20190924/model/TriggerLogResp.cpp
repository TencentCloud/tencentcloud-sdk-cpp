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

#include <tencentcloud/tcr/v20190924/model/TriggerLogResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

TriggerLogResp::TriggerLogResp() :
    m_repoNameHasBeenSet(false),
    m_tagNameHasBeenSet(false),
    m_triggerNameHasBeenSet(false),
    m_invokeSourceHasBeenSet(false),
    m_invokeActionHasBeenSet(false),
    m_invokeTimeHasBeenSet(false),
    m_invokeConditionHasBeenSet(false),
    m_invokeParaHasBeenSet(false),
    m_invokeResultHasBeenSet(false)
{
}

CoreInternalOutcome TriggerLogResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RepoName") && !value["RepoName"].IsNull())
    {
        if (!value["RepoName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerLogResp.RepoName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_repoName = string(value["RepoName"].GetString());
        m_repoNameHasBeenSet = true;
    }

    if (value.HasMember("TagName") && !value["TagName"].IsNull())
    {
        if (!value["TagName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerLogResp.TagName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagName = string(value["TagName"].GetString());
        m_tagNameHasBeenSet = true;
    }

    if (value.HasMember("TriggerName") && !value["TriggerName"].IsNull())
    {
        if (!value["TriggerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerLogResp.TriggerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerName = string(value["TriggerName"].GetString());
        m_triggerNameHasBeenSet = true;
    }

    if (value.HasMember("InvokeSource") && !value["InvokeSource"].IsNull())
    {
        if (!value["InvokeSource"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerLogResp.InvokeSource` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invokeSource = string(value["InvokeSource"].GetString());
        m_invokeSourceHasBeenSet = true;
    }

    if (value.HasMember("InvokeAction") && !value["InvokeAction"].IsNull())
    {
        if (!value["InvokeAction"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerLogResp.InvokeAction` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invokeAction = string(value["InvokeAction"].GetString());
        m_invokeActionHasBeenSet = true;
    }

    if (value.HasMember("InvokeTime") && !value["InvokeTime"].IsNull())
    {
        if (!value["InvokeTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerLogResp.InvokeTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_invokeTime = string(value["InvokeTime"].GetString());
        m_invokeTimeHasBeenSet = true;
    }

    if (value.HasMember("InvokeCondition") && !value["InvokeCondition"].IsNull())
    {
        if (!value["InvokeCondition"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerLogResp.InvokeCondition` is not object type").SetRequestId(requestId));
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
            return CoreInternalOutcome(Core::Error("response `TriggerLogResp.InvokePara` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_invokePara.Deserialize(value["InvokePara"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_invokeParaHasBeenSet = true;
    }

    if (value.HasMember("InvokeResult") && !value["InvokeResult"].IsNull())
    {
        if (!value["InvokeResult"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TriggerLogResp.InvokeResult` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_invokeResult.Deserialize(value["InvokeResult"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_invokeResultHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TriggerLogResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_repoNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RepoName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_repoName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagName.c_str(), allocator).Move(), allocator);
    }

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

    if (m_invokeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_invokeTime.c_str(), allocator).Move(), allocator);
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

    if (m_invokeResultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeResult";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_invokeResult.ToJsonObject(value[key.c_str()], allocator);
    }

}


string TriggerLogResp::GetRepoName() const
{
    return m_repoName;
}

void TriggerLogResp::SetRepoName(const string& _repoName)
{
    m_repoName = _repoName;
    m_repoNameHasBeenSet = true;
}

bool TriggerLogResp::RepoNameHasBeenSet() const
{
    return m_repoNameHasBeenSet;
}

string TriggerLogResp::GetTagName() const
{
    return m_tagName;
}

void TriggerLogResp::SetTagName(const string& _tagName)
{
    m_tagName = _tagName;
    m_tagNameHasBeenSet = true;
}

bool TriggerLogResp::TagNameHasBeenSet() const
{
    return m_tagNameHasBeenSet;
}

string TriggerLogResp::GetTriggerName() const
{
    return m_triggerName;
}

void TriggerLogResp::SetTriggerName(const string& _triggerName)
{
    m_triggerName = _triggerName;
    m_triggerNameHasBeenSet = true;
}

bool TriggerLogResp::TriggerNameHasBeenSet() const
{
    return m_triggerNameHasBeenSet;
}

string TriggerLogResp::GetInvokeSource() const
{
    return m_invokeSource;
}

void TriggerLogResp::SetInvokeSource(const string& _invokeSource)
{
    m_invokeSource = _invokeSource;
    m_invokeSourceHasBeenSet = true;
}

bool TriggerLogResp::InvokeSourceHasBeenSet() const
{
    return m_invokeSourceHasBeenSet;
}

string TriggerLogResp::GetInvokeAction() const
{
    return m_invokeAction;
}

void TriggerLogResp::SetInvokeAction(const string& _invokeAction)
{
    m_invokeAction = _invokeAction;
    m_invokeActionHasBeenSet = true;
}

bool TriggerLogResp::InvokeActionHasBeenSet() const
{
    return m_invokeActionHasBeenSet;
}

string TriggerLogResp::GetInvokeTime() const
{
    return m_invokeTime;
}

void TriggerLogResp::SetInvokeTime(const string& _invokeTime)
{
    m_invokeTime = _invokeTime;
    m_invokeTimeHasBeenSet = true;
}

bool TriggerLogResp::InvokeTimeHasBeenSet() const
{
    return m_invokeTimeHasBeenSet;
}

TriggerInvokeCondition TriggerLogResp::GetInvokeCondition() const
{
    return m_invokeCondition;
}

void TriggerLogResp::SetInvokeCondition(const TriggerInvokeCondition& _invokeCondition)
{
    m_invokeCondition = _invokeCondition;
    m_invokeConditionHasBeenSet = true;
}

bool TriggerLogResp::InvokeConditionHasBeenSet() const
{
    return m_invokeConditionHasBeenSet;
}

TriggerInvokePara TriggerLogResp::GetInvokePara() const
{
    return m_invokePara;
}

void TriggerLogResp::SetInvokePara(const TriggerInvokePara& _invokePara)
{
    m_invokePara = _invokePara;
    m_invokeParaHasBeenSet = true;
}

bool TriggerLogResp::InvokeParaHasBeenSet() const
{
    return m_invokeParaHasBeenSet;
}

TriggerInvokeResult TriggerLogResp::GetInvokeResult() const
{
    return m_invokeResult;
}

void TriggerLogResp::SetInvokeResult(const TriggerInvokeResult& _invokeResult)
{
    m_invokeResult = _invokeResult;
    m_invokeResultHasBeenSet = true;
}

bool TriggerLogResp::InvokeResultHasBeenSet() const
{
    return m_invokeResultHasBeenSet;
}

