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

#include <tencentcloud/controlcenter/v20230110/model/AccountFactoryItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Controlcenter::V20230110::Model;
using namespace std;

AccountFactoryItem::AccountFactoryItem() :
    m_identifierHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_nameEnHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_requiredHasBeenSet(false),
    m_dependsOnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_descriptionEnHasBeenSet(false),
    m_classifyHasBeenSet(false),
    m_classifyEnHasBeenSet(false)
{
}

CoreInternalOutcome AccountFactoryItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Identifier") && !value["Identifier"].IsNull())
    {
        if (!value["Identifier"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountFactoryItem.Identifier` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifier = string(value["Identifier"].GetString());
        m_identifierHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountFactoryItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("NameEn") && !value["NameEn"].IsNull())
    {
        if (!value["NameEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountFactoryItem.NameEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameEn = string(value["NameEn"].GetString());
        m_nameEnHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountFactoryItem.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("Required") && !value["Required"].IsNull())
    {
        if (!value["Required"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `AccountFactoryItem.Required` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_required = value["Required"].GetInt64();
        m_requiredHasBeenSet = true;
    }

    if (value.HasMember("DependsOn") && !value["DependsOn"].IsNull())
    {
        if (!value["DependsOn"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AccountFactoryItem.DependsOn` is not array type"));

        const rapidjson::Value &tmpValue = value["DependsOn"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DependsOnItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dependsOn.push_back(item);
        }
        m_dependsOnHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountFactoryItem.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("DescriptionEn") && !value["DescriptionEn"].IsNull())
    {
        if (!value["DescriptionEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountFactoryItem.DescriptionEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_descriptionEn = string(value["DescriptionEn"].GetString());
        m_descriptionEnHasBeenSet = true;
    }

    if (value.HasMember("Classify") && !value["Classify"].IsNull())
    {
        if (!value["Classify"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountFactoryItem.Classify` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classify = string(value["Classify"].GetString());
        m_classifyHasBeenSet = true;
    }

    if (value.HasMember("ClassifyEn") && !value["ClassifyEn"].IsNull())
    {
        if (!value["ClassifyEn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AccountFactoryItem.ClassifyEn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_classifyEn = string(value["ClassifyEn"].GetString());
        m_classifyEnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AccountFactoryItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_identifierHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Identifier";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identifier.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_nameEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameEn.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_requiredHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Required";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_required, allocator);
    }

    if (m_dependsOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DependsOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dependsOn.begin(); itr != m_dependsOn.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescriptionEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_descriptionEn.c_str(), allocator).Move(), allocator);
    }

    if (m_classifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Classify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classify.c_str(), allocator).Move(), allocator);
    }

    if (m_classifyEnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClassifyEn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_classifyEn.c_str(), allocator).Move(), allocator);
    }

}


string AccountFactoryItem::GetIdentifier() const
{
    return m_identifier;
}

void AccountFactoryItem::SetIdentifier(const string& _identifier)
{
    m_identifier = _identifier;
    m_identifierHasBeenSet = true;
}

bool AccountFactoryItem::IdentifierHasBeenSet() const
{
    return m_identifierHasBeenSet;
}

string AccountFactoryItem::GetName() const
{
    return m_name;
}

void AccountFactoryItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool AccountFactoryItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string AccountFactoryItem::GetNameEn() const
{
    return m_nameEn;
}

void AccountFactoryItem::SetNameEn(const string& _nameEn)
{
    m_nameEn = _nameEn;
    m_nameEnHasBeenSet = true;
}

bool AccountFactoryItem::NameEnHasBeenSet() const
{
    return m_nameEnHasBeenSet;
}

int64_t AccountFactoryItem::GetWeight() const
{
    return m_weight;
}

void AccountFactoryItem::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool AccountFactoryItem::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

int64_t AccountFactoryItem::GetRequired() const
{
    return m_required;
}

void AccountFactoryItem::SetRequired(const int64_t& _required)
{
    m_required = _required;
    m_requiredHasBeenSet = true;
}

bool AccountFactoryItem::RequiredHasBeenSet() const
{
    return m_requiredHasBeenSet;
}

vector<DependsOnItem> AccountFactoryItem::GetDependsOn() const
{
    return m_dependsOn;
}

void AccountFactoryItem::SetDependsOn(const vector<DependsOnItem>& _dependsOn)
{
    m_dependsOn = _dependsOn;
    m_dependsOnHasBeenSet = true;
}

bool AccountFactoryItem::DependsOnHasBeenSet() const
{
    return m_dependsOnHasBeenSet;
}

string AccountFactoryItem::GetDescription() const
{
    return m_description;
}

void AccountFactoryItem::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool AccountFactoryItem::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string AccountFactoryItem::GetDescriptionEn() const
{
    return m_descriptionEn;
}

void AccountFactoryItem::SetDescriptionEn(const string& _descriptionEn)
{
    m_descriptionEn = _descriptionEn;
    m_descriptionEnHasBeenSet = true;
}

bool AccountFactoryItem::DescriptionEnHasBeenSet() const
{
    return m_descriptionEnHasBeenSet;
}

string AccountFactoryItem::GetClassify() const
{
    return m_classify;
}

void AccountFactoryItem::SetClassify(const string& _classify)
{
    m_classify = _classify;
    m_classifyHasBeenSet = true;
}

bool AccountFactoryItem::ClassifyHasBeenSet() const
{
    return m_classifyHasBeenSet;
}

string AccountFactoryItem::GetClassifyEn() const
{
    return m_classifyEn;
}

void AccountFactoryItem::SetClassifyEn(const string& _classifyEn)
{
    m_classifyEn = _classifyEn;
    m_classifyEnHasBeenSet = true;
}

bool AccountFactoryItem::ClassifyEnHasBeenSet() const
{
    return m_classifyEnHasBeenSet;
}

