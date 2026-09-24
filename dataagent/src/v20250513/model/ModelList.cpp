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

#include <tencentcloud/dataagent/v20250513/model/ModelList.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dataagent::V20250513::Model;
using namespace std;

ModelList::ModelList() :
    m_modelHasBeenSet(false),
    m_vendorHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_contextWindowHasBeenSet(false),
    m_iconUrlHasBeenSet(false),
    m_creditMultiplierHasBeenSet(false),
    m_thinkingHasBeenSet(false)
{
}

CoreInternalOutcome ModelList::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Model") && !value["Model"].IsNull())
    {
        if (!value["Model"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelList.Model` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_model = string(value["Model"].GetString());
        m_modelHasBeenSet = true;
    }

    if (value.HasMember("Vendor") && !value["Vendor"].IsNull())
    {
        if (!value["Vendor"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelList.Vendor` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_vendor = string(value["Vendor"].GetString());
        m_vendorHasBeenSet = true;
    }

    if (value.HasMember("DisplayName") && !value["DisplayName"].IsNull())
    {
        if (!value["DisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelList.DisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_displayName = string(value["DisplayName"].GetString());
        m_displayNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelList.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ContextWindow") && !value["ContextWindow"].IsNull())
    {
        if (!value["ContextWindow"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ModelList.ContextWindow` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_contextWindow = value["ContextWindow"].GetInt64();
        m_contextWindowHasBeenSet = true;
    }

    if (value.HasMember("IconUrl") && !value["IconUrl"].IsNull())
    {
        if (!value["IconUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ModelList.IconUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iconUrl = string(value["IconUrl"].GetString());
        m_iconUrlHasBeenSet = true;
    }

    if (value.HasMember("CreditMultiplier") && !value["CreditMultiplier"].IsNull())
    {
        if (!value["CreditMultiplier"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ModelList.CreditMultiplier` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_creditMultiplier = value["CreditMultiplier"].GetDouble();
        m_creditMultiplierHasBeenSet = true;
    }

    if (value.HasMember("Thinking") && !value["Thinking"].IsNull())
    {
        if (!value["Thinking"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ModelList.Thinking` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_thinking.Deserialize(value["Thinking"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_thinkingHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ModelList::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_modelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Model";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_model.c_str(), allocator).Move(), allocator);
    }

    if (m_vendorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vendor";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_vendor.c_str(), allocator).Move(), allocator);
    }

    if (m_displayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_displayName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_contextWindowHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContextWindow";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_contextWindow, allocator);
    }

    if (m_iconUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IconUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iconUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_creditMultiplierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreditMultiplier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_creditMultiplier, allocator);
    }

    if (m_thinkingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Thinking";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_thinking.ToJsonObject(value[key.c_str()], allocator);
    }

}


string ModelList::GetModel() const
{
    return m_model;
}

void ModelList::SetModel(const string& _model)
{
    m_model = _model;
    m_modelHasBeenSet = true;
}

bool ModelList::ModelHasBeenSet() const
{
    return m_modelHasBeenSet;
}

string ModelList::GetVendor() const
{
    return m_vendor;
}

void ModelList::SetVendor(const string& _vendor)
{
    m_vendor = _vendor;
    m_vendorHasBeenSet = true;
}

bool ModelList::VendorHasBeenSet() const
{
    return m_vendorHasBeenSet;
}

string ModelList::GetDisplayName() const
{
    return m_displayName;
}

void ModelList::SetDisplayName(const string& _displayName)
{
    m_displayName = _displayName;
    m_displayNameHasBeenSet = true;
}

bool ModelList::DisplayNameHasBeenSet() const
{
    return m_displayNameHasBeenSet;
}

string ModelList::GetDescription() const
{
    return m_description;
}

void ModelList::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModelList::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t ModelList::GetContextWindow() const
{
    return m_contextWindow;
}

void ModelList::SetContextWindow(const int64_t& _contextWindow)
{
    m_contextWindow = _contextWindow;
    m_contextWindowHasBeenSet = true;
}

bool ModelList::ContextWindowHasBeenSet() const
{
    return m_contextWindowHasBeenSet;
}

string ModelList::GetIconUrl() const
{
    return m_iconUrl;
}

void ModelList::SetIconUrl(const string& _iconUrl)
{
    m_iconUrl = _iconUrl;
    m_iconUrlHasBeenSet = true;
}

bool ModelList::IconUrlHasBeenSet() const
{
    return m_iconUrlHasBeenSet;
}

double ModelList::GetCreditMultiplier() const
{
    return m_creditMultiplier;
}

void ModelList::SetCreditMultiplier(const double& _creditMultiplier)
{
    m_creditMultiplier = _creditMultiplier;
    m_creditMultiplierHasBeenSet = true;
}

bool ModelList::CreditMultiplierHasBeenSet() const
{
    return m_creditMultiplierHasBeenSet;
}

Thinking ModelList::GetThinking() const
{
    return m_thinking;
}

void ModelList::SetThinking(const Thinking& _thinking)
{
    m_thinking = _thinking;
    m_thinkingHasBeenSet = true;
}

bool ModelList::ThinkingHasBeenSet() const
{
    return m_thinkingHasBeenSet;
}

