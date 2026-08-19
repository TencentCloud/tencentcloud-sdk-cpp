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

#include <tencentcloud/csip/v20221121/model/ComplianceChapterItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ComplianceChapterItem::ComplianceChapterItem() :
    m_menuIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_termsHasBeenSet(false)
{
}

CoreInternalOutcome ComplianceChapterItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MenuID") && !value["MenuID"].IsNull())
    {
        if (!value["MenuID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceChapterItem.MenuID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_menuID = string(value["MenuID"].GetString());
        m_menuIDHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceChapterItem.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Terms") && !value["Terms"].IsNull())
    {
        if (!value["Terms"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComplianceChapterItem.Terms` is not array type"));

        const rapidjson::Value &tmpValue = value["Terms"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ComplianceTermItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_terms.push_back(item);
        }
        m_termsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplianceChapterItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_menuIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MenuID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_menuID.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_termsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Terms";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_terms.begin(); itr != m_terms.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string ComplianceChapterItem::GetMenuID() const
{
    return m_menuID;
}

void ComplianceChapterItem::SetMenuID(const string& _menuID)
{
    m_menuID = _menuID;
    m_menuIDHasBeenSet = true;
}

bool ComplianceChapterItem::MenuIDHasBeenSet() const
{
    return m_menuIDHasBeenSet;
}

string ComplianceChapterItem::GetName() const
{
    return m_name;
}

void ComplianceChapterItem::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ComplianceChapterItem::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<ComplianceTermItem> ComplianceChapterItem::GetTerms() const
{
    return m_terms;
}

void ComplianceChapterItem::SetTerms(const vector<ComplianceTermItem>& _terms)
{
    m_terms = _terms;
    m_termsHasBeenSet = true;
}

bool ComplianceChapterItem::TermsHasBeenSet() const
{
    return m_termsHasBeenSet;
}

