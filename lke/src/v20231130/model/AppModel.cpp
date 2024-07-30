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

#include <tencentcloud/lke/v20231130/model/AppModel.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lke::V20231130::Model;
using namespace std;

AppModel::AppModel() :
    m_nameHasBeenSet(false),
    m_descHasBeenSet(false),
    m_contextLimitHasBeenSet(false),
    m_aliasNameHasBeenSet(false),
    m_tokenBalanceHasBeenSet(false),
    m_isUseContextHasBeenSet(false),
    m_historyLimitHasBeenSet(false),
    m_usageTypeHasBeenSet(false)
{
}

CoreInternalOutcome AppModel::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppModel.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppModel.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("ContextLimit") && !value["ContextLimit"].IsNull())
    {
        if (!value["ContextLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppModel.ContextLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_contextLimit = value["ContextLimit"].GetUint64();
        m_contextLimitHasBeenSet = true;
    }

    if (value.HasMember("AliasName") && !value["AliasName"].IsNull())
    {
        if (!value["AliasName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppModel.AliasName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasName = string(value["AliasName"].GetString());
        m_aliasNameHasBeenSet = true;
    }

    if (value.HasMember("TokenBalance") && !value["TokenBalance"].IsNull())
    {
        if (!value["TokenBalance"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AppModel.TokenBalance` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_tokenBalance = value["TokenBalance"].GetDouble();
        m_tokenBalanceHasBeenSet = true;
    }

    if (value.HasMember("IsUseContext") && !value["IsUseContext"].IsNull())
    {
        if (!value["IsUseContext"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `AppModel.IsUseContext` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isUseContext = value["IsUseContext"].GetBool();
        m_isUseContextHasBeenSet = true;
    }

    if (value.HasMember("HistoryLimit") && !value["HistoryLimit"].IsNull())
    {
        if (!value["HistoryLimit"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AppModel.HistoryLimit` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_historyLimit = value["HistoryLimit"].GetUint64();
        m_historyLimitHasBeenSet = true;
    }

    if (value.HasMember("UsageType") && !value["UsageType"].IsNull())
    {
        if (!value["UsageType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AppModel.UsageType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_usageType = string(value["UsageType"].GetString());
        m_usageTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AppModel::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_contextLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContextLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contextLimit, allocator);
    }

    if (m_aliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasName.c_str(), allocator).Move(), allocator);
    }

    if (m_tokenBalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenBalance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tokenBalance, allocator);
    }

    if (m_isUseContextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsUseContext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isUseContext, allocator);
    }

    if (m_historyLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HistoryLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_historyLimit, allocator);
    }

    if (m_usageTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsageType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_usageType.c_str(), allocator).Move(), allocator);
    }

}


string AppModel::GetName() const
{
    return m_name;
}

void AppModel::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AppModel::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AppModel::GetDesc() const
{
    return m_desc;
}

void AppModel::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool AppModel::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

uint64_t AppModel::GetContextLimit() const
{
    return m_contextLimit;
}

void AppModel::SetContextLimit(const uint64_t& _contextLimit)
{
    m_contextLimit = _contextLimit;
    m_contextLimitHasBeenSet = true;
}

bool AppModel::ContextLimitHasBeenSet() const
{
    return m_contextLimitHasBeenSet;
}

string AppModel::GetAliasName() const
{
    return m_aliasName;
}

void AppModel::SetAliasName(const string& _aliasName)
{
    m_aliasName = _aliasName;
    m_aliasNameHasBeenSet = true;
}

bool AppModel::AliasNameHasBeenSet() const
{
    return m_aliasNameHasBeenSet;
}

double AppModel::GetTokenBalance() const
{
    return m_tokenBalance;
}

void AppModel::SetTokenBalance(const double& _tokenBalance)
{
    m_tokenBalance = _tokenBalance;
    m_tokenBalanceHasBeenSet = true;
}

bool AppModel::TokenBalanceHasBeenSet() const
{
    return m_tokenBalanceHasBeenSet;
}

bool AppModel::GetIsUseContext() const
{
    return m_isUseContext;
}

void AppModel::SetIsUseContext(const bool& _isUseContext)
{
    m_isUseContext = _isUseContext;
    m_isUseContextHasBeenSet = true;
}

bool AppModel::IsUseContextHasBeenSet() const
{
    return m_isUseContextHasBeenSet;
}

uint64_t AppModel::GetHistoryLimit() const
{
    return m_historyLimit;
}

void AppModel::SetHistoryLimit(const uint64_t& _historyLimit)
{
    m_historyLimit = _historyLimit;
    m_historyLimitHasBeenSet = true;
}

bool AppModel::HistoryLimitHasBeenSet() const
{
    return m_historyLimitHasBeenSet;
}

string AppModel::GetUsageType() const
{
    return m_usageType;
}

void AppModel::SetUsageType(const string& _usageType)
{
    m_usageType = _usageType;
    m_usageTypeHasBeenSet = true;
}

bool AppModel::UsageTypeHasBeenSet() const
{
    return m_usageTypeHasBeenSet;
}

