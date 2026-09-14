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

#include <tencentcloud/adp/v20260520/model/LabelModifyFields.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

LabelModifyFields::LabelModifyFields() :
    m_nameHasBeenSet(false),
    m_termModifyListHasBeenSet(false)
{
}

CoreInternalOutcome LabelModifyFields::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LabelModifyFields.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TermModifyList") && !value["TermModifyList"].IsNull())
    {
        if (!value["TermModifyList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LabelModifyFields.TermModifyList` is not array type"));

        const rapidjson::Value &tmpValue = value["TermModifyList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            LabelTermModifyItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_termModifyList.push_back(item);
        }
        m_termModifyListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LabelModifyFields::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_termModifyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TermModifyList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_termModifyList.begin(); itr != m_termModifyList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string LabelModifyFields::GetName() const
{
    return m_name;
}

void LabelModifyFields::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool LabelModifyFields::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<LabelTermModifyItem> LabelModifyFields::GetTermModifyList() const
{
    return m_termModifyList;
}

void LabelModifyFields::SetTermModifyList(const vector<LabelTermModifyItem>& _termModifyList)
{
    m_termModifyList = _termModifyList;
    m_termModifyListHasBeenSet = true;
}

bool LabelModifyFields::TermModifyListHasBeenSet() const
{
    return m_termModifyListHasBeenSet;
}

