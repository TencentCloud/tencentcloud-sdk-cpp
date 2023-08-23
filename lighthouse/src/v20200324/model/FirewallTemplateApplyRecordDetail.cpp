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

#include <tencentcloud/lighthouse/v20200324/model/FirewallTemplateApplyRecordDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

FirewallTemplateApplyRecordDetail::FirewallTemplateApplyRecordDetail() :
    m_instanceHasBeenSet(false),
    m_applyStateHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

CoreInternalOutcome FirewallTemplateApplyRecordDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Instance") && !value["Instance"].IsNull())
    {
        if (!value["Instance"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `FirewallTemplateApplyRecordDetail.Instance` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instance.Deserialize(value["Instance"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceHasBeenSet = true;
    }

    if (value.HasMember("ApplyState") && !value["ApplyState"].IsNull())
    {
        if (!value["ApplyState"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirewallTemplateApplyRecordDetail.ApplyState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applyState = string(value["ApplyState"].GetString());
        m_applyStateHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `FirewallTemplateApplyRecordDetail.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void FirewallTemplateApplyRecordDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Instance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instance.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_applyStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplyState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applyState.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

}


InstanceIdentifier FirewallTemplateApplyRecordDetail::GetInstance() const
{
    return m_instance;
}

void FirewallTemplateApplyRecordDetail::SetInstance(const InstanceIdentifier& _instance)
{
    m_instance = _instance;
    m_instanceHasBeenSet = true;
}

bool FirewallTemplateApplyRecordDetail::InstanceHasBeenSet() const
{
    return m_instanceHasBeenSet;
}

string FirewallTemplateApplyRecordDetail::GetApplyState() const
{
    return m_applyState;
}

void FirewallTemplateApplyRecordDetail::SetApplyState(const string& _applyState)
{
    m_applyState = _applyState;
    m_applyStateHasBeenSet = true;
}

bool FirewallTemplateApplyRecordDetail::ApplyStateHasBeenSet() const
{
    return m_applyStateHasBeenSet;
}

string FirewallTemplateApplyRecordDetail::GetErrorMessage() const
{
    return m_errorMessage;
}

void FirewallTemplateApplyRecordDetail::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool FirewallTemplateApplyRecordDetail::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

