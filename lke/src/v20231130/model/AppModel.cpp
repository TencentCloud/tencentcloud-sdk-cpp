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
    m_aliasNameHasBeenSet(false)
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

