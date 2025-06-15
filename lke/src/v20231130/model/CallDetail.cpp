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

#include <tencentcloud/lke/v20231130/model/CallDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

CallDetail::CallDetail() :
    m_idHasBeenSet(false),
    m_callTimeHasBeenSet(false),
    m_totalTokenUsageHasBeenSet(false),
    m_inputTokenUsageHasBeenSet(false),
    m_outputTokenUsageHasBeenSet(false),
    m_searchUsageHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_callTypeHasBeenSet(false),
    m_uinAccountHasBeenSet(false),
    m_appNameHasBeenSet(false),
    m_pageUsageHasBeenSet(false),
    m_subSceneHasBeenSet(false),
    m_billingTagHasBeenSet(false)
{
}

CoreInternalOutcome CallDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallDetail.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("CallTime") && !value["CallTime"].IsNull())
    {
        if (!value["CallTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallDetail.CallTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callTime = string(value["CallTime"].GetString());
        m_callTimeHasBeenSet = true;
    }

    if (value.HasMember("TotalTokenUsage") && !value["TotalTokenUsage"].IsNull())
    {
        if (!value["TotalTokenUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CallDetail.TotalTokenUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_totalTokenUsage = value["TotalTokenUsage"].GetDouble();
        m_totalTokenUsageHasBeenSet = true;
    }

    if (value.HasMember("InputTokenUsage") && !value["InputTokenUsage"].IsNull())
    {
        if (!value["InputTokenUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CallDetail.InputTokenUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_inputTokenUsage = value["InputTokenUsage"].GetDouble();
        m_inputTokenUsageHasBeenSet = true;
    }

    if (value.HasMember("OutputTokenUsage") && !value["OutputTokenUsage"].IsNull())
    {
        if (!value["OutputTokenUsage"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `CallDetail.OutputTokenUsage` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_outputTokenUsage = value["OutputTokenUsage"].GetDouble();
        m_outputTokenUsageHasBeenSet = true;
    }

    if (value.HasMember("SearchUsage") && !value["SearchUsage"].IsNull())
    {
        if (!value["SearchUsage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CallDetail.SearchUsage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_searchUsage = value["SearchUsage"].GetUint64();
        m_searchUsageHasBeenSet = true;
    }

    if (value.HasMember("ModelName") && !value["ModelName"].IsNull())
    {
        if (!value["ModelName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallDetail.ModelName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modelName = string(value["ModelName"].GetString());
        m_modelNameHasBeenSet = true;
    }

    if (value.HasMember("CallType") && !value["CallType"].IsNull())
    {
        if (!value["CallType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallDetail.CallType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_callType = string(value["CallType"].GetString());
        m_callTypeHasBeenSet = true;
    }

    if (value.HasMember("UinAccount") && !value["UinAccount"].IsNull())
    {
        if (!value["UinAccount"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallDetail.UinAccount` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uinAccount = string(value["UinAccount"].GetString());
        m_uinAccountHasBeenSet = true;
    }

    if (value.HasMember("AppName") && !value["AppName"].IsNull())
    {
        if (!value["AppName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallDetail.AppName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appName = string(value["AppName"].GetString());
        m_appNameHasBeenSet = true;
    }

    if (value.HasMember("PageUsage") && !value["PageUsage"].IsNull())
    {
        if (!value["PageUsage"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CallDetail.PageUsage` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_pageUsage = value["PageUsage"].GetUint64();
        m_pageUsageHasBeenSet = true;
    }

    if (value.HasMember("SubScene") && !value["SubScene"].IsNull())
    {
        if (!value["SubScene"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallDetail.SubScene` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subScene = string(value["SubScene"].GetString());
        m_subSceneHasBeenSet = true;
    }

    if (value.HasMember("BillingTag") && !value["BillingTag"].IsNull())
    {
        if (!value["BillingTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CallDetail.BillingTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billingTag = string(value["BillingTag"].GetString());
        m_billingTagHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CallDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_callTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callTime.c_str(), allocator).Move(), allocator);
    }

    if (m_totalTokenUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalTokenUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalTokenUsage, allocator);
    }

    if (m_inputTokenUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputTokenUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputTokenUsage, allocator);
    }

    if (m_outputTokenUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OutputTokenUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_outputTokenUsage, allocator);
    }

    if (m_searchUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SearchUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_searchUsage, allocator);
    }

    if (m_modelNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModelName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modelName.c_str(), allocator).Move(), allocator);
    }

    if (m_callTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CallType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_callType.c_str(), allocator).Move(), allocator);
    }

    if (m_uinAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UinAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uinAccount.c_str(), allocator).Move(), allocator);
    }

    if (m_appNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appName.c_str(), allocator).Move(), allocator);
    }

    if (m_pageUsageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PageUsage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_pageUsage, allocator);
    }

    if (m_subSceneHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubScene";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subScene.c_str(), allocator).Move(), allocator);
    }

    if (m_billingTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillingTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billingTag.c_str(), allocator).Move(), allocator);
    }

}


string CallDetail::GetId() const
{
    return m_id;
}

void CallDetail::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CallDetail::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CallDetail::GetCallTime() const
{
    return m_callTime;
}

void CallDetail::SetCallTime(const string& _callTime)
{
    m_callTime = _callTime;
    m_callTimeHasBeenSet = true;
}

bool CallDetail::CallTimeHasBeenSet() const
{
    return m_callTimeHasBeenSet;
}

double CallDetail::GetTotalTokenUsage() const
{
    return m_totalTokenUsage;
}

void CallDetail::SetTotalTokenUsage(const double& _totalTokenUsage)
{
    m_totalTokenUsage = _totalTokenUsage;
    m_totalTokenUsageHasBeenSet = true;
}

bool CallDetail::TotalTokenUsageHasBeenSet() const
{
    return m_totalTokenUsageHasBeenSet;
}

double CallDetail::GetInputTokenUsage() const
{
    return m_inputTokenUsage;
}

void CallDetail::SetInputTokenUsage(const double& _inputTokenUsage)
{
    m_inputTokenUsage = _inputTokenUsage;
    m_inputTokenUsageHasBeenSet = true;
}

bool CallDetail::InputTokenUsageHasBeenSet() const
{
    return m_inputTokenUsageHasBeenSet;
}

double CallDetail::GetOutputTokenUsage() const
{
    return m_outputTokenUsage;
}

void CallDetail::SetOutputTokenUsage(const double& _outputTokenUsage)
{
    m_outputTokenUsage = _outputTokenUsage;
    m_outputTokenUsageHasBeenSet = true;
}

bool CallDetail::OutputTokenUsageHasBeenSet() const
{
    return m_outputTokenUsageHasBeenSet;
}

uint64_t CallDetail::GetSearchUsage() const
{
    return m_searchUsage;
}

void CallDetail::SetSearchUsage(const uint64_t& _searchUsage)
{
    m_searchUsage = _searchUsage;
    m_searchUsageHasBeenSet = true;
}

bool CallDetail::SearchUsageHasBeenSet() const
{
    return m_searchUsageHasBeenSet;
}

string CallDetail::GetModelName() const
{
    return m_modelName;
}

void CallDetail::SetModelName(const string& _modelName)
{
    m_modelName = _modelName;
    m_modelNameHasBeenSet = true;
}

bool CallDetail::ModelNameHasBeenSet() const
{
    return m_modelNameHasBeenSet;
}

string CallDetail::GetCallType() const
{
    return m_callType;
}

void CallDetail::SetCallType(const string& _callType)
{
    m_callType = _callType;
    m_callTypeHasBeenSet = true;
}

bool CallDetail::CallTypeHasBeenSet() const
{
    return m_callTypeHasBeenSet;
}

string CallDetail::GetUinAccount() const
{
    return m_uinAccount;
}

void CallDetail::SetUinAccount(const string& _uinAccount)
{
    m_uinAccount = _uinAccount;
    m_uinAccountHasBeenSet = true;
}

bool CallDetail::UinAccountHasBeenSet() const
{
    return m_uinAccountHasBeenSet;
}

string CallDetail::GetAppName() const
{
    return m_appName;
}

void CallDetail::SetAppName(const string& _appName)
{
    m_appName = _appName;
    m_appNameHasBeenSet = true;
}

bool CallDetail::AppNameHasBeenSet() const
{
    return m_appNameHasBeenSet;
}

uint64_t CallDetail::GetPageUsage() const
{
    return m_pageUsage;
}

void CallDetail::SetPageUsage(const uint64_t& _pageUsage)
{
    m_pageUsage = _pageUsage;
    m_pageUsageHasBeenSet = true;
}

bool CallDetail::PageUsageHasBeenSet() const
{
    return m_pageUsageHasBeenSet;
}

string CallDetail::GetSubScene() const
{
    return m_subScene;
}

void CallDetail::SetSubScene(const string& _subScene)
{
    m_subScene = _subScene;
    m_subSceneHasBeenSet = true;
}

bool CallDetail::SubSceneHasBeenSet() const
{
    return m_subSceneHasBeenSet;
}

string CallDetail::GetBillingTag() const
{
    return m_billingTag;
}

void CallDetail::SetBillingTag(const string& _billingTag)
{
    m_billingTag = _billingTag;
    m_billingTagHasBeenSet = true;
}

bool CallDetail::BillingTagHasBeenSet() const
{
    return m_billingTagHasBeenSet;
}

