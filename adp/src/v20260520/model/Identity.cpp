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

#include <tencentcloud/adp/v20260520/model/Identity.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

Identity::Identity() :
    m_descriptionHasBeenSet(false),
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_strIdHasBeenSet(false)
{
}

CoreInternalOutcome Identity::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("StrId") && !value["StrId"].IsNull())
    {
        if (!value["StrId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Identity.StrId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_strId = string(value["StrId"].GetString());
        m_strIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Identity::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_strIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StrId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_strId.c_str(), allocator).Move(), allocator);
    }

}


string Identity::GetDescription() const
{
    return m_description;
}

void Identity::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Identity::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string Identity::GetId() const
{
    return m_id;
}

void Identity::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool Identity::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string Identity::GetName() const
{
    return m_name;
}

void Identity::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Identity::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Identity::GetStrId() const
{
    return m_strId;
}

void Identity::SetStrId(const string& _strId)
{
    m_strId = _strId;
    m_strIdHasBeenSet = true;
}

bool Identity::StrIdHasBeenSet() const
{
    return m_strIdHasBeenSet;
}

